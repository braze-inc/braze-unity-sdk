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

// EffectSequencer
struct EffectSequencer_t332;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// ExplosionPart
struct ExplosionPart_t329;

#include "codegen/il2cpp-codegen.h"

// System.Void EffectSequencer::.ctor()
extern "C" void EffectSequencer__ctor_m1337 (EffectSequencer_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EffectSequencer::Start()
extern "C" Object_t * EffectSequencer_Start_m1338 (EffectSequencer_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EffectSequencer::InstantiateDelayed(ExplosionPart)
extern "C" Object_t * EffectSequencer_InstantiateDelayed_m1339 (EffectSequencer_t332 * __this, ExplosionPart_t329 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectSequencer::Main()
extern "C" void EffectSequencer_Main_m1340 (EffectSequencer_t332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
