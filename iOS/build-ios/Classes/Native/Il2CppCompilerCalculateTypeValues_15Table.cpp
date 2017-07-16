#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t2624587989;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t3036259762;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t55758003;
// System.Byte[]
struct ByteU5BU5D_t3921465462;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1102941555;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t2961235293;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t3501826725;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t2444217134;
// UnityEngine.Object
struct Object_t3758817623;
// System.IntPtr[]
struct IntPtrU5BU5D_t906629426;
// System.Collections.IDictionary
struct IDictionary_t3903893831;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t3782594301;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t1800337792;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1304718734;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3052346322;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3472970178;
// System.Char[]
struct CharU5BU5D_t2139671263;
// System.Object[]
struct ObjectU5BU5D_t2990731809;
// System.Void
struct Void_t1151422322;
// UnityEngine.Events.UnityAction
struct UnityAction_t2750753671;
// UnityEngine.GameObject
struct GameObject_t2397973013;
// UnityEngine.Camera
struct Camera_t229301699;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t2376157752;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1291534238;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3029873440;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t3743706679;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4095986111;
// System.Type
struct Type_t;
// UnityEngine.ILogHandler
struct ILogHandler_t734083575;
// System.Int32[]
struct Int32U5BU5D_t2913122842;
// System.IAsyncResult
struct IAsyncResult_t3701312188;
// System.AsyncCallback
struct AsyncCallback_t354763957;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t1850767521;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2575342295;

struct Object_t3758817623_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PERSISTENTCALLGROUP_T2961235293_H
#define PERSISTENTCALLGROUP_T2961235293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t2961235293  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t2624587989 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t2961235293, ___m_Calls_0)); }
	inline List_1_t2624587989 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t2624587989 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t2624587989 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T2961235293_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T1850767521_H
#define PLAYEREDITORCONNECTIONEVENTS_T1850767521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t1850767521  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t3036259762 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t55758003 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t55758003 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1850767521, ___messageTypeSubscribers_0)); }
	inline List_1_t3036259762 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t3036259762 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t3036259762 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1850767521, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t55758003 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t55758003 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t55758003 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t1850767521, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t55758003 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t55758003 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t55758003 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T1850767521_H
#ifndef MESSAGEEVENTARGS_T1902265908_H
#define MESSAGEEVENTARGS_T1902265908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1902265908  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t3921465462* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1902265908, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1902265908, ___data_1)); }
	inline ByteU5BU5D_t3921465462* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3921465462** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3921465462* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1902265908_H
#ifndef PLAYABLEEXTENSIONS_T157073375_H
#define PLAYABLEEXTENSIONS_T157073375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t157073375  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T157073375_H
#ifndef PLAYABLEBEHAVIOUR_T756751090_H
#define PLAYABLEBEHAVIOUR_T756751090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t756751090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T756751090_H
#ifndef VALUETYPE_T686579045_H
#define VALUETYPE_T686579045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t686579045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t686579045_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t686579045_marshaled_com
{
};
#endif // VALUETYPE_T686579045_H
#ifndef UNITYSTRING_T525386781_H
#define UNITYSTRING_T525386781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t525386781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T525386781_H
#ifndef UNITYEVENTBASE_T1616450127_H
#define UNITYEVENTBASE_T1616450127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t1616450127  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1102941555 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t2961235293 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t1616450127, ___m_Calls_0)); }
	inline InvokableCallList_t1102941555 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1102941555 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1102941555 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t1616450127, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t2961235293 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t2961235293 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t2961235293 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t1616450127, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t1616450127, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T1616450127_H
#ifndef INVOKABLECALLLIST_T1102941555_H
#define INVOKABLECALLLIST_T1102941555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t1102941555  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t3501826725 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t3501826725 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t3501826725 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t1102941555, ___m_PersistentCalls_0)); }
	inline List_1_t3501826725 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t3501826725 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t3501826725 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t1102941555, ___m_RuntimeCalls_1)); }
	inline List_1_t3501826725 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t3501826725 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t3501826725 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t1102941555, ___m_ExecutingCalls_2)); }
	inline List_1_t3501826725 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t3501826725 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t3501826725 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t1102941555, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T1102941555_H
#ifndef MESSAGETYPESUBSCRIBERS_T2309276150_H
#define MESSAGETYPESUBSCRIBERS_T2309276150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t2309276150  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t2444217134 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2309276150, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2309276150, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2309276150, ___messageCallback_2)); }
	inline MessageEvent_t2444217134 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t2444217134 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t2444217134 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T2309276150_H
#ifndef ATTRIBUTE_T1257886843_H
#define ATTRIBUTE_T1257886843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1257886843  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1257886843_H
#ifndef BASEINVOKABLECALL_T2774843113_H
#define BASEINVOKABLECALL_T2774843113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2774843113  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2774843113_H
#ifndef ARGUMENTCACHE_T3743706679_H
#define ARGUMENTCACHE_T3743706679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t3743706679  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t3758817623 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_ObjectArgument_0)); }
	inline Object_t3758817623 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t3758817623 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t3758817623 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t3743706679, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T3743706679_H
