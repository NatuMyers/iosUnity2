#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Gradient
struct Gradient_t3661184436;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.Skybox
struct Skybox_t3194751310;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoIntensity
struct  AutoIntensity_t203652900  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Gradient AutoIntensity::nightDayColor
	Gradient_t3661184436 * ___nightDayColor_2;
	// System.Single AutoIntensity::maxIntensity
	float ___maxIntensity_3;
	// System.Single AutoIntensity::minIntensity
	float ___minIntensity_4;
	// System.Single AutoIntensity::minPoint
	float ___minPoint_5;
	// System.Single AutoIntensity::maxAmbient
	float ___maxAmbient_6;
	// System.Single AutoIntensity::minAmbient
	float ___minAmbient_7;
	// System.Single AutoIntensity::minAmbientPoint
	float ___minAmbientPoint_8;
	// UnityEngine.Gradient AutoIntensity::nightDayFogColor
	Gradient_t3661184436 * ___nightDayFogColor_9;
	// UnityEngine.AnimationCurve AutoIntensity::fogDensityCurve
	AnimationCurve_t3667593487 * ___fogDensityCurve_10;
	// System.Single AutoIntensity::fogScale
	float ___fogScale_11;
	// System.Single AutoIntensity::dayAtmosphereThickness
	float ___dayAtmosphereThickness_12;
	// System.Single AutoIntensity::nightAtmosphereThickness
	float ___nightAtmosphereThickness_13;
	// UnityEngine.Vector3 AutoIntensity::dayRotateSpeed
	Vector3_t4282066566  ___dayRotateSpeed_14;
	// UnityEngine.Vector3 AutoIntensity::nightRotateSpeed
	Vector3_t4282066566  ___nightRotateSpeed_15;
	// System.Single AutoIntensity::skySpeed
	float ___skySpeed_16;
	// UnityEngine.Light AutoIntensity::mainLight
	Light_t4202674828 * ___mainLight_17;
	// UnityEngine.Skybox AutoIntensity::sky
	Skybox_t3194751310 * ___sky_18;
	// UnityEngine.Material AutoIntensity::skyMat
	Material_t3870600107 * ___skyMat_19;

public:
	inline static int32_t get_offset_of_nightDayColor_2() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___nightDayColor_2)); }
	inline Gradient_t3661184436 * get_nightDayColor_2() const { return ___nightDayColor_2; }
	inline Gradient_t3661184436 ** get_address_of_nightDayColor_2() { return &___nightDayColor_2; }
	inline void set_nightDayColor_2(Gradient_t3661184436 * value)
	{
		___nightDayColor_2 = value;
		Il2CppCodeGenWriteBarrier(&___nightDayColor_2, value);
	}

	inline static int32_t get_offset_of_maxIntensity_3() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___maxIntensity_3)); }
	inline float get_maxIntensity_3() const { return ___maxIntensity_3; }
	inline float* get_address_of_maxIntensity_3() { return &___maxIntensity_3; }
	inline void set_maxIntensity_3(float value)
	{
		___maxIntensity_3 = value;
	}

	inline static int32_t get_offset_of_minIntensity_4() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___minIntensity_4)); }
	inline float get_minIntensity_4() const { return ___minIntensity_4; }
	inline float* get_address_of_minIntensity_4() { return &___minIntensity_4; }
	inline void set_minIntensity_4(float value)
	{
		___minIntensity_4 = value;
	}

	inline static int32_t get_offset_of_minPoint_5() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___minPoint_5)); }
	inline float get_minPoint_5() const { return ___minPoint_5; }
	inline float* get_address_of_minPoint_5() { return &___minPoint_5; }
	inline void set_minPoint_5(float value)
	{
		___minPoint_5 = value;
	}

	inline static int32_t get_offset_of_maxAmbient_6() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___maxAmbient_6)); }
	inline float get_maxAmbient_6() const { return ___maxAmbient_6; }
	inline float* get_address_of_maxAmbient_6() { return &___maxAmbient_6; }
	inline void set_maxAmbient_6(float value)
	{
		___maxAmbient_6 = value;
	}

	inline static int32_t get_offset_of_minAmbient_7() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___minAmbient_7)); }
	inline float get_minAmbient_7() const { return ___minAmbient_7; }
	inline float* get_address_of_minAmbient_7() { return &___minAmbient_7; }
	inline void set_minAmbient_7(float value)
	{
		___minAmbient_7 = value;
	}

	inline static int32_t get_offset_of_minAmbientPoint_8() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___minAmbientPoint_8)); }
	inline float get_minAmbientPoint_8() const { return ___minAmbientPoint_8; }
	inline float* get_address_of_minAmbientPoint_8() { return &___minAmbientPoint_8; }
	inline void set_minAmbientPoint_8(float value)
	{
		___minAmbientPoint_8 = value;
	}

	inline static int32_t get_offset_of_nightDayFogColor_9() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___nightDayFogColor_9)); }
	inline Gradient_t3661184436 * get_nightDayFogColor_9() const { return ___nightDayFogColor_9; }
	inline Gradient_t3661184436 ** get_address_of_nightDayFogColor_9() { return &___nightDayFogColor_9; }
	inline void set_nightDayFogColor_9(Gradient_t3661184436 * value)
	{
		___nightDayFogColor_9 = value;
		Il2CppCodeGenWriteBarrier(&___nightDayFogColor_9, value);
	}

	inline static int32_t get_offset_of_fogDensityCurve_10() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___fogDensityCurve_10)); }
	inline AnimationCurve_t3667593487 * get_fogDensityCurve_10() const { return ___fogDensityCurve_10; }
	inline AnimationCurve_t3667593487 ** get_address_of_fogDensityCurve_10() { return &___fogDensityCurve_10; }
	inline void set_fogDensityCurve_10(AnimationCurve_t3667593487 * value)
	{
		___fogDensityCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&___fogDensityCurve_10, value);
	}

	inline static int32_t get_offset_of_fogScale_11() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___fogScale_11)); }
	inline float get_fogScale_11() const { return ___fogScale_11; }
	inline float* get_address_of_fogScale_11() { return &___fogScale_11; }
	inline void set_fogScale_11(float value)
	{
		___fogScale_11 = value;
	}

	inline static int32_t get_offset_of_dayAtmosphereThickness_12() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___dayAtmosphereThickness_12)); }
	inline float get_dayAtmosphereThickness_12() const { return ___dayAtmosphereThickness_12; }
	inline float* get_address_of_dayAtmosphereThickness_12() { return &___dayAtmosphereThickness_12; }
	inline void set_dayAtmosphereThickness_12(float value)
	{
		___dayAtmosphereThickness_12 = value;
	}

	inline static int32_t get_offset_of_nightAtmosphereThickness_13() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___nightAtmosphereThickness_13)); }
	inline float get_nightAtmosphereThickness_13() const { return ___nightAtmosphereThickness_13; }
	inline float* get_address_of_nightAtmosphereThickness_13() { return &___nightAtmosphereThickness_13; }
	inline void set_nightAtmosphereThickness_13(float value)
	{
		___nightAtmosphereThickness_13 = value;
	}

	inline static int32_t get_offset_of_dayRotateSpeed_14() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___dayRotateSpeed_14)); }
	inline Vector3_t4282066566  get_dayRotateSpeed_14() const { return ___dayRotateSpeed_14; }
	inline Vector3_t4282066566 * get_address_of_dayRotateSpeed_14() { return &___dayRotateSpeed_14; }
	inline void set_dayRotateSpeed_14(Vector3_t4282066566  value)
	{
		___dayRotateSpeed_14 = value;
	}

	inline static int32_t get_offset_of_nightRotateSpeed_15() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___nightRotateSpeed_15)); }
	inline Vector3_t4282066566  get_nightRotateSpeed_15() const { return ___nightRotateSpeed_15; }
	inline Vector3_t4282066566 * get_address_of_nightRotateSpeed_15() { return &___nightRotateSpeed_15; }
	inline void set_nightRotateSpeed_15(Vector3_t4282066566  value)
	{
		___nightRotateSpeed_15 = value;
	}

	inline static int32_t get_offset_of_skySpeed_16() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___skySpeed_16)); }
	inline float get_skySpeed_16() const { return ___skySpeed_16; }
	inline float* get_address_of_skySpeed_16() { return &___skySpeed_16; }
	inline void set_skySpeed_16(float value)
	{
		___skySpeed_16 = value;
	}

	inline static int32_t get_offset_of_mainLight_17() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___mainLight_17)); }
	inline Light_t4202674828 * get_mainLight_17() const { return ___mainLight_17; }
	inline Light_t4202674828 ** get_address_of_mainLight_17() { return &___mainLight_17; }
	inline void set_mainLight_17(Light_t4202674828 * value)
	{
		___mainLight_17 = value;
		Il2CppCodeGenWriteBarrier(&___mainLight_17, value);
	}

	inline static int32_t get_offset_of_sky_18() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___sky_18)); }
	inline Skybox_t3194751310 * get_sky_18() const { return ___sky_18; }
	inline Skybox_t3194751310 ** get_address_of_sky_18() { return &___sky_18; }
	inline void set_sky_18(Skybox_t3194751310 * value)
	{
		___sky_18 = value;
		Il2CppCodeGenWriteBarrier(&___sky_18, value);
	}

	inline static int32_t get_offset_of_skyMat_19() { return static_cast<int32_t>(offsetof(AutoIntensity_t203652900, ___skyMat_19)); }
	inline Material_t3870600107 * get_skyMat_19() const { return ___skyMat_19; }
	inline Material_t3870600107 ** get_address_of_skyMat_19() { return &___skyMat_19; }
	inline void set_skyMat_19(Material_t3870600107 * value)
	{
		___skyMat_19 = value;
		Il2CppCodeGenWriteBarrier(&___skyMat_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
