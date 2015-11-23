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
struct ColorUtils_t6;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Appboy.Utilities.ColorUtils::.ctor()
extern "C" void ColorUtils__ctor_m96 (ColorUtils_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Utilities.ColorUtils::HexToColor(System.String)
extern "C" Nullable_1_t49  ColorUtils_HexToColor_m97 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Appboy.Utilities.ColorUtils::HexToColor(System.Int32)
extern "C" Color_t65  ColorUtils_HexToColor_m98 (Object_t * __this /* static, unused */, int32_t ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
