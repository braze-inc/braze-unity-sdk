#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t390;
// UnityEngine.AudioClip
struct AudioClip_t383;

// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
 void AudioSource_set_pitch_m1952 (AudioSource_t390 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
 AudioClip_t383 * AudioSource_get_clip_m1880 (AudioSource_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
 void AudioSource_set_clip_m1913 (AudioSource_t390 * __this, AudioClip_t383 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
 void AudioSource_Play_m4733 (AudioSource_t390 * __this, uint64_t ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
 void AudioSource_Play_m1914 (AudioSource_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
 void AudioSource_Stop_m2101 (AudioSource_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
 void AudioSource_Pause_m2000 (AudioSource_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
 void AudioSource_INTERNAL_CALL_Pause_m4734 (Object_t * __this/* static, unused */, AudioSource_t390 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
 bool AudioSource_get_isPlaying_m1999 (AudioSource_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
 void AudioSource_PlayOneShot_m1953 (AudioSource_t390 * __this, AudioClip_t383 * ___clip, float ___volumeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
