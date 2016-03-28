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

// UnityEngine.Experimental.Director.Playable
struct Playable_t3404354247;
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t2032975422;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>
struct List_1_t4201313216;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3404354247.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play1575932342.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Fram4009178800.h"

// System.Void UnityEngine.Experimental.Director.Playable::.ctor()
extern "C"  void Playable__ctor_m2241556995 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::.ctor(System.Boolean)
extern "C"  void Playable__ctor_m3752126010 (Playable_t3404354247 * __this, bool ___callCPPConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose(System.Boolean)
extern "C"  void Playable_Dispose_m2747727607 (Playable_t3404354247 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetUniqueIDInternal()
extern "C"  int32_t Playable_GetUniqueIDInternal_m1016415712 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_Connect_m622693985 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___source, Playable_t3404354247 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_Connect_m1578187905 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___source, Playable_t3404354247 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_Disconnect_m3811503323 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ReleaseEnginePlayable()
extern "C"  void Playable_ReleaseEnginePlayable_m2094169144 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::InstantiateEnginePlayable()
extern "C"  void Playable_InstantiateEnginePlayable_m3931021595 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GenerateUniqueId()
extern "C"  int32_t Playable_GenerateUniqueId_m3980506242 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeightInternal(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeightInternal_m3751861498 (Playable_t3404354247 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(System.Int32)
extern "C"  float Playable_GetInputWeightInternal_m2277506695 (Playable_t3404354247 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C"  double Playable_get_time_m4261299130 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C"  void Playable_set_time_m4095539287 (Playable_t3404354247 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C"  int32_t Playable_get_state_m3392280896 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_set_state_m2851443923 (Playable_t3404354247 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::ConnectInternal(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_ConnectInternal_m3467855684 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___source, Playable_t3404354247 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::DisconnectInternal(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_DisconnectInternal_m216904862 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C"  Playable_t3404354247 * Playable_GetInput_m777009268 (Playable_t3404354247 * __this, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C"  PlayableU5BU5D_t2032975422* Playable_GetInputs_m1899129588 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C"  int32_t Playable_get_inputCount_m3038792623 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C"  int32_t Playable_get_outputCount_m2666149542 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ClearInputs()
extern "C"  void Playable_ClearInputs_m4141811767 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C"  Playable_t3404354247 * Playable_GetOutput_m1666786747 (Playable_t3404354247 * __this, int32_t ___outputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetOutputs()
extern "C"  PlayableU5BU5D_t2032975422* Playable_GetOutputs_m3506315017 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputsInternal(System.Object)
extern "C"  void Playable_GetInputsInternal_m2169096151 (Playable_t3404354247 * __this, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputsInternal(System.Object)
extern "C"  void Playable_GetOutputsInternal_m891872506 (Playable_t3404354247 * __this, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Finalize()
extern "C"  void Playable_Finalize_m175426431 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose()
extern "C"  void Playable_Dispose_m2255939968 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C"  bool Playable_Equals_m1149042830 (Playable_t3404354247 * __this, Il2CppObject * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C"  int32_t Playable_GetHashCode_m3165087730 (Playable_t3404354247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CompareIntPtr(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_CompareIntPtr_m2113594311 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___lhs, Playable_t3404354247 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsNativePlayableAlive(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_IsNativePlayableAlive_m1365031800 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckPlayableValidity(UnityEngine.Experimental.Director.Playable,System.String)
extern "C"  bool Playable_CheckPlayableValidity_m2318405566 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___playable, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C"  bool Playable_CheckInputBounds_m1883207375 (Playable_t3404354247 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C"  bool Playable_CheckInputBounds_m3596125390 (Playable_t3404354247 * __this, int32_t ___inputIndex, bool ___acceptAny, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C"  float Playable_GetInputWeight_m837530218 (Playable_t3404354247 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeight_m2698917277 (Playable_t3404354247 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  void Playable_GetInputs_m1527871507 (Playable_t3404354247 * __this, List_1_t4201313216 * ___inputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  void Playable_GetOutputs_m3459436598 (Playable_t3404354247 * __this, List_1_t4201313216 * ___outputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C"  void Playable_PrepareFrame_m497491591 (Playable_t3404354247 * __this, FrameData_t4009178800  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ProcessFrame(UnityEngine.Experimental.Director.FrameData,System.Object)
extern "C"  void Playable_ProcessFrame_m2039333501 (Playable_t3404354247 * __this, FrameData_t4009178800  ___info, Il2CppObject * ___playerData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetTime(System.Single)
extern "C"  void Playable_OnSetTime_m3177236154 (Playable_t3404354247 * __this, float ___localTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_OnSetPlayState_m3539986029 (Playable_t3404354247 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Equality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Equality_m3091846835 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___x, Playable_t3404354247 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Inequality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Inequality_m3181167342 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___x, Playable_t3404354247 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Implicit(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Implicit_m2513159357 (Il2CppObject * __this /* static, unused */, Playable_t3404354247 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
