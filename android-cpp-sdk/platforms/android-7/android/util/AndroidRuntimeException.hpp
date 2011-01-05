/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.AndroidRuntimeException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace util {

	class AndroidRuntimeException;
	class AndroidRuntimeException
		: public object<AndroidRuntimeException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AndroidRuntimeException(jobject jobj)
		: object<AndroidRuntimeException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		AndroidRuntimeException();
		AndroidRuntimeException(local_ref< java::lang::String > const&);
		AndroidRuntimeException(local_ref< java::lang::Exception > const&);
	}; //class AndroidRuntimeException

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_IMPL

namespace j2cpp {



android::util::AndroidRuntimeException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::util::AndroidRuntimeException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::util::AndroidRuntimeException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::util::AndroidRuntimeException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::util::AndroidRuntimeException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


android::util::AndroidRuntimeException::AndroidRuntimeException()
: object<android::util::AndroidRuntimeException>(
	call_new_object<
		android::util::AndroidRuntimeException::J2CPP_CLASS_NAME,
		android::util::AndroidRuntimeException::J2CPP_METHOD_NAME(0),
		android::util::AndroidRuntimeException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::util::AndroidRuntimeException::AndroidRuntimeException(local_ref< java::lang::String > const &a0)
: object<android::util::AndroidRuntimeException>(
	call_new_object<
		android::util::AndroidRuntimeException::J2CPP_CLASS_NAME,
		android::util::AndroidRuntimeException::J2CPP_METHOD_NAME(1),
		android::util::AndroidRuntimeException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



android::util::AndroidRuntimeException::AndroidRuntimeException(local_ref< java::lang::Exception > const &a0)
: object<android::util::AndroidRuntimeException>(
	call_new_object<
		android::util::AndroidRuntimeException::J2CPP_CLASS_NAME,
		android::util::AndroidRuntimeException::J2CPP_METHOD_NAME(2),
		android::util::AndroidRuntimeException::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::util::AndroidRuntimeException,"android/util/AndroidRuntimeException")
J2CPP_DEFINE_METHOD(android::util::AndroidRuntimeException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::AndroidRuntimeException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::util::AndroidRuntimeException,2,"<init>","(Ljava/lang/Exception;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
