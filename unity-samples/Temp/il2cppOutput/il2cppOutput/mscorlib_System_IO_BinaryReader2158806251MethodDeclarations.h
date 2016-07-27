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

// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m449904828 (BinaryReader_t2158806251 * __this, Stream_t219029575 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryReader__ctor_m3922058197 (BinaryReader_t2158806251 * __this, Stream_t219029575 * ___input0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C"  void BinaryReader_System_IDisposable_Dispose_m2749408410 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.BinaryReader::get_BaseStream()
extern "C"  Stream_t219029575 * BinaryReader_get_BaseStream_m2902401947 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Close()
extern "C"  void BinaryReader_Close_m52775227 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C"  void BinaryReader_Dispose_m2135076121 (BinaryReader_t2158806251 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C"  void BinaryReader_FillBuffer_m3729291059 (BinaryReader_t2158806251 * __this, int32_t ___numBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C"  int32_t BinaryReader_Read_m2496479153 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m3280906008 (BinaryReader_t2158806251 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m2981101450 (BinaryReader_t2158806251 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t BinaryReader_ReadCharBytes_m1651708170 (BinaryReader_t2158806251 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, int32_t* ___bytes_read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C"  int32_t BinaryReader_Read7BitEncodedInt_m1880666088 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C"  bool BinaryReader_ReadBoolean_m1888598835 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C"  uint8_t BinaryReader_ReadByte_m3105954249 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* BinaryReader_ReadBytes_m3249452767 (BinaryReader_t2158806251 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C"  uint16_t BinaryReader_ReadChar_m2116266889 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C"  Decimal_t1688557254  BinaryReader_ReadDecimal_m2694462597 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C"  double BinaryReader_ReadDouble_m2474061801 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C"  int16_t BinaryReader_ReadInt16_m3968581195 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C"  int32_t BinaryReader_ReadInt32_m1620214591 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C"  int64_t BinaryReader_ReadInt64_m2883282109 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C"  int8_t BinaryReader_ReadSByte_m963271833 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C"  String_t* BinaryReader_ReadString_m1372899305 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C"  float BinaryReader_ReadSingle_m2118302857 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C"  uint16_t BinaryReader_ReadUInt16_m3403093289 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C"  uint32_t BinaryReader_ReadUInt32_m3616500457 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C"  uint64_t BinaryReader_ReadUInt64_m4114149001 (BinaryReader_t2158806251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C"  void BinaryReader_CheckBuffer_m244572668 (BinaryReader_t2158806251 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