#ifndef EXCEPTION_T2594945196_H
#define EXCEPTION_T2594945196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2594945196  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t906629426* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2594945196 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t906629426* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t906629426** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t906629426* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___inner_exception_1)); }
	inline Exception_t2594945196 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2594945196 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2594945196 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2594945196, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2594945196_H
#ifndef STACKTRACEUTILITY_T1467088544_H
#define STACKTRACEUTILITY_T1467088544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1467088544  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1467088544_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1467088544_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1467088544_H
#ifndef RENDERPIPELINEMANAGER_T1768228152_H
#define RENDERPIPELINEMANAGER_T1768228152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t1768228152  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t1768228152_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1768228152_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1768228152_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T1768228152_H
#ifndef SCRIPTINGUTILS_T713398403_H
#define SCRIPTINGUTILS_T713398403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t713398403  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T713398403_H
#ifndef SENDMOUSEEVENTS_T4008410427_H
#define SENDMOUSEEVENTS_T4008410427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t4008410427  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t4008410427_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1304718734* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1304718734* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1304718734* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t3052346322* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4008410427_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4008410427_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1304718734* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1304718734** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1304718734* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4008410427_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1304718734* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1304718734** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1304718734* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4008410427_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1304718734* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1304718734** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1304718734* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4008410427_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t3052346322* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t3052346322** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t3052346322* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T4008410427_H
#ifndef CUSTOMYIELDINSTRUCTION_T1319872315_H
#define CUSTOMYIELDINSTRUCTION_T1319872315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1319872315  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1319872315_H
#ifndef SYNCHRONIZATIONCONTEXT_T2355391195_H
#define SYNCHRONIZATIONCONTEXT_T2355391195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2355391195  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2355391195_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2355391195 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2355391195_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2355391195 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2355391195 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2355391195 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2355391195_H
#ifndef RECT_T2938746414_H
#define RECT_T2938746414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2938746414 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2938746414, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2938746414, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2938746414, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2938746414, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2938746414_H
#ifndef READONLYATTRIBUTE_T2706604423_H
#define READONLYATTRIBUTE_T2706604423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2706604423  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2706604423_H
#ifndef READWRITEATTRIBUTE_T76370668_H
#define READWRITEATTRIBUTE_T76370668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t76370668  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T76370668_H
#ifndef WRITEONLYATTRIBUTE_T2062064953_H
#define WRITEONLYATTRIBUTE_T2062064953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t2062064953  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T2062064953_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T2498442260_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T2498442260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t2498442260  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T2498442260_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3472970178 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3472970178 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3472970178 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3472970178 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267560313_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267560313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t3267560313  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3267560313_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T94213565_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T94213565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t94213565  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T94213565_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1647539422_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1647539422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1647539422  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1647539422_H
#ifndef ENUM_T2016453144_H
#define ENUM_T2016453144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2016453144  : public ValueType_t686579045
{
public:

public:
};

