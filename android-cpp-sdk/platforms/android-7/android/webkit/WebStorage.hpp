/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebStorage
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace webkit { class ValueCallback; } } }


#include <android/webkit/ValueCallback.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebStorage;
	namespace WebStorage_ {

		class QuotaUpdater;
		class QuotaUpdater
			: public object<QuotaUpdater>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit QuotaUpdater(jobject jobj)
			: object<QuotaUpdater>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void updateQuota(jlong);
		}; //class QuotaUpdater

	} //namespace WebStorage_

	class WebStorage
		: public object<WebStorage>
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

		typedef WebStorage_::QuotaUpdater QuotaUpdater;

		explicit WebStorage(jobject jobj)
		: object<WebStorage>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WebStorage();
		void getOrigins(local_ref< android::webkit::ValueCallback >  const&);
		void getUsageForOrigin(local_ref< java::lang::String >  const&, local_ref< android::webkit::ValueCallback >  const&);
		void getQuotaForOrigin(local_ref< java::lang::String >  const&, local_ref< android::webkit::ValueCallback >  const&);
		void setQuotaForOrigin(local_ref< java::lang::String >  const&, jlong);
		void deleteOrigin(local_ref< java::lang::String >  const&);
		void deleteAllData();
		static local_ref< android::webkit::WebStorage > getInstance();
	}; //class WebStorage

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_IMPL

namespace j2cpp {




android::webkit::WebStorage_::QuotaUpdater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::webkit::WebStorage_::QuotaUpdater::updateQuota(jlong a0)
{
	return call_method<
		android::webkit::WebStorage_::QuotaUpdater::J2CPP_CLASS_NAME,
		android::webkit::WebStorage_::QuotaUpdater::J2CPP_METHOD_NAME(0),
		android::webkit::WebStorage_::QuotaUpdater::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::webkit::WebStorage_::QuotaUpdater,"android/webkit/WebStorage$QuotaUpdater")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage_::QuotaUpdater,0,"updateQuota","(J)V")



android::webkit::WebStorage::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::WebStorage::WebStorage()
: object<android::webkit::WebStorage>(
	call_new_object<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(0),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::webkit::WebStorage::getOrigins(local_ref< android::webkit::ValueCallback > const &a0)
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(1),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::webkit::WebStorage::getUsageForOrigin(local_ref< java::lang::String > const &a0, local_ref< android::webkit::ValueCallback > const &a1)
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(2),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebStorage::getQuotaForOrigin(local_ref< java::lang::String > const &a0, local_ref< android::webkit::ValueCallback > const &a1)
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(3),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebStorage::setQuotaForOrigin(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(4),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebStorage::deleteOrigin(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(5),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::webkit::WebStorage::deleteAllData()
{
	return call_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(6),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

local_ref< android::webkit::WebStorage > android::webkit::WebStorage::getInstance()
{
	return call_static_method<
		android::webkit::WebStorage::J2CPP_CLASS_NAME,
		android::webkit::WebStorage::J2CPP_METHOD_NAME(7),
		android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::webkit::WebStorage >
	>();
}


J2CPP_DEFINE_CLASS(android::webkit::WebStorage,"android/webkit/WebStorage")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,1,"getOrigins","(Landroid/webkit/ValueCallback;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,2,"getUsageForOrigin","(Ljava/lang/String;Landroid/webkit/ValueCallback;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,3,"getQuotaForOrigin","(Ljava/lang/String;Landroid/webkit/ValueCallback;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,4,"setQuotaForOrigin","(Ljava/lang/String;J)V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,5,"deleteOrigin","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,6,"deleteAllData","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage,7,"getInstance","()Landroid/webkit/WebStorage;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
