/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.UrlInterceptHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace webkit { class PluginData; } } }
namespace j2cpp { namespace android { namespace webkit { namespace CacheManager_ { class CacheResult; } } } }


#include <android/webkit/CacheManager.hpp>
#include <android/webkit/PluginData.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class UrlInterceptHandler;
	class UrlInterceptHandler
		: public object<UrlInterceptHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit UrlInterceptHandler(jobject jobj)
		: object<UrlInterceptHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::webkit::CacheManager_::CacheResult > service(local_ref< java::lang::String >  const&, local_ref< java::util::Map >  const&);
		local_ref< android::webkit::PluginData > getPluginData(local_ref< java::lang::String >  const&, local_ref< java::util::Map >  const&);
	}; //class UrlInterceptHandler

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_IMPL

namespace j2cpp {



android::webkit::UrlInterceptHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::webkit::CacheManager_::CacheResult > android::webkit::UrlInterceptHandler::service(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		android::webkit::UrlInterceptHandler::J2CPP_CLASS_NAME,
		android::webkit::UrlInterceptHandler::J2CPP_METHOD_NAME(0),
		android::webkit::UrlInterceptHandler::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::webkit::CacheManager_::CacheResult >
	>(get_jobject(), a0, a1);
}

local_ref< android::webkit::PluginData > android::webkit::UrlInterceptHandler::getPluginData(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		android::webkit::UrlInterceptHandler::J2CPP_CLASS_NAME,
		android::webkit::UrlInterceptHandler::J2CPP_METHOD_NAME(1),
		android::webkit::UrlInterceptHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::webkit::PluginData >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::webkit::UrlInterceptHandler,"android/webkit/UrlInterceptHandler")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptHandler,0,"service","(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/CacheManager$CacheResult;")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptHandler,1,"getPluginData","(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/PluginData;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_URLINTERCEPTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
