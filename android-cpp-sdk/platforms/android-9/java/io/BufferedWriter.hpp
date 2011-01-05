/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.BufferedWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_DECL
#define J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class BufferedWriter;
	class BufferedWriter
		: public object<BufferedWriter>
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

		explicit BufferedWriter(jobject jobj)
		: object<BufferedWriter>(jobj)
		{
		}

		operator local_ref<java::lang::Appendable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Writer>() const;


		BufferedWriter(local_ref< java::io::Writer > const&);
		BufferedWriter(local_ref< java::io::Writer > const&, jint);
		void close();
		void flush();
		void newLine();
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< java::lang::String >  const&, jint, jint);
	}; //class BufferedWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_IMPL

namespace j2cpp {



java::io::BufferedWriter::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

java::io::BufferedWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::BufferedWriter::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::BufferedWriter::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::BufferedWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}


java::io::BufferedWriter::BufferedWriter(local_ref< java::io::Writer > const &a0)
: object<java::io::BufferedWriter>(
	call_new_object<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(0),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::BufferedWriter::BufferedWriter(local_ref< java::io::Writer > const &a0, jint a1)
: object<java::io::BufferedWriter>(
	call_new_object<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(1),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void java::io::BufferedWriter::close()
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(2),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::BufferedWriter::flush()
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(3),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void java::io::BufferedWriter::newLine()
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(4),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void java::io::BufferedWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(5),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::BufferedWriter::write(jint a0)
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(6),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void java::io::BufferedWriter::write(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::BufferedWriter::J2CPP_CLASS_NAME,
		java::io::BufferedWriter::J2CPP_METHOD_NAME(7),
		java::io::BufferedWriter::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::io::BufferedWriter,"java/io/BufferedWriter")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,0,"<init>","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,1,"<init>","(Ljava/io/Writer;I)V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,3,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,4,"newLine","()V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,5,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,6,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::BufferedWriter,7,"write","(Ljava/lang/String;II)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BUFFEREDWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
