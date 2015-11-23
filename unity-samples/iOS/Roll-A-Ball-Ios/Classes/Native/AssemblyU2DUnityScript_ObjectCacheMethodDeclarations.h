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

// ObjectCache
struct ObjectCache_t378;
// UnityEngine.GameObject
struct GameObject_t141;

#include "codegen/il2cpp-codegen.h"

// System.Void ObjectCache::.ctor()
extern "C" void ObjectCache__ctor_m1445 (ObjectCache_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectCache::Initialize()
extern "C" void ObjectCache_Initialize_m1446 (ObjectCache_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectCache::GetNextObjectInCache()
extern "C" GameObject_t141 * ObjectCache_GetNextObjectInCache_m1447 (ObjectCache_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
