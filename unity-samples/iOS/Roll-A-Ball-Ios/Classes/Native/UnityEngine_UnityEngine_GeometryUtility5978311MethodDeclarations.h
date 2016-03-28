#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Plane[]
struct PlaneU5BU5D_t2483347764;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C"  PlaneU5BU5D_t2483347764* GeometryUtility_CalculateFrustumPlanes_m4034520784 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
extern "C"  PlaneU5BU5D_t2483347764* GeometryUtility_CalculateFrustumPlanes_m2105136846 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
extern "C"  void GeometryUtility_Internal_ExtractPlanes_m1419166916 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t2483347764* ___planes, Matrix4x4_t277289660  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
extern "C"  void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m750424711 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t2483347764* ___planes, Matrix4x4_t277289660 * ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C"  bool GeometryUtility_TestPlanesAABB_m1286581431 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t2483347764* ___planes, Bounds_t3518514978  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
extern "C"  bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m3075197398 (Il2CppObject * __this /* static, unused */, PlaneU5BU5D_t2483347764* ___planes, Bounds_t3518514978 * ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
