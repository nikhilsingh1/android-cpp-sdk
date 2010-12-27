/*================================================================================
  code generated by: java2cpp
  class: android.text.style.SuperscriptSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }


#include <android/os/Parcel.hpp>
#include <android/text/TextPaint.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class SuperscriptSpan;
	class SuperscriptSpan
		: public cpp_object<SuperscriptSpan>
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

		SuperscriptSpan(jobject jobj)
		: cpp_object<SuperscriptSpan>(jobj)
		{
		}

		cpp_int getSpanTypeId();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		void updateDrawState(local_ref< android::text::TextPaint > const&);
		void updateMeasureState(local_ref< android::text::TextPaint > const&);
	}; //class SuperscriptSpan

} //namespace style
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::style::SuperscriptSpan > create< android::text::style::SuperscriptSpan>()
{
	return local_ref< android::text::style::SuperscriptSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME, android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(0), android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::text::style::SuperscriptSpan > create< android::text::style::SuperscriptSpan>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::text::style::SuperscriptSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::SuperscriptSpan::J2CPP_CLASS_NAME, android::text::style::SuperscriptSpan::J2CPP_METHOD_NAME(1), android::text::style::SuperscriptSpan::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::style::SuperscriptSpan::getSpanTypeId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::text::style::SuperscriptSpan::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::text::style::SuperscriptSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::style::SuperscriptSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::text::style::SuperscriptSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::style::SuperscriptSpan,"android/text/style/SuperscriptSpan")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,5,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::SuperscriptSpan,6,"updateMeasureState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_SUPERSCRIPTSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
