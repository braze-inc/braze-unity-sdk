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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_TouchPhase1905076713.h"
#include "UnityEngine_UnityEngine_TouchType3890655046.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C"  int32_t Touch_get_fingerId_m1427167959 (Touch_t1603883884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t3525329788  Touch_get_position_m1943849441 (Touch_t1603883884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m3314549414 (Touch_t1603883884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchType UnityEngine.Touch::get_type()
extern "C"  int32_t Touch_get_type_m1428398012 (Touch_t1603883884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Touch_t1603883884;
struct Touch_t1603883884_marshaled_pinvoke;

extern "C" void Touch_t1603883884_marshal_pinvoke(const Touch_t1603883884& unmarshaled, Touch_t1603883884_marshaled_pinvoke& marshaled);
extern "C" void Touch_t1603883884_marshal_pinvoke_back(const Touch_t1603883884_marshaled_pinvoke& marshaled, Touch_t1603883884& unmarshaled);
extern "C" void Touch_t1603883884_marshal_pinvoke_cleanup(Touch_t1603883884_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Touch_t1603883884;
struct Touch_t1603883884_marshaled_com;

extern "C" void Touch_t1603883884_marshal_com(const Touch_t1603883884& unmarshaled, Touch_t1603883884_marshaled_com& marshaled);
extern "C" void Touch_t1603883884_marshal_com_back(const Touch_t1603883884_marshaled_com& marshaled, Touch_t1603883884& unmarshaled);
extern "C" void Touch_t1603883884_marshal_com_cleanup(Touch_t1603883884_marshaled_com& marshaled);
