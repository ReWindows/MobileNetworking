//! Opaque handles for recovered C++ classes.
#![allow(non_camel_case_types)]

#[repr(C)]
pub struct ATL { _opaque: [u8; 0] }

#[repr(C)]
pub struct ATL_CRegKey { _opaque: [u8; 0] }

#[repr(C)]
pub struct CTCoAllocPolicy { _opaque: [u8; 0] }

#[repr(C)]
pub struct CallerIdentity { _opaque: [u8; 0] }

#[repr(C)]
pub struct MbaeHashCalculator { _opaque: [u8; 0] }

#[repr(C)]
pub struct type_info { _opaque: [u8; 0] }

