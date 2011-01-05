/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpServerConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpConnection.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpServerConnection;
	class HttpServerConnection
		: public object<HttpServerConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit HttpServerConnection(jobject jobj)
		: object<HttpServerConnection>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpConnection>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::HttpRequest > receiveRequestHeader();
		void receiveRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest >  const&);
		void sendResponseHeader(local_ref< org::apache::http::HttpResponse >  const&);
		void sendResponseEntity(local_ref< org::apache::http::HttpResponse >  const&);
		void flush();
	}; //class HttpServerConnection

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpServerConnection::operator local_ref<org::apache::http::HttpConnection>() const
{
	return local_ref<org::apache::http::HttpConnection>(get_jobject());
}

org::apache::http::HttpServerConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::HttpRequest > org::apache::http::HttpServerConnection::receiveRequestHeader()
{
	return call_method<
		org::apache::http::HttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpServerConnection::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpServerConnection::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::HttpRequest >
	>(get_jobject());
}

void org::apache::http::HttpServerConnection::receiveRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest > const &a0)
{
	return call_method<
		org::apache::http::HttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpServerConnection::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpServerConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpServerConnection::sendResponseHeader(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::HttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpServerConnection::J2CPP_METHOD_NAME(2),
		org::apache::http::HttpServerConnection::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpServerConnection::sendResponseEntity(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::HttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpServerConnection::J2CPP_METHOD_NAME(3),
		org::apache::http::HttpServerConnection::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpServerConnection::flush()
{
	return call_method<
		org::apache::http::HttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::HttpServerConnection::J2CPP_METHOD_NAME(4),
		org::apache::http::HttpServerConnection::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpServerConnection,"org/apache/http/HttpServerConnection")
J2CPP_DEFINE_METHOD(org::apache::http::HttpServerConnection,0,"receiveRequestHeader","()Lorg/apache/http/HttpRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpServerConnection,1,"receiveRequestEntity","(Lorg/apache/http/HttpEntityEnclosingRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpServerConnection,2,"sendResponseHeader","(Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpServerConnection,3,"sendResponseEntity","(Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpServerConnection,4,"flush","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPSERVERCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
