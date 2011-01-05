/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.CancelledKeyException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class CancelledKeyException;
	class CancelledKeyException
		: public object<CancelledKeyException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit CancelledKeyException(jobject jobj)
		: object<CancelledKeyException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::IllegalStateException>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		CancelledKeyException();
	}; //class CancelledKeyException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::CancelledKeyException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::nio::channels::CancelledKeyException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::CancelledKeyException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}

java::nio::channels::CancelledKeyException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::channels::CancelledKeyException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::channels::CancelledKeyException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::nio::channels::CancelledKeyException::CancelledKeyException()
: object<java::nio::channels::CancelledKeyException>(
	call_new_object<
		java::nio::channels::CancelledKeyException::J2CPP_CLASS_NAME,
		java::nio::channels::CancelledKeyException::J2CPP_METHOD_NAME(0),
		java::nio::channels::CancelledKeyException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::CancelledKeyException,"java/nio/channels/CancelledKeyException")
J2CPP_DEFINE_METHOD(java::nio::channels::CancelledKeyException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CANCELLEDKEYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
