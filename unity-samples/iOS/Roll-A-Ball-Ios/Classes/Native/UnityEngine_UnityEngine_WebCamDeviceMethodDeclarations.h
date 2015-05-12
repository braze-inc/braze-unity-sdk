#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t903;
struct WebCamDevice_t903_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m4640 (WebCamDevice_t903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m4641 (WebCamDevice_t903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t903_marshal(const WebCamDevice_t903& unmarshaled, WebCamDevice_t903_marshaled& marshaled);
void WebCamDevice_t903_marshal_back(const WebCamDevice_t903_marshaled& marshaled, WebCamDevice_t903& unmarshaled);
void WebCamDevice_t903_marshal_cleanup(WebCamDevice_t903_marshaled& marshaled);
