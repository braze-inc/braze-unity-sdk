#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2123;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2118;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2111;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m10524 (DelayedFixupRecord_t2123 * __this, ObjectRecord_t2118 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2118 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m10525 (DelayedFixupRecord_t2123 * __this, ObjectManager_t2111 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
