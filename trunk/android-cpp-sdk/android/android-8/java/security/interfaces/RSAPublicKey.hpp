/*================================================================================
  code generated by: java2cpp
  class: java.security.interfaces.RSAPublicKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class RSAPublicKey;
	class RSAPublicKey
		: public cpp_object<RSAPublicKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		RSAPublicKey(jobject jobj)
		: cpp_object<RSAPublicKey>(jobj)
		{
		}

		local_ref< java::math::BigInteger > getPublicExponent();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > serialVersionUID;
	}; //class RSAPublicKey

} //namespace interfaces
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_IMPL

namespace j2cpp {


local_ref< java::math::BigInteger > java::security::interfaces::RSAPublicKey::getPublicExponent()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


static_field<
	java::security::interfaces::RSAPublicKey::J2CPP_CLASS_NAME,
	java::security::interfaces::RSAPublicKey::J2CPP_FIELD_NAME(0),
	java::security::interfaces::RSAPublicKey::J2CPP_FIELD_SIGNATURE(0),
	cpp_long
> java::security::interfaces::RSAPublicKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::interfaces::RSAPublicKey,"java/security/interfaces/RSAPublicKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAPublicKey,0,"getPublicExponent","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::interfaces::RSAPublicKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAPUBLICKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