struct Enum_t2016453144_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2139671263* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2016453144_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2139671263* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2139671263** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2139671263* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2016453144_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2016453144_marshaled_com
{
};
#endif // ENUM_T2016453144_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T219895016_H
#define TYPEINFERENCERULEATTRIBUTE_T219895016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t219895016  : public Attribute_t1257886843
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t219895016, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T219895016_H
#ifndef DEFAULTVALUEATTRIBUTE_T2107182685_H
#define DEFAULTVALUEATTRIBUTE_T2107182685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t2107182685  : public Attribute_t1257886843
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2107182685, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2107182685_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T1225456123_H
#define EXCLUDEFROMDOCSATTRIBUTE_T1225456123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t1225456123  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T1225456123_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T1343314935_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T1343314935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t1343314935  : public Attribute_t1257886843
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t1343314935, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T1343314935_H
#ifndef UNITYEVENT_1_T1354089560_H
#define UNITYEVENT_1_T1354089560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t1354089560  : public UnityEventBase_t1616450127
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2990731809* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1354089560, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2990731809* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2990731809** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2990731809* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T1354089560_H
#ifndef MOVEDFROMATTRIBUTE_T2092678997_H
#define MOVEDFROMATTRIBUTE_T2092678997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct  MovedFromAttribute_t2092678997  : public Attribute_t1257886843
{
public:
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<IsInDifferentAssembly>k__BackingField
	bool ___U3CIsInDifferentAssemblyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNamespaceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MovedFromAttribute_t2092678997, ___U3CNamespaceU3Ek__BackingField_0)); }
	inline String_t* get_U3CNamespaceU3Ek__BackingField_0() const { return ___U3CNamespaceU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNamespaceU3Ek__BackingField_0() { return &___U3CNamespaceU3Ek__BackingField_0; }
	inline void set_U3CNamespaceU3Ek__BackingField_0(String_t* value)
	{
		___U3CNamespaceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNamespaceU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MovedFromAttribute_t2092678997, ___U3CIsInDifferentAssemblyU3Ek__BackingField_1)); }
	inline bool get_U3CIsInDifferentAssemblyU3Ek__BackingField_1() const { return ___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return &___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline void set_U3CIsInDifferentAssemblyU3Ek__BackingField_1(bool value)
	{
		___U3CIsInDifferentAssemblyU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEDFROMATTRIBUTE_T2092678997_H
#ifndef UNITYEVENT_1_T1300182335_H
#define UNITYEVENT_1_T1300182335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t1300182335  : public UnityEventBase_t1616450127
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2990731809* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1300182335, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2990731809* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2990731809** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2990731809* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T1300182335_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T102101072_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T102101072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t102101072  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T102101072_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T3040658619_H
#define USEDBYNATIVECODEATTRIBUTE_T3040658619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t3040658619  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T3040658619_H
#ifndef SINGLE_T61887045_H
#define SINGLE_T61887045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t61887045 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t61887045, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T61887045_H
#ifndef WAITFORSECONDSREALTIME_T3236613700_H
#define WAITFORSECONDSREALTIME_T3236613700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t3236613700  : public CustomYieldInstruction_t1319872315
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t3236613700, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T3236613700_H
#ifndef VECTOR4_T3079210060_H
#define VECTOR4_T3079210060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3079210060 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3079210060, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3079210060, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3079210060, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3079210060, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3079210060_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3079210060  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3079210060  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3079210060  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3079210060  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3079210060_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3079210060  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3079210060 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3079210060  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3079210060_StaticFields, ___oneVector_6)); }
	inline Vector4_t3079210060  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3079210060 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3079210060  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3079210060_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3079210060  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3079210060 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3079210060  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3079210060_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3079210060  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3079210060 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3079210060  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3079210060_H
#ifndef NATIVECONTAINERATTRIBUTE_T1813717609_H
#define NATIVECONTAINERATTRIBUTE_T1813717609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t1813717609  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T1813717609_H
#ifndef PREFERBINARYSERIALIZATION_T3604512660_H
#define PREFERBINARYSERIALIZATION_T3604512660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t3604512660  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T3604512660_H
#ifndef SERIALIZEFIELD_T3300608734_H
#define SERIALIZEFIELD_T3300608734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3300608734  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3300608734_H
#ifndef VECTOR2_T3817489729_H
#define VECTOR2_T3817489729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3817489729 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3817489729, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3817489729, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3817489729_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3817489729  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3817489729  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3817489729  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3817489729  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3817489729  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3817489729  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3817489729  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3817489729  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3817489729  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3817489729 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3817489729  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___oneVector_3)); }
	inline Vector2_t3817489729  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3817489729 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3817489729  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___upVector_4)); }
	inline Vector2_t3817489729  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3817489729 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3817489729  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___downVector_5)); }
	inline Vector2_t3817489729  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3817489729 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3817489729  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___leftVector_6)); }
	inline Vector2_t3817489729  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3817489729 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3817489729  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___rightVector_7)); }
	inline Vector2_t3817489729  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3817489729 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3817489729  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3817489729  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3817489729 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3817489729  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3817489729_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3817489729  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3817489729 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3817489729  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3817489729_H
#ifndef UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T544044167_H
#define UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T544044167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityAPICompatibilityVersionAttribute
struct  UnityAPICompatibilityVersionAttribute_t544044167  : public Attribute_t1257886843
{
public:
	// System.String UnityEngine.UnityAPICompatibilityVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(UnityAPICompatibilityVersionAttribute_t544044167, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T544044167_H
#ifndef SERIALIZEPRIVATEVARIABLES_T1186728058_H
#define SERIALIZEPRIVATEVARIABLES_T1186728058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t1186728058  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T1186728058_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1151422322_H
#define VOID_T1151422322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1151422322 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1151422322_H
#ifndef INVOKABLECALL_T1103208137_H
#define INVOKABLECALL_T1103208137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t1103208137  : public BaseInvokableCall_t2774843113
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t2750753671 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t1103208137, ___Delegate_0)); }
	inline UnityAction_t2750753671 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t2750753671 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t2750753671 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T1103208137_H
#ifndef VECTOR3_T1180042186_H
#define VECTOR3_T1180042186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1180042186 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1180042186, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1180042186, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1180042186, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1180042186_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1180042186  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1180042186  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1180042186  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1180042186  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1180042186  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1180042186  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1180042186  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1180042186  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1180042186  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1180042186  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1180042186  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1180042186 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1180042186  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___oneVector_5)); }
	inline Vector3_t1180042186  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1180042186 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1180042186  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___upVector_6)); }
	inline Vector3_t1180042186  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1180042186 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1180042186  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___downVector_7)); }
	inline Vector3_t1180042186  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1180042186 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1180042186  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___leftVector_8)); }
	inline Vector3_t1180042186  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1180042186 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1180042186  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___rightVector_9)); }
	inline Vector3_t1180042186  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1180042186 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1180042186  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1180042186  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1180042186 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1180042186  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___backVector_11)); }
	inline Vector3_t1180042186  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1180042186 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1180042186  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1180042186  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1180042186 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1180042186  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1180042186_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1180042186  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1180042186 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1180042186  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1180042186_H
