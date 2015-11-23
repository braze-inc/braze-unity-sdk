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

// FreeMovementMotor
struct FreeMovementMotor_t393;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FreeMovementMotor::.ctor()
extern "C" void FreeMovementMotor__ctor_m1480 (FreeMovementMotor_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeMovementMotor::FixedUpdate()
extern "C" void FreeMovementMotor_FixedUpdate_m1481 (FreeMovementMotor_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FreeMovementMotor::AngleAroundAxis(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float FreeMovementMotor_AngleAroundAxis_m1482 (Object_t * __this /* static, unused */, Vector3_t259  ___dirA, Vector3_t259  ___dirB, Vector3_t259  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FreeMovementMotor::Main()
extern "C" void FreeMovementMotor_Main_m1483 (FreeMovementMotor_t393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
