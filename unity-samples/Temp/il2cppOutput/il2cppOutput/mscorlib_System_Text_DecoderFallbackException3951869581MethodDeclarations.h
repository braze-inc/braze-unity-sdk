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

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t3951869581;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C"  void DecoderFallbackException__ctor_m3678102567 (DecoderFallbackException_t3951869581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C"  void DecoderFallbackException__ctor_m1586655803 (DecoderFallbackException_t3951869581 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C"  void DecoderFallbackException__ctor_m387223961 (DecoderFallbackException_t3951869581 * __this, String_t* ___message0, ByteU5BU5D_t58506160* ___bytesUnknown1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
