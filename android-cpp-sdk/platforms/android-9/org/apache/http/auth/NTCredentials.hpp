/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.NTCredentials
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class NTCredentials;
	class NTCredentials
		: public object<NTCredentials>
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
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		explicit NTCredentials(jobject jobj)
		: object<NTCredentials>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::auth::Credentials>() const;


		NTCredentials(local_ref< java::lang::String > const&);
		NTCredentials(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::security::Principal > getUserPrincipal();
		local_ref< java::lang::String > getUserName();
		local_ref< java::lang::String > getPassword();
		local_ref< java::lang::String > getDomain();
		local_ref< java::lang::String > getWorkstation();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class NTCredentials

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::NTCredentials::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::auth::NTCredentials::operator local_ref<org::apache::http::auth::Credentials>() const
{
	return local_ref<org::apache::http::auth::Credentials>(get_jobject());
}


org::apache::http::auth::NTCredentials::NTCredentials(local_ref< java::lang::String > const &a0)
: object<org::apache::http::auth::NTCredentials>(
	call_new_object<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



org::apache::http::auth::NTCredentials::NTCredentials(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: object<org::apache::http::auth::NTCredentials>(
	call_new_object<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3)
)
{
}


local_ref< java::security::Principal > org::apache::http::auth::NTCredentials::getUserPrincipal()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Principal >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::NTCredentials::getUserName()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::NTCredentials::getPassword()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::NTCredentials::getDomain()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(5),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::NTCredentials::getWorkstation()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(6),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint org::apache::http::auth::NTCredentials::hashCode()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(7),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jboolean org::apache::http::auth::NTCredentials::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(8),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::NTCredentials::toString()
{
	return call_method<
		org::apache::http::auth::NTCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_NAME(9),
		org::apache::http::auth::NTCredentials::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::NTCredentials,"org/apache/http/auth/NTCredentials")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,2,"getUserPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,3,"getUserName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,4,"getPassword","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,5,"getDomain","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,6,"getWorkstation","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,7,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,8,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::NTCredentials,9,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_NTCREDENTIALS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
