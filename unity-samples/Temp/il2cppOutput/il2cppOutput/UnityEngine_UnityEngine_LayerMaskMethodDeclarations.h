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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t63;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m3860 (LayerMask_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern "C" void LayerMask_set_value_m3861 (LayerMask_t479 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m3862 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m1132 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C" int32_t LayerMask_GetMask_m3863 (Object_t * __this /* static, unused */, StringU5BU5D_t63* ___layerNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" int32_t LayerMask_op_Implicit_m3258 (Object_t * __this /* static, unused */, LayerMask_t479  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t479  LayerMask_op_Implicit_m3256 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
