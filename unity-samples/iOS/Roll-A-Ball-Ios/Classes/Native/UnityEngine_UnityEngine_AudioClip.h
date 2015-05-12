#pragma once
#include <stdint.h>
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t901;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t902;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.AudioClip
struct AudioClip_t371  : public Object_t70
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t901 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t902 * ___m_PCMSetPositionCallback_3;
};
