/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.HttpRequestRetryHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }


#include <java/io/IOException.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class HttpRequestRetryHandler;
	class HttpRequestRetryHandler
		: public cpp_object<HttpRequestRetryHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		HttpRequestRetryHandler(jobject jobj)
		: cpp_object<HttpRequestRetryHandler>(jobj)
		{
		}

		cpp_boolean retryRequest(local_ref< java::io::IOException > const&, cpp_int const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class HttpRequestRetryHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL

namespace j2cpp {


cpp_boolean org::apache::http::client::HttpRequestRetryHandler::retryRequest(local_ref< java::io::IOException > const &a0, cpp_int const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::HttpRequestRetryHandler,"org/apache/http/client/HttpRequestRetryHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpRequestRetryHandler,0,"retryRequest","(Ljava/io/IOException;ILorg/apache/http/protocol/HttpContext;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
