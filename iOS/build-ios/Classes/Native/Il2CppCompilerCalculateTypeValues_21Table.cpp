﻿#include "il2cpp-config.h"

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

// System.Void
struct Void_t3355374231;
// System.Char[]
struct CharU5BU5D_t3511144132;
// UnityEngine.Material
struct Material_t639098934;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t17802186;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3860648535;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t4162991806;
// Vuforia.VirtualButton
struct VirtualButton_t3606971605;
// Vuforia.Trackable
struct Trackable_t2124301025;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t1346076460;
// Vuforia.WebCamImpl
struct WebCamImpl_t479421086;
// UnityEngine.Camera
struct Camera_t2749376494;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t3540860571;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t3748119983;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t991731452;
// System.Action
struct Action_t1518280806;
// System.Action`1<System.Boolean>
struct Action_1_t3112949348;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2900084849;
// Vuforia.DigitalEyewearAbstractBehaviour
struct DigitalEyewearAbstractBehaviour_t3525797373;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t331972779;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t1171611058;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t3130602238;
// Vuforia.Word
struct Word_t2373722898;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t329243726;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t2418328616;




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
#ifndef VALUETYPE_T1102538189_H
#define VALUETYPE_T1102538189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1102538189  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1102538189_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1102538189_marshaled_com
{
};
#endif // VALUETYPE_T1102538189_H
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
#ifndef COLOR_T539914874_H
#define COLOR_T539914874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t539914874 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t539914874, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t539914874, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t539914874, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t539914874, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T539914874_H
#ifndef MATRIX4X4_T1844446256_H
#define MATRIX4X4_T1844446256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1844446256 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1844446256_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1844446256  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1844446256  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1844446256  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1844446256 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1844446256  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1844446256_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1844446256  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1844446256 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1844446256  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1844446256_H
#ifndef RECT_T2026802102_H
#define RECT_T2026802102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2026802102 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2026802102, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2026802102, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2026802102, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2026802102, ___m_Height_3)); }
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
#endif // RECT_T2026802102_H
#ifndef VECTOR3_T1887794917_H
#define VECTOR3_T1887794917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1887794917 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1887794917, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1887794917, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1887794917, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1887794917_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1887794917  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1887794917  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1887794917  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1887794917  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1887794917  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1887794917  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1887794917  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1887794917  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1887794917  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1887794917  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1887794917  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1887794917 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1887794917  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___oneVector_5)); }
	inline Vector3_t1887794917  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1887794917 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1887794917  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___upVector_6)); }
	inline Vector3_t1887794917  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1887794917 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1887794917  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___downVector_7)); }
	inline Vector3_t1887794917  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1887794917 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1887794917  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___leftVector_8)); }
	inline Vector3_t1887794917  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1887794917 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1887794917  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___rightVector_9)); }
	inline Vector3_t1887794917  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1887794917 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1887794917  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1887794917  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1887794917 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1887794917  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___backVector_11)); }
	inline Vector3_t1887794917  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1887794917 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1887794917  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1887794917  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1887794917 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1887794917  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1887794917_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1887794917  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1887794917 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1887794917  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1887794917_H
#ifndef QUATERNION_T2621740307_H
#define QUATERNION_T2621740307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2621740307 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2621740307, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2621740307, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2621740307, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2621740307, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2621740307_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2621740307  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2621740307_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2621740307  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2621740307 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2621740307  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2621740307_H
#ifndef ENUM_T3478490040_H
#define ENUM_T3478490040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3478490040  : public ValueType_t1102538189
{
public:

public:
};

struct Enum_t3478490040_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3511144132* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3478490040_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3511144132* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3511144132** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3511144132* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3478490040_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3478490040_marshaled_com
{
};
#endif // ENUM_T3478490040_H
#ifndef VECTOR2_T4013180288_H
#define VECTOR2_T4013180288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t4013180288 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t4013180288, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t4013180288, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t4013180288_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t4013180288  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t4013180288  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t4013180288  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t4013180288  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t4013180288  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t4013180288  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t4013180288  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t4013180288  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___zeroVector_2)); }
	inline Vector2_t4013180288  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t4013180288 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t4013180288  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___oneVector_3)); }
	inline Vector2_t4013180288  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t4013180288 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t4013180288  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___upVector_4)); }
	inline Vector2_t4013180288  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t4013180288 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t4013180288  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___downVector_5)); }
	inline Vector2_t4013180288  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t4013180288 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t4013180288  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___leftVector_6)); }
	inline Vector2_t4013180288  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t4013180288 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t4013180288  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___rightVector_7)); }
	inline Vector2_t4013180288  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t4013180288 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t4013180288  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t4013180288  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t4013180288 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t4013180288  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t4013180288_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t4013180288  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t4013180288 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t4013180288  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T4013180288_H
