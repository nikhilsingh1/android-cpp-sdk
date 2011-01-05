/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.LineParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>
#include <org/apache/http/StatusLine.hpp>
#include <org/apache/http/message/ParserCursor.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class LineParser;
	class LineParser
		: public object<LineParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit LineParser(jobject jobj)
		: object<LineParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::ProtocolVersion > parseProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		jboolean hasProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::RequestLine > parseRequestLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::StatusLine > parseStatusLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::Header > parseHeader(local_ref< org::apache::http::util::CharArrayBuffer >  const&);
	}; //class LineParser

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::LineParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::message::LineParser::parseProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::LineParser::J2CPP_CLASS_NAME,
		org::apache::http::message::LineParser::J2CPP_METHOD_NAME(0),
		org::apache::http::message::LineParser::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::ProtocolVersion >
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::message::LineParser::hasProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::LineParser::J2CPP_CLASS_NAME,
		org::apache::http::message::LineParser::J2CPP_METHOD_NAME(1),
		org::apache::http::message::LineParser::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::RequestLine > org::apache::http::message::LineParser::parseRequestLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::LineParser::J2CPP_CLASS_NAME,
		org::apache::http::message::LineParser::J2CPP_METHOD_NAME(2),
		org::apache::http::message::LineParser::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::RequestLine >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::StatusLine > org::apache::http::message::LineParser::parseStatusLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::LineParser::J2CPP_CLASS_NAME,
		org::apache::http::message::LineParser::J2CPP_METHOD_NAME(3),
		org::apache::http::message::LineParser::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::StatusLine >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::Header > org::apache::http::message::LineParser::parseHeader(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return call_method<
		org::apache::http::message::LineParser::J2CPP_CLASS_NAME,
		org::apache::http::message::LineParser::J2CPP_METHOD_NAME(4),
		org::apache::http::message::LineParser::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::LineParser,"org/apache/http/message/LineParser")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineParser,0,"parseProtocolVersion","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineParser,1,"hasProtocolVersion","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineParser,2,"parseRequestLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/RequestLine;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineParser,3,"parseStatusLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/StatusLine;")
J2CPP_DEFINE_METHOD(org::apache::http::message::LineParser,4,"parseHeader","(Lorg/apache/http/util/CharArrayBuffer;)Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_LINEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
