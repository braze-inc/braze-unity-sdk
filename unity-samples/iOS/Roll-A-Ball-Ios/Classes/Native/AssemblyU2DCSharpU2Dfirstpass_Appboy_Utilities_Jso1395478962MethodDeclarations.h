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

// Appboy.Utilities.Json/Serializer
struct Serializer_t1395478962;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Appboy.Utilities.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m2589576061 (Serializer_t1395478962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3424146524 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m3096341436 (Serializer_t1395478962 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m2327874451 (Serializer_t1395478962 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m2265658289 (Serializer_t1395478962 * __this, Il2CppObject * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m1901018006 (Serializer_t1395478962 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m4266241085 (Serializer_t1395478962 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
