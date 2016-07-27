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

// System.Resources.ResourceReader
struct ResourceReader_t4097835539;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2722755166;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceI4074584572.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Resources.ResourceReader::.ctor(System.IO.Stream)
extern "C"  void ResourceReader__ctor_m4021287506 (ResourceReader_t4097835539 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::.ctor(System.String)
extern "C"  void ResourceReader__ctor_m3906862375 (ResourceReader_t4097835539 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceReader::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ResourceReader_System_Collections_IEnumerable_GetEnumerator_m117947704 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::System.IDisposable.Dispose()
extern "C"  void ResourceReader_System_IDisposable_Dispose_m275527876 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::ReadHeaders()
extern "C"  void ResourceReader_ReadHeaders_m1907491305 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::CreateResourceInfo(System.Int64,System.Resources.ResourceReader/ResourceInfo&)
extern "C"  void ResourceReader_CreateResourceInfo_m5769771 (ResourceReader_t4097835539 * __this, int64_t ___position0, ResourceInfo_t4074584572 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Resources.ResourceReader::Read7BitEncodedInt()
extern "C"  int32_t ResourceReader_Read7BitEncodedInt_m1807673690 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer2(System.Int32)
extern "C"  Il2CppObject * ResourceReader_ReadValueVer2_m3068653353 (ResourceReader_t4097835539 * __this, int32_t ___type_index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadValueVer1(System.Type)
extern "C"  Il2CppObject * ResourceReader_ReadValueVer1_m60842242 (ResourceReader_t4097835539 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader::ReadNonPredefinedValue(System.Type)
extern "C"  Il2CppObject * ResourceReader_ReadNonPredefinedValue_m3316818289 (ResourceReader_t4097835539 * __this, Type_t * ___exp_type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::LoadResourceValues(System.Resources.ResourceReader/ResourceCacheItem[])
extern "C"  void ResourceReader_LoadResourceValues_m1190122720 (ResourceReader_t4097835539 * __this, ResourceCacheItemU5BU5D_t2722755166* ___store0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Close()
extern "C"  void ResourceReader_Close_m551956177 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceReader::GetEnumerator()
extern "C"  Il2CppObject * ResourceReader_GetEnumerator_m1820124275 (ResourceReader_t4097835539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader::Dispose(System.Boolean)
extern "C"  void ResourceReader_Dispose_m1411491503 (ResourceReader_t4097835539 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
