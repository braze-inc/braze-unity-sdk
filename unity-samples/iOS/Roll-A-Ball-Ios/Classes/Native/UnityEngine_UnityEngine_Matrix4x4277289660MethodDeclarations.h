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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m2279862332 (Matrix4x4_t277289660 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m1280478331 (Matrix4x4_t277289660 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m4083477721 (Matrix4x4_t277289660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m3534208385 (Matrix4x4_t277289660 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t3525329790  Matrix4x4_GetColumn_m786071102 (Matrix4x4_t277289660 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Matrix4x4_MultiplyPoint3x4_m2198174902 (Matrix4x4_t277289660 * __this, Vector3_t3525329789  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m294134723 (Matrix4x4_t277289660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Matrix4x4_t277289660;
struct Matrix4x4_t277289660_marshaled_pinvoke;

extern "C" void Matrix4x4_t277289660_marshal_pinvoke(const Matrix4x4_t277289660& unmarshaled, Matrix4x4_t277289660_marshaled_pinvoke& marshaled);
extern "C" void Matrix4x4_t277289660_marshal_pinvoke_back(const Matrix4x4_t277289660_marshaled_pinvoke& marshaled, Matrix4x4_t277289660& unmarshaled);
extern "C" void Matrix4x4_t277289660_marshal_pinvoke_cleanup(Matrix4x4_t277289660_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Matrix4x4_t277289660;
struct Matrix4x4_t277289660_marshaled_com;

extern "C" void Matrix4x4_t277289660_marshal_com(const Matrix4x4_t277289660& unmarshaled, Matrix4x4_t277289660_marshaled_com& marshaled);
extern "C" void Matrix4x4_t277289660_marshal_com_back(const Matrix4x4_t277289660_marshaled_com& marshaled, Matrix4x4_t277289660& unmarshaled);
extern "C" void Matrix4x4_t277289660_marshal_com_cleanup(Matrix4x4_t277289660_marshaled_com& marshaled);
