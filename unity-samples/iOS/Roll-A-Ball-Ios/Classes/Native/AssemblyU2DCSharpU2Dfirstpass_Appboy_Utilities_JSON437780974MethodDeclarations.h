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

// Appboy.Utilities.JSONArray
struct JSONArray_t437780974;
// Appboy.Utilities.JSONNode
struct JSONNode_t1834608295;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t411795355;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"

// System.Void Appboy.Utilities.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m1083063173 (JSONArray_t437780974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONArray_get_Item_m2884606734 (JSONArray_t437780974 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C"  void JSONArray_set_Item_m495126043 (JSONArray_t437780974 * __this, int32_t ___aIndex, JSONNode_t1834608295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t1834608295 * JSONArray_get_Item_m3980161253 (JSONArray_t437780974 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONArray_set_Item_m1618850574 (JSONArray_t437780974 * __this, String_t* ___aKey, JSONNode_t1834608295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m2185413203 (JSONArray_t437780974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Add(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONArray_Add_m660627161 (JSONArray_t437780974 * __this, String_t* ___aKey, JSONNode_t1834608295 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONArray_Remove_m2714864438 (JSONArray_t437780974 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(Appboy.Utilities.JSONNode)
extern "C"  JSONNode_t1834608295 * JSONArray_Remove_m400483420 (JSONArray_t437780974 * __this, JSONNode_t1834608295 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONArray::get_Childs()
extern "C"  Il2CppObject* JSONArray_get_Childs_m2472160316 (JSONArray_t437780974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONArray::GetEnumerator()
extern "C"  Il2CppObject * JSONArray_GetEnumerator_m3898254509 (JSONArray_t437780974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m466967150 (JSONArray_t437780974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m1658529620 (JSONArray_t437780974 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m1440102534 (JSONArray_t437780974 * __this, BinaryWriter_t2314211483 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
