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

// UnityTest.DTOFormatter
struct DTOFormatter_t2820501064;
// UnityTest.ResultDTO
struct ResultDTO_t2261364959;
// UnityTest.DTOFormatter/ITransferInterface
struct ITransferInterface_t1672824901;
// System.IO.Stream
struct Stream_t219029575;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO2261364959.h"
#include "mscorlib_System_IO_Stream219029575.h"

// System.Void UnityTest.DTOFormatter::.ctor()
extern "C"  void DTOFormatter__ctor_m2951299593 (DTOFormatter_t2820501064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Transfer(UnityTest.ResultDTO,UnityTest.DTOFormatter/ITransferInterface)
extern "C"  void DTOFormatter_Transfer_m216677979 (DTOFormatter_t2820501064 * __this, ResultDTO_t2261364959 * ___dto0, Il2CppObject * ___transfer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Serialize(System.IO.Stream,UnityTest.ResultDTO)
extern "C"  void DTOFormatter_Serialize_m449696751 (DTOFormatter_t2820501064 * __this, Stream_t219029575 * ___stream0, ResultDTO_t2261364959 * ___dto1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.DTOFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * DTOFormatter_Deserialize_m2519322472 (DTOFormatter_t2820501064 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
