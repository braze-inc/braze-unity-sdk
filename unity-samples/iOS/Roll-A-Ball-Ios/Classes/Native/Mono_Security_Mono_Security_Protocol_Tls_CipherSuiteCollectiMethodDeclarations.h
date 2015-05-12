#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1447;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1446;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Array
struct Array_t;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t1448;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t1449;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void CipherSuiteCollection__ctor_m6023 (CipherSuiteCollection_t1447 * __this, int32_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
 Object_t * CipherSuiteCollection_System_Collections_IList_get_Item_m6024 (CipherSuiteCollection_t1447 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
 void CipherSuiteCollection_System_Collections_IList_set_Item_m6025 (CipherSuiteCollection_t1447 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_IsSynchronized()
 bool CipherSuiteCollection_System_Collections_ICollection_get_IsSynchronized_m6026 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
 Object_t * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m6027 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m6028 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
 bool CipherSuiteCollection_System_Collections_IList_Contains_m6029 (CipherSuiteCollection_t1447 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
 int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m6030 (CipherSuiteCollection_t1447 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
 void CipherSuiteCollection_System_Collections_IList_Insert_m6031 (CipherSuiteCollection_t1447 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
 void CipherSuiteCollection_System_Collections_IList_Remove_m6032 (CipherSuiteCollection_t1447 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
 void CipherSuiteCollection_System_Collections_IList_RemoveAt_m6033 (CipherSuiteCollection_t1447 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
 int32_t CipherSuiteCollection_System_Collections_IList_Add_m6034 (CipherSuiteCollection_t1447 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
 CipherSuite_t1446 * CipherSuiteCollection_get_Item_m6035 (CipherSuiteCollection_t1447 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
 CipherSuite_t1446 * CipherSuiteCollection_get_Item_m6036 (CipherSuiteCollection_t1447 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
 void CipherSuiteCollection_set_Item_m6037 (CipherSuiteCollection_t1447 * __this, int32_t ___index, CipherSuite_t1446 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
 CipherSuite_t1446 * CipherSuiteCollection_get_Item_m6038 (CipherSuiteCollection_t1447 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
 int32_t CipherSuiteCollection_get_Count_m6039 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsFixedSize()
 bool CipherSuiteCollection_get_IsFixedSize_m6040 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsReadOnly()
 bool CipherSuiteCollection_get_IsReadOnly_m6041 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
 void CipherSuiteCollection_CopyTo_m6042 (CipherSuiteCollection_t1447 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
 void CipherSuiteCollection_Clear_m6043 (CipherSuiteCollection_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
 int32_t CipherSuiteCollection_IndexOf_m6044 (CipherSuiteCollection_t1447 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
 int32_t CipherSuiteCollection_IndexOf_m6045 (CipherSuiteCollection_t1447 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 CipherSuite_t1446 * CipherSuiteCollection_Add_m6046 (CipherSuiteCollection_t1447 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherType, int32_t ___hashType, int32_t ___exchangeType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
 TlsCipherSuite_t1448 * CipherSuiteCollection_add_m6047 (CipherSuiteCollection_t1447 * __this, TlsCipherSuite_t1448 * ___cipherSuite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
 SslCipherSuite_t1449 * CipherSuiteCollection_add_m6048 (CipherSuiteCollection_t1447 * __this, SslCipherSuite_t1449 * ___cipherSuite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
 bool CipherSuiteCollection_cultureAwareCompare_m6049 (CipherSuiteCollection_t1447 * __this, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
