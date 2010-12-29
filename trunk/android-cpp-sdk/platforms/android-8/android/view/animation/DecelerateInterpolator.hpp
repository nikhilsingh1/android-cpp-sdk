/*================================================================================
  code generated by: java2cpp
  class: android.view.animation.DecelerateInterpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class DecelerateInterpolator;
	class DecelerateInterpolator
		: public cpp_object<DecelerateInterpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		DecelerateInterpolator(jobject jobj)
		: cpp_object<DecelerateInterpolator>(jobj)
		{
		}

		cpp_float getInterpolation(cpp_float const&);
	}; //class DecelerateInterpolator

} //namespace animation
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::animation::DecelerateInterpolator > create< android::view::animation::DecelerateInterpolator>()
{
	return local_ref< android::view::animation::DecelerateInterpolator >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME, android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(0), android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::view::animation::DecelerateInterpolator > create< android::view::animation::DecelerateInterpolator>(cpp_float const &a0)
{
	return local_ref< android::view::animation::DecelerateInterpolator >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME, android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(1), android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::DecelerateInterpolator > create< android::view::animation::DecelerateInterpolator>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::view::animation::DecelerateInterpolator >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME, android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(2), android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::view::animation::DecelerateInterpolator::getInterpolation(cpp_float const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::animation::DecelerateInterpolator,"android/view/animation/DecelerateInterpolator")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,1,"<init>","(F)V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,3,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION