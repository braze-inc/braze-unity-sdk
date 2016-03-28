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

// System.Runtime.Remoting.Contexts.Context
struct Context_t305277133;
// System.Runtime.Remoting.Contexts.IContextProperty[]
struct IContextPropertyU5BU5D_t2590912036;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t2251442921;
// System.ContextBoundObject
struct ContextBoundObject_t117700835;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t656787472;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t250303288;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t1838133337;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.MarshalByRefObject
struct MarshalByRefObject_t2055500882;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t4002837491;
// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t2286976850;
// System.LocalDataStoreSlot
struct LocalDataStoreSlot_t3027274751;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ContextBoundObject117700835.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context305277133.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossCon2286976850.h"
#include "mscorlib_System_LocalDataStoreSlot3027274751.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
extern "C"  void Context__ctor_m3857262039 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern "C"  void Context__cctor_m3128910006 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C"  void Context_Finalize_m4240873259 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C"  Context_t305277133 * Context_get_DefaultContext_m1729123572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C"  int32_t Context_get_ContextID_m632177530 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
extern "C"  IContextPropertyU5BU5D_t2590912036* Context_get_ContextProperties_m407806956 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C"  bool Context_get_IsDefaultContext_m1317738768 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
extern "C"  bool Context_get_NeedsContextSink_m1407125469 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_RegisterDynamicProperty_m1382511581 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___prop, ContextBoundObject_t117700835 * ___obj, Context_t305277133 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_UnregisterDynamicProperty_m2713065109 (Il2CppObject * __this /* static, unused */, String_t* ___name, ContextBoundObject_t117700835 * ___obj, Context_t305277133 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  DynamicPropertyCollection_t656787472 * Context_GetDynamicPropertyCollection_m762082460 (Il2CppObject * __this /* static, unused */, ContextBoundObject_t117700835 * ___obj, Context_t305277133 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyGlobalDynamicSinks_m4248729719 (Il2CppObject * __this /* static, unused */, bool ___start, Il2CppObject * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern "C"  bool Context_get_HasGlobalDynamicSinks_m3725000840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyDynamicSinks_m1548895898 (Context_t305277133 * __this, bool ___start, Il2CppObject * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C"  bool Context_get_HasDynamicSinks_m1961314373 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern "C"  bool Context_get_HasExitSinks_m1034415328 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern "C"  Il2CppObject * Context_GetProperty_m3347760518 (Context_t305277133 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
extern "C"  void Context_SetProperty_m3523401879 (Context_t305277133 * __this, Il2CppObject * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern "C"  void Context_Freeze_m2478059108 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern "C"  String_t* Context_ToString_m185373276 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
extern "C"  Il2CppObject * Context_GetServerContextSinkChain_m2728947955 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
extern "C"  Il2CppObject * Context_GetClientContextSinkChain_m420750203 (Context_t305277133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
extern "C"  Il2CppObject * Context_CreateServerObjectSinkChain_m2651975666 (Context_t305277133 * __this, MarshalByRefObject_t2055500882 * ___obj, bool ___forceInternalExecute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern "C"  Il2CppObject * Context_CreateEnvoySink_m2224427853 (Context_t305277133 * __this, MarshalByRefObject_t2055500882 * ___serverObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t305277133 * Context_SwitchToContext_m2536531850 (Il2CppObject * __this /* static, unused */, Context_t305277133 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  Context_t305277133 * Context_CreateNewContext_m3734751481 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
extern "C"  void Context_DoCallBack_m1407016397 (Context_t305277133 * __this, CrossContextDelegate_t2286976850 * ___deleg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
extern "C"  LocalDataStoreSlot_t3027274751 * Context_AllocateDataSlot_m2344201404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t3027274751 * Context_AllocateNamedDataSlot_m2730654867 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern "C"  void Context_FreeNamedDataSlot_m2867480440 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
extern "C"  Il2CppObject * Context_GetData_m2608354665 (Il2CppObject * __this /* static, unused */, LocalDataStoreSlot_t3027274751 * ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t3027274751 * Context_GetNamedDataSlot_m1654679232 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
extern "C"  void Context_SetData_m750447798 (Il2CppObject * __this /* static, unused */, LocalDataStoreSlot_t3027274751 * ___slot, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
