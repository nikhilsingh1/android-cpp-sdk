/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.TimeUnit
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class TimeUnit;
	class TimeUnit
		: public cpp_object<TimeUnit>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		TimeUnit(jobject jobj)
		: cpp_object<TimeUnit>(jobj)
		{
		}

		static local_ref< cpp_object_array<java::util::concurrent::TimeUnit, 1> > values();
		static local_ref< java::util::concurrent::TimeUnit > valueOf(local_ref< java::lang::String > const&);
		cpp_long convert(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		cpp_long toNanos(cpp_long const&);
		cpp_long toMicros(cpp_long const&);
		cpp_long toMillis(cpp_long const&);
		cpp_long toSeconds(cpp_long const&);
		void timedWait(local_ref< java::lang::Object > const&, cpp_long const&);
		void timedJoin(local_ref< java::lang::Thread > const&, cpp_long const&);
		void sleep(cpp_long const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::util::concurrent::TimeUnit > > MICROSECONDS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::util::concurrent::TimeUnit > > MILLISECONDS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::util::concurrent::TimeUnit > > NANOSECONDS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::util::concurrent::TimeUnit > > SECONDS;
	}; //class TimeUnit

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_IMPL

namespace j2cpp {


local_ref< cpp_object_array<java::util::concurrent::TimeUnit, 1> > java::util::concurrent::TimeUnit::values()
{
	return local_ref< cpp_object_array<java::util::concurrent::TimeUnit, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< java::util::concurrent::TimeUnit > java::util::concurrent::TimeUnit::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::concurrent::TimeUnit >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::TimeUnit > create< java::util::concurrent::TimeUnit>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::util::concurrent::TimeUnit >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME, java::util::concurrent::TimeUnit::J2CPP_METHOD_NAME(2), java::util::concurrent::TimeUnit::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::TimeUnit::convert(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::TimeUnit::toNanos(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::TimeUnit::toMicros(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::TimeUnit::toMillis(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::TimeUnit::toSeconds(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::TimeUnit::timedWait(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::TimeUnit::timedJoin(local_ref< java::lang::Thread > const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::TimeUnit::sleep(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME,
	java::util::concurrent::TimeUnit::J2CPP_FIELD_NAME(0),
	java::util::concurrent::TimeUnit::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::util::concurrent::TimeUnit >
> java::util::concurrent::TimeUnit::MICROSECONDS;

static_field<
	java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME,
	java::util::concurrent::TimeUnit::J2CPP_FIELD_NAME(1),
	java::util::concurrent::TimeUnit::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::util::concurrent::TimeUnit >
> java::util::concurrent::TimeUnit::MILLISECONDS;

static_field<
	java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME,
	java::util::concurrent::TimeUnit::J2CPP_FIELD_NAME(2),
	java::util::concurrent::TimeUnit::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::util::concurrent::TimeUnit >
> java::util::concurrent::TimeUnit::NANOSECONDS;

static_field<
	java::util::concurrent::TimeUnit::J2CPP_CLASS_NAME,
	java::util::concurrent::TimeUnit::J2CPP_FIELD_NAME(3),
	java::util::concurrent::TimeUnit::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::util::concurrent::TimeUnit >
> java::util::concurrent::TimeUnit::SECONDS;


J2CPP_DEFINE_CLASS(java::util::concurrent::TimeUnit,"java/util/concurrent/TimeUnit")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,0,"values","()[java.util.concurrent.TimeUnit")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,1,"valueOf","(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,3,"convert","(JLjava/util/concurrent/TimeUnit;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,4,"toNanos","(J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,5,"toMicros","(J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,6,"toMillis","(J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,7,"toSeconds","(J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,8,"timedWait","(Ljava/lang/Object;J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,9,"timedJoin","(Ljava/lang/Thread;J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,10,"sleep","(J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::TimeUnit,11,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::util::concurrent::TimeUnit,0,"MICROSECONDS","Ljava/util/concurrent/TimeUnit;")
J2CPP_DEFINE_FIELD(java::util::concurrent::TimeUnit,1,"MILLISECONDS","Ljava/util/concurrent/TimeUnit;")
J2CPP_DEFINE_FIELD(java::util::concurrent::TimeUnit,2,"NANOSECONDS","Ljava/util/concurrent/TimeUnit;")
J2CPP_DEFINE_FIELD(java::util::concurrent::TimeUnit,3,"SECONDS","Ljava/util/concurrent/TimeUnit;")
J2CPP_DEFINE_FIELD(java::util::concurrent::TimeUnit,4,"$VALUES","[java.util.concurrent.TimeUnit")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_TIMEUNIT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
