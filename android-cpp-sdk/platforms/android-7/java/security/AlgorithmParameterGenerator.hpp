/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.AlgorithmParameterGenerator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AlgorithmParameterGenerator;
	class AlgorithmParameterGenerator
		: public object<AlgorithmParameterGenerator>
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

		explicit AlgorithmParameterGenerator(jobject jobj)
		: object<AlgorithmParameterGenerator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getAlgorithm();
		static local_ref< java::security::AlgorithmParameterGenerator > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::AlgorithmParameterGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::AlgorithmParameterGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		void init(jint);
		void init(jint, local_ref< java::security::SecureRandom >  const&);
		void init(local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		void init(local_ref< java::security::spec::AlgorithmParameterSpec >  const&, local_ref< java::security::SecureRandom >  const&);
		local_ref< java::security::AlgorithmParameters > generateParameters();
	}; //class AlgorithmParameterGenerator

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_IMPL

namespace j2cpp {



java::security::AlgorithmParameterGenerator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::security::AlgorithmParameterGenerator::getAlgorithm()
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(1),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::security::AlgorithmParameterGenerator > java::security::AlgorithmParameterGenerator::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(2),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::AlgorithmParameterGenerator >
	>(a0);
}

local_ref< java::security::AlgorithmParameterGenerator > java::security::AlgorithmParameterGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(3),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::AlgorithmParameterGenerator >
	>(a0, a1);
}

local_ref< java::security::AlgorithmParameterGenerator > java::security::AlgorithmParameterGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(4),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::AlgorithmParameterGenerator >
	>(a0, a1);
}

local_ref< java::security::Provider > java::security::AlgorithmParameterGenerator::getProvider()
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(5),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Provider >
	>(get_jobject());
}

void java::security::AlgorithmParameterGenerator::init(jint a0)
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(6),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void java::security::AlgorithmParameterGenerator::init(jint a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(7),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void java::security::AlgorithmParameterGenerator::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(8),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::security::AlgorithmParameterGenerator::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(9),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameterGenerator::generateParameters()
{
	return call_method<
		java::security::AlgorithmParameterGenerator::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_NAME(10),
		java::security::AlgorithmParameterGenerator::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::security::AlgorithmParameters >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::AlgorithmParameterGenerator,"java/security/AlgorithmParameterGenerator")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,0,"<init>","(Ljava/security/AlgorithmParameterGeneratorSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,2,"getInstance","(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,3,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,4,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,6,"init","(I)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,7,"init","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,8,"init","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,9,"init","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGenerator,10,"generateParameters","()Ljava/security/AlgorithmParameters;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
