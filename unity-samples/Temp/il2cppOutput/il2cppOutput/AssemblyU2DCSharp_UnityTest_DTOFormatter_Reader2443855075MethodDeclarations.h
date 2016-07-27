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

// UnityTest.DTOFormatter/Reader
struct Reader_t2443855075;
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

// System.Void UnityTest.DTOFormatter/Reader::.ctor(System.IO.Stream)
extern "C"  void Reader__ctor_m3627287362 (Reader_t2443855075 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityTest.DTOFormatter/Reader::ReadConvertedNumber(System.Int32)
extern "C"  ByteU5BU5D_t58506160* Reader_ReadConvertedNumber_m3990348489 (Reader_t2443855075 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C"  void Reader_Transfer_m1803548715 (Reader_t2443855075 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.TestResultState&)
extern "C"  void Reader_Transfer_m373716089 (Reader_t2443855075 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Byte&)
extern "C"  void Reader_Transfer_m1456821797 (Reader_t2443855075 * __this, uint8_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Boolean&)
extern "C"  void Reader_Transfer_m3698171473 (Reader_t2443855075 * __this, bool* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Int32&)
extern "C"  void Reader_Transfer_m3812962487 (Reader_t2443855075 * __this, int32_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Single&)
extern "C"  void Reader_Transfer_m2221439717 (Reader_t2443855075 * __this, float* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Double&)
extern "C"  void Reader_Transfer_m3074929710 (Reader_t2443855075 * __this, double* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.String&)
extern "C"  void Reader_Transfer_m3510470766 (Reader_t2443855075 * __this, String_t** ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