#ifndef PROPERTYATTRIBUTE_T2482611668_H
#define PROPERTYATTRIBUTE_T2482611668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2482611668  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2482611668_H
#ifndef SELECTIONBASEATTRIBUTE_T1033904542_H
#define SELECTIONBASEATTRIBUTE_T1033904542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t1033904542  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T1033904542_H
#ifndef HITINFO_T629799351_H
#define HITINFO_T629799351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t629799351 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t2397973013 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t229301699 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t629799351, ___target_0)); }
	inline GameObject_t2397973013 * get_target_0() const { return ___target_0; }
	inline GameObject_t2397973013 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t2397973013 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t629799351, ___camera_1)); }
	inline Camera_t229301699 * get_camera_1() const { return ___camera_1; }
	inline Camera_t229301699 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t229301699 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t629799351_marshaled_pinvoke
{
	GameObject_t2397973013 * ___target_0;
	Camera_t229301699 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t629799351_marshaled_com
{
	GameObject_t2397973013 * ___target_0;
	Camera_t229301699 * ___camera_1;
};
#endif // HITINFO_T629799351_H
#ifndef UNITYEVENT_T520446499_H
#define UNITYEVENT_T520446499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t520446499  : public UnityEventBase_t1616450127
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2990731809* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t520446499, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2990731809* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2990731809** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2990731809* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T520446499_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T969910382_H
#define UNITYSYNCHRONIZATIONCONTEXT_T969910382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t969910382  : public SynchronizationContext_t2355391195
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t2376157752 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t969910382, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t2376157752 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t2376157752 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t2376157752 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T969910382_H
#ifndef WORKREQUEST_T1184331131_H
#define WORKREQUEST_T1184331131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1184331131 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t1291534238 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1184331131, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t1291534238 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t1291534238 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t1291534238 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1184331131, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1184331131_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1184331131_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T1184331131_H
#ifndef RANGEINT_T398345095_H
#define RANGEINT_T398345095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t398345095 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t398345095, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t398345095, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T398345095_H
#ifndef UNITYEXCEPTION_T3961142061_H
#define UNITYEXCEPTION_T3961142061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3961142061  : public Exception_t2594945196
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t3961142061, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3961142061_H
#ifndef RENDERTEXTUREFORMAT_T3710218555_H
#define RENDERTEXTUREFORMAT_T3710218555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t3710218555 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t3710218555, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T3710218555_H
#ifndef VRTEXTUREUSAGE_T3857121921_H
#define VRTEXTUREUSAGE_T3857121921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3857121921 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3857121921, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTEXTUREUSAGE_T3857121921_H
#ifndef TYPEINFERENCERULES_T3662879442_H
#define TYPEINFERENCERULES_T3662879442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t3662879442 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t3662879442, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T3662879442_H
#ifndef LOGTYPE_T681867598_H
#define LOGTYPE_T681867598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t681867598 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t681867598, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T681867598_H
#ifndef PLAYABLEOUTPUTHANDLE_T3265000596_H
#define PLAYABLEOUTPUTHANDLE_T3265000596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3265000596 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3265000596, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3265000596, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3265000596_H
#ifndef OBJECT_T3758817623_H
#define OBJECT_T3758817623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3758817623  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3758817623, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3758817623_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3758817623_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3758817623_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3758817623_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3758817623_H
#ifndef DATASTREAMTYPE_T1795628310_H
#define DATASTREAMTYPE_T1795628310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t1795628310 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t1795628310, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T1795628310_H
#ifndef RENDERTEXTURECREATIONFLAGS_T2729105710_H
#define RENDERTEXTURECREATIONFLAGS_T2729105710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t2729105710 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t2729105710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURECREATIONFLAGS_T2729105710_H
#ifndef RENDERTEXTUREMEMORYLESS_T1221324765_H
#define RENDERTEXTUREMEMORYLESS_T1221324765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t1221324765 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t1221324765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREMEMORYLESS_T1221324765_H
#ifndef COLORWRITEMASK_T4124953067_H
#define COLORWRITEMASK_T4124953067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t4124953067 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t4124953067, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T4124953067_H
#ifndef CONNECTIONCHANGEEVENT_T55758003_H
#define CONNECTIONCHANGEEVENT_T55758003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t55758003  : public UnityEvent_1_t1300182335
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T55758003_H
#ifndef STENCILOP_T1375146959_H
#define STENCILOP_T1375146959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t1375146959 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t1375146959, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T1375146959_H
#ifndef SHADOWSAMPLINGMODE_T1273116270_H
#define SHADOWSAMPLINGMODE_T1273116270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t1273116270 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t1273116270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWSAMPLINGMODE_T1273116270_H
#ifndef TEXTUREDIMENSION_T3431012438_H
#define TEXTUREDIMENSION_T3431012438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t3431012438 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureDimension_t3431012438, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREDIMENSION_T3431012438_H
#ifndef KEYCODE_T1530770857_H
#define KEYCODE_T1530770857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1530770857 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1530770857, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T1530770857_H
#ifndef MATHFINTERNAL_T991434448_H
#define MATHFINTERNAL_T991434448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t991434448 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t991434448__padding[1];
	};

