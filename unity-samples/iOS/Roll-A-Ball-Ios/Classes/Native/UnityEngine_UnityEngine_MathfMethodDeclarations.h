#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mathf
struct Mathf_t442;

// System.Void UnityEngine.Mathf::.cctor()
 void Mathf__cctor_m4404 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sin(System.Single)
 float Mathf_Sin_m3523 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
 float Mathf_Cos_m3522 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Acos(System.Single)
 float Mathf_Acos_m4405 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Atan2(System.Single,System.Single)
 float Mathf_Atan2_m1890 (Object_t * __this/* static, unused */, float ___y, float ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
 float Mathf_Sqrt_m3766 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
 float Mathf_Abs_m1854 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
 float Mathf_Min_m3754 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
 int32_t Mathf_Min_m3597 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
 float Mathf_Max_m1772 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
 int32_t Mathf_Max_m3595 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
 float Mathf_Pow_m3668 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
 float Mathf_Log_m3753 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
 float Mathf_Floor_m3626 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
 float Mathf_Round_m3650 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
 int32_t Mathf_CeilToInt_m3765 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
 int32_t Mathf_FloorToInt_m3731 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
 int32_t Mathf_RoundToInt_m3506 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
 float Mathf_Sign_m1856 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
 float Mathf_Clamp_m1868 (Object_t * __this/* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
 int32_t Mathf_Clamp_m3404 (Object_t * __this/* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
 float Mathf_Clamp01_m1830 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
 float Mathf_Lerp_m1831 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
 float Mathf_LerpAngle_m1884 (Object_t * __this/* static, unused */, float ___a, float ___b, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
 bool Mathf_Approximately_m3321 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
 float Mathf_SmoothDamp_m3667 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
 float Mathf_Repeat_m1862 (Object_t * __this/* static, unused */, float ___t, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
 float Mathf_PingPong_m1918 (Object_t * __this/* static, unused */, float ___t, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
 float Mathf_InverseLerp_m1876 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
 float Mathf_DeltaAngle_m1877 (Object_t * __this/* static, unused */, float ___current, float ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
