#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t2132;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2130;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2123;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m10613 (ArrayFixupRecord_t2132 * __this, ObjectRecord_t2130 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t2130 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m10614 (ArrayFixupRecord_t2132 * __this, ObjectManager_t2123 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
