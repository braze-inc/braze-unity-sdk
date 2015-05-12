#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t179;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_position_m4565 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_position_m4566 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t188  Transform_get_position_m1233 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
 void Transform_set_position_m1322 (Transform_t179 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m4567 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m4568 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t188  Transform_get_localPosition_m3614 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m1996 (Transform_t179 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
 Vector3_t188  Transform_get_eulerAngles_m1930 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
 void Transform_set_eulerAngles_m1931 (Transform_t179 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localEulerAngles_m4569 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localEulerAngles_m4570 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
 Vector3_t188  Transform_get_localEulerAngles_m1803 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
 void Transform_set_localEulerAngles_m1804 (Transform_t179 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
 Vector3_t188  Transform_get_up_m1911 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t188  Transform_get_forward_m1863 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m4571 (Transform_t179 * __this, Quaternion_t415 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_rotation_m4572 (Transform_t179 * __this, Quaternion_t415 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t415  Transform_get_rotation_m1790 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
 void Transform_set_rotation_m1888 (Transform_t179 * __this, Quaternion_t415  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m4573 (Transform_t179 * __this, Quaternion_t415 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m4574 (Transform_t179 * __this, Quaternion_t415 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t415  Transform_get_localRotation_m3615 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m3621 (Transform_t179 * __this, Quaternion_t415  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m4575 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m4576 (Transform_t179 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t188  Transform_get_localScale_m1897 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m1802 (Transform_t179 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t179 * Transform_get_parent_m1370 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m1815 (Transform_t179 * __this, Transform_t179 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t179 * Transform_get_parentInternal_m4577 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m4578 (Transform_t179 * __this, Transform_t179 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m3606 (Transform_t179 * __this, Transform_t179 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m4579 (Transform_t179 * __this, Transform_t179 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m4580 (Transform_t179 * __this, Matrix4x4_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t447  Transform_get_worldToLocalMatrix_m3677 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_localToWorldMatrix_m4581 (Transform_t179 * __this, Matrix4x4_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
 Matrix4x4_t447  Transform_get_localToWorldMatrix_m1900 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
 Vector3_t188  Transform_InverseTransformDirection_m1875 (Transform_t179 * __this, Vector3_t188  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t188  Transform_INTERNAL_CALL_InverseTransformDirection_m4582 (Object_t * __this/* static, unused */, Transform_t179 * ___self, Vector3_t188 * ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t188  Transform_TransformPoint_m3700 (Transform_t179 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t188  Transform_INTERNAL_CALL_TransformPoint_m4583 (Object_t * __this/* static, unused */, Transform_t179 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t188  Transform_InverseTransformPoint_m3580 (Transform_t179 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t188  Transform_INTERNAL_CALL_InverseTransformPoint_m4584 (Object_t * __this/* static, unused */, Transform_t179 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m1436 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m3607 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m4585 (Transform_t179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t179 * Transform_GetChild_m1434 (Transform_t179 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