#ifndef WORDTEMPLATEMODE_T1740628852_H
#define WORDTEMPLATEMODE_T1740628852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordTemplateMode
struct  WordTemplateMode_t1740628852 
{
public:
	// System.Int32 Vuforia.WordTemplateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordTemplateMode_t1740628852, ___value___1)); }
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
#endif // WORDTEMPLATEMODE_T1740628852_H
#ifndef INSTANCEIDTYPE_T731047659_H
#define INSTANCEIDTYPE_T731047659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t731047659 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstanceIdType_t731047659, ___value___1)); }
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
#endif // INSTANCEIDTYPE_T731047659_H
#ifndef INITERROR_T207656068_H
#define INITERROR_T207656068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t207656068 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t207656068, ___value___1)); }
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
#endif // INITERROR_T207656068_H
#ifndef WORLDCENTERMODE_T1108995019_H
#define WORLDCENTERMODE_T1108995019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode
struct  WorldCenterMode_t1108995019 
{
public:
	// System.Int32 Vuforia.VuforiaAbstractBehaviour/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t1108995019, ___value___1)); }
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
#endif // WORLDCENTERMODE_T1108995019_H
#ifndef STATUS_T4252577410_H
#define STATUS_T4252577410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t4252577410 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t4252577410, ___value___1)); }
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
#endif // STATUS_T4252577410_H
#ifndef VIDEOBACKGROUNDREFLECTION_T2210053474_H
#define VIDEOBACKGROUNDREFLECTION_T2210053474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t2210053474 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t2210053474, ___value___1)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T2210053474_H
#ifndef OBJECT_T4238816514_H
#define OBJECT_T4238816514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t4238816514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t4238816514, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t4238816514_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t4238816514_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t4238816514_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t4238816514_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T4238816514_H
#ifndef CAMERADIRECTION_T2232937358_H
#define CAMERADIRECTION_T2232937358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t2232937358 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t2232937358, ___value___1)); }
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
#endif // CAMERADIRECTION_T2232937358_H
#ifndef SENSITIVITY_T2699418985_H
#define SENSITIVITY_T2699418985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButton/Sensitivity
struct  Sensitivity_t2699418985 
{
public:
	// System.Int32 Vuforia.VirtualButton/Sensitivity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sensitivity_t2699418985, ___value___1)); }
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
#endif // SENSITIVITY_T2699418985_H
#ifndef CAMERADEVICEMODE_T2392246940_H
#define CAMERADEVICEMODE_T2392246940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2392246940 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2392246940, ___value___1)); }
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
#endif // CAMERADEVICEMODE_T2392246940_H
#ifndef COMPONENT_T2475775916_H
#define COMPONENT_T2475775916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2475775916  : public Object_t4238816514
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2475775916_H
#ifndef BEHAVIOUR_T808937037_H
#define BEHAVIOUR_T808937037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t808937037  : public Component_t2475775916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T808937037_H
#ifndef MONOBEHAVIOUR_T4189772811_H
#define MONOBEHAVIOUR_T4189772811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4189772811  : public Behaviour_t808937037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4189772811_H
#ifndef WIREFRAMEBEHAVIOUR_T3728411409_H
#define WIREFRAMEBEHAVIOUR_T3728411409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t3728411409  : public MonoBehaviour_t4189772811
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t639098934 * ___lineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t539914874  ___LineColor_4;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t639098934 * ___mLineMaterial_5;

public:
	inline static int32_t get_offset_of_lineMaterial_2() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t3728411409, ___lineMaterial_2)); }
	inline Material_t639098934 * get_lineMaterial_2() const { return ___lineMaterial_2; }
	inline Material_t639098934 ** get_address_of_lineMaterial_2() { return &___lineMaterial_2; }
	inline void set_lineMaterial_2(Material_t639098934 * value)
	{
		___lineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___lineMaterial_2), value);
	}

	inline static int32_t get_offset_of_ShowLines_3() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t3728411409, ___ShowLines_3)); }
	inline bool get_ShowLines_3() const { return ___ShowLines_3; }
	inline bool* get_address_of_ShowLines_3() { return &___ShowLines_3; }
	inline void set_ShowLines_3(bool value)
	{
		___ShowLines_3 = value;
	}

	inline static int32_t get_offset_of_LineColor_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t3728411409, ___LineColor_4)); }
	inline Color_t539914874  get_LineColor_4() const { return ___LineColor_4; }
	inline Color_t539914874 * get_address_of_LineColor_4() { return &___LineColor_4; }
	inline void set_LineColor_4(Color_t539914874  value)
	{
		___LineColor_4 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t3728411409, ___mLineMaterial_5)); }
	inline Material_t639098934 * get_mLineMaterial_5() const { return ___mLineMaterial_5; }
	inline Material_t639098934 ** get_address_of_mLineMaterial_5() { return &___mLineMaterial_5; }
	inline void set_mLineMaterial_5(Material_t639098934 * value)
	{
		___mLineMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLineMaterial_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMEBEHAVIOUR_T3728411409_H
#ifndef WIREFRAMETRACKABLEEVENTHANDLER_T2608847205_H
#define WIREFRAMETRACKABLEEVENTHANDLER_T2608847205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_t2608847205  : public MonoBehaviour_t4189772811
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t17802186 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_t2608847205, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t17802186 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t17802186 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t17802186 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMETRACKABLEEVENTHANDLER_T2608847205_H
#ifndef VIRTUALBUTTONABSTRACTBEHAVIOUR_T2648989235_H
#define VIRTUALBUTTONABSTRACTBEHAVIOUR_T2648989235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonAbstractBehaviour
struct  VirtualButtonAbstractBehaviour_t2648989235  : public MonoBehaviour_t4189772811
{
public:
	// System.String Vuforia.VirtualButtonAbstractBehaviour::mName
	String_t* ___mName_3;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::mSensitivity
	int32_t ___mSensitivity_4;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_5;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::mPrevTransform
	Matrix4x4_t1844446256  ___mPrevTransform_6;
	// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::mPrevParent
	GameObject_t3860648535 * ___mPrevParent_7;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_8;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::mPreviousSensitivity
	int32_t ___mPreviousSensitivity_9;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_10;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPressed
	bool ___mPressed_11;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonAbstractBehaviour::mHandlers
	List_1_t4162991806 * ___mHandlers_12;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mLeftTop
	Vector2_t4013180288  ___mLeftTop_13;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mRightBottom
	Vector2_t4013180288  ___mRightBottom_14;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_15;
	// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::mVirtualButton
	VirtualButton_t3606971605 * ___mVirtualButton_16;

public:
	inline static int32_t get_offset_of_mName_3() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mName_3)); }
	inline String_t* get_mName_3() const { return ___mName_3; }
	inline String_t** get_address_of_mName_3() { return &___mName_3; }
	inline void set_mName_3(String_t* value)
	{
		___mName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mName_3), value);
	}

	inline static int32_t get_offset_of_mSensitivity_4() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mSensitivity_4)); }
	inline int32_t get_mSensitivity_4() const { return ___mSensitivity_4; }
	inline int32_t* get_address_of_mSensitivity_4() { return &___mSensitivity_4; }
	inline void set_mSensitivity_4(int32_t value)
	{
		___mSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_mHasUpdatedPose_5() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mHasUpdatedPose_5)); }
	inline bool get_mHasUpdatedPose_5() const { return ___mHasUpdatedPose_5; }
	inline bool* get_address_of_mHasUpdatedPose_5() { return &___mHasUpdatedPose_5; }
	inline void set_mHasUpdatedPose_5(bool value)
	{
		___mHasUpdatedPose_5 = value;
	}

	inline static int32_t get_offset_of_mPrevTransform_6() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mPrevTransform_6)); }
	inline Matrix4x4_t1844446256  get_mPrevTransform_6() const { return ___mPrevTransform_6; }
	inline Matrix4x4_t1844446256 * get_address_of_mPrevTransform_6() { return &___mPrevTransform_6; }
	inline void set_mPrevTransform_6(Matrix4x4_t1844446256  value)
	{
		___mPrevTransform_6 = value;
	}

	inline static int32_t get_offset_of_mPrevParent_7() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mPrevParent_7)); }
	inline GameObject_t3860648535 * get_mPrevParent_7() const { return ___mPrevParent_7; }
	inline GameObject_t3860648535 ** get_address_of_mPrevParent_7() { return &___mPrevParent_7; }
	inline void set_mPrevParent_7(GameObject_t3860648535 * value)
	{
		___mPrevParent_7 = value;
		Il2CppCodeGenWriteBarrier((&___mPrevParent_7), value);
	}

	inline static int32_t get_offset_of_mSensitivityDirty_8() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mSensitivityDirty_8)); }
	inline bool get_mSensitivityDirty_8() const { return ___mSensitivityDirty_8; }
	inline bool* get_address_of_mSensitivityDirty_8() { return &___mSensitivityDirty_8; }
	inline void set_mSensitivityDirty_8(bool value)
	{
		___mSensitivityDirty_8 = value;
	}

	inline static int32_t get_offset_of_mPreviousSensitivity_9() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mPreviousSensitivity_9)); }
	inline int32_t get_mPreviousSensitivity_9() const { return ___mPreviousSensitivity_9; }
	inline int32_t* get_address_of_mPreviousSensitivity_9() { return &___mPreviousSensitivity_9; }
	inline void set_mPreviousSensitivity_9(int32_t value)
	{
		___mPreviousSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_mPreviouslyEnabled_10() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mPreviouslyEnabled_10)); }
	inline bool get_mPreviouslyEnabled_10() const { return ___mPreviouslyEnabled_10; }
	inline bool* get_address_of_mPreviouslyEnabled_10() { return &___mPreviouslyEnabled_10; }
	inline void set_mPreviouslyEnabled_10(bool value)
	{
		___mPreviouslyEnabled_10 = value;
	}

	inline static int32_t get_offset_of_mPressed_11() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mPressed_11)); }
	inline bool get_mPressed_11() const { return ___mPressed_11; }
	inline bool* get_address_of_mPressed_11() { return &___mPressed_11; }
	inline void set_mPressed_11(bool value)
	{
		___mPressed_11 = value;
	}

	inline static int32_t get_offset_of_mHandlers_12() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mHandlers_12)); }
	inline List_1_t4162991806 * get_mHandlers_12() const { return ___mHandlers_12; }
	inline List_1_t4162991806 ** get_address_of_mHandlers_12() { return &___mHandlers_12; }
	inline void set_mHandlers_12(List_1_t4162991806 * value)
	{
		___mHandlers_12 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_12), value);
	}

	inline static int32_t get_offset_of_mLeftTop_13() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mLeftTop_13)); }
	inline Vector2_t4013180288  get_mLeftTop_13() const { return ___mLeftTop_13; }
	inline Vector2_t4013180288 * get_address_of_mLeftTop_13() { return &___mLeftTop_13; }
	inline void set_mLeftTop_13(Vector2_t4013180288  value)
	{
		___mLeftTop_13 = value;
	}

	inline static int32_t get_offset_of_mRightBottom_14() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mRightBottom_14)); }
	inline Vector2_t4013180288  get_mRightBottom_14() const { return ___mRightBottom_14; }
	inline Vector2_t4013180288 * get_address_of_mRightBottom_14() { return &___mRightBottom_14; }
	inline void set_mRightBottom_14(Vector2_t4013180288  value)
	{
		___mRightBottom_14 = value;
	}

	inline static int32_t get_offset_of_mUnregisterOnDestroy_15() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mUnregisterOnDestroy_15)); }
	inline bool get_mUnregisterOnDestroy_15() const { return ___mUnregisterOnDestroy_15; }
	inline bool* get_address_of_mUnregisterOnDestroy_15() { return &___mUnregisterOnDestroy_15; }
	inline void set_mUnregisterOnDestroy_15(bool value)
	{
		___mUnregisterOnDestroy_15 = value;
	}

	inline static int32_t get_offset_of_mVirtualButton_16() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2648989235, ___mVirtualButton_16)); }
	inline VirtualButton_t3606971605 * get_mVirtualButton_16() const { return ___mVirtualButton_16; }
	inline VirtualButton_t3606971605 ** get_address_of_mVirtualButton_16() { return &___mVirtualButton_16; }
	inline void set_mVirtualButton_16(VirtualButton_t3606971605 * value)
	{
		___mVirtualButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButton_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONABSTRACTBEHAVIOUR_T2648989235_H
#ifndef TRACKABLEBEHAVIOUR_T17802186_H
#define TRACKABLEBEHAVIOUR_T17802186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t17802186  : public MonoBehaviour_t4189772811
{
public:
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_2;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_3;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_4;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t1887794917  ___mPreviousScale_5;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_6;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_7;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t1346076460 * ___mTrackableEventHandlers_8;
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_mTrackableName_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mTrackableName_2)); }
	inline String_t* get_mTrackableName_2() const { return ___mTrackableName_2; }
	inline String_t** get_address_of_mTrackableName_2() { return &___mTrackableName_2; }
	inline void set_mTrackableName_2(String_t* value)
	{
		___mTrackableName_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_2), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mPreserveChildSize_3)); }
	inline bool get_mPreserveChildSize_3() const { return ___mPreserveChildSize_3; }
	inline bool* get_address_of_mPreserveChildSize_3() { return &___mPreserveChildSize_3; }
	inline void set_mPreserveChildSize_3(bool value)
	{
		___mPreserveChildSize_3 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mInitializedInEditor_4)); }
	inline bool get_mInitializedInEditor_4() const { return ___mInitializedInEditor_4; }
	inline bool* get_address_of_mInitializedInEditor_4() { return &___mInitializedInEditor_4; }
	inline void set_mInitializedInEditor_4(bool value)
	{
		___mInitializedInEditor_4 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mPreviousScale_5)); }
	inline Vector3_t1887794917  get_mPreviousScale_5() const { return ___mPreviousScale_5; }
	inline Vector3_t1887794917 * get_address_of_mPreviousScale_5() { return &___mPreviousScale_5; }
	inline void set_mPreviousScale_5(Vector3_t1887794917  value)
	{
		___mPreviousScale_5 = value;
	}

	inline static int32_t get_offset_of_mStatus_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mStatus_6)); }
	inline int32_t get_mStatus_6() const { return ___mStatus_6; }
	inline int32_t* get_address_of_mStatus_6() { return &___mStatus_6; }
	inline void set_mStatus_6(int32_t value)
	{
		___mStatus_6 = value;
	}

	inline static int32_t get_offset_of_mTrackable_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mTrackable_7)); }
	inline RuntimeObject* get_mTrackable_7() const { return ___mTrackable_7; }
	inline RuntimeObject** get_address_of_mTrackable_7() { return &___mTrackable_7; }
	inline void set_mTrackable_7(RuntimeObject* value)
	{
		___mTrackable_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_7), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___mTrackableEventHandlers_8)); }
	inline List_1_t1346076460 * get_mTrackableEventHandlers_8() const { return ___mTrackableEventHandlers_8; }
	inline List_1_t1346076460 ** get_address_of_mTrackableEventHandlers_8() { return &___mTrackableEventHandlers_8; }
	inline void set_mTrackableEventHandlers_8(List_1_t1346076460 * value)
	{
		___mTrackableEventHandlers_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_8), value);
	}

	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t17802186, ___U3CTimeStampU3Ek__BackingField_9)); }
	inline double get_U3CTimeStampU3Ek__BackingField_9() const { return ___U3CTimeStampU3Ek__BackingField_9; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_9() { return &___U3CTimeStampU3Ek__BackingField_9; }
	inline void set_U3CTimeStampU3Ek__BackingField_9(double value)
	{
		___U3CTimeStampU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T17802186_H
#ifndef WEBCAMABSTRACTBEHAVIOUR_T1921792567_H
#define WEBCAMABSTRACTBEHAVIOUR_T1921792567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t1921792567  : public MonoBehaviour_t4189772811
{
public:
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_2;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_3;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_5;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t479421086 * ___mWebCamImpl_6;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t2749376494 * ___mBackgroundCameraInstance_7;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_2() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___RenderTextureLayer_2)); }
	inline int32_t get_RenderTextureLayer_2() const { return ___RenderTextureLayer_2; }
	inline int32_t* get_address_of_RenderTextureLayer_2() { return &___RenderTextureLayer_2; }
	inline void set_RenderTextureLayer_2(int32_t value)
	{
		___RenderTextureLayer_2 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_3() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___mDeviceNameSetInEditor_3)); }
	inline String_t* get_mDeviceNameSetInEditor_3() const { return ___mDeviceNameSetInEditor_3; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_3() { return &___mDeviceNameSetInEditor_3; }
	inline void set_mDeviceNameSetInEditor_3(String_t* value)
	{
		___mDeviceNameSetInEditor_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceNameSetInEditor_3), value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_4() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___mFlipHorizontally_4)); }
	inline bool get_mFlipHorizontally_4() const { return ___mFlipHorizontally_4; }
	inline bool* get_address_of_mFlipHorizontally_4() { return &___mFlipHorizontally_4; }
	inline void set_mFlipHorizontally_4(bool value)
	{
		___mFlipHorizontally_4 = value;
	}

	inline static int32_t get_offset_of_mTurnOffWebCam_5() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___mTurnOffWebCam_5)); }
	inline bool get_mTurnOffWebCam_5() const { return ___mTurnOffWebCam_5; }
	inline bool* get_address_of_mTurnOffWebCam_5() { return &___mTurnOffWebCam_5; }
	inline void set_mTurnOffWebCam_5(bool value)
	{
		___mTurnOffWebCam_5 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_6() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___mWebCamImpl_6)); }
	inline WebCamImpl_t479421086 * get_mWebCamImpl_6() const { return ___mWebCamImpl_6; }
	inline WebCamImpl_t479421086 ** get_address_of_mWebCamImpl_6() { return &___mWebCamImpl_6; }
	inline void set_mWebCamImpl_6(WebCamImpl_t479421086 * value)
	{
		___mWebCamImpl_6 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamImpl_6), value);
	}

	inline static int32_t get_offset_of_mBackgroundCameraInstance_7() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1921792567, ___mBackgroundCameraInstance_7)); }
	inline Camera_t2749376494 * get_mBackgroundCameraInstance_7() const { return ___mBackgroundCameraInstance_7; }
	inline Camera_t2749376494 ** get_address_of_mBackgroundCameraInstance_7() { return &___mBackgroundCameraInstance_7; }
	inline void set_mBackgroundCameraInstance_7(Camera_t2749376494 * value)
	{
		___mBackgroundCameraInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundCameraInstance_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMABSTRACTBEHAVIOUR_T1921792567_H
#ifndef VUFORIAABSTRACTBEHAVIOUR_T4185354807_H
#define VUFORIAABSTRACTBEHAVIOUR_T4185354807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t4185354807  : public MonoBehaviour_t4189772811
{
public:
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_3;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_4;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_5;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_7;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_8;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_9;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t17802186 * ___mWorldCenter_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t3540860571 * ___mTrackerEventHandlers_11;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t3748119983 * ___mVideoBgEventHandlers_12;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t991731452 * ___mOnVuforiaInitError_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t1518280806 * ___mOnVuforiaInitialized_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t1518280806 * ___mOnVuforiaStarted_15;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t1518280806 * ___mOnTrackablesUpdated_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t1518280806 * ___mRenderOnUpdate_17;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t3112949348 * ___mOnPause_18;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mPaused
	bool ___mPaused_19;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t1518280806 * ___mOnBackgroundTextureChanged_20;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_21;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_23;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_24;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_25;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_26;
	// Vuforia.DigitalEyewearAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mEyewearBehaviour
	DigitalEyewearAbstractBehaviour_t3525797373 * ___mEyewearBehaviour_27;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t331972779 * ___mVideoBackgroundMgr_28;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mCheckStopCamera
	bool ___mCheckStopCamera_29;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t639098934 * ___mClearMaterial_30;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMetalRendering
	bool ___mMetalRendering_31;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_36;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_37;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_38;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t1171611058 * ___mTrackersRequestedToDeinit_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_40;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_41;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t1844446256  ___mLeftProjectMatrixToApply_42;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t1844446256  ___mRightProjectMatrixToApply_43;

public:
	inline static int32_t get_offset_of_VuforiaLicenseKey_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___VuforiaLicenseKey_2)); }
	inline String_t* get_VuforiaLicenseKey_2() const { return ___VuforiaLicenseKey_2; }
	inline String_t** get_address_of_VuforiaLicenseKey_2() { return &___VuforiaLicenseKey_2; }
	inline void set_VuforiaLicenseKey_2(String_t* value)
	{
		___VuforiaLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___VuforiaLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_CameraDeviceModeSetting_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___CameraDeviceModeSetting_3)); }
	inline int32_t get_CameraDeviceModeSetting_3() const { return ___CameraDeviceModeSetting_3; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_3() { return &___CameraDeviceModeSetting_3; }
	inline void set_CameraDeviceModeSetting_3(int32_t value)
	{
		___CameraDeviceModeSetting_3 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___MaxSimultaneousImageTargets_4)); }
	inline int32_t get_MaxSimultaneousImageTargets_4() const { return ___MaxSimultaneousImageTargets_4; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_4() { return &___MaxSimultaneousImageTargets_4; }
	inline void set_MaxSimultaneousImageTargets_4(int32_t value)
	{
		___MaxSimultaneousImageTargets_4 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___MaxSimultaneousObjectTargets_5)); }
	inline int32_t get_MaxSimultaneousObjectTargets_5() const { return ___MaxSimultaneousObjectTargets_5; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_5() { return &___MaxSimultaneousObjectTargets_5; }
	inline void set_MaxSimultaneousObjectTargets_5(int32_t value)
	{
		___MaxSimultaneousObjectTargets_5 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___UseDelayedLoadingObjectTargets_6)); }
	inline bool get_UseDelayedLoadingObjectTargets_6() const { return ___UseDelayedLoadingObjectTargets_6; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_6() { return &___UseDelayedLoadingObjectTargets_6; }
	inline void set_UseDelayedLoadingObjectTargets_6(bool value)
	{
		___UseDelayedLoadingObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___CameraDirection_7)); }
	inline int32_t get_CameraDirection_7() const { return ___CameraDirection_7; }
	inline int32_t* get_address_of_CameraDirection_7() { return &___CameraDirection_7; }
	inline void set_CameraDirection_7(int32_t value)
	{
		___CameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___MirrorVideoBackground_8)); }
	inline int32_t get_MirrorVideoBackground_8() const { return ___MirrorVideoBackground_8; }
	inline int32_t* get_address_of_MirrorVideoBackground_8() { return &___MirrorVideoBackground_8; }
	inline void set_MirrorVideoBackground_8(int32_t value)
	{
		___MirrorVideoBackground_8 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mWorldCenterMode_9)); }
	inline int32_t get_mWorldCenterMode_9() const { return ___mWorldCenterMode_9; }
	inline int32_t* get_address_of_mWorldCenterMode_9() { return &___mWorldCenterMode_9; }
	inline void set_mWorldCenterMode_9(int32_t value)
	{
		___mWorldCenterMode_9 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mWorldCenter_10)); }
	inline TrackableBehaviour_t17802186 * get_mWorldCenter_10() const { return ___mWorldCenter_10; }
	inline TrackableBehaviour_t17802186 ** get_address_of_mWorldCenter_10() { return &___mWorldCenter_10; }
	inline void set_mWorldCenter_10(TrackableBehaviour_t17802186 * value)
	{
		___mWorldCenter_10 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_10), value);
	}

	inline static int32_t get_offset_of_mTrackerEventHandlers_11() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mTrackerEventHandlers_11)); }
	inline List_1_t3540860571 * get_mTrackerEventHandlers_11() const { return ___mTrackerEventHandlers_11; }
	inline List_1_t3540860571 ** get_address_of_mTrackerEventHandlers_11() { return &___mTrackerEventHandlers_11; }
	inline void set_mTrackerEventHandlers_11(List_1_t3540860571 * value)
	{
		___mTrackerEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerEventHandlers_11), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_12() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mVideoBgEventHandlers_12)); }
	inline List_1_t3748119983 * get_mVideoBgEventHandlers_12() const { return ___mVideoBgEventHandlers_12; }
	inline List_1_t3748119983 ** get_address_of_mVideoBgEventHandlers_12() { return &___mVideoBgEventHandlers_12; }
	inline void set_mVideoBgEventHandlers_12(List_1_t3748119983 * value)
	{
		___mVideoBgEventHandlers_12 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitError_13() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnVuforiaInitError_13)); }
	inline Action_1_t991731452 * get_mOnVuforiaInitError_13() const { return ___mOnVuforiaInitError_13; }
	inline Action_1_t991731452 ** get_address_of_mOnVuforiaInitError_13() { return &___mOnVuforiaInitError_13; }
	inline void set_mOnVuforiaInitError_13(Action_1_t991731452 * value)
	{
		___mOnVuforiaInitError_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_13), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_14() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnVuforiaInitialized_14)); }
	inline Action_t1518280806 * get_mOnVuforiaInitialized_14() const { return ___mOnVuforiaInitialized_14; }
	inline Action_t1518280806 ** get_address_of_mOnVuforiaInitialized_14() { return &___mOnVuforiaInitialized_14; }
	inline void set_mOnVuforiaInitialized_14(Action_t1518280806 * value)
	{
		___mOnVuforiaInitialized_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_14), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_15() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnVuforiaStarted_15)); }
	inline Action_t1518280806 * get_mOnVuforiaStarted_15() const { return ___mOnVuforiaStarted_15; }
	inline Action_t1518280806 ** get_address_of_mOnVuforiaStarted_15() { return &___mOnVuforiaStarted_15; }
	inline void set_mOnVuforiaStarted_15(Action_t1518280806 * value)
	{
		___mOnVuforiaStarted_15 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_15), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_16() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnTrackablesUpdated_16)); }
	inline Action_t1518280806 * get_mOnTrackablesUpdated_16() const { return ___mOnTrackablesUpdated_16; }
	inline Action_t1518280806 ** get_address_of_mOnTrackablesUpdated_16() { return &___mOnTrackablesUpdated_16; }
	inline void set_mOnTrackablesUpdated_16(Action_t1518280806 * value)
	{
		___mOnTrackablesUpdated_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_16), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_17() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mRenderOnUpdate_17)); }
	inline Action_t1518280806 * get_mRenderOnUpdate_17() const { return ___mRenderOnUpdate_17; }
	inline Action_t1518280806 ** get_address_of_mRenderOnUpdate_17() { return &___mRenderOnUpdate_17; }
	inline void set_mRenderOnUpdate_17(Action_t1518280806 * value)
	{
		___mRenderOnUpdate_17 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_17), value);
	}

	inline static int32_t get_offset_of_mOnPause_18() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnPause_18)); }
	inline Action_1_t3112949348 * get_mOnPause_18() const { return ___mOnPause_18; }
	inline Action_1_t3112949348 ** get_address_of_mOnPause_18() { return &___mOnPause_18; }
	inline void set_mOnPause_18(Action_1_t3112949348 * value)
	{
		___mOnPause_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_18), value);
	}

	inline static int32_t get_offset_of_mPaused_19() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mPaused_19)); }
	inline bool get_mPaused_19() const { return ___mPaused_19; }
	inline bool* get_address_of_mPaused_19() { return &___mPaused_19; }
	inline void set_mPaused_19(bool value)
	{
		___mPaused_19 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_20() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mOnBackgroundTextureChanged_20)); }
	inline Action_t1518280806 * get_mOnBackgroundTextureChanged_20() const { return ___mOnBackgroundTextureChanged_20; }
	inline Action_t1518280806 ** get_address_of_mOnBackgroundTextureChanged_20() { return &___mOnBackgroundTextureChanged_20; }
	inline void set_mOnBackgroundTextureChanged_20(Action_t1518280806 * value)
	{
		___mOnBackgroundTextureChanged_20 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_20), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_21() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mStartHasBeenInvoked_21)); }
	inline bool get_mStartHasBeenInvoked_21() const { return ___mStartHasBeenInvoked_21; }
	inline bool* get_address_of_mStartHasBeenInvoked_21() { return &___mStartHasBeenInvoked_21; }
	inline void set_mStartHasBeenInvoked_21(bool value)
	{
		___mStartHasBeenInvoked_21 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_22() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mHasStarted_22)); }
	inline bool get_mHasStarted_22() const { return ___mHasStarted_22; }
	inline bool* get_address_of_mHasStarted_22() { return &___mHasStarted_22; }
	inline void set_mHasStarted_22(bool value)
	{
		___mHasStarted_22 = value;
	}

	inline static int32_t get_offset_of_mFailedToInitialize_23() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mFailedToInitialize_23)); }
	inline bool get_mFailedToInitialize_23() const { return ___mFailedToInitialize_23; }
	inline bool* get_address_of_mFailedToInitialize_23() { return &___mFailedToInitialize_23; }
	inline void set_mFailedToInitialize_23(bool value)
	{
		___mFailedToInitialize_23 = value;
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_24() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mBackgroundTextureHasChanged_24)); }
	inline bool get_mBackgroundTextureHasChanged_24() const { return ___mBackgroundTextureHasChanged_24; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_24() { return &___mBackgroundTextureHasChanged_24; }
	inline void set_mBackgroundTextureHasChanged_24(bool value)
	{
		___mBackgroundTextureHasChanged_24 = value;
	}

	inline static int32_t get_offset_of_mInitError_25() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mInitError_25)); }
	inline int32_t get_mInitError_25() const { return ___mInitError_25; }
	inline int32_t* get_address_of_mInitError_25() { return &___mInitError_25; }
	inline void set_mInitError_25(int32_t value)
	{
		___mInitError_25 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_26() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mCameraConfiguration_26)); }
	inline RuntimeObject* get_mCameraConfiguration_26() const { return ___mCameraConfiguration_26; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_26() { return &___mCameraConfiguration_26; }
	inline void set_mCameraConfiguration_26(RuntimeObject* value)
	{
		___mCameraConfiguration_26 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_26), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_27() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mEyewearBehaviour_27)); }
	inline DigitalEyewearAbstractBehaviour_t3525797373 * get_mEyewearBehaviour_27() const { return ___mEyewearBehaviour_27; }
	inline DigitalEyewearAbstractBehaviour_t3525797373 ** get_address_of_mEyewearBehaviour_27() { return &___mEyewearBehaviour_27; }
	inline void set_mEyewearBehaviour_27(DigitalEyewearAbstractBehaviour_t3525797373 * value)
	{
		___mEyewearBehaviour_27 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_27), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_28() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mVideoBackgroundMgr_28)); }
	inline VideoBackgroundManagerAbstractBehaviour_t331972779 * get_mVideoBackgroundMgr_28() const { return ___mVideoBackgroundMgr_28; }
	inline VideoBackgroundManagerAbstractBehaviour_t331972779 ** get_address_of_mVideoBackgroundMgr_28() { return &___mVideoBackgroundMgr_28; }
	inline void set_mVideoBackgroundMgr_28(VideoBackgroundManagerAbstractBehaviour_t331972779 * value)
	{
		___mVideoBackgroundMgr_28 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_28), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_29() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mCheckStopCamera_29)); }
	inline bool get_mCheckStopCamera_29() const { return ___mCheckStopCamera_29; }
	inline bool* get_address_of_mCheckStopCamera_29() { return &___mCheckStopCamera_29; }
	inline void set_mCheckStopCamera_29(bool value)
	{
		___mCheckStopCamera_29 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_30() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mClearMaterial_30)); }
	inline Material_t639098934 * get_mClearMaterial_30() const { return ___mClearMaterial_30; }
	inline Material_t639098934 ** get_address_of_mClearMaterial_30() { return &___mClearMaterial_30; }
	inline void set_mClearMaterial_30(Material_t639098934 * value)
	{
		___mClearMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_30), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_31() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mMetalRendering_31)); }
	inline bool get_mMetalRendering_31() const { return ___mMetalRendering_31; }
	inline bool* get_address_of_mMetalRendering_31() { return &___mMetalRendering_31; }
	inline void set_mMetalRendering_31(bool value)
	{
		___mMetalRendering_31 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_32() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mHasStartedOnce_32)); }
	inline bool get_mHasStartedOnce_32() const { return ___mHasStartedOnce_32; }
	inline bool* get_address_of_mHasStartedOnce_32() { return &___mHasStartedOnce_32; }
	inline void set_mHasStartedOnce_32(bool value)
	{
		___mHasStartedOnce_32 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_33() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mWasEnabledBeforePause_33)); }
	inline bool get_mWasEnabledBeforePause_33() const { return ___mWasEnabledBeforePause_33; }
	inline bool* get_address_of_mWasEnabledBeforePause_33() { return &___mWasEnabledBeforePause_33; }
	inline void set_mWasEnabledBeforePause_33(bool value)
	{
		___mWasEnabledBeforePause_33 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_34() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mObjectTrackerWasActiveBeforePause_34)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_34() const { return ___mObjectTrackerWasActiveBeforePause_34; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_34() { return &___mObjectTrackerWasActiveBeforePause_34; }
	inline void set_mObjectTrackerWasActiveBeforePause_34(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_34 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_35() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mObjectTrackerWasActiveBeforeDisabling_35)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_35() const { return ___mObjectTrackerWasActiveBeforeDisabling_35; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_35() { return &___mObjectTrackerWasActiveBeforeDisabling_35; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_35(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_35 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforePause_36() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mMarkerTrackerWasActiveBeforePause_36)); }
	inline bool get_mMarkerTrackerWasActiveBeforePause_36() const { return ___mMarkerTrackerWasActiveBeforePause_36; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforePause_36() { return &___mMarkerTrackerWasActiveBeforePause_36; }
	inline void set_mMarkerTrackerWasActiveBeforePause_36(bool value)
	{
		___mMarkerTrackerWasActiveBeforePause_36 = value;
	}

	inline static int32_t get_offset_of_mMarkerTrackerWasActiveBeforeDisabling_37() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mMarkerTrackerWasActiveBeforeDisabling_37)); }
	inline bool get_mMarkerTrackerWasActiveBeforeDisabling_37() const { return ___mMarkerTrackerWasActiveBeforeDisabling_37; }
	inline bool* get_address_of_mMarkerTrackerWasActiveBeforeDisabling_37() { return &___mMarkerTrackerWasActiveBeforeDisabling_37; }
	inline void set_mMarkerTrackerWasActiveBeforeDisabling_37(bool value)
	{
		___mMarkerTrackerWasActiveBeforeDisabling_37 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_38() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mLastUpdatedFrame_38)); }
	inline int32_t get_mLastUpdatedFrame_38() const { return ___mLastUpdatedFrame_38; }
	inline int32_t* get_address_of_mLastUpdatedFrame_38() { return &___mLastUpdatedFrame_38; }
	inline void set_mLastUpdatedFrame_38(int32_t value)
	{
		___mLastUpdatedFrame_38 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_39() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mTrackersRequestedToDeinit_39)); }
	inline List_1_t1171611058 * get_mTrackersRequestedToDeinit_39() const { return ___mTrackersRequestedToDeinit_39; }
	inline List_1_t1171611058 ** get_address_of_mTrackersRequestedToDeinit_39() { return &___mTrackersRequestedToDeinit_39; }
	inline void set_mTrackersRequestedToDeinit_39(List_1_t1171611058 * value)
	{
		___mTrackersRequestedToDeinit_39 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_39), value);
	}

	inline static int32_t get_offset_of_mMissedToApplyLeftProjectionMatrix_40() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mMissedToApplyLeftProjectionMatrix_40)); }
	inline bool get_mMissedToApplyLeftProjectionMatrix_40() const { return ___mMissedToApplyLeftProjectionMatrix_40; }
	inline bool* get_address_of_mMissedToApplyLeftProjectionMatrix_40() { return &___mMissedToApplyLeftProjectionMatrix_40; }
	inline void set_mMissedToApplyLeftProjectionMatrix_40(bool value)
	{
		___mMissedToApplyLeftProjectionMatrix_40 = value;
	}

	inline static int32_t get_offset_of_mMissedToApplyRightProjectionMatrix_41() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mMissedToApplyRightProjectionMatrix_41)); }
	inline bool get_mMissedToApplyRightProjectionMatrix_41() const { return ___mMissedToApplyRightProjectionMatrix_41; }
	inline bool* get_address_of_mMissedToApplyRightProjectionMatrix_41() { return &___mMissedToApplyRightProjectionMatrix_41; }
	inline void set_mMissedToApplyRightProjectionMatrix_41(bool value)
	{
		___mMissedToApplyRightProjectionMatrix_41 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectMatrixToApply_42() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mLeftProjectMatrixToApply_42)); }
	inline Matrix4x4_t1844446256  get_mLeftProjectMatrixToApply_42() const { return ___mLeftProjectMatrixToApply_42; }
	inline Matrix4x4_t1844446256 * get_address_of_mLeftProjectMatrixToApply_42() { return &___mLeftProjectMatrixToApply_42; }
	inline void set_mLeftProjectMatrixToApply_42(Matrix4x4_t1844446256  value)
	{
		___mLeftProjectMatrixToApply_42 = value;
	}

	inline static int32_t get_offset_of_mRightProjectMatrixToApply_43() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t4185354807, ___mRightProjectMatrixToApply_43)); }
	inline Matrix4x4_t1844446256  get_mRightProjectMatrixToApply_43() const { return ___mRightProjectMatrixToApply_43; }
	inline Matrix4x4_t1844446256 * get_address_of_mRightProjectMatrixToApply_43() { return &___mRightProjectMatrixToApply_43; }
	inline void set_mRightProjectMatrixToApply_43(Matrix4x4_t1844446256  value)
	{
		___mRightProjectMatrixToApply_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAABSTRACTBEHAVIOUR_T4185354807_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3031677432_H
#define DATASETTRACKABLEBEHAVIOUR_T3031677432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3031677432  : public TrackableBehaviour_t17802186
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_11;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mInitializeSmartTerrain
	bool ___mInitializeSmartTerrain_12;
	// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::mReconstructionToInitialize
	ReconstructionFromTargetAbstractBehaviour_t3130602238 * ___mReconstructionToInitialize_13;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMin
	Vector3_t1887794917  ___mSmartTerrainOccluderBoundsMin_14;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMax
	Vector3_t1887794917  ___mSmartTerrainOccluderBoundsMax_15;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mIsSmartTerrainOccluderOffset
	bool ___mIsSmartTerrainOccluderOffset_16;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderOffset
	Vector3_t1887794917  ___mSmartTerrainOccluderOffset_17;
	// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderRotation
	Quaternion_t2621740307  ___mSmartTerrainOccluderRotation_18;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mAutoSetOccluderFromTargetSize
	bool ___mAutoSetOccluderFromTargetSize_19;

public:
	inline static int32_t get_offset_of_mDataSetPath_10() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mDataSetPath_10)); }
	inline String_t* get_mDataSetPath_10() const { return ___mDataSetPath_10; }
	inline String_t** get_address_of_mDataSetPath_10() { return &___mDataSetPath_10; }
	inline void set_mDataSetPath_10(String_t* value)
	{
		___mDataSetPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_10), value);
	}

	inline static int32_t get_offset_of_mExtendedTracking_11() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mExtendedTracking_11)); }
	inline bool get_mExtendedTracking_11() const { return ___mExtendedTracking_11; }
	inline bool* get_address_of_mExtendedTracking_11() { return &___mExtendedTracking_11; }
	inline void set_mExtendedTracking_11(bool value)
	{
		___mExtendedTracking_11 = value;
	}

	inline static int32_t get_offset_of_mInitializeSmartTerrain_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mInitializeSmartTerrain_12)); }
	inline bool get_mInitializeSmartTerrain_12() const { return ___mInitializeSmartTerrain_12; }
	inline bool* get_address_of_mInitializeSmartTerrain_12() { return &___mInitializeSmartTerrain_12; }
	inline void set_mInitializeSmartTerrain_12(bool value)
	{
		___mInitializeSmartTerrain_12 = value;
	}

	inline static int32_t get_offset_of_mReconstructionToInitialize_13() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mReconstructionToInitialize_13)); }
	inline ReconstructionFromTargetAbstractBehaviour_t3130602238 * get_mReconstructionToInitialize_13() const { return ___mReconstructionToInitialize_13; }
	inline ReconstructionFromTargetAbstractBehaviour_t3130602238 ** get_address_of_mReconstructionToInitialize_13() { return &___mReconstructionToInitialize_13; }
	inline void set_mReconstructionToInitialize_13(ReconstructionFromTargetAbstractBehaviour_t3130602238 * value)
	{
		___mReconstructionToInitialize_13 = value;
		Il2CppCodeGenWriteBarrier((&___mReconstructionToInitialize_13), value);
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderBoundsMin_14() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mSmartTerrainOccluderBoundsMin_14)); }
	inline Vector3_t1887794917  get_mSmartTerrainOccluderBoundsMin_14() const { return ___mSmartTerrainOccluderBoundsMin_14; }
	inline Vector3_t1887794917 * get_address_of_mSmartTerrainOccluderBoundsMin_14() { return &___mSmartTerrainOccluderBoundsMin_14; }
	inline void set_mSmartTerrainOccluderBoundsMin_14(Vector3_t1887794917  value)
	{
		___mSmartTerrainOccluderBoundsMin_14 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderBoundsMax_15() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mSmartTerrainOccluderBoundsMax_15)); }
	inline Vector3_t1887794917  get_mSmartTerrainOccluderBoundsMax_15() const { return ___mSmartTerrainOccluderBoundsMax_15; }
	inline Vector3_t1887794917 * get_address_of_mSmartTerrainOccluderBoundsMax_15() { return &___mSmartTerrainOccluderBoundsMax_15; }
	inline void set_mSmartTerrainOccluderBoundsMax_15(Vector3_t1887794917  value)
	{
		___mSmartTerrainOccluderBoundsMax_15 = value;
	}

	inline static int32_t get_offset_of_mIsSmartTerrainOccluderOffset_16() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mIsSmartTerrainOccluderOffset_16)); }
	inline bool get_mIsSmartTerrainOccluderOffset_16() const { return ___mIsSmartTerrainOccluderOffset_16; }
	inline bool* get_address_of_mIsSmartTerrainOccluderOffset_16() { return &___mIsSmartTerrainOccluderOffset_16; }
	inline void set_mIsSmartTerrainOccluderOffset_16(bool value)
	{
		___mIsSmartTerrainOccluderOffset_16 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderOffset_17() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mSmartTerrainOccluderOffset_17)); }
	inline Vector3_t1887794917  get_mSmartTerrainOccluderOffset_17() const { return ___mSmartTerrainOccluderOffset_17; }
	inline Vector3_t1887794917 * get_address_of_mSmartTerrainOccluderOffset_17() { return &___mSmartTerrainOccluderOffset_17; }
	inline void set_mSmartTerrainOccluderOffset_17(Vector3_t1887794917  value)
	{
		___mSmartTerrainOccluderOffset_17 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainOccluderRotation_18() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mSmartTerrainOccluderRotation_18)); }
	inline Quaternion_t2621740307  get_mSmartTerrainOccluderRotation_18() const { return ___mSmartTerrainOccluderRotation_18; }
	inline Quaternion_t2621740307 * get_address_of_mSmartTerrainOccluderRotation_18() { return &___mSmartTerrainOccluderRotation_18; }
	inline void set_mSmartTerrainOccluderRotation_18(Quaternion_t2621740307  value)
	{
		___mSmartTerrainOccluderRotation_18 = value;
	}

	inline static int32_t get_offset_of_mAutoSetOccluderFromTargetSize_19() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3031677432, ___mAutoSetOccluderFromTargetSize_19)); }
	inline bool get_mAutoSetOccluderFromTargetSize_19() const { return ___mAutoSetOccluderFromTargetSize_19; }
	inline bool* get_address_of_mAutoSetOccluderFromTargetSize_19() { return &___mAutoSetOccluderFromTargetSize_19; }
	inline void set_mAutoSetOccluderFromTargetSize_19(bool value)
	{
		___mAutoSetOccluderFromTargetSize_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T3031677432_H
#ifndef WEBCAMBEHAVIOUR_T2072559406_H
#define WEBCAMBEHAVIOUR_T2072559406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamBehaviour
struct  WebCamBehaviour_t2072559406  : public WebCamAbstractBehaviour_t1921792567
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMBEHAVIOUR_T2072559406_H
#ifndef WORDABSTRACTBEHAVIOUR_T3884402716_H
#define WORDABSTRACTBEHAVIOUR_T3884402716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t3884402716  : public TrackableBehaviour_t17802186
{
public:
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_10;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_11;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	RuntimeObject* ___mWord_12;

public:
	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3884402716, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}

	inline static int32_t get_offset_of_mSpecificWord_11() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3884402716, ___mSpecificWord_11)); }
	inline String_t* get_mSpecificWord_11() const { return ___mSpecificWord_11; }
	inline String_t** get_address_of_mSpecificWord_11() { return &___mSpecificWord_11; }
	inline void set_mSpecificWord_11(String_t* value)
	{
		___mSpecificWord_11 = value;
		Il2CppCodeGenWriteBarrier((&___mSpecificWord_11), value);
	}

	inline static int32_t get_offset_of_mWord_12() { return static_cast<int32_t>(offsetof(WordAbstractBehaviour_t3884402716, ___mWord_12)); }
	inline RuntimeObject* get_mWord_12() const { return ___mWord_12; }
	inline RuntimeObject** get_address_of_mWord_12() { return &___mWord_12; }
	inline void set_mWord_12(RuntimeObject* value)
	{
		___mWord_12 = value;
		Il2CppCodeGenWriteBarrier((&___mWord_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDABSTRACTBEHAVIOUR_T3884402716_H
#ifndef VUFORIABEHAVIOUR_T1931716368_H
#define VUFORIABEHAVIOUR_T1931716368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t1931716368  : public VuforiaAbstractBehaviour_t4185354807
{
public:

public:
};

struct VuforiaBehaviour_t1931716368_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t1931716368 * ___mVuforiaBehaviour_44;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_44() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t1931716368_StaticFields, ___mVuforiaBehaviour_44)); }
	inline VuforiaBehaviour_t1931716368 * get_mVuforiaBehaviour_44() const { return ___mVuforiaBehaviour_44; }
	inline VuforiaBehaviour_t1931716368 ** get_address_of_mVuforiaBehaviour_44() { return &___mVuforiaBehaviour_44; }
	inline void set_mVuforiaBehaviour_44(VuforiaBehaviour_t1931716368 * value)
	{
		___mVuforiaBehaviour_44 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T1931716368_H
#ifndef VIRTUALBUTTONBEHAVIOUR_T2029654193_H
#define VIRTUALBUTTONBEHAVIOUR_T2029654193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonBehaviour
struct  VirtualButtonBehaviour_t2029654193  : public VirtualButtonAbstractBehaviour_t2648989235
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONBEHAVIOUR_T2029654193_H
#ifndef VUMARKABSTRACTBEHAVIOUR_T1184509858_H
#define VUMARKABSTRACTBEHAVIOUR_T1184509858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkAbstractBehaviour
struct  VuMarkAbstractBehaviour_t1184509858  : public DataSetTrackableBehaviour_t3031677432
{
public:
	// System.Single Vuforia.VuMarkAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mWidth
	float ___mWidth_21;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mHeight
	float ___mHeight_22;
	// System.String Vuforia.VuMarkAbstractBehaviour::mPreviewImage
	String_t* ___mPreviewImage_23;
	// Vuforia.InstanceIdType Vuforia.VuMarkAbstractBehaviour::mIdType
	int32_t ___mIdType_24;
	// System.Int32 Vuforia.VuMarkAbstractBehaviour::mIdLength
	int32_t ___mIdLength_25;
	// UnityEngine.Rect Vuforia.VuMarkAbstractBehaviour::mBoundingBox
	Rect_t2026802102  ___mBoundingBox_26;
	// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::mOrigin
	Vector2_t4013180288  ___mOrigin_27;
	// System.Boolean Vuforia.VuMarkAbstractBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_28;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkAbstractBehaviour::mVuMarkTemplate
	RuntimeObject* ___mVuMarkTemplate_29;
	// Vuforia.VuMarkTarget Vuforia.VuMarkAbstractBehaviour::mVuMarkTarget
	RuntimeObject* ___mVuMarkTarget_30;
	// System.Int32 Vuforia.VuMarkAbstractBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_31;
	// System.Action Vuforia.VuMarkAbstractBehaviour::mOnTargetAssigned
	Action_t1518280806 * ___mOnTargetAssigned_32;
	// System.Action Vuforia.VuMarkAbstractBehaviour::mOnTargetLost
	Action_t1518280806 * ___mOnTargetLost_33;
	// System.Single Vuforia.VuMarkAbstractBehaviour::mLastTransformScale
	float ___mLastTransformScale_34;
	// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::mLastSize
	Vector2_t4013180288  ___mLastSize_35;

public:
	inline static int32_t get_offset_of_mAspectRatio_20() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mAspectRatio_20)); }
	inline float get_mAspectRatio_20() const { return ___mAspectRatio_20; }
	inline float* get_address_of_mAspectRatio_20() { return &___mAspectRatio_20; }
	inline void set_mAspectRatio_20(float value)
	{
		___mAspectRatio_20 = value;
	}

	inline static int32_t get_offset_of_mWidth_21() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mWidth_21)); }
	inline float get_mWidth_21() const { return ___mWidth_21; }
	inline float* get_address_of_mWidth_21() { return &___mWidth_21; }
	inline void set_mWidth_21(float value)
	{
		___mWidth_21 = value;
	}

	inline static int32_t get_offset_of_mHeight_22() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mHeight_22)); }
	inline float get_mHeight_22() const { return ___mHeight_22; }
	inline float* get_address_of_mHeight_22() { return &___mHeight_22; }
	inline void set_mHeight_22(float value)
	{
		___mHeight_22 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_23() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mPreviewImage_23)); }
	inline String_t* get_mPreviewImage_23() const { return ___mPreviewImage_23; }
	inline String_t** get_address_of_mPreviewImage_23() { return &___mPreviewImage_23; }
	inline void set_mPreviewImage_23(String_t* value)
	{
		___mPreviewImage_23 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_23), value);
	}

	inline static int32_t get_offset_of_mIdType_24() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mIdType_24)); }
	inline int32_t get_mIdType_24() const { return ___mIdType_24; }
	inline int32_t* get_address_of_mIdType_24() { return &___mIdType_24; }
	inline void set_mIdType_24(int32_t value)
	{
		___mIdType_24 = value;
	}

	inline static int32_t get_offset_of_mIdLength_25() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mIdLength_25)); }
	inline int32_t get_mIdLength_25() const { return ___mIdLength_25; }
	inline int32_t* get_address_of_mIdLength_25() { return &___mIdLength_25; }
	inline void set_mIdLength_25(int32_t value)
	{
		___mIdLength_25 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_26() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mBoundingBox_26)); }
	inline Rect_t2026802102  get_mBoundingBox_26() const { return ___mBoundingBox_26; }
	inline Rect_t2026802102 * get_address_of_mBoundingBox_26() { return &___mBoundingBox_26; }
	inline void set_mBoundingBox_26(Rect_t2026802102  value)
	{
		___mBoundingBox_26 = value;
	}

	inline static int32_t get_offset_of_mOrigin_27() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mOrigin_27)); }
	inline Vector2_t4013180288  get_mOrigin_27() const { return ___mOrigin_27; }
	inline Vector2_t4013180288 * get_address_of_mOrigin_27() { return &___mOrigin_27; }
	inline void set_mOrigin_27(Vector2_t4013180288  value)
	{
		___mOrigin_27 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_28() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mTrackingFromRuntimeAppearance_28)); }
	inline bool get_mTrackingFromRuntimeAppearance_28() const { return ___mTrackingFromRuntimeAppearance_28; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_28() { return &___mTrackingFromRuntimeAppearance_28; }
	inline void set_mTrackingFromRuntimeAppearance_28(bool value)
	{
		___mTrackingFromRuntimeAppearance_28 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_29() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mVuMarkTemplate_29)); }
	inline RuntimeObject* get_mVuMarkTemplate_29() const { return ___mVuMarkTemplate_29; }
	inline RuntimeObject** get_address_of_mVuMarkTemplate_29() { return &___mVuMarkTemplate_29; }
	inline void set_mVuMarkTemplate_29(RuntimeObject* value)
	{
		___mVuMarkTemplate_29 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_29), value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_30() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mVuMarkTarget_30)); }
	inline RuntimeObject* get_mVuMarkTarget_30() const { return ___mVuMarkTarget_30; }
	inline RuntimeObject** get_address_of_mVuMarkTarget_30() { return &___mVuMarkTarget_30; }
	inline void set_mVuMarkTarget_30(RuntimeObject* value)
	{
		___mVuMarkTarget_30 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTarget_30), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_31() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mVuMarkResultId_31)); }
	inline int32_t get_mVuMarkResultId_31() const { return ___mVuMarkResultId_31; }
	inline int32_t* get_address_of_mVuMarkResultId_31() { return &___mVuMarkResultId_31; }
	inline void set_mVuMarkResultId_31(int32_t value)
	{
		___mVuMarkResultId_31 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_32() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mOnTargetAssigned_32)); }
	inline Action_t1518280806 * get_mOnTargetAssigned_32() const { return ___mOnTargetAssigned_32; }
	inline Action_t1518280806 ** get_address_of_mOnTargetAssigned_32() { return &___mOnTargetAssigned_32; }
	inline void set_mOnTargetAssigned_32(Action_t1518280806 * value)
	{
		___mOnTargetAssigned_32 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetAssigned_32), value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_33() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mOnTargetLost_33)); }
	inline Action_t1518280806 * get_mOnTargetLost_33() const { return ___mOnTargetLost_33; }
	inline Action_t1518280806 ** get_address_of_mOnTargetLost_33() { return &___mOnTargetLost_33; }
	inline void set_mOnTargetLost_33(Action_t1518280806 * value)
	{
		___mOnTargetLost_33 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetLost_33), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_34() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mLastTransformScale_34)); }
	inline float get_mLastTransformScale_34() const { return ___mLastTransformScale_34; }
	inline float* get_address_of_mLastTransformScale_34() { return &___mLastTransformScale_34; }
	inline void set_mLastTransformScale_34(float value)
	{
		___mLastTransformScale_34 = value;
	}

	inline static int32_t get_offset_of_mLastSize_35() { return static_cast<int32_t>(offsetof(VuMarkAbstractBehaviour_t1184509858, ___mLastSize_35)); }
	inline Vector2_t4013180288  get_mLastSize_35() const { return ___mLastSize_35; }
	inline Vector2_t4013180288 * get_address_of_mLastSize_35() { return &___mLastSize_35; }
	inline void set_mLastSize_35(Vector2_t4013180288  value)
	{
		___mLastSize_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKABSTRACTBEHAVIOUR_T1184509858_H
#ifndef WORDBEHAVIOUR_T3200545176_H
#define WORDBEHAVIOUR_T3200545176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordBehaviour
struct  WordBehaviour_t3200545176  : public WordAbstractBehaviour_t3884402716
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDBEHAVIOUR_T3200545176_H
#ifndef VUMARKBEHAVIOUR_T1550495844_H
#define VUMARKBEHAVIOUR_T1550495844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkBehaviour
struct  VuMarkBehaviour_t1550495844  : public VuMarkAbstractBehaviour_t1184509858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKBEHAVIOUR_T1550495844_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (VirtualButtonBehaviour_t2029654193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (VuforiaBehaviour_t1931716368), -1, sizeof(VuforiaBehaviour_t1931716368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2101[1] = 
{
	VuforiaBehaviour_t1931716368_StaticFields::get_offset_of_mVuforiaBehaviour_44(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (VuMarkBehaviour_t1550495844), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (WebCamBehaviour_t2072559406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (WireframeBehaviour_t3728411409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[4] = 
{
	WireframeBehaviour_t3728411409::get_offset_of_lineMaterial_2(),
	WireframeBehaviour_t3728411409::get_offset_of_ShowLines_3(),
	WireframeBehaviour_t3728411409::get_offset_of_LineColor_4(),
	WireframeBehaviour_t3728411409::get_offset_of_mLineMaterial_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (WireframeTrackableEventHandler_t2608847205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2105[1] = 
{
	WireframeTrackableEventHandler_t2608847205::get_offset_of_mTrackableBehaviour_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (WordBehaviour_t3200545176), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
