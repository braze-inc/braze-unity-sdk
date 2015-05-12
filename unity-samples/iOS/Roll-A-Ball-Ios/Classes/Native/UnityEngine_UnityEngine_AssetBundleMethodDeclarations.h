#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t808;
// UnityEngine.Object
struct Object_t151;
struct Object_t151_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t295;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
 Object_t151 * AssetBundle_LoadAsset_m3969 (AssetBundle_t808 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
 Object_t151 * AssetBundle_LoadAsset_Internal_m3970 (AssetBundle_t808 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
 ObjectU5BU5D_t295* AssetBundle_LoadAssetWithSubAssets_Internal_m3971 (AssetBundle_t808 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
