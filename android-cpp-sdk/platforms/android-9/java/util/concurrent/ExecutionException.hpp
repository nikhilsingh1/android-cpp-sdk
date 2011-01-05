/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ExecutionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ExecutionException;
	class ExecutionException
		: public object<ExecutionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ExecutionException(jobject jobj)
		: object<ExecutionException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		ExecutionException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		ExecutionException(local_ref< java::lang::Throwable > const&);
	}; //class ExecutionException

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ExecutionException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::concurrent::ExecutionException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::concurrent::ExecutionException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ExecutionException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}




java::util::concurrent::ExecutionException::ExecutionException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::util::concurrent::ExecutionException>(
	call_new_object<
		java::util::concurrent::ExecutionException::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutionException::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ExecutionException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::util::concurrent::ExecutionException::ExecutionException(local_ref< java::lang::Throwable > const &a0)
: object<java::util::concurrent::ExecutionException>(
	call_new_object<
		java::util::concurrent::ExecutionException::J2CPP_CLASS_NAME,
		java::util::concurrent::ExecutionException::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ExecutionException::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::concurrent::ExecutionException,"java/util/concurrent/ExecutionException")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutionException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutionException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutionException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutionException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
