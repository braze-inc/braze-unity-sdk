#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1023598115;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t995991461;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t1815597034;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t3658722873;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit995991461.h"
#include "mscorlib_System_Array2840145358.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg3070348278.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor2506270163.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA1807586014.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipher1815597034.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipher3658722873.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void CipherSuiteCollection__ctor_m273269703 (CipherSuiteCollection_t1023598115 * __this, int32_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_IList_get_Item_m3319535496 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_set_Item_m4255989087 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool CipherSuiteCollection_System_Collections_ICollection_get_IsSynchronized_m3698127433 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m914076225 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m1907853496 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool CipherSuiteCollection_System_Collections_IList_Contains_m3495236659 (CipherSuiteCollection_t1023598115 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m2797029265 (CipherSuiteCollection_t1023598115 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Insert_m414962568 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Remove_m46053536 (CipherSuiteCollection_t1023598115 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void CipherSuiteCollection_System_Collections_IList_RemoveAt_m3013015320 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_Add_m2526713273 (CipherSuiteCollection_t1023598115 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
extern "C"  CipherSuite_t995991461 * CipherSuiteCollection_get_Item_m95097157 (CipherSuiteCollection_t1023598115 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
extern "C"  CipherSuite_t995991461 * CipherSuiteCollection_get_Item_m3036376750 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void CipherSuiteCollection_set_Item_m141821933 (CipherSuiteCollection_t1023598115 * __this, int32_t ___index0, CipherSuite_t995991461 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
extern "C"  CipherSuite_t995991461 * CipherSuiteCollection_get_Item_m3036374952 (CipherSuiteCollection_t1023598115 * __this, int16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
extern "C"  int32_t CipherSuiteCollection_get_Count_m2086503695 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsFixedSize()
extern "C"  bool CipherSuiteCollection_get_IsFixedSize_m2874798629 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsReadOnly()
extern "C"  bool CipherSuiteCollection_get_IsReadOnly_m3871880244 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CipherSuiteCollection_CopyTo_m2731497872 (CipherSuiteCollection_t1023598115 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
extern "C"  void CipherSuiteCollection_Clear_m2278434462 (CipherSuiteCollection_t1023598115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m3646145168 (CipherSuiteCollection_t1023598115 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m102883581 (CipherSuiteCollection_t1023598115 * __this, int16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  CipherSuite_t995991461 * CipherSuiteCollection_Add_m667539191 (CipherSuiteCollection_t1023598115 * __this, int16_t ___code0, String_t* ___name1, int32_t ___cipherType2, int32_t ___hashType3, int32_t ___exchangeType4, bool ___exportable5, bool ___blockMode6, uint8_t ___keyMaterialSize7, uint8_t ___expandedKeyMaterialSize8, int16_t ___effectiveKeyBytes9, uint8_t ___ivSize10, uint8_t ___blockSize11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
extern "C"  TlsCipherSuite_t1815597034 * CipherSuiteCollection_add_m1902600707 (CipherSuiteCollection_t1023598115 * __this, TlsCipherSuite_t1815597034 * ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
extern "C"  SslCipherSuite_t3658722873 * CipherSuiteCollection_add_m2351410469 (CipherSuiteCollection_t1023598115 * __this, SslCipherSuite_t3658722873 * ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
extern "C"  bool CipherSuiteCollection_cultureAwareCompare_m850129638 (CipherSuiteCollection_t1023598115 * __this, String_t* ___strA0, String_t* ___strB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
