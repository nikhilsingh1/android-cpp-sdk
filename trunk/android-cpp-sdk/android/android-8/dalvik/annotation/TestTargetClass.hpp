/*================================================================================
  code generated by: java2cpp
  class: dalvik.annotation.TestTargetClass
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>


namespace j2cpp {

namespace dalvik { namespace annotation {

	class TestTargetClass;
	class TestTargetClass
		: public cpp_object<TestTargetClass>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		TestTargetClass(jobject jobj)
		: cpp_object<TestTargetClass>(jobj)
		{
		}

		local_ref< java::lang::Class > value();
	}; //class TestTargetClass

} //namespace annotation
} //namespace dalvik


} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Class > dalvik::annotation::TestTargetClass::value()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(dalvik::annotation::TestTargetClass,"dalvik/annotation/TestTargetClass")
J2CPP_DEFINE_METHOD(dalvik::annotation::TestTargetClass,0,"value","()Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
