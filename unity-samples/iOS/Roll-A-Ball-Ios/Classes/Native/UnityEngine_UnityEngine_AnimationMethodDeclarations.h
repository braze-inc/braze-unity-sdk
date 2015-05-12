#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t409;
// UnityEngine.AnimationState
struct AnimationState_t458;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
 AnimationState_t458 * Animation_get_Item_m1955 (Animation_t409 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
 void Animation_CrossFade_m1998 (Animation_t409 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
 void Animation_CrossFade_m1986 (Animation_t409 * __this, String_t* ___animation, float ___fadeLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
 void Animation_CrossFade_m1985 (Animation_t409 * __this, String_t* ___animation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
 void Animation_SyncLayer_m1978 (Animation_t409 * __this, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
 void Animation_INTERNAL_CALL_SyncLayer_m4767 (Object_t * __this/* static, unused */, Animation_t409 * ___self, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
 Object_t * Animation_GetEnumerator_m4768 (Animation_t409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
 AnimationState_t458 * Animation_GetState_m4769 (Animation_t409 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
 AnimationState_t458 * Animation_GetStateAtIndex_m4770 (Animation_t409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
 int32_t Animation_GetStateCount_m4771 (Animation_t409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
