/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ActivityUnitTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace test { class InstrumentationTestCase; } } }
namespace j2cpp { namespace android { namespace test { class ActivityTestCase; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/Activity.hpp>
#include <android/app/Application.hpp>
#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/test/ActivityTestCase.hpp>
#include <android/test/InstrumentationTestCase.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ActivityUnitTestCase;
	class ActivityUnitTestCase
		: public object<ActivityUnitTestCase>
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
		J2CPP_DECLARE_METHOD(11)

		explicit ActivityUnitTestCase(jobject jobj)
		: object<ActivityUnitTestCase>(jobj)
		{
		}

		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<android::test::InstrumentationTestCase>() const;
		operator local_ref<android::test::ActivityTestCase>() const;
		operator local_ref<java::lang::Object>() const;


		ActivityUnitTestCase(local_ref< java::lang::Class > const&);
		local_ref< android::app::Activity > getActivity();
		void setApplication(local_ref< android::app::Application >  const&);
		void setActivityContext(local_ref< android::content::Context >  const&);
		jint getRequestedOrientation();
		local_ref< android::content::Intent > getStartedActivityIntent();
		jint getStartedActivityRequest();
		jboolean isFinishCalled();
		jint getFinishedActivityRequest();
	}; //class ActivityUnitTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_IMPL

namespace j2cpp {



android::test::ActivityUnitTestCase::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

android::test::ActivityUnitTestCase::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::ActivityUnitTestCase::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::ActivityUnitTestCase::operator local_ref<android::test::InstrumentationTestCase>() const
{
	return local_ref<android::test::InstrumentationTestCase>(get_jobject());
}

android::test::ActivityUnitTestCase::operator local_ref<android::test::ActivityTestCase>() const
{
	return local_ref<android::test::ActivityTestCase>(get_jobject());
}

android::test::ActivityUnitTestCase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::ActivityUnitTestCase::ActivityUnitTestCase(local_ref< java::lang::Class > const &a0)
: object<android::test::ActivityUnitTestCase>(
	call_new_object<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(0),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::app::Activity > android::test::ActivityUnitTestCase::getActivity()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(1),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::Activity >
	>(get_jobject());
}




void android::test::ActivityUnitTestCase::setApplication(local_ref< android::app::Application > const &a0)
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(5),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::test::ActivityUnitTestCase::setActivityContext(local_ref< android::content::Context > const &a0)
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(6),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::test::ActivityUnitTestCase::getRequestedOrientation()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(7),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

local_ref< android::content::Intent > android::test::ActivityUnitTestCase::getStartedActivityIntent()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(8),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::content::Intent >
	>(get_jobject());
}

jint android::test::ActivityUnitTestCase::getStartedActivityRequest()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(9),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jboolean android::test::ActivityUnitTestCase::isFinishCalled()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(10),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jint android::test::ActivityUnitTestCase::getFinishedActivityRequest()
{
	return call_method<
		android::test::ActivityUnitTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityUnitTestCase::J2CPP_METHOD_NAME(11),
		android::test::ActivityUnitTestCase::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::ActivityUnitTestCase,"android/test/ActivityUnitTestCase")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,1,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,3,"startActivity","(Landroid/content/Intent;Landroid/os/Bundle;Ljava/lang/Object;)Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,4,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,5,"setApplication","(Landroid/app/Application;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,6,"setActivityContext","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,7,"getRequestedOrientation","()I")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,8,"getStartedActivityIntent","()Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,9,"getStartedActivityRequest","()I")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,10,"isFinishCalled","()Z")
J2CPP_DEFINE_METHOD(android::test::ActivityUnitTestCase,11,"getFinishedActivityRequest","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYUNITTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
