#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2133;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2130;
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2123;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
 void MultiArrayFixupRecord__ctor_m10615 (MultiArrayFixupRecord_t2133 * __this, ObjectRecord_t2130 * ___objectToBeFixed, Int32U5BU5D_t1196* ___indices, ObjectRecord_t2130 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void MultiArrayFixupRecord_FixupImpl_m10616 (MultiArrayFixupRecord_t2133 * __this, ObjectManager_t2123 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
