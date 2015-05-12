#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2134;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2130;
// System.Reflection.MemberInfo
struct MemberInfo_t131;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2123;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m10617 (FixupRecord_t2134 * __this, ObjectRecord_t2130 * ___objectToBeFixed, MemberInfo_t131 * ___member, ObjectRecord_t2130 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m10618 (FixupRecord_t2134 * __this, ObjectManager_t2123 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
