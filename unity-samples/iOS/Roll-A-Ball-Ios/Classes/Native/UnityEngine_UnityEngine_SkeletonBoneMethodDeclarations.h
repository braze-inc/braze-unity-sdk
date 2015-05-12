#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t927;
struct SkeletonBone_t927_marshaled;

void SkeletonBone_t927_marshal(const SkeletonBone_t927& unmarshaled, SkeletonBone_t927_marshaled& marshaled);
void SkeletonBone_t927_marshal_back(const SkeletonBone_t927_marshaled& marshaled, SkeletonBone_t927& unmarshaled);
void SkeletonBone_t927_marshal_cleanup(SkeletonBone_t927_marshaled& marshaled);
