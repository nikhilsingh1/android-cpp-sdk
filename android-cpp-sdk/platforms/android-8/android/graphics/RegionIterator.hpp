/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.RegionIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Rect.hpp>
#include <android/graphics/Region.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class RegionIterator;
	class RegionIterator
		: public object<RegionIterator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit RegionIterator(jobject jobj)
		: object<RegionIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RegionIterator(local_ref< android::graphics::Region > const&);
		jboolean next(local_ref< android::graphics::Rect >  const&);
	}; //class RegionIterator

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_IMPL

namespace j2cpp {



android::graphics::RegionIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::RegionIterator::RegionIterator(local_ref< android::graphics::Region > const &a0)
: object<android::graphics::RegionIterator>(
	call_new_object<
		android::graphics::RegionIterator::J2CPP_CLASS_NAME,
		android::graphics::RegionIterator::J2CPP_METHOD_NAME(0),
		android::graphics::RegionIterator::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean android::graphics::RegionIterator::next(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::RegionIterator::J2CPP_CLASS_NAME,
		android::graphics::RegionIterator::J2CPP_METHOD_NAME(1),
		android::graphics::RegionIterator::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::graphics::RegionIterator,"android/graphics/RegionIterator")
J2CPP_DEFINE_METHOD(android::graphics::RegionIterator,0,"<init>","(Landroid/graphics/Region;)V")
J2CPP_DEFINE_METHOD(android::graphics::RegionIterator,1,"next","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::RegionIterator,2,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_REGIONITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
