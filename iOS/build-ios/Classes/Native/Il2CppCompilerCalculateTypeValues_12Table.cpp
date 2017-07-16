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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1168798781;
// System.Byte[]
struct ByteU5BU5D_t3921465462;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3472970178;
// UnityEngine.Gyroscope
struct Gyroscope_t2167701409;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t263088556;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2940477672;
// UnityEngine.ILogger
struct ILogger_t2328214941;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t1675587927;
// UnityEngine.Application/LogCallback
struct LogCallback_t2914416760;
// UnityEngine.Events.UnityAction
struct UnityAction_t2750753671;
// System.Void
struct Void_t1151422322;
// System.Char[]
struct CharU5BU5D_t2139671263;
// System.UInt32[]
struct UInt32U5BU5D_t1939144625;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3029873440;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2986338785;
// UnityEngine.Display[]
struct DisplayU5BU5D_t1493519317;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2202355576;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t917109535;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t3701312188;
// System.AsyncCallback
struct AsyncCallback_t354763957;
// UnityEngine.Camera
struct Camera_t229301699;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t3192845390;




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
#ifndef U3CMODULEU3E_T3270018915_H
#define U3CMODULEU3E_T3270018915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3270018915 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3270018915_H
#ifndef SYMMETRICTRANSFORM_T3028868099_H
#define SYMMETRICTRANSFORM_T3028868099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3028868099  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t1168798781 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3921465462* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3921465462* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3921465462* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3921465462* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3472970178 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___algo_0)); }
	inline SymmetricAlgorithm_t1168798781 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t1168798781 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t1168798781 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___temp_3)); }
	inline ByteU5BU5D_t3921465462* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3921465462** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3921465462* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___temp2_4)); }
	inline ByteU5BU5D_t3921465462* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3921465462** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3921465462* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___workBuff_5)); }
	inline ByteU5BU5D_t3921465462* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3921465462** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3921465462* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___workout_6)); }
	inline ByteU5BU5D_t3921465462* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3921465462** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3921465462* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3028868099, ____rng_11)); }
	inline RandomNumberGenerator_t3472970178 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3472970178 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3472970178 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3028868099_H
#ifndef TIME_T1245917820_H
#define TIME_T1245917820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t1245917820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T1245917820_H
#ifndef DATAUTILITY_T86411229_H
#define DATAUTILITY_T86411229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t86411229  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T86411229_H
#ifndef INPUT_T345299688_H
#define INPUT_T345299688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t345299688  : public RuntimeObject
{
public:

public:
};

