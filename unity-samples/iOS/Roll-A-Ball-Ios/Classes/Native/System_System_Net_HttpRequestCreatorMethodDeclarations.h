#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1586;
// System.Net.WebRequest
struct WebRequest_t1537;
// System.Uri
struct Uri_t61;

// System.Void System.Net.HttpRequestCreator::.ctor()
 void HttpRequestCreator__ctor_m6761 (HttpRequestCreator_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
 WebRequest_t1537 * HttpRequestCreator_Create_m6762 (HttpRequestCreator_t1586 * __this, Uri_t61 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
