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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2900994746;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3468179849;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord3468179849.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2776331335.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C"  void FixupRecord__ctor_m118269336 (FixupRecord_t2900994746 * __this, ObjectRecord_t3468179849 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t3468179849 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void FixupRecord_FixupImpl_m200950775 (FixupRecord_t2900994746 * __this, ObjectManager_t2776331335 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
