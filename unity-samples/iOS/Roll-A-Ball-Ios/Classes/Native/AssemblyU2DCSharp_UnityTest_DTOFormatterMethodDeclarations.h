#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.DTOFormatter
struct DTOFormatter_t208;
// UnityTest.ResultDTO
struct ResultDTO_t209;
// UnityTest.DTOFormatter/ITransferInterface
struct ITransferInterface_t210;
// System.IO.Stream
struct Stream_t27;
// System.Object
struct Object_t;

// System.Void UnityTest.DTOFormatter::.ctor()
 void DTOFormatter__ctor_m814 (DTOFormatter_t208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Transfer(UnityTest.ResultDTO,UnityTest.DTOFormatter/ITransferInterface)
 void DTOFormatter_Transfer_m815 (DTOFormatter_t208 * __this, ResultDTO_t209 * ___dto, Object_t * ___transfer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter::Serialize(System.IO.Stream,UnityTest.ResultDTO)
 void DTOFormatter_Serialize_m816 (DTOFormatter_t208 * __this, Stream_t27 * ___stream, ResultDTO_t209 * ___dto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.DTOFormatter::Deserialize(System.IO.Stream)
 Object_t * DTOFormatter_Deserialize_m817 (DTOFormatter_t208 * __this, Stream_t27 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
