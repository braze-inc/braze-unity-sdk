#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t916;
struct SkeletonBone_t916_marshaled;

void SkeletonBone_t916_marshal(const SkeletonBone_t916& unmarshaled, SkeletonBone_t916_marshaled& marshaled);
void SkeletonBone_t916_marshal_back(const SkeletonBone_t916_marshaled& marshaled, SkeletonBone_t916& unmarshaled);
void SkeletonBone_t916_marshal_cleanup(SkeletonBone_t916_marshaled& marshaled);
