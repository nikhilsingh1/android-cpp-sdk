/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.CookieSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class CookieSpec;
	class CookieSpec
		: public object<CookieSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit CookieSpec(jobject jobj)
		: object<CookieSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getVersion();
		local_ref< java::util::List > parse(local_ref< org::apache::http::Header >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		void validate(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		jboolean match(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		local_ref< java::util::List > formatCookies(local_ref< java::util::List >  const&);
		local_ref< org::apache::http::Header > getVersionHeader();
	}; //class CookieSpec

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::CookieSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint org::apache::http::cookie::CookieSpec::getVersion()
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

local_ref< java::util::List > org::apache::http::cookie::CookieSpec::parse(local_ref< org::apache::http::Header > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List >
	>(get_jobject(), a0, a1);
}

void org::apache::http::cookie::CookieSpec::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(2),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::cookie::CookieSpec::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(3),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::util::List > org::apache::http::cookie::CookieSpec::formatCookies(local_ref< java::util::List > const &a0)
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(4),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::List >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::Header > org::apache::http::cookie::CookieSpec::getVersionHeader()
{
	return call_method<
		org::apache::http::cookie::CookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_NAME(5),
		org::apache::http::cookie::CookieSpec::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::Header >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::CookieSpec,"org/apache/http/cookie/CookieSpec")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,0,"getVersion","()I")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,1,"parse","(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,2,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,3,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,4,"formatCookies","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieSpec,5,"getVersionHeader","()Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIESPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
