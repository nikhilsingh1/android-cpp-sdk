/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.CellLocation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class CellLocation;
	class CellLocation
		: public object<CellLocation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CellLocation(jobject jobj)
		: object<CellLocation>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CellLocation();
		static void requestLocationUpdate();
		static local_ref< android::telephony::CellLocation > getEmpty();
	}; //class CellLocation

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_IMPL

namespace j2cpp {



android::telephony::CellLocation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::telephony::CellLocation::CellLocation()
: object<android::telephony::CellLocation>(
	call_new_object<
		android::telephony::CellLocation::J2CPP_CLASS_NAME,
		android::telephony::CellLocation::J2CPP_METHOD_NAME(0),
		android::telephony::CellLocation::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::telephony::CellLocation::requestLocationUpdate()
{
	return call_static_method<
		android::telephony::CellLocation::J2CPP_CLASS_NAME,
		android::telephony::CellLocation::J2CPP_METHOD_NAME(1),
		android::telephony::CellLocation::J2CPP_METHOD_SIGNATURE(1), 
		void
	>();
}

local_ref< android::telephony::CellLocation > android::telephony::CellLocation::getEmpty()
{
	return call_static_method<
		android::telephony::CellLocation::J2CPP_CLASS_NAME,
		android::telephony::CellLocation::J2CPP_METHOD_NAME(2),
		android::telephony::CellLocation::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::telephony::CellLocation >
	>();
}


J2CPP_DEFINE_CLASS(android::telephony::CellLocation,"android/telephony/CellLocation")
J2CPP_DEFINE_METHOD(android::telephony::CellLocation,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::CellLocation,1,"requestLocationUpdate","()V")
J2CPP_DEFINE_METHOD(android::telephony::CellLocation,2,"getEmpty","()Landroid/telephony/CellLocation;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_CELLLOCATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
