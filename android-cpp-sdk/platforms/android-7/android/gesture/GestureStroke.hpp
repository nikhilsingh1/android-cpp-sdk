/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GestureStroke
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace gesture { class OrientedBoundingBox; } } }


#include <android/gesture/OrientedBoundingBox.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/RectF.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureStroke;
	class GestureStroke
		: public object<GestureStroke>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit GestureStroke(jobject jobj)
		: object<GestureStroke>(jobj)
		, boundingBox(jobj)
		, length(jobj)
		, points(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GestureStroke(local_ref< java::util::ArrayList > const&);
		local_ref< android::graphics::Path > getPath();
		local_ref< android::graphics::Path > toPath(jfloat, jfloat, jint);
		void clearPath();
		local_ref< android::gesture::OrientedBoundingBox > computeOrientedBoundingBox();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::RectF > > boundingBox;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jfloat > length;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< array<jfloat,1> > > points;
	}; //class GestureStroke

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_IMPL

namespace j2cpp {



android::gesture::GestureStroke::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::gesture::GestureStroke::GestureStroke(local_ref< java::util::ArrayList > const &a0)
: object<android::gesture::GestureStroke>(
	call_new_object<
		android::gesture::GestureStroke::J2CPP_CLASS_NAME,
		android::gesture::GestureStroke::J2CPP_METHOD_NAME(0),
		android::gesture::GestureStroke::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
, boundingBox(get_jobject())
, length(get_jobject())
, points(get_jobject())
{
}


local_ref< android::graphics::Path > android::gesture::GestureStroke::getPath()
{
	return call_method<
		android::gesture::GestureStroke::J2CPP_CLASS_NAME,
		android::gesture::GestureStroke::J2CPP_METHOD_NAME(1),
		android::gesture::GestureStroke::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Path >
	>(get_jobject());
}

local_ref< android::graphics::Path > android::gesture::GestureStroke::toPath(jfloat a0, jfloat a1, jint a2)
{
	return call_method<
		android::gesture::GestureStroke::J2CPP_CLASS_NAME,
		android::gesture::GestureStroke::J2CPP_METHOD_NAME(2),
		android::gesture::GestureStroke::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::graphics::Path >
	>(get_jobject(), a0, a1, a2);
}

void android::gesture::GestureStroke::clearPath()
{
	return call_method<
		android::gesture::GestureStroke::J2CPP_CLASS_NAME,
		android::gesture::GestureStroke::J2CPP_METHOD_NAME(3),
		android::gesture::GestureStroke::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

local_ref< android::gesture::OrientedBoundingBox > android::gesture::GestureStroke::computeOrientedBoundingBox()
{
	return call_method<
		android::gesture::GestureStroke::J2CPP_CLASS_NAME,
		android::gesture::GestureStroke::J2CPP_METHOD_NAME(4),
		android::gesture::GestureStroke::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::gesture::OrientedBoundingBox >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::gesture::GestureStroke,"android/gesture/GestureStroke")
J2CPP_DEFINE_METHOD(android::gesture::GestureStroke,0,"<init>","(Ljava/util/ArrayList;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStroke,1,"getPath","()Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStroke,2,"toPath","(FFI)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStroke,3,"clearPath","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStroke,4,"computeOrientedBoundingBox","()Landroid/gesture/OrientedBoundingBox;")
J2CPP_DEFINE_FIELD(android::gesture::GestureStroke,0,"boundingBox","Landroid/graphics/RectF;")
J2CPP_DEFINE_FIELD(android::gesture::GestureStroke,1,"length","F")
J2CPP_DEFINE_FIELD(android::gesture::GestureStroke,2,"points","[F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTROKE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
