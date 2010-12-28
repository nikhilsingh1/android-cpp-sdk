/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.RequestConnControl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpRequestInterceptor.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class RequestConnControl;
	class RequestConnControl
		: public cpp_object<RequestConnControl>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit RequestConnControl(jobject jobj)
		: cpp_object<RequestConnControl>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpRequestInterceptor>() const;


		RequestConnControl();
		void process(local_ref< org::apache::http::HttpRequest > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class RequestConnControl

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::RequestConnControl::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::protocol::RequestConnControl::operator local_ref<org::apache::http::HttpRequestInterceptor>() const
{
	return local_ref<org::apache::http::HttpRequestInterceptor>(get_jtype());
}


org::apache::http::protocol::RequestConnControl::RequestConnControl()
: cpp_object<org::apache::http::protocol::RequestConnControl>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::protocol::RequestConnControl::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::protocol::RequestConnControl::J2CPP_CLASS_NAME, org::apache::http::protocol::RequestConnControl::J2CPP_METHOD_NAME(0), org::apache::http::protocol::RequestConnControl::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::protocol::RequestConnControl::process(local_ref< org::apache::http::HttpRequest > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::RequestConnControl,"org/apache/http/protocol/RequestConnControl")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::RequestConnControl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::RequestConnControl,1,"process","(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_REQUESTCONNCONTROL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION