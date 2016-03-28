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

// Appboy.Utilities.ColorUtils
struct ColorUtils_t2005042891;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Appboy.Utilities.ColorUtils::.ctor()
extern "C"  void ColorUtils__ctor_m1122531650 (ColorUtils_t2005042891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Utilities.ColorUtils::HexToColor(System.String)
extern "C"  Nullable_1_t179246372  ColorUtils_HexToColor_m1725606811 (Il2CppObject * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Appboy.Utilities.ColorUtils::HexToColor(System.Int32)
extern "C"  Color_t1588175760  ColorUtils_HexToColor_m734115769 (Il2CppObject * __this /* static, unused */, int32_t ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
