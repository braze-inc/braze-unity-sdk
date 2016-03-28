#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3626201768;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.Events.UnityAction
struct UnityAction_t909267611;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1471929499;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t1434350349;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t933884113  : public UIBehaviour_t644839684
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t1886596500 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t1588175760  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3317474837 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t3626201768 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3534013893 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t909267611 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t909267611 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t909267611 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t1434350349 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_Material_4)); }
	inline Material_t1886596500 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t1886596500 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t1886596500 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_4, value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_Color_5)); }
	inline Color_t1588175760  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t1588175760 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t1588175760  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_RectTransform_7)); }
	inline RectTransform_t3317474837 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3317474837 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3317474837 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_7, value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t3626201768 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t3626201768 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t3626201768 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasRender_8, value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_Canvas_9)); }
	inline Canvas_t3534013893 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3534013893 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3534013893 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_9, value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t909267611 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t909267611 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t909267611 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnDirtyLayoutCallback_12, value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t909267611 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t909267611 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t909267611 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnDirtyVertsCallback_13, value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t909267611 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t909267611 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t909267611 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnDirtyMaterialCallback_14, value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t1434350349 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t1434350349 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t1434350349 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_ColorTweenRunner_17, value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t933884113, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t933884113_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t1886596500 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t2509538522 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t1525280346 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t1471929499 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t933884113_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t1886596500 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t1886596500 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t1886596500 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_DefaultUI_2, value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t933884113_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t2509538522 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t2509538522 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t2509538522 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_WhiteTexture_3, value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t933884113_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t1525280346 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t1525280346 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t1525280346 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier(&___s_Mesh_15, value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t933884113_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t1471929499 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t1471929499 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t1471929499 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier(&___s_VertexHelper_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
