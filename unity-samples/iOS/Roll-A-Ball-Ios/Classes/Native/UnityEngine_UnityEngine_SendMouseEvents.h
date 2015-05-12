#pragma once
#include <stdint.h>
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t950;
// UnityEngine.Camera[]
struct CameraU5BU5D_t879;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SendMouseEvents
struct SendMouseEvents_t951  : public Object_t
{
};
struct SendMouseEvents_t951_StaticFields{
	// System.Int32 UnityEngine.SendMouseEvents::m_HitIndexGUI
	int32_t ___m_HitIndexGUI_0;
	// System.Int32 UnityEngine.SendMouseEvents::m_HitIndexPhysics3D
	int32_t ___m_HitIndexPhysics3D_1;
	// System.Int32 UnityEngine.SendMouseEvents::m_HitIndexPhysics2D
	int32_t ___m_HitIndexPhysics2D_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t950* ___m_LastHit_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t950* ___m_MouseDownHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t950* ___m_CurrentHit_5;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t879* ___m_Cameras_6;
};
