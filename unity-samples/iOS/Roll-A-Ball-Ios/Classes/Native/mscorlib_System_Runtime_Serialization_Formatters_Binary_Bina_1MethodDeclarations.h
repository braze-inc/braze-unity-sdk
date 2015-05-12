#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2094;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2070;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2106;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t27;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2107;
// System.IO.BinaryReader
struct BinaryReader_t28;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
 void BinaryFormatter__ctor_m10452 (BinaryFormatter_t2094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void BinaryFormatter__ctor_m10453 (BinaryFormatter_t2094 * __this, Object_t * ___selector, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
 Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m10454 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
 void BinaryFormatter_set_AssemblyFormat_m10455 (BinaryFormatter_t2094 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
 SerializationBinder_t2106 * BinaryFormatter_get_Binder_m10456 (BinaryFormatter_t2094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
 StreamingContext_t961  BinaryFormatter_get_Context_m10457 (BinaryFormatter_t2094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
 Object_t * BinaryFormatter_get_SurrogateSelector_m10458 (BinaryFormatter_t2094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
 int32_t BinaryFormatter_get_FilterLevel_m10459 (BinaryFormatter_t2094 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
 Object_t * BinaryFormatter_Deserialize_m10460 (BinaryFormatter_t2094 * __this, Stream_t27 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
 Object_t * BinaryFormatter_NoCheckDeserialize_m10461 (BinaryFormatter_t2094 * __this, Stream_t27 * ___serializationStream, HeaderHandler_t2107 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
 void BinaryFormatter_ReadBinaryHeader_m10462 (BinaryFormatter_t2094 * __this, BinaryReader_t28 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
