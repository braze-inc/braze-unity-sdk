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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t153025599;
// System.Net.WebRequest
struct WebRequest_t3488810021;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C"  void FileWebRequestCreator__ctor_m349516791 (FileWebRequestCreator_t153025599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C"  WebRequest_t3488810021 * FileWebRequestCreator_Create_m2860446468 (FileWebRequestCreator_t153025599 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
