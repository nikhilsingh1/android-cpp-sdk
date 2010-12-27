/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.HeaderValueFormatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/NameValuePair.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class HeaderValueFormatter;
	class HeaderValueFormatter
		: public cpp_object<HeaderValueFormatter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		HeaderValueFormatter(jobject jobj)
		: cpp_object<HeaderValueFormatter>(jobj)
		{
		}

		local_ref< org::apache::http::util::CharArrayBuffer > formatElements(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< cpp_object_array<org::apache::http::HeaderElement, 1> > const&, cpp_boolean const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::HeaderElement > const&, cpp_boolean const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatParameters(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > const&, cpp_boolean const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::NameValuePair > const&, cpp_boolean const&);
	}; //class HeaderValueFormatter

} //namespace message
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::HeaderValueFormatter::formatElements(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< cpp_object_array<org::apache::http::HeaderElement, 1> > const &a1, cpp_boolean const &a2)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::HeaderValueFormatter::formatHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::HeaderElement > const &a1, cpp_boolean const &a2)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::HeaderValueFormatter::formatParameters(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > const &a1, cpp_boolean const &a2)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::HeaderValueFormatter::formatNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::NameValuePair > const &a1, cpp_boolean const &a2)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::HeaderValueFormatter,"org/apache/http/message/HeaderValueFormatter")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueFormatter,0,"formatElements","(Lorg/apache/http/util/CharArrayBuffer;[org.apache.http.HeaderElementZ)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueFormatter,1,"formatHeaderElement","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueFormatter,2,"formatParameters","(Lorg/apache/http/util/CharArrayBuffer;[org.apache.http.NameValuePairZ)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueFormatter,3,"formatNameValuePair","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEFORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
