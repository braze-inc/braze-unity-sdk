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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1854958641;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t831247831;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  void MethodDictionary__ctor_m2378316062 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m630697764 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C"  void MethodDictionary_set_MethodKeys_m3153125541 (MethodDictionary_t1854958641 * __this, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_AllocInternalProperties_m1059718266 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_GetInternalProperties_m3176512283 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C"  bool MethodDictionary_IsOverridenKey_m2316740400 (MethodDictionary_t1854958641 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * MethodDictionary_get_Item_m2581436698 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C"  void MethodDictionary_set_Item_m213586249 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C"  Il2CppObject * MethodDictionary_GetMethodProperty_m1794768370 (MethodDictionary_t1854958641 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C"  void MethodDictionary_SetMethodProperty_m3901784959 (MethodDictionary_t1854958641 * __this, String_t* ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern "C"  Il2CppObject * MethodDictionary_get_Keys_m807954850 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C"  Il2CppObject * MethodDictionary_get_Values_m1423085072 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C"  void MethodDictionary_Add_m3929391976 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern "C"  bool MethodDictionary_Contains_m853564490 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C"  void MethodDictionary_Remove_m2229484935 (MethodDictionary_t1854958641 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C"  int32_t MethodDictionary_get_Count_m2528789795 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C"  bool MethodDictionary_get_IsSynchronized_m687173714 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C"  Il2CppObject * MethodDictionary_get_SyncRoot_m1527806020 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void MethodDictionary_CopyTo_m3173648216 (MethodDictionary_t1854958641 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_GetEnumerator_m3961911347 (MethodDictionary_t1854958641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