struct Input_t345299688_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t2167701409 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t345299688_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t2167701409 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t2167701409 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t2167701409 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T345299688_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T1012948978_H
#define UNHANDLEDEXCEPTIONHANDLER_T1012948978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t1012948978  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t1012948978_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t263088556 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t1012948978_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t263088556 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t263088556 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t263088556 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T1012948978_H
#ifndef RANDOM_T3135891243_H
#define RANDOM_T3135891243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t3135891243  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T3135891243_H
#ifndef HOSTDATA_T3736630509_H
#define HOSTDATA_T3736630509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t3736630509  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.HostData::m_Nat
	int32_t ___m_Nat_0;
	// System.String UnityEngine.HostData::m_GameType
	String_t* ___m_GameType_1;
	// System.String UnityEngine.HostData::m_GameName
	String_t* ___m_GameName_2;
	// System.Int32 UnityEngine.HostData::m_ConnectedPlayers
	int32_t ___m_ConnectedPlayers_3;
	// System.Int32 UnityEngine.HostData::m_PlayerLimit
	int32_t ___m_PlayerLimit_4;
	// System.String[] UnityEngine.HostData::m_IP
	StringU5BU5D_t2940477672* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_IP_5)); }
	inline StringU5BU5D_t2940477672* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t2940477672** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t2940477672* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t3736630509, ___m_GUID_9)); }
	inline String_t* get_m_GUID_9() const { return ___m_GUID_9; }
	inline String_t** get_address_of_m_GUID_9() { return &___m_GUID_9; }
	inline void set_m_GUID_9(String_t* value)
	{
		___m_GUID_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GUID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HostData
struct HostData_t3736630509_marshaled_pinvoke
{
	int32_t ___m_Nat_0;
	char* ___m_GameType_1;
	char* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	char** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	char* ___m_Comment_8;
	char* ___m_GUID_9;
};
// Native definition for COM marshalling of UnityEngine.HostData
struct HostData_t3736630509_marshaled_com
{
	int32_t ___m_Nat_0;
	Il2CppChar* ___m_GameType_1;
	Il2CppChar* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	Il2CppChar** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	Il2CppChar* ___m_Comment_8;
	Il2CppChar* ___m_GUID_9;
};
#endif // HOSTDATA_T3736630509_H
#ifndef CURSOR_T2883803868_H
#define CURSOR_T2883803868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t2883803868  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T2883803868_H
#ifndef DEBUGLOGHANDLER_T3486679775_H
#define DEBUGLOGHANDLER_T3486679775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t3486679775  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T3486679775_H
#ifndef DEBUG_T2666861749_H
#define DEBUG_T2666861749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t2666861749  : public RuntimeObject
{
public:

public:
};

struct Debug_t2666861749_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t2666861749_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T2666861749_H
#ifndef GIZMOS_T3958661889_H
#define GIZMOS_T3958661889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gizmos
struct  Gizmos_t3958661889  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIZMOS_T3958661889_H
#ifndef GRAPHICS_T2269506882_H
#define GRAPHICS_T2269506882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Graphics
struct  Graphics_t2269506882  : public RuntimeObject
{
public:

public:
};

struct Graphics_t2269506882_StaticFields
{
public:
	// System.Int32 UnityEngine.Graphics::kMaxDrawMeshInstanceCount
	int32_t ___kMaxDrawMeshInstanceCount_0;

public:
	inline static int32_t get_offset_of_kMaxDrawMeshInstanceCount_0() { return static_cast<int32_t>(offsetof(Graphics_t2269506882_StaticFields, ___kMaxDrawMeshInstanceCount_0)); }
	inline int32_t get_kMaxDrawMeshInstanceCount_0() const { return ___kMaxDrawMeshInstanceCount_0; }
	inline int32_t* get_address_of_kMaxDrawMeshInstanceCount_0() { return &___kMaxDrawMeshInstanceCount_0; }
	inline void set_kMaxDrawMeshInstanceCount_0(int32_t value)
	{
		___kMaxDrawMeshInstanceCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICS_T2269506882_H
#ifndef SCREEN_T4228029911_H
#define SCREEN_T4228029911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t4228029911  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T4228029911_H
#ifndef GL_T1144258088_H
#define GL_T1144258088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GL
struct  GL_t1144258088  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GL_T1144258088_H
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
#ifndef RESOURCES_T1669846291_H
#define RESOURCES_T1669846291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t1669846291  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T1669846291_H
#ifndef GYROSCOPE_T2167701409_H
#define GYROSCOPE_T2167701409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t2167701409  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T2167701409_H
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
#ifndef SYSTEMINFO_T3664592797_H
#define SYSTEMINFO_T3664592797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t3664592797  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T3664592797_H
#ifndef YIELDINSTRUCTION_T3064368979_H
#define YIELDINSTRUCTION_T3064368979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t3064368979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3064368979_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3064368979_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T3064368979_H
#ifndef APPLICATION_T3929972456_H
#define APPLICATION_T3929972456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t3929972456  : public RuntimeObject
{
public:

public:
};

struct Application_t3929972456_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t1675587927 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t2914416760 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t2914416760 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t2750753671 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t3929972456_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t1675587927 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t1675587927 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t1675587927 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t3929972456_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t2914416760 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t2914416760 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t2914416760 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t3929972456_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t2914416760 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t2914416760 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t2914416760 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t3929972456_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t2750753671 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t2750753671 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t2750753671 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T3929972456_H
#ifndef WAITFORSECONDS_T1564706107_H
#define WAITFORSECONDS_T1564706107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1564706107  : public YieldInstruction_t3064368979
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1564706107, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1564706107_marshaled_pinvoke : public YieldInstruction_t3064368979_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1564706107_marshaled_com : public YieldInstruction_t3064368979_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1564706107_H
#ifndef RENDERBUFFERHELPER_T1591727572_H
#define RENDERBUFFERHELPER_T1591727572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderBufferHelper
struct  RenderBufferHelper_t1591727572 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERBUFFERHELPER_T1591727572_H
#ifndef MATHF_T472027045_H
#define MATHF_T472027045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t472027045 
{
public:

public:
};

struct Mathf_t472027045_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t472027045_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T472027045_H
#ifndef MATRIX4X4_T2888266385_H
#define MATRIX4X4_T2888266385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2888266385 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2888266385_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2888266385  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2888266385  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2888266385  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2888266385 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2888266385  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2888266385_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2888266385  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2888266385 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2888266385  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2888266385_H
#ifndef NETWORKPLAYER_T3865480168_H
#define NETWORKPLAYER_T3865480168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t3865480168 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t3865480168, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T3865480168_H
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
#ifndef NETWORKVIEWID_T2803641743_H
#define NETWORKVIEWID_T2803641743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t2803641743 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t2803641743, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t2803641743, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t2803641743, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T2803641743_H
#ifndef RPC_T369949791_H
#define RPC_T369949791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t369949791  : public Attribute_t1257886843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T369949791_H
#ifndef U24ARRAYTYPEU24136_T1246382044_H
#define U24ARRAYTYPEU24136_T1246382044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1246382044 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t1246382044__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1246382044_H
#ifndef U24ARRAYTYPEU24120_T899959653_H
#define U24ARRAYTYPEU24120_T899959653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t899959653 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t899959653__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T899959653_H
#ifndef U24ARRAYTYPEU24256_T3928081099_H
#define U24ARRAYTYPEU24256_T3928081099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3928081099 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t3928081099__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3928081099_H
#ifndef U24ARRAYTYPEU241024_T3244721127_H
#define U24ARRAYTYPEU241024_T3244721127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3244721127 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3244721127__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3244721127_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4018158956_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4018158956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4018158956_H
#ifndef CULLINGGROUPEVENT_T2113803617_H
#define CULLINGGROUPEVENT_T2113803617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t2113803617 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2113803617, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2113803617, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2113803617, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T2113803617_H
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
#ifndef SORTINGLAYER_T2169490408_H
#define SORTINGLAYER_T2169490408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t2169490408 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t2169490408, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T2169490408_H
#ifndef QUATERNION_T674194063_H
#define QUATERNION_T674194063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t674194063 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t674194063, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t674194063, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t674194063, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t674194063, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t674194063_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t674194063  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t674194063_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t674194063  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t674194063 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t674194063  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T674194063_H
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
#ifndef LAYERMASK_T1440714033_H
#define LAYERMASK_T1440714033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t1440714033 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t1440714033, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T1440714033_H
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
#ifndef WAITFORENDOFFRAME_T1933406338_H
#define WAITFORENDOFFRAME_T1933406338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1933406338  : public YieldInstruction_t3064368979
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1933406338_H
#ifndef WAITFORFIXEDUPDATE_T3797183823_H
#define WAITFORFIXEDUPDATE_T3797183823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t3797183823  : public YieldInstruction_t3064368979
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T3797183823_H
#ifndef AESTRANSFORM_T1214288443_H
#define AESTRANSFORM_T1214288443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t1214288443  : public SymmetricTransform_t3028868099
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t1939144625* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1939144625* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1939144625** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1939144625* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t1214288443_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t1939144625* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t3921465462* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t3921465462* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t1939144625* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t1939144625* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t1939144625* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t1939144625* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t1939144625* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t1939144625* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t1939144625* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t1939144625* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t1939144625* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t1939144625** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t1939144625* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t3921465462* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t3921465462** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t3921465462* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t3921465462* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t3921465462** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t3921465462* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t1939144625* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t1939144625** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t1939144625* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t1939144625* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t1939144625** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t1939144625* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t1939144625* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t1939144625** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t1939144625* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t1939144625* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t1939144625** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t1939144625* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t1939144625* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t1939144625** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t1939144625* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t1939144625* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t1939144625** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t1939144625* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t1939144625* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t1939144625** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t1939144625* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t1214288443_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t1939144625* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t1939144625** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t1939144625* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T1214288443_H
#ifndef KEYFRAME_T500482061_H
#define KEYFRAME_T500482061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t500482061 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t500482061, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t500482061, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t500482061, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t500482061, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T500482061_H
#ifndef BOUNDS_T3528952512_H
#define BOUNDS_T3528952512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3528952512 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t1180042186  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t1180042186  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3528952512, ___m_Center_0)); }
	inline Vector3_t1180042186  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t1180042186 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t1180042186  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3528952512, ___m_Extents_1)); }
	inline Vector3_t1180042186  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t1180042186 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t1180042186  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3528952512_H
