#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t397;
// UnityEngine.AnimationState
struct AnimationState_t445;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
 AnimationState_t445 * Animation_get_Item_m1849 (Animation_t397 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
 void Animation_CrossFade_m1892 (Animation_t397 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
 void Animation_CrossFade_m1880 (Animation_t397 * __this, String_t* ___animation, float ___fadeLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
 void Animation_CrossFade_m1879 (Animation_t397 * __this, String_t* ___animation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
 void Animation_SyncLayer_m1872 (Animation_t397 * __this, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
 void Animation_INTERNAL_CALL_SyncLayer_m4672 (Object_t * __this/* static, unused */, Animation_t397 * ___self, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
 Object_t * Animation_GetEnumerator_m4673 (Animation_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
 AnimationState_t445 * Animation_GetState_m4674 (Animation_t397 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
 AnimationState_t445 * Animation_GetStateAtIndex_m4675 (Animation_t397 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
 int32_t Animation_GetStateCount_m4676 (Animation_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
