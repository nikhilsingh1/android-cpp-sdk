/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.NotYetBoundException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }


#include <java/lang/IllegalStateException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class NotYetBoundException;
	class NotYetBoundException
		: public object<NotYetBoundException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit NotYetBoundException(jobject jobj)
		: object<NotYetBoundException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalStateException>() const;


		NotYetBoundException();
	}; //class NotYetBoundException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::NotYetBoundException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}


java::nio::channels::NotYetBoundException::NotYetBoundException()
: object<java::nio::channels::NotYetBoundException>(
	call_new_object<
		java::nio::channels::NotYetBoundException::J2CPP_CLASS_NAME,
		java::nio::channels::NotYetBoundException::J2CPP_METHOD_NAME(0),
		java::nio::channels::NotYetBoundException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::NotYetBoundException,"java/nio/channels/NotYetBoundException")
J2CPP_DEFINE_METHOD(java::nio::channels::NotYetBoundException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_NOTYETBOUNDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION