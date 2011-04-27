/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.runner.TestSuiteLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL
#define J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace junit { namespace runner {

	class TestSuiteLoader;
	class TestSuiteLoader
		: public object<TestSuiteLoader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit TestSuiteLoader(jobject jobj)
		: object<TestSuiteLoader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Class > load(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Class > reload(local_ref< java::lang::Class >  const&);
	}; //class TestSuiteLoader

} //namespace runner
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL
#define J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL

namespace j2cpp {



junit::runner::TestSuiteLoader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Class > junit::runner::TestSuiteLoader::load(local_ref< java::lang::String > const &a0)
{
	return call_method<
		junit::runner::TestSuiteLoader::J2CPP_CLASS_NAME,
		junit::runner::TestSuiteLoader::J2CPP_METHOD_NAME(0),
		junit::runner::TestSuiteLoader::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Class >
	>(get_jobject(), a0);
}

local_ref< java::lang::Class > junit::runner::TestSuiteLoader::reload(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		junit::runner::TestSuiteLoader::J2CPP_CLASS_NAME,
		junit::runner::TestSuiteLoader::J2CPP_METHOD_NAME(1),
		junit::runner::TestSuiteLoader::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Class >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(junit::runner::TestSuiteLoader,"junit/runner/TestSuiteLoader")
J2CPP_DEFINE_METHOD(junit::runner::TestSuiteLoader,0,"load","(Ljava/lang/String;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(junit::runner::TestSuiteLoader,1,"reload","(Ljava/lang/Class;)Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION