/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.Display
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_DISPLAY_HPP_DECL
#define J2CPP_ANDROID_VIEW_DISPLAY_HPP_DECL


namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/util/DisplayMetrics.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class Display;
	class Display
		: public object<Display>
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

		explicit Display(jobject jobj)
		: object<Display>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getDisplayId();
		jint getWidth();
		jint getHeight();
		jint getOrientation();
		jint getPixelFormat();
		jfloat getRefreshRate();
		void getMetrics(local_ref< android::util::DisplayMetrics >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT_DISPLAY;
	}; //class Display

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_DISPLAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_DISPLAY_HPP_IMPL
#define J2CPP_ANDROID_VIEW_DISPLAY_HPP_IMPL

namespace j2cpp {



android::view::Display::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::view::Display::getDisplayId()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(1),
		android::view::Display::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

jint android::view::Display::getWidth()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(2),
		android::view::Display::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::view::Display::getHeight()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(3),
		android::view::Display::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint android::view::Display::getOrientation()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(4),
		android::view::Display::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::view::Display::getPixelFormat()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(5),
		android::view::Display::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jfloat android::view::Display::getRefreshRate()
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(6),
		android::view::Display::J2CPP_METHOD_SIGNATURE(6), 
		jfloat
	>(get_jobject());
}

void android::view::Display::getMetrics(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::view::Display::J2CPP_CLASS_NAME,
		android::view::Display::J2CPP_METHOD_NAME(7),
		android::view::Display::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::view::Display::J2CPP_CLASS_NAME,
	android::view::Display::J2CPP_FIELD_NAME(0),
	android::view::Display::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::Display::DEFAULT_DISPLAY;


J2CPP_DEFINE_CLASS(android::view::Display,"android/view/Display")
J2CPP_DEFINE_METHOD(android::view::Display,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::Display,1,"getDisplayId","()I")
J2CPP_DEFINE_METHOD(android::view::Display,2,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::view::Display,3,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::view::Display,4,"getOrientation","()I")
J2CPP_DEFINE_METHOD(android::view::Display,5,"getPixelFormat","()I")
J2CPP_DEFINE_METHOD(android::view::Display,6,"getRefreshRate","()F")
J2CPP_DEFINE_METHOD(android::view::Display,7,"getMetrics","(Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_FIELD(android::view::Display,0,"DEFAULT_DISPLAY","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_DISPLAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
