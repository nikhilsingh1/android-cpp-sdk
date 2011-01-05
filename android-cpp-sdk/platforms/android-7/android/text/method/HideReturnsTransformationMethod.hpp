/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.HideReturnsTransformationMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class ReplacementTransformationMethod; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class TransformationMethod; } } } }


#include <android/text/method/ReplacementTransformationMethod.hpp>
#include <android/text/method/TransformationMethod.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class HideReturnsTransformationMethod;
	class HideReturnsTransformationMethod
		: public object<HideReturnsTransformationMethod>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit HideReturnsTransformationMethod(jobject jobj)
		: object<HideReturnsTransformationMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::method::ReplacementTransformationMethod>() const;
		operator local_ref<android::text::method::TransformationMethod>() const;


		HideReturnsTransformationMethod();
		static local_ref< android::text::method::HideReturnsTransformationMethod > getInstance();
	}; //class HideReturnsTransformationMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::HideReturnsTransformationMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::HideReturnsTransformationMethod::operator local_ref<android::text::method::ReplacementTransformationMethod>() const
{
	return local_ref<android::text::method::ReplacementTransformationMethod>(get_jobject());
}

android::text::method::HideReturnsTransformationMethod::operator local_ref<android::text::method::TransformationMethod>() const
{
	return local_ref<android::text::method::TransformationMethod>(get_jobject());
}


android::text::method::HideReturnsTransformationMethod::HideReturnsTransformationMethod()
: object<android::text::method::HideReturnsTransformationMethod>(
	call_new_object<
		android::text::method::HideReturnsTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::HideReturnsTransformationMethod::J2CPP_METHOD_NAME(0),
		android::text::method::HideReturnsTransformationMethod::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}




local_ref< android::text::method::HideReturnsTransformationMethod > android::text::method::HideReturnsTransformationMethod::getInstance()
{
	return call_static_method<
		android::text::method::HideReturnsTransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::HideReturnsTransformationMethod::J2CPP_METHOD_NAME(3),
		android::text::method::HideReturnsTransformationMethod::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::method::HideReturnsTransformationMethod >
	>();
}


J2CPP_DEFINE_CLASS(android::text::method::HideReturnsTransformationMethod,"android/text/method/HideReturnsTransformationMethod")
J2CPP_DEFINE_METHOD(android::text::method::HideReturnsTransformationMethod,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::HideReturnsTransformationMethod,1,"getOriginal","()[C")
J2CPP_DEFINE_METHOD(android::text::method::HideReturnsTransformationMethod,2,"getReplacement","()[C")
J2CPP_DEFINE_METHOD(android::text::method::HideReturnsTransformationMethod,3,"getInstance","()Landroid/text/method/HideReturnsTransformationMethod;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
