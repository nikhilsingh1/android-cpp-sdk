/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.StatusLine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class StatusLine;
	class StatusLine
		: public object<StatusLine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit StatusLine(jobject jobj)
		: object<StatusLine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::ProtocolVersion > getProtocolVersion();
		jint getStatusCode();
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



org::apache::http::StatusLine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::StatusLine::getProtocolVersion()
{
	return call_method<
		org::apache::http::StatusLine::J2CPP_CLASS_NAME,
		org::apache::http::StatusLine::J2CPP_METHOD_NAME(0),
		org::apache::http::StatusLine::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::ProtocolVersion >
	>(get_jobject());
}

jint org::apache::http::StatusLine::getStatusCode()
{
	return call_method<
		org::apache::http::StatusLine::J2CPP_CLASS_NAME,
		org::apache::http::StatusLine::J2CPP_METHOD_NAME(1),
		org::apache::http::StatusLine::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::StatusLine::getReasonPhrase()
{
	return call_method<
		org::apache::http::StatusLine::J2CPP_CLASS_NAME,
		org::apache::http::StatusLine::J2CPP_METHOD_NAME(2),
		org::apache::http::StatusLine::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::StatusLine,"org/apache/http/StatusLine")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,0,"getProtocolVersion","()Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,1,"getStatusCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::StatusLine,2,"getReasonPhrase","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_STATUSLINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
