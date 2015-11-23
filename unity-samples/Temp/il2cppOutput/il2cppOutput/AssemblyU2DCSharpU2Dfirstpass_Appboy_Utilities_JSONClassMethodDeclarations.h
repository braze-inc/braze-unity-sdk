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

// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// Appboy.Utilities.JSONNode
struct JSONNode_t11;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t70;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.IO.BinaryWriter
struct BinaryWriter_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.JSONClass::.ctor()
extern "C" void JSONClass__ctor_m212 (JSONClass_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.String)
extern "C" JSONNode_t11 * JSONClass_get_Item_m213 (JSONClass_t22 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONClass_set_Item_m214 (JSONClass_t22 * __this, String_t* ___aKey, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.Int32)
extern "C" JSONNode_t11 * JSONClass_get_Item_m215 (JSONClass_t22 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C" void JSONClass_set_Item_m216 (JSONClass_t22 * __this, int32_t ___aIndex, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONClass::get_Count()
extern "C" int32_t JSONClass_get_Count_m217 (JSONClass_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Add(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONClass_Add_m218 (JSONClass_t22 * __this, String_t* ___aKey, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.String)
extern "C" JSONNode_t11 * JSONClass_Remove_m219 (JSONClass_t22 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.Int32)
extern "C" JSONNode_t11 * JSONClass_Remove_m220 (JSONClass_t22 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(Appboy.Utilities.JSONNode)
extern "C" JSONNode_t11 * JSONClass_Remove_m221 (JSONClass_t22 * __this, JSONNode_t11 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONClass::get_Childs()
extern "C" Object_t* JSONClass_get_Childs_m222 (JSONClass_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONClass::GetEnumerator()
extern "C" Object_t * JSONClass_GetEnumerator_m223 (JSONClass_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString()
extern "C" String_t* JSONClass_ToString_m224 (JSONClass_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString(System.String)
extern "C" String_t* JSONClass_ToString_m225 (JSONClass_t22 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C" void JSONClass_Serialize_m226 (JSONClass_t22 * __this, BinaryWriter_t67 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
