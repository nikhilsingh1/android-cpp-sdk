/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.CookieHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL
#define J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }


#include <java/lang/Object.hpp>
#include <java/net/URI.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CookieHandler;
	class CookieHandler
		: public object<CookieHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit CookieHandler(jobject jobj)
		: object<CookieHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CookieHandler();
		static local_ref< java::net::CookieHandler > getDefault();
		static void setDefault(local_ref< java::net::CookieHandler >  const&);
		local_ref< java::util::Map > get(local_ref< java::net::URI >  const&, local_ref< java::util::Map >  const&);
		void put(local_ref< java::net::URI >  const&, local_ref< java::util::Map >  const&);
	}; //class CookieHandler

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL
#define J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL

namespace j2cpp {



java::net::CookieHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::CookieHandler::CookieHandler()
: object<java::net::CookieHandler>(
	call_new_object<
		java::net::CookieHandler::J2CPP_CLASS_NAME,
		java::net::CookieHandler::J2CPP_METHOD_NAME(0),
		java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::net::CookieHandler > java::net::CookieHandler::getDefault()
{
	return call_static_method<
		java::net::CookieHandler::J2CPP_CLASS_NAME,
		java::net::CookieHandler::J2CPP_METHOD_NAME(1),
		java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::net::CookieHandler >
	>();
}

void java::net::CookieHandler::setDefault(local_ref< java::net::CookieHandler > const &a0)
{
	return call_static_method<
		java::net::CookieHandler::J2CPP_CLASS_NAME,
		java::net::CookieHandler::J2CPP_METHOD_NAME(2),
		java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0);
}

local_ref< java::util::Map > java::net::CookieHandler::get(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		java::net::CookieHandler::J2CPP_CLASS_NAME,
		java::net::CookieHandler::J2CPP_METHOD_NAME(3),
		java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::Map >
	>(get_jobject(), a0, a1);
}

void java::net::CookieHandler::put(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		java::net::CookieHandler::J2CPP_CLASS_NAME,
		java::net::CookieHandler::J2CPP_METHOD_NAME(4),
		java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::net::CookieHandler,"java/net/CookieHandler")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,1,"getDefault","()Ljava/net/CookieHandler;")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,2,"setDefault","(Ljava/net/CookieHandler;)V")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,3,"get","(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,4,"put","(Ljava/net/URI;Ljava/util/Map;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
