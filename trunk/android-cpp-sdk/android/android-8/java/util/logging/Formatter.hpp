/*================================================================================
  code generated by: java2cpp
  class: java.util.logging.Formatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Handler; } } } }


#include <java/lang/String.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/LogRecord.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class Formatter;
	class Formatter
		: public cpp_object<Formatter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		Formatter(jobject jobj)
		: cpp_object<Formatter>(jobj)
		{
		}

		local_ref< java::lang::String > format(local_ref< java::util::logging::LogRecord > const&);
		local_ref< java::lang::String > formatMessage(local_ref< java::util::logging::LogRecord > const&);
		local_ref< java::lang::String > getHead(local_ref< java::util::logging::Handler > const&);
		local_ref< java::lang::String > getTail(local_ref< java::util::logging::Handler > const&);
	}; //class Formatter

} //namespace logging
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::logging::Formatter > create< java::util::logging::Formatter>()
{
	return local_ref< java::util::logging::Formatter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::logging::Formatter::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::logging::Formatter::J2CPP_CLASS_NAME, java::util::logging::Formatter::J2CPP_METHOD_NAME(0), java::util::logging::Formatter::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > java::util::logging::Formatter::format(local_ref< java::util::logging::LogRecord > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::logging::Formatter::formatMessage(local_ref< java::util::logging::LogRecord > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::logging::Formatter::getHead(local_ref< java::util::logging::Handler > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::logging::Formatter::getTail(local_ref< java::util::logging::Handler > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::logging::Formatter,"java/util/logging/Formatter")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,1,"format","(Ljava/util/logging/LogRecord;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,2,"formatMessage","(Ljava/util/logging/LogRecord;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,3,"getHead","(Ljava/util/logging/Handler;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Formatter,4,"getTail","(Ljava/util/logging/Handler;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
