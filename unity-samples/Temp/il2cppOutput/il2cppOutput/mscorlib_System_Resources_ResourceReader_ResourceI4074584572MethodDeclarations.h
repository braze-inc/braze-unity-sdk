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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceI4074584572.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Resources.ResourceReader/ResourceInfo::.ctor(System.String,System.Int64,System.Int32)
extern "C"  void ResourceInfo__ctor_m4205157633 (ResourceInfo_t4074584572 * __this, String_t* ___resourceName0, int64_t ___valuePosition1, int32_t ___type_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResourceInfo_t4074584572;
struct ResourceInfo_t4074584572_marshaled_pinvoke;

extern "C" void ResourceInfo_t4074584572_marshal_pinvoke(const ResourceInfo_t4074584572& unmarshaled, ResourceInfo_t4074584572_marshaled_pinvoke& marshaled);
extern "C" void ResourceInfo_t4074584572_marshal_pinvoke_back(const ResourceInfo_t4074584572_marshaled_pinvoke& marshaled, ResourceInfo_t4074584572& unmarshaled);
extern "C" void ResourceInfo_t4074584572_marshal_pinvoke_cleanup(ResourceInfo_t4074584572_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ResourceInfo_t4074584572;
struct ResourceInfo_t4074584572_marshaled_com;

extern "C" void ResourceInfo_t4074584572_marshal_com(const ResourceInfo_t4074584572& unmarshaled, ResourceInfo_t4074584572_marshaled_com& marshaled);
extern "C" void ResourceInfo_t4074584572_marshal_com_back(const ResourceInfo_t4074584572_marshaled_com& marshaled, ResourceInfo_t4074584572& unmarshaled);
extern "C" void ResourceInfo_t4074584572_marshal_com_cleanup(ResourceInfo_t4074584572_marshaled_com& marshaled);
