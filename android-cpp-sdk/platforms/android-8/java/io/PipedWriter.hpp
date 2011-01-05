/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PipedWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDWRITER_HPP_DECL
#define J2CPP_JAVA_IO_PIPEDWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace io { class PipedReader; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/PipedReader.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PipedWriter;
	class PipedWriter
		: public object<PipedWriter>
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

		explicit PipedWriter(jobject jobj)
		: object<PipedWriter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Appendable>() const;
		operator local_ref<java::io::Writer>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;


		PipedWriter();
		PipedWriter(local_ref< java::io::PipedReader > const&);
		void close();
		void connect(local_ref< java::io::PipedReader >  const&);
		void flush();
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
	}; //class PipedWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_PIPEDWRITER_HPP_IMPL

namespace j2cpp {



java::io::PipedWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::PipedWriter::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

java::io::PipedWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}

java::io::PipedWriter::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::PipedWriter::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}


java::io::PipedWriter::PipedWriter()
: object<java::io::PipedWriter>(
	call_new_object<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(0),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::PipedWriter::PipedWriter(local_ref< java::io::PipedReader > const &a0)
: object<java::io::PipedWriter>(
	call_new_object<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(1),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::io::PipedWriter::close()
{
	return call_method<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(2),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::PipedWriter::connect(local_ref< java::io::PipedReader > const &a0)
{
	return call_method<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(3),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void java::io::PipedWriter::flush()
{
	return call_method<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(4),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void java::io::PipedWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(5),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::PipedWriter::write(jint a0)
{
	return call_method<
		java::io::PipedWriter::J2CPP_CLASS_NAME,
		java::io::PipedWriter::J2CPP_METHOD_NAME(6),
		java::io::PipedWriter::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::PipedWriter,"java/io/PipedWriter")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,1,"<init>","(Ljava/io/PipedReader;)V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,3,"connect","(Ljava/io/PipedReader;)V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,4,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,5,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::PipedWriter,6,"write","(I)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
