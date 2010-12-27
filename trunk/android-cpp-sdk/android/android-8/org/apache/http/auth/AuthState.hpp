/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.auth.AuthState
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/auth/AuthScope.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthState;
	class AuthState
		: public cpp_object<AuthState>
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

		AuthState(jobject jobj)
		: cpp_object<AuthState>(jobj)
		{
		}

		void invalidate();
		cpp_boolean isValid();
		void setAuthScheme(local_ref< org::apache::http::auth::AuthScheme > const&);
		local_ref< org::apache::http::auth::AuthScheme > getAuthScheme();
		local_ref< org::apache::http::auth::Credentials > getCredentials();
		void setCredentials(local_ref< org::apache::http::auth::Credentials > const&);
		local_ref< org::apache::http::auth::AuthScope > getAuthScope();
		void setAuthScope(local_ref< org::apache::http::auth::AuthScope > const&);
		local_ref< java::lang::String > toString();
	}; //class AuthState

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::auth::AuthState > create< org::apache::http::auth::AuthState>()
{
	return local_ref< org::apache::http::auth::AuthState >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::auth::AuthState::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::auth::AuthState::J2CPP_CLASS_NAME, org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(0), org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::auth::AuthState::invalidate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean org::apache::http::auth::AuthState::isValid()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::apache::http::auth::AuthState::setAuthScheme(local_ref< org::apache::http::auth::AuthScheme > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::auth::AuthState::getAuthScheme()
{
	return local_ref< org::apache::http::auth::AuthScheme >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::apache::http::auth::Credentials > org::apache::http::auth::AuthState::getCredentials()
{
	return local_ref< org::apache::http::auth::Credentials >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::apache::http::auth::AuthState::setCredentials(local_ref< org::apache::http::auth::Credentials > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::AuthScope > org::apache::http::auth::AuthState::getAuthScope()
{
	return local_ref< org::apache::http::auth::AuthScope >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void org::apache::http::auth::AuthState::setAuthScope(local_ref< org::apache::http::auth::AuthScope > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::AuthState::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthState,"org/apache/http/auth/AuthState")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,1,"invalidate","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,2,"isValid","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,3,"setAuthScheme","(Lorg/apache/http/auth/AuthScheme;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,4,"getAuthScheme","()Lorg/apache/http/auth/AuthScheme;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,5,"getCredentials","()Lorg/apache/http/auth/Credentials;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,6,"setCredentials","(Lorg/apache/http/auth/Credentials;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,7,"getAuthScope","()Lorg/apache/http/auth/AuthScope;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,8,"setAuthScope","(Lorg/apache/http/auth/AuthScope;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,9,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