public:
};

struct MathfInternal_t991434448_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t991434448_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t991434448_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t991434448_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T991434448_H
#ifndef PLANE_T3835345337_H
#define PLANE_T3835345337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3835345337 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t1180042186  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3835345337, ___m_Normal_0)); }
	inline Vector3_t1180042186  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t1180042186 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t1180042186  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3835345337, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3835345337_H
#ifndef TOOLTIPATTRIBUTE_T994560025_H
#define TOOLTIPATTRIBUTE_T994560025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t994560025  : public PropertyAttribute_t2482611668
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t994560025, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T994560025_H
#ifndef SPACEATTRIBUTE_T759169708_H
#define SPACEATTRIBUTE_T759169708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t759169708  : public PropertyAttribute_t2482611668
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t759169708, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T759169708_H
#ifndef RANGEATTRIBUTE_T2370089688_H
#define RANGEATTRIBUTE_T2370089688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t2370089688  : public PropertyAttribute_t2482611668
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t2370089688, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t2370089688, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T2370089688_H
#ifndef TEXTAREAATTRIBUTE_T3720875507_H
#define TEXTAREAATTRIBUTE_T3720875507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3720875507  : public PropertyAttribute_t2482611668
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3720875507, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3720875507, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T3720875507_H
#ifndef RAY_T769097630_H
#define RAY_T769097630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t769097630 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t1180042186  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t1180042186  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t769097630, ___m_Origin_0)); }
	inline Vector3_t1180042186  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t1180042186 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t1180042186  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t769097630, ___m_Direction_1)); }
	inline Vector3_t1180042186  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t1180042186 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t1180042186  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T769097630_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2117170185_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2117170185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2117170185  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2117170185, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2117170185_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T2627237811_H
#define TOUCHSCREENKEYBOARDTYPE_T2627237811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t2627237811 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t2627237811, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T2627237811_H
#ifndef DELEGATE_T641959727_H
#define DELEGATE_T641959727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t641959727  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3029873440 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t641959727, ___data_8)); }
	inline DelegateData_t3029873440 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3029873440 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3029873440 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T641959727_H
#ifndef PERSISTENTLISTENERMODE_T3005777257_H
#define PERSISTENTLISTENERMODE_T3005777257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t3005777257 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t3005777257, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T3005777257_H
#ifndef UNITYEVENTCALLSTATE_T4087745077_H
#define UNITYEVENTCALLSTATE_T4087745077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t4087745077 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t4087745077, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T4087745077_H
#ifndef FLAGS_T1801613619_H
#define FLAGS_T1801613619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t1801613619 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t1801613619, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T1801613619_H
#ifndef MESSAGEEVENT_T2444217134_H
#define MESSAGEEVENT_T2444217134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t2444217134  : public UnityEvent_1_t1354089560
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T2444217134_H
#ifndef TRACKEDREFERENCE_T2510267492_H
#define TRACKEDREFERENCE_T2510267492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t2510267492  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t2510267492, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2510267492_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2510267492_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T2510267492_H
#ifndef PERSISTENTCALL_T1897604377_H
#define PERSISTENTCALL_T1897604377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t1897604377  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t3758817623 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t3743706679 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t1897604377, ___m_Target_0)); }
	inline Object_t3758817623 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t3758817623 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t3758817623 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t1897604377, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t1897604377, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t1897604377, ___m_Arguments_3)); }
	inline ArgumentCache_t3743706679 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t3743706679 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t3743706679 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t1897604377, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T1897604377_H
#ifndef MULTICASTDELEGATE_T1163131344_H
#define MULTICASTDELEGATE_T1163131344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1163131344  : public Delegate_t641959727
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1163131344 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1163131344 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1163131344, ___prev_9)); }
	inline MulticastDelegate_t1163131344 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1163131344 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1163131344 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1163131344, ___kpm_next_10)); }
	inline MulticastDelegate_t1163131344 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1163131344 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1163131344 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1163131344_H
