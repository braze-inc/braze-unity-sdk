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

// UnityTest.DTOFormatter/Writer
struct Writer_t2599260307;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType794775489.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState4167279327.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityTest.DTOFormatter/Writer::.ctor(System.IO.Stream)
extern "C"  void Writer__ctor_m2702458258 (Writer_t2599260307 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::WriteConvertedNumber(System.Byte[])
extern "C"  void Writer_WriteConvertedNumber_m1884254308 (Writer_t2599260307 * __this, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C"  void Writer_Transfer_m1136950235 (Writer_t2599260307 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.TestResultState&)
extern "C"  void Writer_Transfer_m2388884521 (Writer_t2599260307 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Byte&)
extern "C"  void Writer_Transfer_m2396819925 (Writer_t2599260307 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Boolean&)
extern "C"  void Writer_Transfer_m3995632801 (Writer_t2599260307 * __this, bool* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Int32&)
extern "C"  void Writer_Transfer_m2888133383 (Writer_t2599260307 * __this, int32_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Single&)
extern "C"  void Writer_Transfer_m3616508565 (Writer_t2599260307 * __this, float* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Double&)
extern "C"  void Writer_Transfer_m175031262 (Writer_t2599260307 * __this, double* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.String&)
extern "C"  void Writer_Transfer_m610572318 (Writer_t2599260307 * __this, String_t** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
