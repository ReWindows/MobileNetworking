//! Evidence-labelled vftable metadata and raw slot access.
//! Slot calls remain the consumer's responsibility until a signature is unique.

use core::ffi::c_void;

#[derive(Clone, Copy, Debug)]
pub struct VTableInfo { pub name: &'static str, pub rva: u32, pub first_slot: usize, pub slot_count: usize, pub confidence: &'static str }

#[derive(Clone, Copy, Debug)]
pub struct VTableSlot { pub table_rva: u32, pub slot: u32, pub byte_offset: u32, pub target_rva: u32, pub target_id: Option<&'static str>, pub target_name: Option<&'static str>, pub ambiguous: bool, pub this_adjustment: Option<i32> }

pub static VTABLES: &[VTableInfo] = &[
    VTableInfo { name: "const type_info::`vftable'", rva: 0x142A8, first_slot: 0, slot_count: 1, confidence: "likely" },
    VTableInfo { name: "const std::exception::`vftable'", rva: 0x142B8, first_slot: 1, slot_count: 2, confidence: "likely" },
    VTableInfo { name: "const std::bad_alloc::`vftable'", rva: 0x142D0, first_slot: 3, slot_count: 2, confidence: "likely" },
    VTableInfo { name: "const std::bad_array_new_length::`vftable'", rva: 0x142E8, first_slot: 5, slot_count: 2, confidence: "likely" },
];

pub static VTABLE_SLOTS: &[VTableSlot] = &[
    VTableSlot { table_rva: 0x142A8, slot: 0, byte_offset: 0, target_rva: 0xA770, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x142B8, slot: 0, byte_offset: 0, target_rva: 0xA940, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x142B8, slot: 1, byte_offset: 8, target_rva: 0xA9E0, target_id: Some("?what@exception@std@@UEBAPEBDXZ"), target_name: Some("public: virtual char const * __cdecl std::exception::what(void) const"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x142D0, slot: 0, byte_offset: 0, target_rva: 0xA940, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x142D0, slot: 1, byte_offset: 8, target_rva: 0xA9E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x142E8, slot: 0, byte_offset: 0, target_rva: 0xA940, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x142E8, slot: 1, byte_offset: 8, target_rva: 0xA9E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
];

/// Reads a raw function pointer from an object's primary vftable.
///
/// # Safety
/// `object` must point to a live object with a readable primary vftable,
/// and `slot` must be valid for that concrete object. This function does
/// not invent or transmute a callable signature.
pub unsafe fn raw_object_slot(object: *const c_void, slot: usize) -> Option<*const ()> {
if object.is_null() { return None; }
let table = unsafe { *(object.cast::<*const *const ()>()) };
if table.is_null() { return None; }
let target = unsafe { *table.add(slot) };
(!target.is_null()).then_some(target)
}
