#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2122;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2118;
// System.Reflection.MemberInfo
struct MemberInfo_t196;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2111;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m10522 (FixupRecord_t2122 * __this, ObjectRecord_t2118 * ___objectToBeFixed, MemberInfo_t196 * ___member, ObjectRecord_t2118 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m10523 (FixupRecord_t2122 * __this, ObjectManager_t2111 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
