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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t3528263887;
// System.Net.WebRequest
struct WebRequest_t3488810021;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C"  void HttpRequestCreator__ctor_m2335588533 (HttpRequestCreator_t3528263887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C"  WebRequest_t3488810021 * HttpRequestCreator_Create_m3368655414 (HttpRequestCreator_t3528263887 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
