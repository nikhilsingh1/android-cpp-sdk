/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ContentProviderResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Integer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/net/Uri.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentProviderResult;
	class ContentProviderResult
		: public object<ContentProviderResult>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit ContentProviderResult(jobject jobj)
		: object<ContentProviderResult>(jobj)
		, uri(jobj)
		, count(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		ContentProviderResult(local_ref< android::net::Uri > const&);
		ContentProviderResult(jint);
		ContentProviderResult(local_ref< android::os::Parcel > const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();
		local_ref< java::lang::String > toString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > uri;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Integer > > count;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ContentProviderResult

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_IMPL

namespace j2cpp {



android::content::ContentProviderResult::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::ContentProviderResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::ContentProviderResult::ContentProviderResult(local_ref< android::net::Uri > const &a0)
: object<android::content::ContentProviderResult>(
	call_new_object<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(0),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
, uri(get_jobject())
, count(get_jobject())
{
}



android::content::ContentProviderResult::ContentProviderResult(jint a0)
: object<android::content::ContentProviderResult>(
	call_new_object<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(1),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, uri(get_jobject())
, count(get_jobject())
{
}



android::content::ContentProviderResult::ContentProviderResult(local_ref< android::os::Parcel > const &a0)
: object<android::content::ContentProviderResult>(
	call_new_object<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(2),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
, uri(get_jobject())
, count(get_jobject())
{
}


void android::content::ContentProviderResult::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(3),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jint android::content::ContentProviderResult::describeContents()
{
	return call_method<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(4),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ContentProviderResult::toString()
{
	return call_method<
		android::content::ContentProviderResult::J2CPP_CLASS_NAME,
		android::content::ContentProviderResult::J2CPP_METHOD_NAME(5),
		android::content::ContentProviderResult::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}



static_field<
	android::content::ContentProviderResult::J2CPP_CLASS_NAME,
	android::content::ContentProviderResult::J2CPP_FIELD_NAME(2),
	android::content::ContentProviderResult::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::os::Parcelable_::Creator >
> android::content::ContentProviderResult::CREATOR;


J2CPP_DEFINE_CLASS(android::content::ContentProviderResult,"android/content/ContentProviderResult")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,0,"<init>","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderResult,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::ContentProviderResult,0,"uri","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::content::ContentProviderResult,1,"count","Ljava/lang/Integer;")
J2CPP_DEFINE_FIELD(android::content::ContentProviderResult,2,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
