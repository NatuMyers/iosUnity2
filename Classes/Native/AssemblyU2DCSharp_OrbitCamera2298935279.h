#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrbitCamera
struct  OrbitCamera_t2298935279  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform OrbitCamera::target
	Transform_t1659122786 * ___target_2;
	// System.Single OrbitCamera::rotateSpeed
	float ___rotateSpeed_3;
	// System.Single OrbitCamera::distance
	float ___distance_4;
	// System.Single OrbitCamera::_x
	float ____x_5;
	// System.Single OrbitCamera::_y
	float ____y_6;
	// System.Single OrbitCamera::timer
	float ___timer_7;
	// System.Single OrbitCamera::scrollWheel
	float ___scrollWheel_8;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of__x_5() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ____x_5)); }
	inline float get__x_5() const { return ____x_5; }
	inline float* get_address_of__x_5() { return &____x_5; }
	inline void set__x_5(float value)
	{
		____x_5 = value;
	}

	inline static int32_t get_offset_of__y_6() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ____y_6)); }
	inline float get__y_6() const { return ____y_6; }
	inline float* get_address_of__y_6() { return &____y_6; }
	inline void set__y_6(float value)
	{
		____y_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_scrollWheel_8() { return static_cast<int32_t>(offsetof(OrbitCamera_t2298935279, ___scrollWheel_8)); }
	inline float get_scrollWheel_8() const { return ___scrollWheel_8; }
	inline float* get_address_of_scrollWheel_8() { return &___scrollWheel_8; }
	inline void set_scrollWheel_8(float value)
	{
		___scrollWheel_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
