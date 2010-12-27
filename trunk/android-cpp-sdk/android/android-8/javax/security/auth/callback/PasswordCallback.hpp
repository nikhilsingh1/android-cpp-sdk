/*================================================================================
  code generated by: java2cpp
  class: javax.security.auth.callback.PasswordCallback
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth { namespace callback {

	class PasswordCallback;
	class PasswordCallback
		: public cpp_object<PasswordCallback>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		PasswordCallback(jobject jobj)
		: cpp_object<PasswordCallback>(jobj)
		{
		}

		local_ref< java::lang::String > getPrompt();
		cpp_boolean isEchoOn();
		void setPassword(local_ref< cpp_char_array<1> > const&);
		local_ref< cpp_char_array<1> > getPassword();
		void clearPassword();
	}; //class PasswordCallback

} //namespace callback
} //namespace auth
} //namespace security
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::security::auth::callback::PasswordCallback > create< javax::security::auth::callback::PasswordCallback>(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return local_ref< javax::security::auth::callback::PasswordCallback >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::security::auth::callback::PasswordCallback::J2CPP_CLASS_NAME>(),
			get_method_id<javax::security::auth::callback::PasswordCallback::J2CPP_CLASS_NAME, javax::security::auth::callback::PasswordCallback::J2CPP_METHOD_NAME(0), javax::security::auth::callback::PasswordCallback::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::security::auth::callback::PasswordCallback::getPrompt()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean javax::security::auth::callback::PasswordCallback::isEchoOn()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void javax::security::auth::callback::PasswordCallback::setPassword(local_ref< cpp_char_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_char_array<1> > javax::security::auth::callback::PasswordCallback::getPassword()
{
	return local_ref< cpp_char_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void javax::security::auth::callback::PasswordCallback::clearPassword()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::security::auth::callback::PasswordCallback,"javax/security/auth/callback/PasswordCallback")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,0,"<init>","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,1,"getPrompt","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,2,"isEchoOn","()Z")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,3,"setPassword","([C)V")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,4,"getPassword","()[C")
J2CPP_DEFINE_METHOD(javax::security::auth::callback::PasswordCallback,5,"clearPassword","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_PASSWORDCALLBACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
