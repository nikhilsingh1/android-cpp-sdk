/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.suitebuilder.TestMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Method; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/Method.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test { namespace suitebuilder {

	class TestMethod;
	class TestMethod
		: public object<TestMethod>
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

		explicit TestMethod(jobject jobj)
		: object<TestMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TestMethod(local_ref< java::lang::reflect::Method > const&, local_ref< java::lang::Class > const&);
		TestMethod(local_ref< java::lang::String > const&, local_ref< java::lang::Class > const&);
		TestMethod(local_ref< junit::framework::TestCase > const&);
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getEnclosingClassname();
		local_ref< java::lang::annotation::Annotation > getAnnotation(local_ref< java::lang::Class >  const&);
		local_ref< java::lang::Class > getEnclosingClass();
		local_ref< junit::framework::TestCase > createTest();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
	}; //class TestMethod

} //namespace suitebuilder
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_IMPL

namespace j2cpp {



android::test::suitebuilder::TestMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::suitebuilder::TestMethod::TestMethod(local_ref< java::lang::reflect::Method > const &a0, local_ref< java::lang::Class > const &a1)
: object<android::test::suitebuilder::TestMethod>(
	call_new_object<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(0),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::test::suitebuilder::TestMethod::TestMethod(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
: object<android::test::suitebuilder::TestMethod>(
	call_new_object<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(1),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::test::suitebuilder::TestMethod::TestMethod(local_ref< junit::framework::TestCase > const &a0)
: object<android::test::suitebuilder::TestMethod>(
	call_new_object<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(2),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


local_ref< java::lang::String > android::test::suitebuilder::TestMethod::getName()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(3),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::test::suitebuilder::TestMethod::getEnclosingClassname()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(4),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::annotation::Annotation > android::test::suitebuilder::TestMethod::getAnnotation(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(5),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::annotation::Annotation >
	>(get_jobject(), a0);
}

local_ref< java::lang::Class > android::test::suitebuilder::TestMethod::getEnclosingClass()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(6),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Class >
	>(get_jobject());
}

local_ref< junit::framework::TestCase > android::test::suitebuilder::TestMethod::createTest()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(7),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< junit::framework::TestCase >
	>(get_jobject());
}

jboolean android::test::suitebuilder::TestMethod::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(8),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jint android::test::suitebuilder::TestMethod::hashCode()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(9),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::test::suitebuilder::TestMethod::toString()
{
	return call_method<
		android::test::suitebuilder::TestMethod::J2CPP_CLASS_NAME,
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_NAME(10),
		android::test::suitebuilder::TestMethod::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::suitebuilder::TestMethod,"android/test/suitebuilder/TestMethod")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,0,"<init>","(Ljava/lang/reflect/Method;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,1,"<init>","(Ljava/lang/String;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,2,"<init>","(Ljunit/framework/TestCase;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,3,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,4,"getEnclosingClassname","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,5,"getAnnotation","(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,6,"getEnclosingClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,7,"createTest","()Ljunit/framework/TestCase;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,8,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,9,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestMethod,10,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_TESTMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
