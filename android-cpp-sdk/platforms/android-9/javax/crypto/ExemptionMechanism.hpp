/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.ExemptionMechanism
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class ExemptionMechanism;
	class ExemptionMechanism
		: public object<ExemptionMechanism>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		explicit ExemptionMechanism(jobject jobj)
		: object<ExemptionMechanism>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getName();
		static local_ref< javax::crypto::ExemptionMechanism > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::ExemptionMechanism > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::crypto::ExemptionMechanism > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		jboolean isCryptoAllowed(local_ref< java::security::Key >  const&);
		jint getOutputSize(jint);
		void init(local_ref< java::security::Key >  const&);
		void init(local_ref< java::security::Key >  const&, local_ref< java::security::AlgorithmParameters >  const&);
		void init(local_ref< java::security::Key >  const&, local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		local_ref< array<jbyte,1> > genExemptionBlob();
		jint genExemptionBlob(local_ref< array<jbyte,1> >  const&);
		jint genExemptionBlob(local_ref< array<jbyte,1> >  const&, jint);
	}; //class ExemptionMechanism

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_IMPL

namespace j2cpp {



javax::crypto::ExemptionMechanism::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > javax::crypto::ExemptionMechanism::getName()
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(1),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< javax::crypto::ExemptionMechanism > javax::crypto::ExemptionMechanism::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(2),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::crypto::ExemptionMechanism >
	>(a0);
}

local_ref< javax::crypto::ExemptionMechanism > javax::crypto::ExemptionMechanism::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(3),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::crypto::ExemptionMechanism >
	>(a0, a1);
}

local_ref< javax::crypto::ExemptionMechanism > javax::crypto::ExemptionMechanism::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(4),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::crypto::ExemptionMechanism >
	>(a0, a1);
}

local_ref< java::security::Provider > javax::crypto::ExemptionMechanism::getProvider()
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(5),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Provider >
	>(get_jobject());
}

jboolean javax::crypto::ExemptionMechanism::isCryptoAllowed(local_ref< java::security::Key > const &a0)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(6),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

jint javax::crypto::ExemptionMechanism::getOutputSize(jint a0)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(7),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

void javax::crypto::ExemptionMechanism::init(local_ref< java::security::Key > const &a0)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(8),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void javax::crypto::ExemptionMechanism::init(local_ref< java::security::Key > const &a0, local_ref< java::security::AlgorithmParameters > const &a1)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(9),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void javax::crypto::ExemptionMechanism::init(local_ref< java::security::Key > const &a0, local_ref< java::security::spec::AlgorithmParameterSpec > const &a1)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(10),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > javax::crypto::ExemptionMechanism::genExemptionBlob()
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(11),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint javax::crypto::ExemptionMechanism::genExemptionBlob(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(12),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject(), a0);
}

jint javax::crypto::ExemptionMechanism::genExemptionBlob(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_method<
		javax::crypto::ExemptionMechanism::J2CPP_CLASS_NAME,
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_NAME(13),
		javax::crypto::ExemptionMechanism::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(javax::crypto::ExemptionMechanism,"javax/crypto/ExemptionMechanism")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,0,"<init>","(Ljavax/crypto/ExemptionMechanismSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,2,"getInstance","(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,3,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,4,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,6,"isCryptoAllowed","(Ljava/security/Key;)Z")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,7,"getOutputSize","(I)I")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,8,"init","(Ljava/security/Key;)V")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,9,"init","(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,10,"init","(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,11,"genExemptionBlob","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,12,"genExemptionBlob","([B)I")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,13,"genExemptionBlob","([BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::ExemptionMechanism,14,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_EXEMPTIONMECHANISM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
