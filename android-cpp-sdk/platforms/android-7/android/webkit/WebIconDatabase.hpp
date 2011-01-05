/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebIconDatabase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace webkit { namespace WebIconDatabase_ { class IconListener; } } } }


#include <android/graphics/Bitmap.hpp>
#include <android/webkit/WebIconDatabase.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebIconDatabase;
	namespace WebIconDatabase_ {

		class IconListener;
		class IconListener
			: public object<IconListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit IconListener(jobject jobj)
			: object<IconListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onReceivedIcon(local_ref< java::lang::String >  const&, local_ref< android::graphics::Bitmap >  const&);
		}; //class IconListener

	} //namespace WebIconDatabase_

	class WebIconDatabase
		: public object<WebIconDatabase>
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

		typedef WebIconDatabase_::IconListener IconListener;

		explicit WebIconDatabase(jobject jobj)
		: object<WebIconDatabase>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void open(local_ref< java::lang::String >  const&);
		void close();
		void removeAllIcons();
		void requestIconForPageUrl(local_ref< java::lang::String >  const&, local_ref< android::webkit::WebIconDatabase_::IconListener >  const&);
		void retainIconForPageUrl(local_ref< java::lang::String >  const&);
		void releaseIconForPageUrl(local_ref< java::lang::String >  const&);
		static local_ref< android::webkit::WebIconDatabase > getInstance();
	}; //class WebIconDatabase

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_IMPL

namespace j2cpp {




android::webkit::WebIconDatabase_::IconListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::webkit::WebIconDatabase_::IconListener::onReceivedIcon(local_ref< java::lang::String > const &a0, local_ref< android::graphics::Bitmap > const &a1)
{
	return call_method<
		android::webkit::WebIconDatabase_::IconListener::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase_::IconListener::J2CPP_METHOD_NAME(0),
		android::webkit::WebIconDatabase_::IconListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::webkit::WebIconDatabase_::IconListener,"android/webkit/WebIconDatabase$IconListener")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase_::IconListener,0,"onReceivedIcon","(Ljava/lang/String;Landroid/graphics/Bitmap;)V")



android::webkit::WebIconDatabase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::webkit::WebIconDatabase::open(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(1),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::webkit::WebIconDatabase::close()
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(2),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::webkit::WebIconDatabase::removeAllIcons()
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(3),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void android::webkit::WebIconDatabase::requestIconForPageUrl(local_ref< java::lang::String > const &a0, local_ref< android::webkit::WebIconDatabase_::IconListener > const &a1)
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(4),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebIconDatabase::retainIconForPageUrl(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(5),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::webkit::WebIconDatabase::releaseIconForPageUrl(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(6),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< android::webkit::WebIconDatabase > android::webkit::WebIconDatabase::getInstance()
{
	return call_static_method<
		android::webkit::WebIconDatabase::J2CPP_CLASS_NAME,
		android::webkit::WebIconDatabase::J2CPP_METHOD_NAME(7),
		android::webkit::WebIconDatabase::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::webkit::WebIconDatabase >
	>();
}


J2CPP_DEFINE_CLASS(android::webkit::WebIconDatabase,"android/webkit/WebIconDatabase")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,1,"open","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,2,"close","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,3,"removeAllIcons","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,4,"requestIconForPageUrl","(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,5,"retainIconForPageUrl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,6,"releaseIconForPageUrl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebIconDatabase,7,"getInstance","()Landroid/webkit/WebIconDatabase;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBICONDATABASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
