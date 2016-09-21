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
// DayNightController
struct DayNightController_t2503289528;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Clock
struct  Clock_t65203182  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Clock::hourHand
	Transform_t1659122786 * ___hourHand_2;
	// UnityEngine.Transform Clock::minuteHand
	Transform_t1659122786 * ___minuteHand_3;
	// System.Single Clock::hoursToDegrees
	float ___hoursToDegrees_4;
	// System.Single Clock::minutesToDegrees
	float ___minutesToDegrees_5;
	// DayNightController Clock::controller
	DayNightController_t2503289528 * ___controller_6;

public:
	inline static int32_t get_offset_of_hourHand_2() { return static_cast<int32_t>(offsetof(Clock_t65203182, ___hourHand_2)); }
	inline Transform_t1659122786 * get_hourHand_2() const { return ___hourHand_2; }
	inline Transform_t1659122786 ** get_address_of_hourHand_2() { return &___hourHand_2; }
	inline void set_hourHand_2(Transform_t1659122786 * value)
	{
		___hourHand_2 = value;
		Il2CppCodeGenWriteBarrier(&___hourHand_2, value);
	}

	inline static int32_t get_offset_of_minuteHand_3() { return static_cast<int32_t>(offsetof(Clock_t65203182, ___minuteHand_3)); }
	inline Transform_t1659122786 * get_minuteHand_3() const { return ___minuteHand_3; }
	inline Transform_t1659122786 ** get_address_of_minuteHand_3() { return &___minuteHand_3; }
	inline void set_minuteHand_3(Transform_t1659122786 * value)
	{
		___minuteHand_3 = value;
		Il2CppCodeGenWriteBarrier(&___minuteHand_3, value);
	}

	inline static int32_t get_offset_of_hoursToDegrees_4() { return static_cast<int32_t>(offsetof(Clock_t65203182, ___hoursToDegrees_4)); }
	inline float get_hoursToDegrees_4() const { return ___hoursToDegrees_4; }
	inline float* get_address_of_hoursToDegrees_4() { return &___hoursToDegrees_4; }
	inline void set_hoursToDegrees_4(float value)
	{
		___hoursToDegrees_4 = value;
	}

	inline static int32_t get_offset_of_minutesToDegrees_5() { return static_cast<int32_t>(offsetof(Clock_t65203182, ___minutesToDegrees_5)); }
	inline float get_minutesToDegrees_5() const { return ___minutesToDegrees_5; }
	inline float* get_address_of_minutesToDegrees_5() { return &___minutesToDegrees_5; }
	inline void set_minutesToDegrees_5(float value)
	{
		___minutesToDegrees_5 = value;
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(Clock_t65203182, ___controller_6)); }
	inline DayNightController_t2503289528 * get_controller_6() const { return ___controller_6; }
	inline DayNightController_t2503289528 ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(DayNightController_t2503289528 * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier(&___controller_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
