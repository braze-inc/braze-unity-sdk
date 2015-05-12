#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t1732;
// System.IO.TextWriter
struct TextWriter_t1733;
// System.Text.Encoding
struct Encoding_t322;
// System.IO.Stream
struct Stream_t27;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
 void Console__cctor_m11297 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
 void Console_SetEncodings_m11298 (Object_t * __this/* static, unused */, Encoding_t322 * ___inputEncoding, Encoding_t322 * ___outputEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
 TextWriter_t1733 * Console_get_Error_m7685 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
 Stream_t27 * Console_Open_m11299 (Object_t * __this/* static, unused */, IntPtr_t107 ___handle, int32_t ___access, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
 Stream_t27 * Console_OpenStandardError_m11300 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
 Stream_t27 * Console_OpenStandardInput_m11301 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
 Stream_t27 * Console_OpenStandardOutput_m11302 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
