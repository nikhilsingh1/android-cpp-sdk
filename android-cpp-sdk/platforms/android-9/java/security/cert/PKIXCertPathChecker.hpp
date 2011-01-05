/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.PKIXCertPathChecker
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class PKIXCertPathChecker;
	class PKIXCertPathChecker
		: public object<PKIXCertPathChecker>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit PKIXCertPathChecker(jobject jobj)
		: object<PKIXCertPathChecker>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > clone();
		void init(jboolean);
		jboolean isForwardCheckingSupported();
		local_ref< java::util::Set > getSupportedExtensions();
		void check(local_ref< java::security::cert::Certificate >  const&, local_ref< java::util::Collection >  const&);
	}; //class PKIXCertPathChecker

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_IMPL

namespace j2cpp {



java::security::cert::PKIXCertPathChecker::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::security::cert::PKIXCertPathChecker::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > java::security::cert::PKIXCertPathChecker::clone()
{
	return call_method<
		java::security::cert::PKIXCertPathChecker::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_NAME(1),
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void java::security::cert::PKIXCertPathChecker::init(jboolean a0)
{
	return call_method<
		java::security::cert::PKIXCertPathChecker::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_NAME(2),
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jboolean java::security::cert::PKIXCertPathChecker::isForwardCheckingSupported()
{
	return call_method<
		java::security::cert::PKIXCertPathChecker::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_NAME(3),
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Set > java::security::cert::PKIXCertPathChecker::getSupportedExtensions()
{
	return call_method<
		java::security::cert::PKIXCertPathChecker::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_NAME(4),
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Set >
	>(get_jobject());
}

void java::security::cert::PKIXCertPathChecker::check(local_ref< java::security::cert::Certificate > const &a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::security::cert::PKIXCertPathChecker::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_NAME(5),
		java::security::cert::PKIXCertPathChecker::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::cert::PKIXCertPathChecker,"java/security/cert/PKIXCertPathChecker")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,2,"init","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,3,"isForwardCheckingSupported","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,4,"getSupportedExtensions","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathChecker,5,"check","(Ljava/security/cert/Certificate;Ljava/util/Collection;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