#ifndef FRAMEDATA_T399791071_H
#define FRAMEDATA_T399791071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t399791071 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t399791071, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T399791071_H
#ifndef PLAYABLEBINDING_T1456281242_H
#define PLAYABLEBINDING_T1456281242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t1456281242 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t3758817623 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t1456281242__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t3758817623 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t3758817623 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t3758817623 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t1456281242_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t4095986111* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t4095986111* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t4095986111** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t4095986111* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t1456281242_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t1456281242_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3758817623_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t1456281242__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t1456281242_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3758817623_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t1456281242__padding[1];
	};
};
#endif // PLAYABLEBINDING_T1456281242_H
#ifndef SCRIPTABLEOBJECT_T866670570_H
#define SCRIPTABLEOBJECT_T866670570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t866670570  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t866670570_marshaled_pinvoke : public Object_t3758817623_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t866670570_marshaled_com : public Object_t3758817623_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T866670570_H
#ifndef SCRIPTPLAYABLEOUTPUT_T1393225784_H
#define SCRIPTPLAYABLEOUTPUT_T1393225784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t1393225784 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t3265000596  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t1393225784, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3265000596  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3265000596 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3265000596  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T1393225784_H
#ifndef LOGGER_T2095089308_H
#define LOGGER_T2095089308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t2095089308  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t2095089308, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t2095089308, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t2095089308, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T2095089308_H
#ifndef RENDERTEXTUREDESCRIPTOR_T4222607682_H
#define RENDERTEXTUREDESCRIPTOR_T4222607682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t4222607682 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::<colorFormat>k__BackingField
	int32_t ___U3CcolorFormatU3Ek__BackingField_4;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_5;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_7;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_8;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_9;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_10;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcolorFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CcolorFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CcolorFormatU3Ek__BackingField_4() const { return ___U3CcolorFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcolorFormatU3Ek__BackingField_4() { return &___U3CcolorFormatU3Ek__BackingField_4; }
	inline void set_U3CcolorFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CcolorFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ____depthBufferBits_5)); }
	inline int32_t get__depthBufferBits_5() const { return ____depthBufferBits_5; }
	inline int32_t* get_address_of__depthBufferBits_5() { return &____depthBufferBits_5; }
	inline void set__depthBufferBits_5(int32_t value)
	{
		____depthBufferBits_5 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CdimensionU3Ek__BackingField_7)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_7() const { return ___U3CdimensionU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_7() { return &___U3CdimensionU3Ek__BackingField_7; }
	inline void set_U3CdimensionU3Ek__BackingField_7(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CshadowSamplingModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_8() const { return ___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return &___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CvrUsageU3Ek__BackingField_9)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_9() const { return ___U3CvrUsageU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_9() { return &___U3CvrUsageU3Ek__BackingField_9; }
	inline void set_U3CvrUsageU3Ek__BackingField_9(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__flags_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ____flags_10)); }
	inline int32_t get__flags_10() const { return ____flags_10; }
	inline int32_t* get_address_of__flags_10() { return &____flags_10; }
	inline void set__flags_10(int32_t value)
	{
		____flags_10 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682, ___U3CmemorylessU3Ek__BackingField_11)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_11() const { return ___U3CmemorylessU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_11() { return &___U3CmemorylessU3Ek__BackingField_11; }
	inline void set_U3CmemorylessU3Ek__BackingField_11(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_11 = value;
	}
};

struct RenderTextureDescriptor_t4222607682_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t2913122842* ___depthFormatBits_6;

public:
	inline static int32_t get_offset_of_depthFormatBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t4222607682_StaticFields, ___depthFormatBits_6)); }
	inline Int32U5BU5D_t2913122842* get_depthFormatBits_6() const { return ___depthFormatBits_6; }
	inline Int32U5BU5D_t2913122842** get_address_of_depthFormatBits_6() { return &___depthFormatBits_6; }
	inline void set_depthFormatBits_6(Int32U5BU5D_t2913122842* value)
	{
		___depthFormatBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___depthFormatBits_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREDESCRIPTOR_T4222607682_H
#ifndef UNITYACTION_T2750753671_H
#define UNITYACTION_T2750753671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t2750753671  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T2750753671_H
#ifndef PLAYABLEASSET_T4043611684_H
#define PLAYABLEASSET_T4043611684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t4043611684  : public ScriptableObject_t866670570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T4043611684_H
#ifndef PLAYERCONNECTION_T4147855081_H
#define PLAYERCONNECTION_T4147855081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t4147855081  : public ScriptableObject_t866670570
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t1850767521 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t2575342295 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t4147855081, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t1850767521 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t1850767521 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t1850767521 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t4147855081, ___m_connectedPlayers_3)); }
	inline List_1_t2575342295 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t2575342295 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t2575342295 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t4147855081_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t4147855081 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t4147855081_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t4147855081 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t4147855081 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t4147855081 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T4147855081_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (ColorWriteMask_t4124953067)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1500[6] = 
{
	ColorWriteMask_t4124953067::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (StencilOp_t1375146959)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[9] = 
{
	StencilOp_t1375146959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (ShadowSamplingMode_t1273116270)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1502[4] = 
{
	ShadowSamplingMode_t1273116270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (TextureDimension_t3431012438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1503[9] = 
{
	TextureDimension_t3431012438::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (KeyCode_t1530770857)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1504[322] = 
{
	KeyCode_t1530770857::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (MathfInternal_t991434448)+ sizeof (RuntimeObject), sizeof(MathfInternal_t991434448 ), sizeof(MathfInternal_t991434448_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1505[3] = 
{
	MathfInternal_t991434448_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t991434448_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t991434448_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (ScriptingUtils_t713398403), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (SendMouseEvents_t4008410427), -1, sizeof(SendMouseEvents_t4008410427_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1507[5] = 
{
	SendMouseEvents_t4008410427_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t4008410427_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t4008410427_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t4008410427_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t4008410427_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (HitInfo_t629799351)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1508[2] = 
{
	HitInfo_t629799351::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t629799351::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (Plane_t3835345337)+ sizeof (RuntimeObject), sizeof(Plane_t3835345337 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1509[2] = 
{
	Plane_t3835345337::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t3835345337::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (PropertyAttribute_t2482611668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (TooltipAttribute_t994560025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1511[1] = 
{
	TooltipAttribute_t994560025::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (SpaceAttribute_t759169708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1512[1] = 
{
	SpaceAttribute_t759169708::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (RangeAttribute_t2370089688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[2] = 
{
	RangeAttribute_t2370089688::get_offset_of_min_0(),
	RangeAttribute_t2370089688::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (TextAreaAttribute_t3720875507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1514[2] = 
{
	TextAreaAttribute_t3720875507::get_offset_of_minLines_0(),
	TextAreaAttribute_t3720875507::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (RangeInt_t398345095)+ sizeof (RuntimeObject), sizeof(RangeInt_t398345095 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1515[2] = 
{
	RangeInt_t398345095::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t398345095::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (Ray_t769097630)+ sizeof (RuntimeObject), sizeof(Ray_t769097630 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1516[2] = 
{
	Ray_t769097630::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t769097630::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (Rect_t2938746414)+ sizeof (RuntimeObject), sizeof(Rect_t2938746414 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1517[4] = 
{
	Rect_t2938746414::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2938746414::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2938746414::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2938746414::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (SelectionBaseAttribute_t1033904542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (SerializePrivateVariables_t1186728058), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (SerializeField_t3300608734), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (PreferBinarySerialization_t3604512660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (StackTraceUtility_t1467088544), -1, sizeof(StackTraceUtility_t1467088544_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1523[1] = 
{
	StackTraceUtility_t1467088544_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (UnityException_t3961142061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1524[2] = 
{
	0,
	UnityException_t3961142061::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (RenderTextureDescriptor_t4222607682)+ sizeof (RuntimeObject), sizeof(RenderTextureDescriptor_t4222607682 ), sizeof(RenderTextureDescriptor_t4222607682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1525[12] = 
{
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CwidthU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CheightU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CcolorFormatU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of__depthBufferBits_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682_StaticFields::get_offset_of_depthFormatBits_6(),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CdimensionU3Ek__BackingField_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CvrUsageU3Ek__BackingField_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of__flags_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t4222607682::get_offset_of_U3CmemorylessU3Ek__BackingField_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (TouchScreenKeyboardType_t2627237811)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1526[12] = 
{
	TouchScreenKeyboardType_t2627237811::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (TrackedReference_t2510267492), sizeof(TrackedReference_t2510267492_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1527[1] = 
{
	TrackedReference_t2510267492::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (UnityAPICompatibilityVersionAttribute_t544044167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1528[1] = 
{
	UnityAPICompatibilityVersionAttribute_t544044167::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (PersistentListenerMode_t3005777257)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1529[8] = 
{
	PersistentListenerMode_t3005777257::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (ArgumentCache_t3743706679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1530[6] = 
{
	ArgumentCache_t3743706679::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t3743706679::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t3743706679::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t3743706679::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t3743706679::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t3743706679::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (BaseInvokableCall_t2774843113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (InvokableCall_t1103208137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1532[1] = 
{
	InvokableCall_t1103208137::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1533[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1534[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1535[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1536[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1537[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (UnityEventCallState_t4087745077)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1538[4] = 
{
	UnityEventCallState_t4087745077::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (PersistentCall_t1897604377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1539[5] = 
{
	PersistentCall_t1897604377::get_offset_of_m_Target_0(),
	PersistentCall_t1897604377::get_offset_of_m_MethodName_1(),
	PersistentCall_t1897604377::get_offset_of_m_Mode_2(),
	PersistentCall_t1897604377::get_offset_of_m_Arguments_3(),
	PersistentCall_t1897604377::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (PersistentCallGroup_t2961235293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[1] = 
{
	PersistentCallGroup_t2961235293::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (InvokableCallList_t1102941555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[4] = 
{
	InvokableCallList_t1102941555::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t1102941555::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t1102941555::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t1102941555::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (UnityEventBase_t1616450127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[4] = 
{
	UnityEventBase_t1616450127::get_offset_of_m_Calls_0(),
	UnityEventBase_t1616450127::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t1616450127::get_offset_of_m_TypeName_2(),
	UnityEventBase_t1616450127::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (UnityAction_t2750753671), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (UnityEvent_t520446499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[1] = 
{
	UnityEvent_t520446499::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1546[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1550[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (UnityString_t525386781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (UnitySynchronizationContext_t969910382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[1] = 
{
	UnitySynchronizationContext_t969910382::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (WorkRequest_t1184331131)+ sizeof (RuntimeObject), sizeof(WorkRequest_t1184331131_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1555[2] = 
{
	WorkRequest_t1184331131::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t1184331131::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (Vector2_t3817489729)+ sizeof (RuntimeObject), sizeof(Vector2_t3817489729 ), sizeof(Vector2_t3817489729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1556[11] = 
{
	Vector2_t3817489729::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3817489729::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3817489729_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t3817489729_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t3817489729_StaticFields::get_offset_of_upVector_4(),
	Vector2_t3817489729_StaticFields::get_offset_of_downVector_5(),
	Vector2_t3817489729_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t3817489729_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t3817489729_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t3817489729_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (Vector4_t3079210060)+ sizeof (RuntimeObject), sizeof(Vector4_t3079210060 ), sizeof(Vector4_t3079210060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1557[9] = 
{
	0,
	Vector4_t3079210060::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3079210060::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3079210060::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3079210060::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3079210060_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t3079210060_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t3079210060_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t3079210060_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (WaitForSecondsRealtime_t3236613700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[1] = 
{
	WaitForSecondsRealtime_t3236613700::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (ThreadAndSerializationSafeAttribute_t94213565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (ReadOnlyAttribute_t2706604423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (ReadWriteAttribute_t76370668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (WriteOnlyAttribute_t2062064953), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (DeallocateOnJobCompletionAttribute_t2498442260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (NativeContainerAttribute_t1813717609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t3267560313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1647539422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (FrameData_t399791071)+ sizeof (RuntimeObject), sizeof(FrameData_t399791071 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1567[6] = 
{
	FrameData_t399791071::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t399791071::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t399791071::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t399791071::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t399791071::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t399791071::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (Flags_t1801613619)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1568[5] = 
{
	Flags_t1801613619::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (PlayableBinding_t1456281242)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t1456281242_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1572[6] = 
{
	PlayableBinding_t1456281242_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t1456281242_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t1456281242::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t1456281242::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t1456281242::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t1456281242::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (PlayableAsset_t4043611684), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (PlayableBehaviour_t756751090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (PlayableExtensions_t157073375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (ScriptPlayableOutput_t1393225784)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t1393225784 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1577[1] = 
{
	ScriptPlayableOutput_t1393225784::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (DefaultValueAttribute_t2107182685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1578[1] = 
{
	DefaultValueAttribute_t2107182685::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (ExcludeFromDocsAttribute_t1225456123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (Logger_t2095089308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1582[3] = 
{
	Logger_t2095089308::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t2095089308::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t2095089308::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (MessageEventArgs_t1902265908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1583[2] = 
{
	MessageEventArgs_t1902265908::get_offset_of_playerId_0(),
	MessageEventArgs_t1902265908::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (PlayerConnection_t4147855081), -1, sizeof(PlayerConnection_t4147855081_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1585[3] = 
{
	PlayerConnection_t4147855081::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t4147855081::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t4147855081_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (PlayerEditorConnectionEvents_t1850767521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1586[3] = 
{
	PlayerEditorConnectionEvents_t1850767521::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t1850767521::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t1850767521::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (MessageEvent_t2444217134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (ConnectionChangeEvent_t55758003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (MessageTypeSubscribers_t2309276150), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1589[3] = 
{
	MessageTypeSubscribers_t2309276150::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t2309276150::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t2309276150::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2117170185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1590[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2117170185::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (RenderPipelineManager_t1768228152), -1, sizeof(RenderPipelineManager_t1768228152_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1593[2] = 
{
	RenderPipelineManager_t1768228152_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t1768228152_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (UsedByNativeCodeAttribute_t3040658619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (RequiredByNativeCodeAttribute_t102101072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (MovedFromAttribute_t2092678997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1596[2] = 
{
	MovedFromAttribute_t2092678997::get_offset_of_U3CNamespaceU3Ek__BackingField_0(),
	MovedFromAttribute_t2092678997::get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (FormerlySerializedAsAttribute_t1343314935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1597[1] = 
{
	FormerlySerializedAsAttribute_t1343314935::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (TypeInferenceRules_t3662879442)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1598[5] = 
{
	TypeInferenceRules_t3662879442::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (TypeInferenceRuleAttribute_t219895016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1599[1] = 
{
	TypeInferenceRuleAttribute_t219895016::get_offset_of__rule_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