#ifndef BITSTREAM_T3849853820_H
#define BITSTREAM_T3849853820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t3849853820  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t3849853820, ___m_Ptr_0)); }
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
#endif // BITSTREAM_T3849853820_H
#ifndef ANIMATIONCURVE_T1112950312_H
#define ANIMATIONCURVE_T1112950312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t1112950312  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t1112950312, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1112950312_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1112950312_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T1112950312_H
#ifndef INTERNALSHADERCHANNEL_T1669789343_H
#define INTERNALSHADERCHANNEL_T1669789343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t1669789343 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t1669789343, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T1669789343_H
#ifndef INTERNALVERTEXCHANNELTYPE_T3840497309_H
#define INTERNALVERTEXCHANNELTYPE_T3840497309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t3840497309 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t3840497309, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T3840497309_H
#ifndef NETWORKMESSAGEINFO_T2119373458_H
#define NETWORKMESSAGEINFO_T2119373458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t2119373458 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t3865480168  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t2803641743  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2119373458, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2119373458, ___m_Sender_1)); }
	inline NetworkPlayer_t3865480168  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t3865480168 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t3865480168  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2119373458, ___m_ViewID_2)); }
	inline NetworkViewID_t2803641743  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t2803641743 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t2803641743  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T2119373458_H
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
#ifndef HIDEFLAGS_T1238708243_H
#define HIDEFLAGS_T1238708243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t1238708243 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t1238708243, ___value___1)); }
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
#endif // HIDEFLAGS_T1238708243_H
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
#ifndef CIPHERMODE_T898456955_H
#define CIPHERMODE_T898456955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t898456955 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t898456955, ___value___1)); }
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
#endif // CIPHERMODE_T898456955_H
#ifndef TOUCHSCREENKEYBOARD_T1425883118_H
#define TOUCHSCREENKEYBOARD_T1425883118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t1425883118  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t1425883118, ___m_Ptr_0)); }
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
#endif // TOUCHSCREENKEYBOARD_T1425883118_H
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
#ifndef ASYNCOPERATION_T4149119233_H
#define ASYNCOPERATION_T4149119233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t4149119233  : public YieldInstruction_t3064368979
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t4149119233, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t4149119233_marshaled_pinvoke : public YieldInstruction_t3064368979_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t4149119233_marshaled_com : public YieldInstruction_t3064368979_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T4149119233_H
#ifndef CULLINGGROUP_T1411341192_H
#define CULLINGGROUP_T1411341192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t1411341192  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2986338785 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t1411341192, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t1411341192, ___m_OnStateChanged_1)); }
	inline StateChanged_t2986338785 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2986338785 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2986338785 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1411341192_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1411341192_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T1411341192_H
