#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t2133;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1372;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
 void SerializationInfoEnumerator__ctor_m10565 (SerializationInfoEnumerator_t2133 * __this, ArrayList_t1372 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m10566 (SerializationInfoEnumerator_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
 SerializationEntry_t2131  SerializationInfoEnumerator_get_Current_m10567 (SerializationInfoEnumerator_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
 String_t* SerializationInfoEnumerator_get_Name_m10568 (SerializationInfoEnumerator_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
 Object_t * SerializationInfoEnumerator_get_Value_m10569 (SerializationInfoEnumerator_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
 bool SerializationInfoEnumerator_MoveNext_m10570 (SerializationInfoEnumerator_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
