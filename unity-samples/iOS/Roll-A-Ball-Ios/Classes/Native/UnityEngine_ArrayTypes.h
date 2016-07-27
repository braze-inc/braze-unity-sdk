#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t3856922794;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t813719258;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t3029734269;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_t2749774601;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t3784099155;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2517340964;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t3894999172;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t581285621;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1540476504;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Behaviour
struct Behaviour_t3120504042;
// UnityEngine.Component
struct Component_t2126946602;
// UnityEngine.Display
struct Display_t564335855;
// UnityEngine.Experimental.Director.Playable
struct Playable_t3404354247;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t3151226183;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t3653031512;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t1011928986;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_t3647875775;
// UnityEngine.ExecuteInEditMode
struct ExecuteInEditMode_t2676812948;
// UnityEngine.RequireComponent
struct RequireComponent_t3196495237;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t4127144549;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.Font
struct Font_t1525081276;
// UnityEngine.CanvasGroup
struct CanvasGroup_t1295922228;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achie3784099155.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserP2517340964.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter3894999172.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter1317012096.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achiev581285621.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter2223678307.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score1540476504.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "UnityEngine_UnityEngine_Keyframe2095052507.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Behaviour3120504042.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Display564335855.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "UnityEngine_UnityEngine_ContactPoint2951122365.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4082783401.h"
#include "UnityEngine_UnityEngine_ContactPoint2D3963746319.h"
#include "UnityEngine_UnityEngine_UIVertex2260061605.h"
#include "UnityEngine_UnityEngine_UICharInfo403820581.h"
#include "UnityEngine_UnityEngine_UILineInfo156921283.h"
#include "UnityEngine_UnityEngine_GUILayoutOption3151226183.h"
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCac3653031512.h"
#include "UnityEngine_UnityEngine_GUILayoutEntry1011928986.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_DisallowMultipleComponent3647875775.h"
#include "UnityEngine_UnityEngine_ExecuteInEditMode2676812948.h"
#include "UnityEngine_UnityEngine_RequireComponent3196495237.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo2591228609.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall4127144549.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1733537956.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Sprite4006040370.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"
#include "UnityEngine_UnityEngine_CanvasGroup1295922228.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"

#pragma once
// UnityEngine.Object[]
struct ObjectU5BU5D_t3051965477  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Object_t3878351788 * m_Items[1];

public:
	inline Object_t3878351788 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Object_t3878351788 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Object_t3878351788 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t1533365615  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t851122303  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t684312048  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t2316972724  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t3478737922  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) AchievementDescription_t3784099155 * m_Items[1];

public:
	inline AchievementDescription_t3784099155 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AchievementDescription_t3784099155 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t3784099155 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1345038285  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UserProfile_t2517340964 * m_Items[1];

public:
	inline UserProfile_t2517340964 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UserProfile_t2517340964 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t2517340964 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t2839027949  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcLeaderboard_t3894999172 * m_Items[1];

public:
	inline GcLeaderboard_t3894999172 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcLeaderboard_t3894999172 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcLeaderboard_t3894999172 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2585207681  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcAchievementData_t1317012096  m_Items[1];

public:
	inline GcAchievementData_t1317012096  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcAchievementData_t1317012096 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_t1317012096  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_t4174155160  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Achievement_t581285621 * m_Items[1];

public:
	inline Achievement_t581285621 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Achievement_t581285621 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Achievement_t581285621 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t2158783410  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcScoreData_t2223678307  m_Items[1];

public:
	inline GcScoreData_t2223678307  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcScoreData_t2223678307 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t2223678307  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t1929327945  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Score_t1540476504 * m_Items[1];

public:
	inline Score_t1540476504 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Score_t1540476504 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Score_t1540476504 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector3_t3525329789  m_Items[1];

public:
	inline Vector3_t3525329789  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector3_t3525329789 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3525329789  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t3713759435  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector4_t3525329790  m_Items[1];

public:
	inline Vector4_t3525329790  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector4_t3525329790 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3525329790  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector2_t3525329788  m_Items[1];

public:
	inline Vector2_t3525329788  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector2_t3525329788 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector2_t3525329788  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Color32_t4137084207  m_Items[1];

public:
	inline Color32_t4137084207  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Color32_t4137084207 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Color32_t4137084207  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2477572954  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Keyframe_t2095052507  m_Items[1];

public:
	inline Keyframe_t2095052507  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Keyframe_t2095052507 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t2095052507  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Camera_t3533968274 * m_Items[1];

public:
	inline Camera_t3533968274 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Camera_t3533968274 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Camera_t3533968274 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t1645072431  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Behaviour_t3120504042 * m_Items[1];

public:
	inline Behaviour_t3120504042 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Behaviour_t3120504042 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t3120504042 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t552366831  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Component_t2126946602 * m_Items[1];

public:
	inline Component_t2126946602 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Component_t2126946602 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Component_t2126946602 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t2401773174  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Display_t564335855 * m_Items[1];

