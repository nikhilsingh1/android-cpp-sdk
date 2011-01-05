/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.UnsupportedDigestAlgorithmException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class UnsupportedDigestAlgorithmException;
	class UnsupportedDigestAlgorithmException
		: public object<UnsupportedDigestAlgorithmException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit UnsupportedDigestAlgorithmException(jobject jobj)
		: object<UnsupportedDigestAlgorithmException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		UnsupportedDigestAlgorithmException();
		UnsupportedDigestAlgorithmException(local_ref< java::lang::String > const&);
		UnsupportedDigestAlgorithmException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class UnsupportedDigestAlgorithmException

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException()
: object<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException>(
	call_new_object<
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException>(
	call_new_object<
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException>(
	call_new_object<
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::UnsupportedDigestAlgorithmException,"org/apache/http/impl/auth/UnsupportedDigestAlgorithmException")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::UnsupportedDigestAlgorithmException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::UnsupportedDigestAlgorithmException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::UnsupportedDigestAlgorithmException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