#ifndef CURSORLOCKMODE_T4075114694_H
#define CURSORLOCKMODE_T4075114694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t4075114694 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t4075114694, ___value___1)); }
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
#endif // CURSORLOCKMODE_T4075114694_H
#ifndef DISPLAY_T1114900924_H
#define DISPLAY_T1114900924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1114900924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1114900924, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1114900924_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t1493519317* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1114900924 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t2202355576 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1114900924_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t1493519317* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t1493519317** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t1493519317* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1114900924_StaticFields, ____mainDisplay_2)); }
	inline Display_t1114900924 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1114900924 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1114900924 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1114900924_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t2202355576 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t2202355576 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t2202355576 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1114900924_H
#ifndef GRADIENT_T3338166128_H
#define GRADIENT_T3338166128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3338166128  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3338166128, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3338166128_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3338166128_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3338166128_H
#ifndef COROUTINE_T3464368447_H
#define COROUTINE_T3464368447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3464368447  : public YieldInstruction_t3064368979
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3464368447, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3464368447_marshaled_pinvoke : public YieldInstruction_t3064368979_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3464368447_marshaled_com : public YieldInstruction_t3064368979_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3464368447_H
#ifndef RECTOFFSET_T3867199753_H
#define RECTOFFSET_T3867199753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t3867199753  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t3867199753, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t3867199753, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t3867199753_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t3867199753_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T3867199753_H
#ifndef DEVICEORIENTATION_T2919255372_H
#define DEVICEORIENTATION_T2919255372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DeviceOrientation
struct  DeviceOrientation_t2919255372 
{
public:
	// System.Int32 UnityEngine.DeviceOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceOrientation_t2919255372, ___value___1)); }
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
#endif // DEVICEORIENTATION_T2919255372_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3948916851_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3948916851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3948916851  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t1246382044  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t899959653  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t3928081099  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t3928081099  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3244721127  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t1246382044  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t1246382044 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t1246382044  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t899959653  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t899959653 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t899959653  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t3928081099  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t3928081099 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t3928081099  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t3928081099  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t3928081099 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t3928081099  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3244721127  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3244721127 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3244721127  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3948916851_H
#ifndef PADDINGMODE_T3617623245_H
#define PADDINGMODE_T3617623245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3617623245 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3617623245, ___value___1)); }
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
#endif // PADDINGMODE_T3617623245_H
#ifndef TOUCHPHASE_T712777318_H
#define TOUCHPHASE_T712777318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t712777318 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t712777318, ___value___1)); }
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
#endif // TOUCHPHASE_T712777318_H
#ifndef IMECOMPOSITIONMODE_T2337951439_H
#define IMECOMPOSITIONMODE_T2337951439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t2337951439 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t2337951439, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T2337951439_H
#ifndef TOUCHTYPE_T4153950663_H
#define TOUCHTYPE_T4153950663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t4153950663 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t4153950663, ___value___1)); }
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
#endif // TOUCHTYPE_T4153950663_H
#ifndef USERAUTHORIZATION_T4205232756_H
#define USERAUTHORIZATION_T4205232756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t4205232756 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserAuthorization_t4205232756, ___value___1)); }
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
#endif // USERAUTHORIZATION_T4205232756_H
#ifndef ASSETBUNDLECREATEREQUEST_T1956587760_H
#define ASSETBUNDLECREATEREQUEST_T1956587760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t1956587760  : public AsyncOperation_t4149119233
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T1956587760_H
#ifndef ASSETBUNDLEREQUEST_T4096593081_H
#define ASSETBUNDLEREQUEST_T4096593081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t4096593081  : public AsyncOperation_t4149119233
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t4096593081_marshaled_pinvoke : public AsyncOperation_t4149119233_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t4096593081_marshaled_com : public AsyncOperation_t4149119233_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T4096593081_H
#ifndef ASSETBUNDLE_T1671377176_H
#define ASSETBUNDLE_T1671377176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t1671377176  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T1671377176_H
#ifndef SPRITE_T3620424233_H
#define SPRITE_T3620424233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t3620424233  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T3620424233_H
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
#ifndef SYMMETRICALGORITHM_T1168798781_H
#define SYMMETRICALGORITHM_T1168798781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t1168798781  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3921465462* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3921465462* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t917109535* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t917109535* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___IVValue_1)); }
	inline ByteU5BU5D_t3921465462* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3921465462** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3921465462* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___KeyValue_3)); }
	inline ByteU5BU5D_t3921465462* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3921465462** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3921465462* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t917109535* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t917109535** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t917109535* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t917109535* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t917109535** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t917109535* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1168798781, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T1168798781_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T2215392371_H
