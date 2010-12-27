/*================================================================================
  code generated by: java2cpp
  class: android.graphics.NinePatch
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/RectF.hpp>
#include <android/graphics/Region.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class NinePatch;
	class NinePatch
		: public cpp_object<NinePatch>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		NinePatch(jobject jobj)
		: cpp_object<NinePatch>(jobj)
		{
		}

		void setPaint(local_ref< android::graphics::Paint > const&);
		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::RectF > const&);
		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Rect > const&);
		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Paint > const&);
		cpp_int getDensity();
		cpp_int getWidth();
		cpp_int getHeight();
		cpp_boolean hasAlpha();
		local_ref< android::graphics::Region > getTransparentRegion(local_ref< android::graphics::Rect > const&);
		static cpp_boolean isNinePatchChunk(local_ref< cpp_byte_array<1> > const&);
	}; //class NinePatch

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::NinePatch > create< android::graphics::NinePatch>(local_ref< android::graphics::Bitmap > const &a0, local_ref< cpp_byte_array<1> > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< android::graphics::NinePatch >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::NinePatch::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::NinePatch::J2CPP_CLASS_NAME, android::graphics::NinePatch::J2CPP_METHOD_NAME(0), android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::NinePatch::setPaint(local_ref< android::graphics::Paint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::RectF > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Rect > const &a1, local_ref< android::graphics::Paint > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::graphics::NinePatch::getDensity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::graphics::NinePatch::getWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::graphics::NinePatch::getHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean android::graphics::NinePatch::hasAlpha()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::graphics::Region > android::graphics::NinePatch::getTransparentRegion(local_ref< android::graphics::Rect > const &a0)
{
	return local_ref< android::graphics::Region >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::NinePatch::isNinePatchChunk(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::NinePatch,"android/graphics/NinePatch")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,0,"<init>","(Landroid/graphics/Bitmap;[BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,1,"setPaint","(Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,2,"draw","(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,3,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,4,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,5,"getDensity","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,6,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,7,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,8,"hasAlpha","()Z")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,9,"getTransparentRegion","(Landroid/graphics/Rect;)Landroid/graphics/Region;")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,10,"isNinePatchChunk","([B)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
