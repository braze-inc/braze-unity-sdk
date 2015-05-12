#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t545;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t621;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t540;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.UI.Image
struct Image_t582;
// UnityEngine.Animator
struct Animator_t624;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t469;
// UnityEngine.Sprite
struct Sprite_t581;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
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
 void Selectable__ctor_m2762 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
 void Selectable__cctor_m2763 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
 List_1_t621 * Selectable_get_allSelectables_m2764 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
 Navigation_t605  Selectable_get_navigation_m2765 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
 void Selectable_set_navigation_m2766 (Selectable_t545 * __this, Navigation_t605  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
 int32_t Selectable_get_transition_m2767 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
 void Selectable_set_transition_m2768 (Selectable_t545 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
 ColorBlock_t552  Selectable_get_colors_m2769 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
 void Selectable_set_colors_m2770 (Selectable_t545 * __this, ColorBlock_t552  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
 SpriteState_t623  Selectable_get_spriteState_m2771 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
 void Selectable_set_spriteState_m2772 (Selectable_t545 * __this, SpriteState_t623  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
 AnimationTriggers_t540 * Selectable_get_animationTriggers_m2773 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
 void Selectable_set_animationTriggers_m2774 (Selectable_t545 * __this, AnimationTriggers_t540 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
 Graphic_t565 * Selectable_get_targetGraphic_m2775 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
 void Selectable_set_targetGraphic_m2776 (Selectable_t545 * __this, Graphic_t565 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
 bool Selectable_get_interactable_m2777 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
 void Selectable_set_interactable_m2778 (Selectable_t545 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
 bool Selectable_get_isPointerInside_m2779 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
 void Selectable_set_isPointerInside_m2780 (Selectable_t545 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
 bool Selectable_get_isPointerDown_m2781 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
 void Selectable_set_isPointerDown_m2782 (Selectable_t545 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
 bool Selectable_get_hasSelection_m2783 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
 void Selectable_set_hasSelection_m2784 (Selectable_t545 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
 Image_t582 * Selectable_get_image_m2785 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
 void Selectable_set_image_m2786 (Selectable_t545 * __this, Image_t582 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
 Animator_t624 * Selectable_get_animator_m2787 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
 void Selectable_Awake_m2788 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
 void Selectable_OnCanvasGroupChanged_m2789 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
 bool Selectable_IsInteractable_m2790 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
 void Selectable_OnDidApplyAnimationProperties_m2791 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
 void Selectable_OnEnable_m2792 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
 void Selectable_OnSetProperty_m2793 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
 void Selectable_OnDisable_m2794 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
 int32_t Selectable_get_currentSelectionState_m2795 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
 void Selectable_InstantClearState_m2796 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void Selectable_DoStateTransition_m2797 (Selectable_t545 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
 Selectable_t545 * Selectable_FindSelectable_m2798 (Selectable_t545 * __this, Vector3_t188  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
 Vector3_t188  Selectable_GetPointOnRectEdge_m2799 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, Vector2_t184  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
 void Selectable_Navigate_m2800 (Selectable_t545 * __this, AxisEventData_t469 * ___eventData, Selectable_t545 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
 Selectable_t545 * Selectable_FindSelectableOnLeft_m2801 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
 Selectable_t545 * Selectable_FindSelectableOnRight_m2802 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
 Selectable_t545 * Selectable_FindSelectableOnUp_m2803 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
 Selectable_t545 * Selectable_FindSelectableOnDown_m2804 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Selectable_OnMove_m2805 (Selectable_t545 * __this, AxisEventData_t469 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
 void Selectable_StartColorTween_m2806 (Selectable_t545 * __this, Color_t341  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
 void Selectable_DoSpriteSwap_m2807 (Selectable_t545 * __this, Sprite_t581 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
 void Selectable_TriggerAnimation_m2808 (Selectable_t545 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsHighlighted_m2809 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsPressed_m2810 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
 bool Selectable_IsPressed_m2811 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_UpdateSelectionState_m2812 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_EvaluateAndTransitionToSelectionState_m2813 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
 void Selectable_InternalEvaluateAndTransitionToSelectionState_m2814 (Selectable_t545 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerDown_m2815 (Selectable_t545 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerUp_m2816 (Selectable_t545 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerEnter_m2817 (Selectable_t545 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerExit_m2818 (Selectable_t545 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnSelect_m2819 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnDeselect_m2820 (Selectable_t545 * __this, BaseEventData_t457 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
 void Selectable_Select_m2821 (Selectable_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
