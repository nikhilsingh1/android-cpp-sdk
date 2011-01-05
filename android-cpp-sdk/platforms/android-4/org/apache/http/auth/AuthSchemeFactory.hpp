/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.AuthSchemeFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthSchemeFactory;
	class AuthSchemeFactory
		: public object<AuthSchemeFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit AuthSchemeFactory(jobject jobj)
		: object<AuthSchemeFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::auth::AuthScheme > newInstance(local_ref< org::apache::http::params::HttpParams >  const&);
	}; //class AuthSchemeFactory

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::AuthSchemeFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::auth::AuthSchemeFactory::newInstance(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthSchemeFactory::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthSchemeFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::AuthSchemeFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::auth::AuthScheme >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthSchemeFactory,"org/apache/http/auth/AuthSchemeFactory")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeFactory,0,"newInstance","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
