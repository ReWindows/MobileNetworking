// Flat C exports observed in MobileNetworking.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef MOBILENETWORKING_C_H
#define MOBILENETWORKING_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: VerifyRpcClientAccess (ABI unverified)
// Export: VerifyRpcClientAccessToSecurityDescriptor (ABI unverified)
// Export: HtReferenceHandleWithTag (ABI unverified)
// Export: ReplaceObject (ABI unverified)
// Export: RegisterUserType (ABI unverified)
// Export: RegisterObject (ABI unverified)
// Export: CheckRpcClientTokenMembership (ABI unverified)
// Export: GetSDDetailsFromObjectID (ABI unverified)
// Export: ConvertSDDLToValidSecurityDescriptor (ABI unverified)
// Export: ValidateSecurityDescriptor (ABI unverified)
// Export: SetBufferAndLength (ABI unverified)
// Export: AllocateAndCopyPointerData (ABI unverified)
// Export: CreateTimer (ABI unverified)
// Export: DeleteTimer (ABI unverified)
// Export: FreeSecurityDescriptor (ABI unverified)
// Export: RaDestroySid (ABI unverified)
// Export: RaCreateWellKnownSid (ABI unverified)
// Export: HtCreateHandleTable (ABI unverified)
// Export: AllocateMemory (ABI unverified)
// Export: HtNewHandle (ABI unverified)
// Export: HtDestroyHandleTable (ABI unverified)
// Export: FreeMemory (ABI unverified)
// Export: DeinitSecUtils (ABI unverified)
// Export: HtDereferenceHandleWithTag (ABI unverified)
// Export: AcquireWriteLock (ABI unverified)
// Export: ReleaseWriteLock (ABI unverified)
// Export: HtPeekReferenceCountOnHandle (ABI unverified)
// Export: GetSystemTimeAsUlongLong (ABI unverified)
// Export: GetNetworkInterfaceIdBoundToAccountId (ABI unverified)
// Export: ValidateNetworkAccountIdBinding (ABI unverified)
// Export: GetNetworkAccountIdBoundToInterfaceId (ABI unverified)
// Export: PersistentRegPathOpenKey (ABI unverified)
// Export: PersistentRegPathCreateKey (ABI unverified)
// Export: NdisQueryMaxPayloadSizeByGuid (ABI unverified)
// Export: GetPersistentRegPath (ABI unverified)
// Export: NdisQueryPhysicalMedium (ABI unverified)
// Export: DiffTimeInSec (ABI unverified)
// Export: StopTimer (ABI unverified)
// Export: StartTimer (ABI unverified)
// Export: ConvertByteArrayToWideStr (ABI unverified)
// Export: CreateReadWriteLock (ABI unverified)
// Export: DeleteReadWriteLock (ABI unverified)
// Export: DiffTimeInMSec (ABI unverified)
// Export: L2InitializeAuditing (ABI unverified)
// Export: L2DeinitializeAuditing (ABI unverified)
// Export: PersistentRegPathSetDWORD (ABI unverified)
// Export: IsWinPE (ABI unverified)
// Export: InitializeTimers (ABI unverified)
// Export: ReleaseReadLock (ABI unverified)
// Export: InitSecUtils (ABI unverified)
// Export: BindNetworkInterfaceIdToAccountId (ABI unverified)
// Export: IsDomainMemberMode (ABI unverified)
// Export: GetPersistentRegPathFromRegPath (ABI unverified)
// Export: PersistentRegPathGetDWORD (ABI unverified)
// Export: PersistentRegPathGetValue (ABI unverified)
// Export: PersistentRegPathSetString (ABI unverified)
// Export: PersistentRegPathSetValue (ABI unverified)
// Export: AcquireReadLock (ABI unverified)
// Export: ReplaceObjectWithPersistedSettings (ABI unverified)
// Export: DeInitializeTimers (ABI unverified)
// Export: GetAdapterConnectivity (ABI unverified)
// Export: LogBailError (ABI unverified)
// Export: TraceAssert (ABI unverified)
// Export: WmiEnumerateAdapters (ABI unverified)
// Export: WmiQueryMediaSupported (ABI unverified)
// Export: WmiQueryPhysicalMedium (ABI unverified)
// Export: RaCheckRpcAllowed (ABI unverified)
// Export: RaFreeSidList (ABI unverified)
// Export: RaFreeTokenUserInfo (ABI unverified)
// Export: RaGetTokenUserInfo (ABI unverified)
// Export: RaInitSidList (ABI unverified)
// Export: RaQueryRpcClientToken (ABI unverified)
// Export: GetMnoSmsBindingDeviceInterfacePath (ABI unverified)
// Export: GetNetworkAccountBindingDeviceInterfacePath (ABI unverified)
// Export: GetOemIhvSmsBindingDeviceInterfacePath (ABI unverified)
// Export: NetworkAccountBindingAccessCheck (ABI unverified)
// Export: NetworkAccountBindingAccessCheckByInterfaceId (ABI unverified)
// Export: SetMnoSmsBindingDeviceInterfacePath (ABI unverified)
// Export: SetNetworkAccountBindingDeviceInterfacePath (ABI unverified)
// Export: SetOemIhvSmsBindingDeviceInterfacePath (ABI unverified)
// Export: UnbindNetworkInterfaceId (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // MOBILENETWORKING_C_H
