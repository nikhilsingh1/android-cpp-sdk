/*================================================================================
  code generated by: java2cpp
  class: android.webkit.WebStorage
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBSTORAGE_HPP_DECL


namespace j2cpp { namespace android { namespace webkit { class ValueCallback; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/webkit/ValueCallback.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebStorage;
	namespace WebStorage_ {

		class QuotaUpdater;
		class QuotaUpdater
			: public cpp_object<QuotaUpdater>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			QuotaUpdater(jobject jobj)
			: cpp_object<QuotaUpdater>(jobj)
			{
			}

			void updateQuota(cpp_long const&);
		}; //class QuotaUpdater

	} //namespace WebStorage_

	class WebStorage
		: public cpp_object<WebStorage>
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

		WebStorage(jobject jobj)
		: cpp_object<WebStorage>(jobj)
		{
		}

		void getOrigins(local_ref< android::webkit::ValueCallback > const&);
		void getUsageForOrigin(local_ref< java::lang::String > const&, local_ref< android::webkit::ValueCallback > const&);
		void getQuotaForOrigin(local_ref< java::lang::String > const&, local_ref< android::webkit::ValueCallback > const&);
		void setQuotaForOrigin(local_ref< java::lang::String > const&, cpp_long const&);
		void deleteOrigin(local_ref< java::lang::String > const&);
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



void android::webkit::WebStorage_::QuotaUpdater::updateQuota(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::WebStorage_::QuotaUpdater,"android/webkit/WebStorage$QuotaUpdater")
J2CPP_DEFINE_METHOD(android::webkit::WebStorage_::QuotaUpdater,0,"updateQuota","(J)V")


template <>
local_ref< android::webkit::WebStorage > create< android::webkit::WebStorage>()
{
	return local_ref< android::webkit::WebStorage >(
		environment::get().get_jenv()->NewObject(
			get_class<android::webkit::WebStorage::J2CPP_CLASS_NAME>(),
			get_method_id<android::webkit::WebStorage::J2CPP_CLASS_NAME, android::webkit::WebStorage::J2CPP_METHOD_NAME(0), android::webkit::WebStorage::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::webkit::WebStorage::getOrigins(local_ref< android::webkit::ValueCallback > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::webkit::WebStorage::getUsageForOrigin(local_ref< java::lang::String > const &a0, local_ref< android::webkit::ValueCallback > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::webkit::WebStorage::getQuotaForOrigin(local_ref< java::lang::String > const &a0, local_ref< android::webkit::ValueCallback > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::webkit::WebStorage::setQuotaForOrigin(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::webkit::WebStorage::deleteOrigin(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::webkit::WebStorage::deleteAllData()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< android::webkit::WebStorage > android::webkit::WebStorage::getInstance()
{
	return local_ref< android::webkit::WebStorage >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
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
