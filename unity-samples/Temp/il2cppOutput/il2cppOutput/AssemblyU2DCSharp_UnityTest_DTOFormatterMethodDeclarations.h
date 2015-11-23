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
struct DTOFormatter_t189;
// UnityTest.ResultDTO
struct ResultDTO_t208;
// UnityTest.DTOFormatter/ITransferInterface
struct ITransferInterface_t261;
// System.IO.Stream
struct Stream_t68;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.DTOFormatter::.ctor()
extern "C" void DTOFormatter__ctor_m794 (DTOFormatter_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Transfer(UnityTest.ResultDTO,UnityTest.DTOFormatter/ITransferInterface)
extern "C" void DTOFormatter_Transfer_m795 (DTOFormatter_t189 * __this, ResultDTO_t208 * ___dto, Object_t * ___transfer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Serialize(System.IO.Stream,UnityTest.ResultDTO)
extern "C" void DTOFormatter_Serialize_m796 (DTOFormatter_t189 * __this, Stream_t68 * ___stream, ResultDTO_t208 * ___dto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.DTOFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * DTOFormatter_Deserialize_m797 (DTOFormatter_t189 * __this, Stream_t68 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
