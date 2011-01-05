/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.http.SslError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_DECL
#define J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace android { namespace net { namespace http { class SslCertificate; } } } }


#include <android/net/http/SslCertificate.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>


namespace j2cpp {

namespace android { namespace net { namespace http {

	class SslError;
	class SslError
		: public object<SslError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit SslError(jobject jobj)
		: object<SslError>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SslError(jint, local_ref< android::net::http::SslCertificate > const&);
		SslError(jint, local_ref< java::security::cert::X509Certificate > const&);
		local_ref< android::net::http::SslCertificate > getCertificate();
		jboolean addError(jint);
		jboolean hasError(jint);
		jint getPrimaryError();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > SSL_NOTYETVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SSL_EXPIRED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > SSL_IDMISMATCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > SSL_UNTRUSTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SSL_MAX_ERROR;
	}; //class SslError

} //namespace http
} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_IMPL
#define J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_IMPL

namespace j2cpp {



android::net::http::SslError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::http::SslError::SslError(jint a0, local_ref< android::net::http::SslCertificate > const &a1)
: object<android::net::http::SslError>(
	call_new_object<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(0),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::net::http::SslError::SslError(jint a0, local_ref< java::security::cert::X509Certificate > const &a1)
: object<android::net::http::SslError>(
	call_new_object<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(1),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


local_ref< android::net::http::SslCertificate > android::net::http::SslError::getCertificate()
{
	return call_method<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(2),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::net::http::SslCertificate >
	>(get_jobject());
}

jboolean android::net::http::SslError::addError(jint a0)
{
	return call_method<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(3),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::net::http::SslError::hasError(jint a0)
{
	return call_method<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(4),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jint android::net::http::SslError::getPrimaryError()
{
	return call_method<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(5),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslError::toString()
{
	return call_method<
		android::net::http::SslError::J2CPP_CLASS_NAME,
		android::net::http::SslError::J2CPP_METHOD_NAME(6),
		android::net::http::SslError::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	android::net::http::SslError::J2CPP_CLASS_NAME,
	android::net::http::SslError::J2CPP_FIELD_NAME(0),
	android::net::http::SslError::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::http::SslError::SSL_NOTYETVALID;

static_field<
	android::net::http::SslError::J2CPP_CLASS_NAME,
	android::net::http::SslError::J2CPP_FIELD_NAME(1),
	android::net::http::SslError::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::http::SslError::SSL_EXPIRED;

static_field<
	android::net::http::SslError::J2CPP_CLASS_NAME,
	android::net::http::SslError::J2CPP_FIELD_NAME(2),
	android::net::http::SslError::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::http::SslError::SSL_IDMISMATCH;

static_field<
	android::net::http::SslError::J2CPP_CLASS_NAME,
	android::net::http::SslError::J2CPP_FIELD_NAME(3),
	android::net::http::SslError::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::net::http::SslError::SSL_UNTRUSTED;

static_field<
	android::net::http::SslError::J2CPP_CLASS_NAME,
	android::net::http::SslError::J2CPP_FIELD_NAME(4),
	android::net::http::SslError::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::net::http::SslError::SSL_MAX_ERROR;


J2CPP_DEFINE_CLASS(android::net::http::SslError,"android/net/http/SslError")
J2CPP_DEFINE_METHOD(android::net::http::SslError,0,"<init>","(ILandroid/net/http/SslCertificate;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslError,1,"<init>","(ILjava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslError,2,"getCertificate","()Landroid/net/http/SslCertificate;")
J2CPP_DEFINE_METHOD(android::net::http::SslError,3,"addError","(I)Z")
J2CPP_DEFINE_METHOD(android::net::http::SslError,4,"hasError","(I)Z")
J2CPP_DEFINE_METHOD(android::net::http::SslError,5,"getPrimaryError","()I")
J2CPP_DEFINE_METHOD(android::net::http::SslError,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::http::SslError,0,"SSL_NOTYETVALID","I")
J2CPP_DEFINE_FIELD(android::net::http::SslError,1,"SSL_EXPIRED","I")
J2CPP_DEFINE_FIELD(android::net::http::SslError,2,"SSL_IDMISMATCH","I")
J2CPP_DEFINE_FIELD(android::net::http::SslError,3,"SSL_UNTRUSTED","I")
J2CPP_DEFINE_FIELD(android::net::http::SslError,4,"SSL_MAX_ERROR","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
