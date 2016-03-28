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

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.AudioClip::get_length()
extern "C"  float AudioClip_get_length_m1976537364 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m963695910 (AudioClip_t3714538611 * __this, SingleU5BU5D_t1219431280* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m194702160 (AudioClip_t3714538611 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
