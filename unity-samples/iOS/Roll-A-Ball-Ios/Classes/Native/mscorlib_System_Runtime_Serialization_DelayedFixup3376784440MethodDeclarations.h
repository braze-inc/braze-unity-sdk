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

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t3376784440;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3468179849;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord3468179849.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2776331335.h"

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C"  void DelayedFixupRecord__ctor_m4059832882 (DelayedFixupRecord_t3376784440 * __this, ObjectRecord_t3468179849 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t3468179849 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void DelayedFixupRecord_FixupImpl_m2011618677 (DelayedFixupRecord_t3376784440 * __this, ObjectManager_t2776331335 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
