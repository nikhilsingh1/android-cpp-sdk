/*================================================================================
  code generated by: java2cpp
  class: java.io.FilterWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTERWRITER_HPP_DECL
#define J2CPP_JAVA_IO_FILTERWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FilterWriter;
	class FilterWriter
		: public cpp_object<FilterWriter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		FilterWriter(jobject jobj)
		: cpp_object<FilterWriter>(jobj)
		{
		}

		void close();
		void flush();
		void write(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(cpp_int const&);
		void write(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);

	}; //class FilterWriter

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTERWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTERWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_FILTERWRITER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::FilterWriter > create< java::io::FilterWriter>(local_ref< java::io::Writer > const &a0)
{
	return local_ref< java::io::FilterWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FilterWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FilterWriter::J2CPP_CLASS_NAME, java::io::FilterWriter::J2CPP_METHOD_NAME(0), java::io::FilterWriter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::FilterWriter::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::io::FilterWriter::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::FilterWriter::write(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::FilterWriter::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::FilterWriter::write(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::FilterWriter,"java/io/FilterWriter")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,0,"<init>","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,1,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,2,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,3,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,4,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::FilterWriter,5,"write","(Ljava/lang/String;II)V")
J2CPP_DEFINE_FIELD(java::io::FilterWriter,0,"out","Ljava/io/Writer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTERWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
