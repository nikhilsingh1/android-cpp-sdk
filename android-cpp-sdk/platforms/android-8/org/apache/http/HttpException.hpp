/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpException;
	class HttpException
		: public object<HttpException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit HttpException(jobject jobj)
		: object<HttpException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		HttpException();
		HttpException(local_ref< java::lang::String > const&);
		HttpException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class HttpException

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


org::apache::http::HttpException::HttpException()
: object<org::apache::http::HttpException>(
	call_new_object<
		org::apache::http::HttpException::J2CPP_CLASS_NAME,
		org::apache::http::HttpException::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::apache::http::HttpException::HttpException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::HttpException>(
	call_new_object<
		org::apache::http::HttpException::J2CPP_CLASS_NAME,
		org::apache::http::HttpException::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::HttpException::HttpException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::HttpException>(
	call_new_object<
		org::apache::http::HttpException::J2CPP_CLASS_NAME,
		org::apache::http::HttpException::J2CPP_METHOD_NAME(2),
		org::apache::http::HttpException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::HttpException,"org/apache/http/HttpException")
J2CPP_DEFINE_METHOD(org::apache::http::HttpException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION