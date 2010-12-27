/*================================================================================
  code generated by: java2cpp
  class: android.hardware.Sensor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSOR_HPP_DECL
#define J2CPP_ANDROID_HARDWARE_SENSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace hardware {

	class Sensor;
	class Sensor
		: public cpp_object<Sensor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		Sensor(jobject jobj)
		: cpp_object<Sensor>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getVendor();
		cpp_int getType();
		cpp_int getVersion();
		cpp_float getMaximumRange();
		cpp_float getResolution();
		cpp_float getPower();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > TYPE_ACCELEROMETER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > TYPE_MAGNETIC_FIELD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > TYPE_ORIENTATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > TYPE_GYROSCOPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > TYPE_LIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > TYPE_PRESSURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > TYPE_TEMPERATURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > TYPE_PROXIMITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > TYPE_ALL;
	}; //class Sensor

} //namespace hardware
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSOR_HPP_IMPL
#define J2CPP_ANDROID_HARDWARE_SENSOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::hardware::Sensor > create< android::hardware::Sensor>()
{
	return local_ref< android::hardware::Sensor >(
		environment::get().get_jenv()->NewObject(
			get_class<android::hardware::Sensor::J2CPP_CLASS_NAME>(),
			get_method_id<android::hardware::Sensor::J2CPP_CLASS_NAME, android::hardware::Sensor::J2CPP_METHOD_NAME(0), android::hardware::Sensor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > android::hardware::Sensor::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > android::hardware::Sensor::getVendor()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::hardware::Sensor::getType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::hardware::Sensor::getVersion()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_float android::hardware::Sensor::getMaximumRange()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_float android::hardware::Sensor::getResolution()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_float android::hardware::Sensor::getPower()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(0),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::hardware::Sensor::TYPE_ACCELEROMETER;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(1),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::hardware::Sensor::TYPE_MAGNETIC_FIELD;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(2),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::hardware::Sensor::TYPE_ORIENTATION;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(3),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::hardware::Sensor::TYPE_GYROSCOPE;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(4),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::hardware::Sensor::TYPE_LIGHT;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(5),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::hardware::Sensor::TYPE_PRESSURE;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(6),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::hardware::Sensor::TYPE_TEMPERATURE;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(7),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::hardware::Sensor::TYPE_PROXIMITY;

static_field<
	android::hardware::Sensor::J2CPP_CLASS_NAME,
	android::hardware::Sensor::J2CPP_FIELD_NAME(8),
	android::hardware::Sensor::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::hardware::Sensor::TYPE_ALL;


J2CPP_DEFINE_CLASS(android::hardware::Sensor,"android/hardware/Sensor")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,2,"getVendor","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,3,"getType","()I")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,4,"getVersion","()I")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,5,"getMaximumRange","()F")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,6,"getResolution","()F")
J2CPP_DEFINE_METHOD(android::hardware::Sensor,7,"getPower","()F")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,0,"TYPE_ACCELEROMETER","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,1,"TYPE_MAGNETIC_FIELD","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,2,"TYPE_ORIENTATION","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,3,"TYPE_GYROSCOPE","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,4,"TYPE_LIGHT","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,5,"TYPE_PRESSURE","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,6,"TYPE_TEMPERATURE","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,7,"TYPE_PROXIMITY","I")
J2CPP_DEFINE_FIELD(android::hardware::Sensor,8,"TYPE_ALL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
