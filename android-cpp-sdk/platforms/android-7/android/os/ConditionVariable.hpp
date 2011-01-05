/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.ConditionVariable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_DECL
#define J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class ConditionVariable;
	class ConditionVariable
		: public object<ConditionVariable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit ConditionVariable(jobject jobj)
		: object<ConditionVariable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ConditionVariable();
		ConditionVariable(jboolean);
		void open();
		void close();
		void block();
		jboolean block(jlong);
	}; //class ConditionVariable

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_IMPL
#define J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_IMPL

namespace j2cpp {



android::os::ConditionVariable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::ConditionVariable::ConditionVariable()
: object<android::os::ConditionVariable>(
	call_new_object<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(0),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::os::ConditionVariable::ConditionVariable(jboolean a0)
: object<android::os::ConditionVariable>(
	call_new_object<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(1),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void android::os::ConditionVariable::open()
{
	return call_method<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(2),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::os::ConditionVariable::close()
{
	return call_method<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(3),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void android::os::ConditionVariable::block()
{
	return call_method<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(4),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jboolean android::os::ConditionVariable::block(jlong a0)
{
	return call_method<
		android::os::ConditionVariable::J2CPP_CLASS_NAME,
		android::os::ConditionVariable::J2CPP_METHOD_NAME(5),
		android::os::ConditionVariable::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::os::ConditionVariable,"android/os/ConditionVariable")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,2,"open","()V")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,3,"close","()V")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,4,"block","()V")
J2CPP_DEFINE_METHOD(android::os::ConditionVariable,5,"block","(J)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_CONDITIONVARIABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
