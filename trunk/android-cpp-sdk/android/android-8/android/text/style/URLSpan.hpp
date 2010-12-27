/*================================================================================
  code generated by: java2cpp
  class: android.text.style.URLSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/os/Parcel.hpp>
#include <android/view/View.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class URLSpan;
	class URLSpan
		: public cpp_object<URLSpan>
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

		URLSpan(jobject jobj)
		: cpp_object<URLSpan>(jobj)
		{
		}

		cpp_int getSpanTypeId();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		local_ref< java::lang::String > getURL();
		void onClick(local_ref< android::view::View > const&);
	}; //class URLSpan

} //namespace style
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::style::URLSpan > create< android::text::style::URLSpan>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::text::style::URLSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::URLSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::URLSpan::J2CPP_CLASS_NAME, android::text::style::URLSpan::J2CPP_METHOD_NAME(0), android::text::style::URLSpan::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::text::style::URLSpan > create< android::text::style::URLSpan>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::text::style::URLSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::URLSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::URLSpan::J2CPP_CLASS_NAME, android::text::style::URLSpan::J2CPP_METHOD_NAME(1), android::text::style::URLSpan::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::style::URLSpan::getSpanTypeId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::text::style::URLSpan::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::text::style::URLSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::style::URLSpan::getURL()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::text::style::URLSpan::onClick(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::style::URLSpan,"android/text/style/URLSpan")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,5,"getURL","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::style::URLSpan,6,"onClick","(Landroid/view/View;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_URLSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
