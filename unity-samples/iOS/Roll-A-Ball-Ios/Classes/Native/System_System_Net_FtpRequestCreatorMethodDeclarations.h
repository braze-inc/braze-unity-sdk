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

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1047;
// System.Net.WebRequest
struct WebRequest_t1042;
// System.Uri
struct Uri_t1043;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m5323 (FtpRequestCreator_t1047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1042 * FtpRequestCreator_Create_m5324 (FtpRequestCreator_t1047 * __this, Uri_t1043 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
