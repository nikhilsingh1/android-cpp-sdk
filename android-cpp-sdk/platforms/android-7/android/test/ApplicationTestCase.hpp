/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ApplicationTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace test { class AndroidTestCase; } } }


#include <android/app/Application.hpp>
#include <android/content/Context.hpp>
#include <android/test/AndroidTestCase.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ApplicationTestCase;
	class ApplicationTestCase
		: public object<ApplicationTestCase>
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

		explicit ApplicationTestCase(jobject jobj)
		: object<ApplicationTestCase>(jobj)
		{
		}

		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::test::AndroidTestCase>() const;


		ApplicationTestCase(local_ref< java::lang::Class > const&);
		local_ref< android::app::Application > getApplication();
		local_ref< android::content::Context > getSystemContext();
		void testApplicationTestCaseSetUpProperly();
	}; //class ApplicationTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL

namespace j2cpp {



android::test::ApplicationTestCase::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::ApplicationTestCase::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

android::test::ApplicationTestCase::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::ApplicationTestCase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::ApplicationTestCase::operator local_ref<android::test::AndroidTestCase>() const
{
	return local_ref<android::test::AndroidTestCase>(get_jobject());
}


android::test::ApplicationTestCase::ApplicationTestCase(local_ref< java::lang::Class > const &a0)
: object<android::test::ApplicationTestCase>(
	call_new_object<
		android::test::ApplicationTestCase::J2CPP_CLASS_NAME,
		android::test::ApplicationTestCase::J2CPP_METHOD_NAME(0),
		android::test::ApplicationTestCase::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::app::Application > android::test::ApplicationTestCase::getApplication()
{
	return call_method<
		android::test::ApplicationTestCase::J2CPP_CLASS_NAME,
		android::test::ApplicationTestCase::J2CPP_METHOD_NAME(1),
		android::test::ApplicationTestCase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::Application >
	>(get_jobject());
}





local_ref< android::content::Context > android::test::ApplicationTestCase::getSystemContext()
{
	return call_method<
		android::test::ApplicationTestCase::J2CPP_CLASS_NAME,
		android::test::ApplicationTestCase::J2CPP_METHOD_NAME(6),
		android::test::ApplicationTestCase::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::Context >
	>(get_jobject());
}

void android::test::ApplicationTestCase::testApplicationTestCaseSetUpProperly()
{
	return call_method<
		android::test::ApplicationTestCase::J2CPP_CLASS_NAME,
		android::test::ApplicationTestCase::J2CPP_METHOD_NAME(7),
		android::test::ApplicationTestCase::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::ApplicationTestCase,"android/test/ApplicationTestCase")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,1,"getApplication","()Landroid/app/Application;")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,3,"createApplication","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,4,"terminateApplication","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,5,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,6,"getSystemContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,7,"testApplicationTestCaseSetUpProperly","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
