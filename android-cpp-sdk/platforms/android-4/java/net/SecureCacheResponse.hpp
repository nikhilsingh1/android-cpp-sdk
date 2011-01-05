/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.SecureCacheResponse
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_DECL
#define J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_DECL


namespace j2cpp { namespace java { namespace net { class CacheResponse; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/CacheResponse.hpp>
#include <java/security/Principal.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace java { namespace net {

	class SecureCacheResponse;
	class SecureCacheResponse
		: public object<SecureCacheResponse>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SecureCacheResponse(jobject jobj)
		: object<SecureCacheResponse>(jobj)
		{
		}

		operator local_ref<java::net::CacheResponse>() const;
		operator local_ref<java::lang::Object>() const;


		SecureCacheResponse();
		local_ref< java::lang::String > getCipherSuite();
		local_ref< java::util::List > getLocalCertificateChain();
		local_ref< java::util::List > getServerCertificateChain();
		local_ref< java::security::Principal > getPeerPrincipal();
		local_ref< java::security::Principal > getLocalPrincipal();
	}; //class SecureCacheResponse

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_IMPL
#define J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_IMPL

namespace j2cpp {



java::net::SecureCacheResponse::operator local_ref<java::net::CacheResponse>() const
{
	return local_ref<java::net::CacheResponse>(get_jobject());
}

java::net::SecureCacheResponse::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::SecureCacheResponse::SecureCacheResponse()
: object<java::net::SecureCacheResponse>(
	call_new_object<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(0),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::String > java::net::SecureCacheResponse::getCipherSuite()
{
	return call_method<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(1),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::List > java::net::SecureCacheResponse::getLocalCertificateChain()
{
	return call_method<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(2),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List >
	>(get_jobject());
}

local_ref< java::util::List > java::net::SecureCacheResponse::getServerCertificateChain()
{
	return call_method<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(3),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::List >
	>(get_jobject());
}

local_ref< java::security::Principal > java::net::SecureCacheResponse::getPeerPrincipal()
{
	return call_method<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(4),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::Principal >
	>(get_jobject());
}

local_ref< java::security::Principal > java::net::SecureCacheResponse::getLocalPrincipal()
{
	return call_method<
		java::net::SecureCacheResponse::J2CPP_CLASS_NAME,
		java::net::SecureCacheResponse::J2CPP_METHOD_NAME(5),
		java::net::SecureCacheResponse::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Principal >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::SecureCacheResponse,"java/net/SecureCacheResponse")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,1,"getCipherSuite","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,2,"getLocalCertificateChain","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,3,"getServerCertificateChain","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,4,"getPeerPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(java::net::SecureCacheResponse,5,"getLocalPrincipal","()Ljava/security/Principal;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SECURECACHERESPONSE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
