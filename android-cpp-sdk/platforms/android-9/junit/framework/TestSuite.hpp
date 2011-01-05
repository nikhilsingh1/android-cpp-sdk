/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.TestSuite
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Constructor; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class TestResult; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/util/Enumeration.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestResult.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestSuite;
	class TestSuite
		: public object<TestSuite>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)

		explicit TestSuite(jobject jobj)
		: object<TestSuite>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<junit::framework::Test>() const;


		TestSuite();
		TestSuite(local_ref< java::lang::Class > const&, local_ref< java::lang::String > const&);
		TestSuite(local_ref< java::lang::Class > const&);
		TestSuite(local_ref< java::lang::String > const&);
		void addTest(local_ref< junit::framework::Test >  const&);
		void addTestSuite(local_ref< java::lang::Class >  const&);
		static local_ref< junit::framework::Test > createTest(local_ref< java::lang::Class >  const&, local_ref< java::lang::String >  const&);
		jint countTestCases();
		static local_ref< java::lang::reflect::Constructor > getTestConstructor(local_ref< java::lang::Class >  const&);
		void run(local_ref< junit::framework::TestResult >  const&);
		void runTest(local_ref< junit::framework::Test >  const&, local_ref< junit::framework::TestResult >  const&);
		local_ref< junit::framework::Test > testAt(jint);
		jint testCount();
		local_ref< java::util::Enumeration > tests();
		local_ref< java::lang::String > toString();
		void setName(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getName();
	}; //class TestSuite

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_IMPL

namespace j2cpp {



junit::framework::TestSuite::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

junit::framework::TestSuite::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}


junit::framework::TestSuite::TestSuite()
: object<junit::framework::TestSuite>(
	call_new_object<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(0),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



junit::framework::TestSuite::TestSuite(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
: object<junit::framework::TestSuite>(
	call_new_object<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(1),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



junit::framework::TestSuite::TestSuite(local_ref< java::lang::Class > const &a0)
: object<junit::framework::TestSuite>(
	call_new_object<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(2),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



junit::framework::TestSuite::TestSuite(local_ref< java::lang::String > const &a0)
: object<junit::framework::TestSuite>(
	call_new_object<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(3),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


void junit::framework::TestSuite::addTest(local_ref< junit::framework::Test > const &a0)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(4),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void junit::framework::TestSuite::addTestSuite(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(5),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< junit::framework::Test > junit::framework::TestSuite::createTest(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(6),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< junit::framework::Test >
	>(a0, a1);
}

jint junit::framework::TestSuite::countTestCases()
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(7),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

local_ref< java::lang::reflect::Constructor > junit::framework::TestSuite::getTestConstructor(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(8),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::reflect::Constructor >
	>(a0);
}

void junit::framework::TestSuite::run(local_ref< junit::framework::TestResult > const &a0)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(9),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void junit::framework::TestSuite::runTest(local_ref< junit::framework::Test > const &a0, local_ref< junit::framework::TestResult > const &a1)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(10),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< junit::framework::Test > junit::framework::TestSuite::testAt(jint a0)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(11),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< junit::framework::Test >
	>(get_jobject(), a0);
}

jint junit::framework::TestSuite::testCount()
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(12),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

local_ref< java::util::Enumeration > junit::framework::TestSuite::tests()
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(13),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::lang::String > junit::framework::TestSuite::toString()
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(14),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void junit::framework::TestSuite::setName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(15),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > junit::framework::TestSuite::getName()
{
	return call_method<
		junit::framework::TestSuite::J2CPP_CLASS_NAME,
		junit::framework::TestSuite::J2CPP_METHOD_NAME(16),
		junit::framework::TestSuite::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(junit::framework::TestSuite,"junit/framework/TestSuite")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,0,"<init>","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,1,"<init>","(Ljava/lang/Class;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,2,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,4,"addTest","(Ljunit/framework/Test;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,5,"addTestSuite","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,6,"createTest","(Ljava/lang/Class;Ljava/lang/String;)Ljunit/framework/Test;")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,7,"countTestCases","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,8,"getTestConstructor","(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,9,"run","(Ljunit/framework/TestResult;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,10,"runTest","(Ljunit/framework/Test;Ljunit/framework/TestResult;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,11,"testAt","(I)Ljunit/framework/Test;")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,12,"testCount","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,13,"tests","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,15,"setName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestSuite,16,"getName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTSUITE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
