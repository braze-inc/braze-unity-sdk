#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.String
struct String_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t282;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
 void Object__ctor_m4540 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
 Object_t70 * Object_Internal_CloneSingle_m4541 (Object_t * __this/* static, unused */, Object_t70 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t70 * Object_Internal_InstantiateSingle_m4542 (Object_t * __this/* static, unused */, Object_t70 * ___data, Vector3_t188  ___pos, Quaternion_t415  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
 Object_t70 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m4543 (Object_t * __this/* static, unused */, Object_t70 * ___data, Vector3_t188 * ___pos, Quaternion_t415 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m1777 (Object_t * __this/* static, unused */, Object_t70 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m1085 (Object_t * __this/* static, unused */, Object_t70 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m4544 (Object_t * __this/* static, unused */, Object_t70 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m1428 (Object_t * __this/* static, unused */, Object_t70 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
 ObjectU5BU5D_t282* Object_FindObjectsOfType_m1129 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m1177 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m1935 (Object_t70 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
 int32_t Object_get_hideFlags_m1438 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m1439 (Object_t70 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m418 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m415 (Object_t70 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m417 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m4545 (Object_t * __this/* static, unused */, Object_t70 * ___lhs, Object_t70 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
 bool Object_IsNativeObjectAlive_m4546 (Object_t * __this/* static, unused */, Object_t70 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m1432 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
 IntPtr_t107 Object_GetCachedPtr_m4547 (Object_t70 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t70 * Object_Instantiate_m1791 (Object_t * __this/* static, unused */, Object_t70 * ___original, Vector3_t188  ___position, Quaternion_t415  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
 void Object_CheckNullArgument_m4548 (Object_t * __this/* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
 Object_t70 * Object_FindObjectOfType_m1309 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m1770 (Object_t * __this/* static, unused */, Object_t70 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m1087 (Object_t * __this/* static, unused */, Object_t70 * ___x, Object_t70 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m421 (Object_t * __this/* static, unused */, Object_t70 * ___x, Object_t70 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t70_marshal(const Object_t70& unmarshaled, Object_t70_marshaled& marshaled);
void Object_t70_marshal_back(const Object_t70_marshaled& marshaled, Object_t70& unmarshaled);
void Object_t70_marshal_cleanup(Object_t70_marshaled& marshaled);
