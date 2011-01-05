/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.acl.LastOwnerException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace security { namespace acl {

	class LastOwnerException;
	class LastOwnerException
		: public object<LastOwnerException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LastOwnerException(jobject jobj)
		: object<LastOwnerException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		LastOwnerException();
	}; //class LastOwnerException

} //namespace acl
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::acl::LastOwnerException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::security::acl::LastOwnerException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::security::acl::LastOwnerException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::acl::LastOwnerException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::acl::LastOwnerException::LastOwnerException()
: object<java::security::acl::LastOwnerException>(
	call_new_object<
		java::security::acl::LastOwnerException::J2CPP_CLASS_NAME,
		java::security::acl::LastOwnerException::J2CPP_METHOD_NAME(0),
		java::security::acl::LastOwnerException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::security::acl::LastOwnerException,"java/security/acl/LastOwnerException")
J2CPP_DEFINE_METHOD(java::security::acl::LastOwnerException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
