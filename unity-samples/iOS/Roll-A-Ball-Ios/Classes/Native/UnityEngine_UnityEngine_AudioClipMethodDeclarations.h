#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t383;
// System.Single[]
struct SingleU5BU5D_t911;

// System.Single UnityEngine.AudioClip::get_length()
 float AudioClip_get_length_m1881 (AudioClip_t383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
 void AudioClip_InvokePCMReaderCallback_Internal_m4731 (AudioClip_t383 * __this, SingleU5BU5D_t911* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
 void AudioClip_InvokePCMSetPositionCallback_Internal_m4732 (AudioClip_t383 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
