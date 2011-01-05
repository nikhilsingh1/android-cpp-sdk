/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.ECGenParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECGenParameterSpec;
	class ECGenParameterSpec
		: public object<ECGenParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ECGenParameterSpec(jobject jobj)
		: object<ECGenParameterSpec>(jobj)
		{
		}

		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;
		operator local_ref<java::lang::Object>() const;


		ECGenParameterSpec(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
	}; //class ECGenParameterSpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::ECGenParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}

java::security::spec::ECGenParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::spec::ECGenParameterSpec::ECGenParameterSpec(local_ref< java::lang::String > const &a0)
: object<java::security::spec::ECGenParameterSpec>(
	call_new_object<
		java::security::spec::ECGenParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECGenParameterSpec::J2CPP_METHOD_NAME(0),
		java::security::spec::ECGenParameterSpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > java::security::spec::ECGenParameterSpec::getName()
{
	return call_method<
		java::security::spec::ECGenParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECGenParameterSpec::J2CPP_METHOD_NAME(1),
		java::security::spec::ECGenParameterSpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::ECGenParameterSpec,"java/security/spec/ECGenParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECGenParameterSpec,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECGenParameterSpec,1,"getName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
