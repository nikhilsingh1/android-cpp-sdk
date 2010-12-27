/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.AuthenticationHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/util/Map.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class AuthenticationHandler;
	class AuthenticationHandler
		: public cpp_object<AuthenticationHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		AuthenticationHandler(jobject jobj)
		: cpp_object<AuthenticationHandler>(jobj)
		{
		}

		cpp_boolean isAuthenticationRequested(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
		local_ref< java::util::Map > getChallenges(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
		local_ref< org::apache::http::auth::AuthScheme > selectScheme(local_ref< java::util::Map > const&, local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class AuthenticationHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL

namespace j2cpp {


cpp_boolean org::apache::http::client::AuthenticationHandler::isAuthenticationRequested(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::Map > org::apache::http::client::AuthenticationHandler::getChallenges(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::client::AuthenticationHandler::selectScheme(local_ref< java::util::Map > const &a0, local_ref< org::apache::http::HttpResponse > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return local_ref< org::apache::http::auth::AuthScheme >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::AuthenticationHandler,"org/apache/http/client/AuthenticationHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,0,"isAuthenticationRequested","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,1,"getChallenges","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(org::apache::http::client::AuthenticationHandler,2,"selectScheme","(Ljava/util/Map;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/auth/AuthScheme;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_AUTHENTICATIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
