/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Picture
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <android/graphics/Canvas.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Picture;
	class Picture
		: public cpp_object<Picture>
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

		Picture(jobject jobj)
		: cpp_object<Picture>(jobj)
		{
		}

		local_ref< android::graphics::Canvas > beginRecording(cpp_int const&, cpp_int const&);
		void endRecording();
		cpp_int getWidth();
		cpp_int getHeight();
		void draw(local_ref< android::graphics::Canvas > const&);
		static local_ref< android::graphics::Picture > createFromStream(local_ref< java::io::InputStream > const&);
		void writeToStream(local_ref< java::io::OutputStream > const&);
	}; //class Picture

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::Picture > create< android::graphics::Picture>()
{
	return local_ref< android::graphics::Picture >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Picture::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Picture::J2CPP_CLASS_NAME, android::graphics::Picture::J2CPP_METHOD_NAME(0), android::graphics::Picture::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::Picture > create< android::graphics::Picture>(local_ref< android::graphics::Picture > const &a0)
{
	return local_ref< android::graphics::Picture >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Picture::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Picture::J2CPP_CLASS_NAME, android::graphics::Picture::J2CPP_METHOD_NAME(1), android::graphics::Picture::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Canvas > android::graphics::Picture::beginRecording(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Canvas >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Picture::endRecording()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::graphics::Picture::getWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::graphics::Picture::getHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::graphics::Picture::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Picture > android::graphics::Picture::createFromStream(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< android::graphics::Picture >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Picture::writeToStream(local_ref< java::io::OutputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::graphics::Picture,"android/graphics/Picture")
J2CPP_DEFINE_METHOD(android::graphics::Picture,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Picture,1,"<init>","(Landroid/graphics/Picture;)V")
J2CPP_DEFINE_METHOD(android::graphics::Picture,2,"beginRecording","(II)Landroid/graphics/Canvas;")
J2CPP_DEFINE_METHOD(android::graphics::Picture,3,"endRecording","()V")
J2CPP_DEFINE_METHOD(android::graphics::Picture,4,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::Picture,5,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::Picture,6,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::Picture,7,"createFromStream","(Ljava/io/InputStream;)Landroid/graphics/Picture;")
J2CPP_DEFINE_METHOD(android::graphics::Picture,8,"writeToStream","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(android::graphics::Picture,9,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PICTURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
