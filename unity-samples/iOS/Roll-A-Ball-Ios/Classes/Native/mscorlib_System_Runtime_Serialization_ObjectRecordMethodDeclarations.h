#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2118;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2111;
// System.Reflection.MemberInfo
struct MemberInfo_t196;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2119;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2070;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
 void ObjectRecord__ctor_m10526 (ObjectRecord_t2118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
 void ObjectRecord_SetMemberValue_m10527 (ObjectRecord_t2118 * __this, ObjectManager_t2111 * ___manager, MemberInfo_t196 * ___member, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
 void ObjectRecord_SetArrayValue_m10528 (ObjectRecord_t2118 * __this, ObjectManager_t2111 * ___manager, Object_t * ___value, Int32U5BU5D_t1185* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
 void ObjectRecord_SetMemberValue_m10529 (ObjectRecord_t2118 * __this, ObjectManager_t2111 * ___manager, String_t* ___memberName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
 bool ObjectRecord_get_IsInstanceReady_m10530 (ObjectRecord_t2118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
 bool ObjectRecord_get_IsUnsolvedObjectReference_m10531 (ObjectRecord_t2118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
 bool ObjectRecord_get_IsRegistered_m10532 (ObjectRecord_t2118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool ObjectRecord_DoFixups_m10533 (ObjectRecord_t2118 * __this, bool ___asContainer, ObjectManager_t2111 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_RemoveFixup_m10534 (ObjectRecord_t2118 * __this, BaseFixupRecord_t2119 * ___fixupToRemove, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_UnchainFixup_m10535 (ObjectRecord_t2118 * __this, BaseFixupRecord_t2119 * ___fixup, BaseFixupRecord_t2119 * ___prevFixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
 void ObjectRecord_ChainFixup_m10536 (ObjectRecord_t2118 * __this, BaseFixupRecord_t2119 * ___fixup, bool ___asContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 bool ObjectRecord_LoadData_m10537 (ObjectRecord_t2118 * __this, ObjectManager_t2111 * ___manager, Object_t * ___selector, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
 bool ObjectRecord_get_HasPendingFixups_m10538 (ObjectRecord_t2118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
