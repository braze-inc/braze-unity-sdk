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
struct JSONClass_t439433485;
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
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"

// System.Void Appboy.Utilities.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m2831652678 (JSONClass_t439433485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.String)
extern "C"  JSONNode_t1834608295 * JSONClass_get_Item_m4117768870 (JSONClass_t439433485 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONClass_set_Item_m2317995407 (JSONClass_t439433485 * __this, String_t* ___aKey0, JSONNode_t1834608295 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONClass_get_Item_m2473403693 (JSONClass_t439433485 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C"  void JSONClass_set_Item_m379131770 (JSONClass_t439433485 * __this, int32_t ___aIndex0, JSONNode_t1834608295 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONClass::get_Count()
extern "C"  int32_t JSONClass_get_Count_m855004564 (JSONClass_t439433485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Add(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONClass_Add_m1539045304 (JSONClass_t439433485 * __this, String_t* ___aKey0, JSONNode_t1834608295 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.String)
extern "C"  JSONNode_t1834608295 * JSONClass_Remove_m2168568766 (JSONClass_t439433485 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONClass_Remove_m1025052949 (JSONClass_t439433485 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(Appboy.Utilities.JSONNode)
extern "C"  JSONNode_t1834608295 * JSONClass_Remove_m1105862877 (JSONClass_t439433485 * __this, JSONNode_t1834608295 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONClass::get_Childs()
extern "C"  Il2CppObject* JSONClass_get_Childs_m4179165467 (JSONClass_t439433485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONClass::GetEnumerator()
extern "C"  Il2CppObject * JSONClass_GetEnumerator_m580956014 (JSONClass_t439433485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString()
extern "C"  String_t* JSONClass_ToString_m3333544717 (JSONClass_t439433485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString(System.String)
extern "C"  String_t* JSONClass_ToString_m1796137237 (JSONClass_t439433485 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONClass_Serialize_m2145481991 (JSONClass_t439433485 * __this, BinaryWriter_t2314211483 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
