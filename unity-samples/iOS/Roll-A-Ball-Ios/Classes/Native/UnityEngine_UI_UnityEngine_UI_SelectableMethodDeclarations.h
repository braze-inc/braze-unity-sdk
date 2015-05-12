#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t559;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t635;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t554;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.UI.Image
struct Image_t596;
// UnityEngine.Animator
struct Animator_t638;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t483;
// UnityEngine.Sprite
struct Sprite_t595;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t471;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
 void Selectable__ctor_m2868 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
 void Selectable__cctor_m2869 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
 List_1_t635 * Selectable_get_allSelectables_m2870 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
 Navigation_t619  Selectable_get_navigation_m2871 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
 void Selectable_set_navigation_m2872 (Selectable_t559 * __this, Navigation_t619  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
 int32_t Selectable_get_transition_m2873 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
 void Selectable_set_transition_m2874 (Selectable_t559 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
 ColorBlock_t566  Selectable_get_colors_m2875 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
 void Selectable_set_colors_m2876 (Selectable_t559 * __this, ColorBlock_t566  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
 SpriteState_t637  Selectable_get_spriteState_m2877 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
 void Selectable_set_spriteState_m2878 (Selectable_t559 * __this, SpriteState_t637  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
 AnimationTriggers_t554 * Selectable_get_animationTriggers_m2879 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
 void Selectable_set_animationTriggers_m2880 (Selectable_t559 * __this, AnimationTriggers_t554 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
 Graphic_t579 * Selectable_get_targetGraphic_m2881 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
 void Selectable_set_targetGraphic_m2882 (Selectable_t559 * __this, Graphic_t579 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
 bool Selectable_get_interactable_m2883 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
 void Selectable_set_interactable_m2884 (Selectable_t559 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
 bool Selectable_get_isPointerInside_m2885 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
 void Selectable_set_isPointerInside_m2886 (Selectable_t559 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
 bool Selectable_get_isPointerDown_m2887 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
 void Selectable_set_isPointerDown_m2888 (Selectable_t559 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
 bool Selectable_get_hasSelection_m2889 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
 void Selectable_set_hasSelection_m2890 (Selectable_t559 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
 Image_t596 * Selectable_get_image_m2891 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
 void Selectable_set_image_m2892 (Selectable_t559 * __this, Image_t596 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
 Animator_t638 * Selectable_get_animator_m2893 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
 void Selectable_Awake_m2894 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
 void Selectable_OnCanvasGroupChanged_m2895 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
 bool Selectable_IsInteractable_m2896 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
 void Selectable_OnDidApplyAnimationProperties_m2897 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
 void Selectable_OnEnable_m2898 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
 void Selectable_OnSetProperty_m2899 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
 void Selectable_OnDisable_m2900 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
 int32_t Selectable_get_currentSelectionState_m2901 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
 void Selectable_InstantClearState_m2902 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void Selectable_DoStateTransition_m2903 (Selectable_t559 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
 Selectable_t559 * Selectable_FindSelectable_m2904 (Selectable_t559 * __this, Vector3_t202  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
 Vector3_t202  Selectable_GetPointOnRectEdge_m2905 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Vector2_t198  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
 void Selectable_Navigate_m2906 (Selectable_t559 * __this, AxisEventData_t483 * ___eventData, Selectable_t559 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
 Selectable_t559 * Selectable_FindSelectableOnLeft_m2907 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
 Selectable_t559 * Selectable_FindSelectableOnRight_m2908 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
 Selectable_t559 * Selectable_FindSelectableOnUp_m2909 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
 Selectable_t559 * Selectable_FindSelectableOnDown_m2910 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Selectable_OnMove_m2911 (Selectable_t559 * __this, AxisEventData_t483 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
 void Selectable_StartColorTween_m2912 (Selectable_t559 * __this, Color_t12  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
 void Selectable_DoSpriteSwap_m2913 (Selectable_t559 * __this, Sprite_t595 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
 void Selectable_TriggerAnimation_m2914 (Selectable_t559 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsHighlighted_m2915 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsPressed_m2916 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
 bool Selectable_IsPressed_m2917 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_UpdateSelectionState_m2918 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_EvaluateAndTransitionToSelectionState_m2919 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
 void Selectable_InternalEvaluateAndTransitionToSelectionState_m2920 (Selectable_t559 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerDown_m2921 (Selectable_t559 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerUp_m2922 (Selectable_t559 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerEnter_m2923 (Selectable_t559 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerExit_m2924 (Selectable_t559 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnSelect_m2925 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnDeselect_m2926 (Selectable_t559 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
 void Selectable_Select_m2927 (Selectable_t559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
