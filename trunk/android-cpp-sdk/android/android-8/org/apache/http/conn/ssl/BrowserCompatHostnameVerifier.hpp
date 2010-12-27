/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.ssl.BrowserCompatHostnameVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace ssl {

	class BrowserCompatHostnameVerifier;
	class BrowserCompatHostnameVerifier
		: public cpp_object<BrowserCompatHostnameVerifier>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		BrowserCompatHostnameVerifier(jobject jobj)
		: cpp_object<BrowserCompatHostnameVerifier>(jobj)
		{
		}

		void verify(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< java::lang::String > toString();
	}; //class BrowserCompatHostnameVerifier

} //namespace ssl
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::ssl::BrowserCompatHostnameVerifier > create< org::apache::http::conn::ssl::BrowserCompatHostnameVerifier>()
{
	return local_ref< org::apache::http::conn::ssl::BrowserCompatHostnameVerifier >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::J2CPP_CLASS_NAME, org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::J2CPP_METHOD_NAME(0), org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ssl::BrowserCompatHostnameVerifier,"org/apache/http/conn/ssl/BrowserCompatHostnameVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::BrowserCompatHostnameVerifier,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::BrowserCompatHostnameVerifier,1,"verify","(Ljava/lang/String;[java.lang.String[java.lang.String)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::BrowserCompatHostnameVerifier,2,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_BROWSERCOMPATHOSTNAMEVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
