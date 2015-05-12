#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1598;
// System.Net.WebRequest
struct WebRequest_t1548;
// System.Uri
struct Uri_t1553;

// System.Void System.Net.HttpRequestCreator::.ctor()
 void HttpRequestCreator__ctor_m6855 (HttpRequestCreator_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
 WebRequest_t1548 * HttpRequestCreator_Create_m6856 (HttpRequestCreator_t1598 * __this, Uri_t1553 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