#define FAILEDTOLOADSCRIPTOBJECT_T2215392371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t2215392371  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t2215392371_marshaled_pinvoke : public Object_t3758817623_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t2215392371_marshaled_com : public Object_t3758817623_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T2215392371_H
#ifndef TEXTURE_T3191827928_H
#define TEXTURE_T3191827928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3191827928  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3191827928_H
#ifndef TOUCH_T1660680817_H
#define TOUCH_T1660680817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1660680817 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t3817489729  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t3817489729  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t3817489729  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_Position_1)); }
	inline Vector2_t3817489729  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t3817489729 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t3817489729  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_RawPosition_2)); }
	inline Vector2_t3817489729  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t3817489729 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t3817489729  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_PositionDelta_3)); }
	inline Vector2_t3817489729  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t3817489729 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t3817489729  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1660680817, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1660680817_H
#ifndef MATERIAL_T2822613482_H
#define MATERIAL_T2822613482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t2822613482  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T2822613482_H
#ifndef COMPONENT_T2111346901_H
#define COMPONENT_T2111346901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2111346901  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2111346901_H
#ifndef RESOURCEREQUEST_T2752843001_H
#define RESOURCEREQUEST_T2752843001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t2752843001  : public AsyncOperation_t4149119233
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t2752843001, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t2752843001, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t2752843001_marshaled_pinvoke : public AsyncOperation_t4149119233_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t2752843001_marshaled_com : public AsyncOperation_t4149119233_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T2752843001_H
#ifndef MESH_T3513711253_H
#define MESH_T3513711253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3513711253  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3513711253_H
#ifndef QUALITYSETTINGS_T2026252929_H
#define QUALITYSETTINGS_T2026252929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QualitySettings
struct  QualitySettings_t2026252929  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYSETTINGS_T2026252929_H
#ifndef SHADER_T1460683407_H
#define SHADER_T1460683407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t1460683407  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T1460683407_H
#ifndef GAMEOBJECT_T2397973013_H
#define GAMEOBJECT_T2397973013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t2397973013  : public Object_t3758817623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T2397973013_H
#ifndef ACTION_T238133840_H
#define ACTION_T238133840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t238133840  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T238133840_H
#ifndef LOWMEMORYCALLBACK_T1675587927_H
#define LOWMEMORYCALLBACK_T1675587927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t1675587927  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T1675587927_H
#ifndef LOGCALLBACK_T2914416760_H
#define LOGCALLBACK_T2914416760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t2914416760  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T2914416760_H
#ifndef RENDERER_T3335650380_H
#define RENDERER_T3335650380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t3335650380  : public Component_t2111346901
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T3335650380_H
#ifndef MESHFILTER_T1678528389_H
#define MESHFILTER_T1678528389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t1678528389  : public Component_t2111346901
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T1678528389_H
#ifndef AES_T2651689249_H
#define AES_T2651689249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t2651689249  : public SymmetricAlgorithm_t1168798781
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T2651689249_H
#ifndef DISPLAYSUPDATEDDELEGATE_T2202355576_H
#define DISPLAYSUPDATEDDELEGATE_T2202355576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t2202355576  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T2202355576_H
#ifndef BEHAVIOUR_T602381574_H
#define BEHAVIOUR_T602381574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t602381574  : public Component_t2111346901
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T602381574_H
#ifndef RENDERTEXTURE_T255690853_H
#define RENDERTEXTURE_T255690853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t255690853  : public Texture_t3191827928
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T255690853_H
#ifndef TEXTURE2D_T3273485280_H
#define TEXTURE2D_T3273485280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3273485280  : public Texture_t3191827928
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3273485280_H
#ifndef STATECHANGED_T2986338785_H
#define STATECHANGED_T2986338785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2986338785  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2986338785_H
#ifndef CAMERACALLBACK_T3192845390_H
#define CAMERACALLBACK_T3192845390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t3192845390  : public MulticastDelegate_t1163131344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T3192845390_H
#ifndef MESHRENDERER_T2367230840_H
#define MESHRENDERER_T2367230840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t2367230840  : public Renderer_t3335650380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T2367230840_H
#ifndef GUIELEMENT_T3899215086_H
#define GUIELEMENT_T3899215086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3899215086  : public Behaviour_t602381574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3899215086_H
#ifndef CAMERA_T229301699_H
#define CAMERA_T229301699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t229301699  : public Behaviour_t602381574
{
public:

public:
};

