/*================================================================================
  code generated by: java2cpp
  class: android.text.style.MetricAffectingSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_DECL


namespace j2cpp { namespace android { namespace text { namespace style { class CharacterStyle; } } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }


#include <android/text/TextPaint.hpp>
#include <android/text/style/CharacterStyle.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class MetricAffectingSpan;
	class MetricAffectingSpan
		: public cpp_object<MetricAffectingSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		MetricAffectingSpan(jobject jobj)
		: cpp_object<MetricAffectingSpan>(jobj)
		{
		}

		void updateMeasureState(local_ref< android::text::TextPaint > const&);
		local_ref< android::text::style::MetricAffectingSpan > getUnderlying();
		local_ref< android::text::style::CharacterStyle > getUnderlying_1();
	}; //class MetricAffectingSpan

} //namespace style
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::style::MetricAffectingSpan > create< android::text::style::MetricAffectingSpan>()
{
	return local_ref< android::text::style::MetricAffectingSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::MetricAffectingSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::MetricAffectingSpan::J2CPP_CLASS_NAME, android::text::style::MetricAffectingSpan::J2CPP_METHOD_NAME(0), android::text::style::MetricAffectingSpan::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::text::style::MetricAffectingSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::style::MetricAffectingSpan > android::text::style::MetricAffectingSpan::getUnderlying()
{
	return local_ref< android::text::style::MetricAffectingSpan >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::text::style::CharacterStyle > android::text::style::MetricAffectingSpan::getUnderlying_1()
{
	return local_ref< android::text::style::CharacterStyle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::style::MetricAffectingSpan,"android/text/style/MetricAffectingSpan")
J2CPP_DEFINE_METHOD(android::text::style::MetricAffectingSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::MetricAffectingSpan,1,"updateMeasureState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::MetricAffectingSpan,2,"getUnderlying","()Landroid/text/style/MetricAffectingSpan;")
J2CPP_DEFINE_METHOD(android::text::style::MetricAffectingSpan,3,"getUnderlying","()Landroid/text/style/CharacterStyle;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
