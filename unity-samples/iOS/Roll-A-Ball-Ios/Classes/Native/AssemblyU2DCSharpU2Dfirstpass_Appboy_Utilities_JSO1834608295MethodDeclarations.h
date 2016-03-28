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

// Appboy.Utilities.JSONNode
struct JSONNode_t1834608295;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t411795355;
// Appboy.Utilities.JSONArray
struct JSONArray_t437780974;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.IO.Stream
struct Stream_t219029575;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"

// System.Void Appboy.Utilities.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m4282472486 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONNode_Add_m3936568024 (JSONNode_t1834608295 * __this, String_t* ___aKey, JSONNode_t1834608295 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONNode_get_Item_m389553801 (JSONNode_t1834608295 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C"  void JSONNode_set_Item_m4238725786 (JSONNode_t1834608295 * __this, int32_t ___aIndex, JSONNode_t1834608295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_get_Item_m3942931658 (JSONNode_t1834608295 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONNode_set_Item_m1706325615 (JSONNode_t1834608295 * __this, String_t* ___aKey, JSONNode_t1834608295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m1411453423 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m642357226 (JSONNode_t1834608295 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m573391520 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(Appboy.Utilities.JSONNode)
extern "C"  void JSONNode_Add_m2078409564 (JSONNode_t1834608295 * __this, JSONNode_t1834608295 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_Remove_m2378442466 (JSONNode_t1834608295 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONNode_Remove_m1724559729 (JSONNode_t1834608295 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(Appboy.Utilities.JSONNode)
extern "C"  JSONNode_t1834608295 * JSONNode_Remove_m3918591489 (JSONNode_t1834608295 * __this, JSONNode_t1834608295 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_Childs()
extern "C"  Il2CppObject* JSONNode_get_Childs_m40031521 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_DeepChilds()
extern "C"  Il2CppObject* JSONNode_get_DeepChilds_m1318051245 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m3196107783 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString(System.String)
extern "C"  String_t* JSONNode_ToString_m3036866139 (JSONNode_t1834608295 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m3167233134 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m3552292693 (JSONNode_t1834608295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m1236250097 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m3859102490 (JSONNode_t1834608295 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m815616455 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m663257796 (JSONNode_t1834608295 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m1446621063 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m2631239246 (JSONNode_t1834608295 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONNode::get_AsArray()
extern "C"  JSONArray_t437780974 * JSONNode_get_AsArray_m2931459965 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONNode::get_AsObject()
extern "C"  JSONClass_t439433485 * JSONNode_get_AsObject_m496811740 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2801921331 (JSONNode_t1834608295 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m2403018827 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3948191014 (Il2CppObject * __this /* static, unused */, String_t* ___aText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Parse(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_Parse_m2233203625 (Il2CppObject * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m882499047 (JSONNode_t1834608295 * __this, BinaryWriter_t2314211483 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m3171926637 (JSONNode_t1834608295 * __this, Stream_t219029575 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m1161458894 (JSONNode_t1834608295 * __this, Stream_t219029575 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m685478191 (JSONNode_t1834608295 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m1728452163 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m1669725232 (JSONNode_t1834608295 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m2202593826 (JSONNode_t1834608295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t1834608295 * JSONNode_Deserialize_m2055321656 (Il2CppObject * __this /* static, unused */, BinaryReader_t2158806251 * ___aReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromCompressedFile_m2877773785 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromCompressedStream_m3071428708 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromCompressedBase64_m2056204966 (Il2CppObject * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromStream_m3088644483 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromFile_m1838165850 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_LoadFromBase64_m3720359399 (Il2CppObject * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t1834608295 * JSONNode_op_Implicit_m2842261849 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::op_Implicit(Appboy.Utilities.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m3979564087 (Il2CppObject * __this /* static, unused */, JSONNode_t1834608295 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Equality(Appboy.Utilities.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m3502417847 (Il2CppObject * __this /* static, unused */, JSONNode_t1834608295 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Inequality(Appboy.Utilities.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m874229874 (Il2CppObject * __this /* static, unused */, JSONNode_t1834608295 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
