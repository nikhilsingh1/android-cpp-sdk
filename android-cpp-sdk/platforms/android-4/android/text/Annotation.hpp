/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.Annotation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ANNOTATION_HPP_DECL
#define J2CPP_ANDROID_TEXT_ANNOTATION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Annotation;
	class Annotation
		: public object<Annotation>
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

		explicit Annotation(jobject jobj)
		: object<Annotation>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::text::ParcelableSpan>() const;
		operator local_ref<java::lang::Object>() const;


		Annotation(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		Annotation(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > getKey();
		local_ref< java::lang::String > getValue();
	}; //class Annotation

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ANNOTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ANNOTATION_HPP_IMPL
#define J2CPP_ANDROID_TEXT_ANNOTATION_HPP_IMPL

namespace j2cpp {



android::text::Annotation::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::text::Annotation::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}

android::text::Annotation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::Annotation::Annotation(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<android::text::Annotation>(
	call_new_object<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(0),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::text::Annotation::Annotation(local_ref< android::os::Parcel > const &a0)
: object<android::text::Annotation>(
	call_new_object<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(1),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint android::text::Annotation::getSpanTypeId()
{
	return call_method<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(2),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::text::Annotation::describeContents()
{
	return call_method<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(3),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::text::Annotation::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(4),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::text::Annotation::getKey()
{
	return call_method<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(5),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::text::Annotation::getValue()
{
	return call_method<
		android::text::Annotation::J2CPP_CLASS_NAME,
		android::text::Annotation::J2CPP_METHOD_NAME(6),
		android::text::Annotation::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::Annotation,"android/text/Annotation")
J2CPP_DEFINE_METHOD(android::text::Annotation,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::Annotation,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::Annotation,2,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::Annotation,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::Annotation,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::Annotation,5,"getKey","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::Annotation,6,"getValue","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ANNOTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
