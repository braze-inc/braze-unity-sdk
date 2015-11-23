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

// UnityEngine.Animation
struct Animation_t366;
// UnityEngine.AnimationState
struct AnimationState_t415;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t415 * Animation_get_Item_m1603 (Animation_t366 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" void Animation_CrossFade_m1643 (Animation_t366 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
extern "C" void Animation_CrossFade_m1632 (Animation_t366 * __this, String_t* ___animation, float ___fadeLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" void Animation_CrossFade_m1631 (Animation_t366 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
extern "C" void Animation_SyncLayer_m1624 (Animation_t366 * __this, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C" void Animation_INTERNAL_CALL_SyncLayer_m4299 (Object_t * __this /* static, unused */, Animation_t366 * ___self, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m4300 (Animation_t366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t415 * Animation_GetState_m4301 (Animation_t366 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t415 * Animation_GetStateAtIndex_m4302 (Animation_t366 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4303 (Animation_t366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
