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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"
#include "mscorlib_System_Object837106420.h"

// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C"  int32_t Scene_get_handle_m2277248521 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m894591657 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m3533090789 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C"  int32_t Scene_GetHashCode_m2000109307 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C"  bool Scene_Equals_m93578403 (Scene_t2772977204 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
extern "C"  String_t* Scene_GetNameInternal_m2496405436 (Il2CppObject * __this /* static, unused */, int32_t ___sceneHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetBuildIndexInternal(System.Int32)
extern "C"  int32_t Scene_GetBuildIndexInternal_m76376146 (Il2CppObject * __this /* static, unused */, int32_t ___sceneHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Scene_t2772977204;
struct Scene_t2772977204_marshaled_pinvoke;

extern "C" void Scene_t2772977204_marshal_pinvoke(const Scene_t2772977204& unmarshaled, Scene_t2772977204_marshaled_pinvoke& marshaled);
extern "C" void Scene_t2772977204_marshal_pinvoke_back(const Scene_t2772977204_marshaled_pinvoke& marshaled, Scene_t2772977204& unmarshaled);
extern "C" void Scene_t2772977204_marshal_pinvoke_cleanup(Scene_t2772977204_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Scene_t2772977204;
struct Scene_t2772977204_marshaled_com;

extern "C" void Scene_t2772977204_marshal_com(const Scene_t2772977204& unmarshaled, Scene_t2772977204_marshaled_com& marshaled);
extern "C" void Scene_t2772977204_marshal_com_back(const Scene_t2772977204_marshaled_com& marshaled, Scene_t2772977204& unmarshaled);
extern "C" void Scene_t2772977204_marshal_com_cleanup(Scene_t2772977204_marshaled_com& marshaled);
