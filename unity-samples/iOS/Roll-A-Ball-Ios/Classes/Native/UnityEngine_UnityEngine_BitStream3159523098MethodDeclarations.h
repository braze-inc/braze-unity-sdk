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

// UnityEngine.BitStream
struct BitStream_t3159523098;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_BitStream3159523098.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_NetworkViewID1450258043.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1281137372.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C"  void BitStream__ctor_m922403980 (BitStream_t3159523098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C"  void BitStream_Serializeb_m1472011233 (BitStream_t3159523098 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C"  void BitStream_Serializec_m1377214154 (BitStream_t3159523098 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C"  void BitStream_Serializes_m1382809078 (BitStream_t3159523098 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C"  void BitStream_Serializei_m2193239290 (BitStream_t3159523098 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C"  void BitStream_Serializef_m145870244 (BitStream_t3159523098 * __this, float* ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serializeq_m2989370589 (BitStream_t3159523098 * __this, Quaternion_t1891715979 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializeq_m999142740 (Il2CppObject * __this /* static, unused */, BitStream_t3159523098 * ___self, Quaternion_t1891715979 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serializev_m2820325190 (BitStream_t3159523098 * __this, Vector3_t3525329789 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializev_m2004861039 (Il2CppObject * __this /* static, unused */, BitStream_t3159523098 * ___self, Vector3_t3525329789 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serializen_m3655149335 (BitStream_t3159523098 * __this, NetworkViewID_t1450258043 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C"  void BitStream_INTERNAL_CALL_Serializen_m4031551296 (Il2CppObject * __this /* static, unused */, BitStream_t3159523098 * ___self, NetworkViewID_t1450258043 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C"  void BitStream_Serialize_m2001881067 (BitStream_t3159523098 * __this, bool* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C"  void BitStream_Serialize_m2728753561 (BitStream_t3159523098 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C"  void BitStream_Serialize_m4204437271 (BitStream_t3159523098 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C"  void BitStream_Serialize_m4204493009 (BitStream_t3159523098 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C"  void BitStream_Serialize_m1473984011 (BitStream_t3159523098 * __this, float* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C"  void BitStream_Serialize_m518836656 (BitStream_t3159523098 * __this, float* ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void BitStream_Serialize_m4132505111 (BitStream_t3159523098 * __this, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serialize_m1228905660 (BitStream_t3159523098 * __this, Quaternion_t1891715979 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C"  void BitStream_Serialize_m981417501 (BitStream_t3159523098 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serialize_m3209712194 (BitStream_t3159523098 * __this, Vector3_t3525329789 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C"  void BitStream_Serialize_m4247024188 (BitStream_t3159523098 * __this, NetworkPlayer_t1281137372 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serialize_m3563231771 (BitStream_t3159523098 * __this, NetworkViewID_t1450258043 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C"  bool BitStream_get_isReading_m3929869641 (BitStream_t3159523098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C"  bool BitStream_get_isWriting_m3632391065 (BitStream_t3159523098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C"  void BitStream_Serialize_m2763015060 (BitStream_t3159523098 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
