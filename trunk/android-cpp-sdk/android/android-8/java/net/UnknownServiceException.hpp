/*================================================================================
  code generated by: java2cpp
  class: java.net.UnknownServiceException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace net {

	class UnknownServiceException;
	class UnknownServiceException
		: public cpp_object<UnknownServiceException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		UnknownServiceException(jobject jobj)
		: cpp_object<UnknownServiceException>(jobj)
		{
		}

	}; //class UnknownServiceException

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::UnknownServiceException > create< java::net::UnknownServiceException>()
{
	return local_ref< java::net::UnknownServiceException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::UnknownServiceException::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::UnknownServiceException::J2CPP_CLASS_NAME, java::net::UnknownServiceException::J2CPP_METHOD_NAME(0), java::net::UnknownServiceException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::net::UnknownServiceException > create< java::net::UnknownServiceException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::UnknownServiceException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::UnknownServiceException::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::UnknownServiceException::J2CPP_CLASS_NAME, java::net::UnknownServiceException::J2CPP_METHOD_NAME(1), java::net::UnknownServiceException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::UnknownServiceException,"java/net/UnknownServiceException")
J2CPP_DEFINE_METHOD(java::net::UnknownServiceException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::UnknownServiceException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_UNKNOWNSERVICEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
