#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t2120;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2118;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2111;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m10518 (ArrayFixupRecord_t2120 * __this, ObjectRecord_t2118 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t2118 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m10519 (ArrayFixupRecord_t2120 * __this, ObjectManager_t2111 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
