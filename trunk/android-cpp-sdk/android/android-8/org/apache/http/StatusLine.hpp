/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.StatusLine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class StatusLine;
	class StatusLine
		: public cpp_object<StatusLine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		StatusLine(jobject jobj)
		: cpp_object<StatusLine>(jobj)
		{
		}

		local_ref< org::apache::http::ProtocolVersion > getProtocolVersion();
		cpp_int getStatusCode();
		local_ref< java::lang::String > getReasonPhrase();
	}; //class StatusLine

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::ProtocolVersion > org::apache::http::StatusLine::getProtocolVersion()
{
	return local_ref< org::apache::http::ProtocolVersion >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int org::apache::http::StatusLine::getStatusCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::StatusLine::getReasonPhrase()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::StatusLine,"org/apache/http/StatusLine")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,0,"getProtocolVersion","()Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,1,"getStatusCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,2,"getReasonPhrase","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
