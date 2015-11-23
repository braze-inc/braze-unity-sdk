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
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Resources.ResourceReader/ResourceInfo::.ctor(System.String,System.Int64,System.Int32)
extern "C" void ResourceInfo__ctor_m10093 (ResourceInfo_t1677 * __this, String_t* ___resourceName, int64_t ___valuePosition, int32_t ___type_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ResourceInfo_t1677_marshal(const ResourceInfo_t1677& unmarshaled, ResourceInfo_t1677_marshaled& marshaled);
extern "C" void ResourceInfo_t1677_marshal_back(const ResourceInfo_t1677_marshaled& marshaled, ResourceInfo_t1677& unmarshaled);
extern "C" void ResourceInfo_t1677_marshal_cleanup(ResourceInfo_t1677_marshaled& marshaled);
