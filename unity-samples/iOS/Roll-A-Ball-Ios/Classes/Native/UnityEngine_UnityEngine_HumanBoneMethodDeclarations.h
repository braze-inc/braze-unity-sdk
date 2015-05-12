#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t918;
struct HumanBone_t918_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
 String_t* HumanBone_get_boneName_m4698 (HumanBone_t918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
 void HumanBone_set_boneName_m4699 (HumanBone_t918 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
 String_t* HumanBone_get_humanName_m4700 (HumanBone_t918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
 void HumanBone_set_humanName_m4701 (HumanBone_t918 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t918_marshal(const HumanBone_t918& unmarshaled, HumanBone_t918_marshaled& marshaled);
void HumanBone_t918_marshal_back(const HumanBone_t918_marshaled& marshaled, HumanBone_t918& unmarshaled);
void HumanBone_t918_marshal_cleanup(HumanBone_t918_marshaled& marshaled);