struct Camera_t229301699_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t3192845390 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t3192845390 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t3192845390 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t229301699_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t3192845390 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t3192845390 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t3192845390 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t229301699_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t3192845390 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t3192845390 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t3192845390 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t229301699_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t3192845390 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t3192845390 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t3192845390 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T229301699_H
#ifndef SPRITERENDERER_T1401173250_H
#define SPRITERENDERER_T1401173250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t1401173250  : public Renderer_t3335650380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T1401173250_H
#ifndef GUILAYER_T1043300491_H
#define GUILAYER_T1043300491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t1043300491  : public Behaviour_t602381574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T1043300491_H
#ifndef AESMANAGED_T335305392_H
#define AESMANAGED_T335305392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t335305392  : public Aes_t2651689249
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T335305392_H
#ifndef NETWORKVIEW_T244789662_H
#define NETWORKVIEW_T244789662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t244789662  : public Behaviour_t602381574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T244789662_H
#ifndef MONOBEHAVIOUR_T1537065040_H
#define MONOBEHAVIOUR_T1537065040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1537065040  : public Behaviour_t602381574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1537065040_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1200[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (Aes_t2651689249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (AesManaged_t335305392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (AesTransform_t1214288443), -1, sizeof(AesTransform_t1214288443_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1203[14] = 
{
	AesTransform_t1214288443::get_offset_of_expandedKey_12(),
	AesTransform_t1214288443::get_offset_of_Nk_13(),
	AesTransform_t1214288443::get_offset_of_Nr_14(),
	AesTransform_t1214288443_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t1214288443_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t1214288443_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t1214288443_StaticFields::get_offset_of_T0_18(),
	AesTransform_t1214288443_StaticFields::get_offset_of_T1_19(),
	AesTransform_t1214288443_StaticFields::get_offset_of_T2_20(),
	AesTransform_t1214288443_StaticFields::get_offset_of_T3_21(),
	AesTransform_t1214288443_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t1214288443_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t1214288443_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t1214288443_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (Action_t238133840), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (U3CPrivateImplementationDetailsU3E_t3948916851), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1208[12] = 
{
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t3948916851_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (U24ArrayTypeU24136_t1246382044)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1246382044 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (U24ArrayTypeU24120_t899959653)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t899959653 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (U24ArrayTypeU24256_t3928081099)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3928081099 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (U24ArrayTypeU241024_t3244721127)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3244721127 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (U3CModuleU3E_t3270018915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (Application_t3929972456), -1, sizeof(Application_t3929972456_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1214[4] = 
{
	Application_t3929972456_StaticFields::get_offset_of_lowMemory_0(),
	Application_t3929972456_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t3929972456_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t3929972456_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (LowMemoryCallback_t1675587927), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (LogCallback_t2914416760), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (UserAuthorization_t4205232756)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1217[3] = 
{
	UserAuthorization_t4205232756::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (AssetBundleCreateRequest_t1956587760), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (AssetBundleRequest_t4096593081), sizeof(AssetBundleRequest_t4096593081_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (AssetBundle_t1671377176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (AsyncOperation_t4149119233), sizeof(AsyncOperation_t4149119233_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	AsyncOperation_t4149119233::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (SystemInfo_t3664592797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (WaitForSeconds_t1564706107), sizeof(WaitForSeconds_t1564706107_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1223[1] = 
{
	WaitForSeconds_t1564706107::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (WaitForFixedUpdate_t3797183823), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (WaitForEndOfFrame_t1933406338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (CustomYieldInstruction_t1319872315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (Coroutine_t3464368447), sizeof(Coroutine_t3464368447_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1227[1] = 
{
	Coroutine_t3464368447::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (ScriptableObject_t866670570), sizeof(ScriptableObject_t866670570_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (FailedToLoadScriptObject_t2215392371), sizeof(FailedToLoadScriptObject_t2215392371_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (Behaviour_t602381574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (Camera_t229301699), -1, sizeof(Camera_t229301699_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1231[3] = 
{
	Camera_t229301699_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t229301699_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t229301699_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (CameraCallback_t3192845390), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (Component_t2111346901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (UnhandledExceptionHandler_t1012948978), -1, sizeof(UnhandledExceptionHandler_t1012948978_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1234[1] = 
{
	UnhandledExceptionHandler_t1012948978_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (CullingGroupEvent_t2113803617)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t2113803617 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1235[3] = 
{
	CullingGroupEvent_t2113803617::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2113803617::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2113803617::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (CullingGroup_t1411341192), sizeof(CullingGroup_t1411341192_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1236[2] = 
{
	CullingGroup_t1411341192::get_offset_of_m_Ptr_0(),
	CullingGroup_t1411341192::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (StateChanged_t2986338785), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (CursorLockMode_t4075114694)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1238[4] = 
{
	CursorLockMode_t4075114694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (Cursor_t2883803868), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (DebugLogHandler_t3486679775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (Debug_t2666861749), -1, sizeof(Debug_t2666861749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1241[1] = 
{
	Debug_t2666861749_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (Display_t1114900924), -1, sizeof(Display_t1114900924_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1242[4] = 
{
	Display_t1114900924::get_offset_of_nativeDisplay_0(),
	Display_t1114900924_StaticFields::get_offset_of_displays_1(),
	Display_t1114900924_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1114900924_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (DisplaysUpdatedDelegate_t2202355576), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (GameObject_t2397973013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (Gizmos_t3958661889), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (Gradient_t3338166128), sizeof(Gradient_t3338166128_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[1] = 
{
	Gradient_t3338166128::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (QualitySettings_t2026252929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (MeshFilter_t1678528389), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (Renderer_t3335650380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (RenderBufferHelper_t1591727572)+ sizeof (RuntimeObject), sizeof(RenderBufferHelper_t1591727572 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (Graphics_t2269506882), -1, sizeof(Graphics_t2269506882_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1251[1] = 
{
	Graphics_t2269506882_StaticFields::get_offset_of_kMaxDrawMeshInstanceCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (Screen_t4228029911), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (GL_t1144258088), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (MeshRenderer_t2367230840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (RectOffset_t3867199753), sizeof(RectOffset_t3867199753_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1255[2] = 
{
	RectOffset_t3867199753::get_offset_of_m_Ptr_0(),
	RectOffset_t3867199753::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (GUIElement_t3899215086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (GUILayer_t1043300491), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1258[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4018158956::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (TouchScreenKeyboard_t1425883118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[1] = 
{
	TouchScreenKeyboard_t1425883118::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (TouchPhase_t712777318)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1260[6] = 
{
	TouchPhase_t712777318::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (IMECompositionMode_t2337951439)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	IMECompositionMode_t2337951439::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (TouchType_t4153950663)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1262[4] = 
{
	TouchType_t4153950663::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Touch_t1660680817)+ sizeof (RuntimeObject), sizeof(Touch_t1660680817 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1263[14] = 
{
	Touch_t1660680817::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1660680817::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (DeviceOrientation_t2919255372)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1264[8] = 
{
	DeviceOrientation_t2919255372::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (Gyroscope_t2167701409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (Input_t345299688), -1, sizeof(Input_t345299688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1266[1] = 
{
	Input_t345299688_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (LayerMask_t1440714033)+ sizeof (RuntimeObject), sizeof(LayerMask_t1440714033 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1267[1] = 
{
	LayerMask_t1440714033::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (Vector3_t1180042186)+ sizeof (RuntimeObject), sizeof(Vector3_t1180042186 ), sizeof(Vector3_t1180042186_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1268[14] = 
{
	0,
	Vector3_t1180042186::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1180042186::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1180042186::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1180042186_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t1180042186_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t1180042186_StaticFields::get_offset_of_upVector_6(),
	Vector3_t1180042186_StaticFields::get_offset_of_downVector_7(),
	Vector3_t1180042186_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t1180042186_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t1180042186_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t1180042186_StaticFields::get_offset_of_backVector_11(),
	Vector3_t1180042186_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t1180042186_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (Quaternion_t674194063)+ sizeof (RuntimeObject), sizeof(Quaternion_t674194063 ), sizeof(Quaternion_t674194063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1269[6] = 
{
	Quaternion_t674194063::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t674194063::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t674194063::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t674194063::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t674194063_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Matrix4x4_t2888266385)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t2888266385 ), sizeof(Matrix4x4_t2888266385_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1270[18] = 
{
	Matrix4x4_t2888266385::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2888266385_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t2888266385_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (Bounds_t3528952512)+ sizeof (RuntimeObject), sizeof(Bounds_t3528952512 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1271[2] = 
{
	Bounds_t3528952512::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3528952512::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Mathf_t472027045)+ sizeof (RuntimeObject), sizeof(Mathf_t472027045 ), sizeof(Mathf_t472027045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1272[1] = 
{
	Mathf_t472027045_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (Keyframe_t500482061)+ sizeof (RuntimeObject), sizeof(Keyframe_t500482061 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1273[4] = 
{
	Keyframe_t500482061::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t500482061::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t500482061::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t500482061::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (AnimationCurve_t1112950312), sizeof(AnimationCurve_t1112950312_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[1] = 
{
	AnimationCurve_t1112950312::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (Mesh_t3513711253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (InternalShaderChannel_t1669789343)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1276[9] = 
{
	InternalShaderChannel_t1669789343::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (InternalVertexChannelType_t3840497309)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[3] = 
{
	InternalVertexChannelType_t3840497309::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (MonoBehaviour_t1537065040), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (NetworkPlayer_t3865480168)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t3865480168 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1279[1] = 
{
	NetworkPlayer_t3865480168::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (NetworkViewID_t2803641743)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t2803641743 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[3] = 
{
	NetworkViewID_t2803641743::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t2803641743::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t2803641743::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (NetworkView_t244789662), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (BitStream_t3849853820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[1] = 
{
	BitStream_t3849853820::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (RPC_t369949791), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (HostData_t3736630509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1284[10] = 
{
	HostData_t3736630509::get_offset_of_m_Nat_0(),
	HostData_t3736630509::get_offset_of_m_GameType_1(),
	HostData_t3736630509::get_offset_of_m_GameName_2(),
	HostData_t3736630509::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t3736630509::get_offset_of_m_PlayerLimit_4(),
	HostData_t3736630509::get_offset_of_m_IP_5(),
	HostData_t3736630509::get_offset_of_m_Port_6(),
	HostData_t3736630509::get_offset_of_m_PasswordProtected_7(),
	HostData_t3736630509::get_offset_of_m_Comment_8(),
	HostData_t3736630509::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (NetworkMessageInfo_t2119373458)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t2119373458 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[3] = 
{
	NetworkMessageInfo_t2119373458::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t2119373458::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t2119373458::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (Random_t3135891243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (ResourceRequest_t2752843001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1287[2] = 
{
	ResourceRequest_t2752843001::get_offset_of_m_Path_1(),
	ResourceRequest_t2752843001::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (Resources_t1669846291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (Shader_t1460683407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (Material_t2822613482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (SortingLayer_t2169490408)+ sizeof (RuntimeObject), sizeof(SortingLayer_t2169490408 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	SortingLayer_t2169490408::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (Sprite_t3620424233), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (SpriteRenderer_t1401173250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (DataUtility_t86411229), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (Texture_t3191827928), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (Texture2D_t3273485280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (RenderTexture_t255690853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (Time_t1245917820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (HideFlags_t1238708243)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1299[10] = 
{
	HideFlags_t1238708243::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
