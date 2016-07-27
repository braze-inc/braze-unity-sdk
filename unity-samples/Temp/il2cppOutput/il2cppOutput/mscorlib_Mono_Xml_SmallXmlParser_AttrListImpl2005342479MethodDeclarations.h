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

// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t2005342479;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::.ctor()
extern "C"  void AttrListImpl__ctor_m2704548741 (AttrListImpl_t2005342479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser/AttrListImpl::get_Length()
extern "C"  int32_t AttrListImpl_get_Length_m2232614890 (AttrListImpl_t2005342479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetName(System.Int32)
extern "C"  String_t* AttrListImpl_GetName_m1594181746 (AttrListImpl_t2005342479 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.Int32)
extern "C"  String_t* AttrListImpl_GetValue_m3442878158 (AttrListImpl_t2005342479 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.String)
extern "C"  String_t* AttrListImpl_GetValue_m4106706213 (AttrListImpl_t2005342479 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Names()
extern "C"  StringU5BU5D_t2956870243* AttrListImpl_get_Names_m3037395809 (AttrListImpl_t2005342479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Values()
extern "C"  StringU5BU5D_t2956870243* AttrListImpl_get_Values_m713372555 (AttrListImpl_t2005342479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Clear()
extern "C"  void AttrListImpl_Clear_m110682032 (AttrListImpl_t2005342479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Add(System.String,System.String)
extern "C"  void AttrListImpl_Add_m1977035706 (AttrListImpl_t2005342479 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