public:
	inline Display_t564335855 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Display_t564335855 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Display_t564335855 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t2032975422  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Playable_t3404354247 * m_Items[1];

public:
	inline Playable_t3404354247 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Playable_t3404354247 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Playable_t3404354247 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1988025008  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ContactPoint_t2951122365  m_Items[1];

public:
	inline ContactPoint_t2951122365  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ContactPoint_t2951122365 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t2951122365  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RaycastHit_t46221527  m_Items[1];

public:
	inline RaycastHit_t46221527  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RaycastHit_t46221527 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t46221527  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t203541189  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Rigidbody2D_t3632243084 * m_Items[1];

public:
	inline Rigidbody2D_t3632243084 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Rigidbody2D_t3632243084 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Rigidbody2D_t3632243084 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t2162384532  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RaycastHit2D_t4082783401  m_Items[1];

public:
	inline RaycastHit2D_t4082783401  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RaycastHit2D_t4082783401 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t4082783401  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3188634326  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ContactPoint2D_t3963746319  m_Items[1];

public:
	inline ContactPoint2D_t3963746319  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ContactPoint2D_t3963746319 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t3963746319  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t684414504  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UIVertex_t2260061605  m_Items[1];

public:
	inline UIVertex_t2260061605  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UIVertex_t2260061605 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t2260061605  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t756447656  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UICharInfo_t403820581  m_Items[1];

public:
	inline UICharInfo_t403820581  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UICharInfo_t403820581 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t403820581  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t3191819218  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UILineInfo_t156921283  m_Items[1];

public:
	inline UILineInfo_t156921283  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UILineInfo_t156921283 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_t156921283  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUILayoutOption_t3151226183 * m_Items[1];

public:
	inline GUILayoutOption_t3151226183 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUILayoutOption_t3151226183 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t3151226183 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutUtility/LayoutCache[]
struct LayoutCacheU5BU5D_t3055488329  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) LayoutCache_t3653031512 * m_Items[1];

public:
	inline LayoutCache_t3653031512 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LayoutCache_t3653031512 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LayoutCache_t3653031512 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1357188287  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUILayoutEntry_t1011928986 * m_Items[1];

public:
	inline GUILayoutEntry_t1011928986 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUILayoutEntry_t1011928986 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUILayoutEntry_t1011928986 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t3748644978  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUIStyle_t1006925219 * m_Items[1];

public:
	inline GUIStyle_t1006925219 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUIStyle_t1006925219 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t1006925219 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t1523674982  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) DisallowMultipleComponent_t3647875775 * m_Items[1];

public:
	inline DisallowMultipleComponent_t3647875775 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DisallowMultipleComponent_t3647875775 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DisallowMultipleComponent_t3647875775 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3821800093  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ExecuteInEditMode_t2676812948 * m_Items[1];

public:
	inline ExecuteInEditMode_t2676812948 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ExecuteInEditMode_t2676812948 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ExecuteInEditMode_t2676812948 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t1641005768  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RequireComponent_t3196495237 * m_Items[1];

public:
	inline RequireComponent_t3196495237 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RequireComponent_t3196495237 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RequireComponent_t3196495237 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3030088988  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) HitInfo_t2591228609  m_Items[1];

public:
	inline HitInfo_t2591228609  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline HitInfo_t2591228609 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, HitInfo_t2591228609  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t116186728  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PersistentCall_t4127144549 * m_Items[1];

public:
	inline PersistentCall_t4127144549 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PersistentCall_t4127144549 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PersistentCall_t4127144549 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3397903437  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BaseInvokableCall_t1733537956 * m_Items[1];

public:
	inline BaseInvokableCall_t1733537956 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BaseInvokableCall_t1733537956 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BaseInvokableCall_t1733537956 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Transform_t284553113 * m_Items[1];

public:
	inline Transform_t284553113 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Transform_t284553113 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Transform_t284553113 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GameObject_t4012695102 * m_Items[1];

public:
	inline GameObject_t4012695102 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GameObject_t4012695102 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GameObject_t4012695102 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Sprite_t4006040370 * m_Items[1];

public:
	inline Sprite_t4006040370 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Sprite_t4006040370 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Sprite_t4006040370 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t645781896  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Canvas_t3534013893 * m_Items[1];

public:
	inline Canvas_t3534013893 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Canvas_t3534013893 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3534013893 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Font[]
struct FontU5BU5D_t3487343829  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Font_t1525081276 * m_Items[1];

public:
	inline Font_t1525081276 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Font_t1525081276 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Font_t1525081276 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t470257789  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) CanvasGroup_t1295922228 * m_Items[1];

public:
	inline CanvasGroup_t1295922228 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CanvasGroup_t1295922228 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CanvasGroup_t1295922228 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t100490744  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RectTransform_t3317474837 * m_Items[1];

public:
	inline RectTransform_t3317474837 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RectTransform_t3317474837 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t3317474837 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
