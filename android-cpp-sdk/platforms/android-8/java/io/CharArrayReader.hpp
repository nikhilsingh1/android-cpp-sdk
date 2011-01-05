/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.CharArrayReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CHARARRAYREADER_HPP_DECL
#define J2CPP_JAVA_IO_CHARARRAYREADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Readable; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Readable.hpp>


namespace j2cpp {

namespace java { namespace io {

	class CharArrayReader;
	class CharArrayReader
		: public object<CharArrayReader>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit CharArrayReader(jobject jobj)
		: object<CharArrayReader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Readable>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Reader>() const;


		CharArrayReader(local_ref< array<jchar,1> > const&);
		CharArrayReader(local_ref< array<jchar,1> > const&, jint, jint);
		void close();
		void mark(jint);
		jboolean markSupported();
		jint read();
		jint read(local_ref< array<jchar,1> >  const&, jint, jint);
		jboolean ready();
		void reset();
		jlong skip(jlong);

	}; //class CharArrayReader

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CHARARRAYREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CHARARRAYREADER_HPP_IMPL
#define J2CPP_JAVA_IO_CHARARRAYREADER_HPP_IMPL

namespace j2cpp {



java::io::CharArrayReader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::CharArrayReader::operator local_ref<java::lang::Readable>() const
{
	return local_ref<java::lang::Readable>(get_jobject());
}

java::io::CharArrayReader::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::CharArrayReader::operator local_ref<java::io::Reader>() const
{
	return local_ref<java::io::Reader>(get_jobject());
}


java::io::CharArrayReader::CharArrayReader(local_ref< array<jchar,1> > const &a0)
: object<java::io::CharArrayReader>(
	call_new_object<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(0),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::CharArrayReader::CharArrayReader(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
: object<java::io::CharArrayReader>(
	call_new_object<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(1),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}


void java::io::CharArrayReader::close()
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(2),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::CharArrayReader::mark(jint a0)
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(3),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jboolean java::io::CharArrayReader::markSupported()
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(4),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jint java::io::CharArrayReader::read()
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(5),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint java::io::CharArrayReader::read(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(6),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jboolean java::io::CharArrayReader::ready()
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(7),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

void java::io::CharArrayReader::reset()
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(8),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

jlong java::io::CharArrayReader::skip(jlong a0)
{
	return call_method<
		java::io::CharArrayReader::J2CPP_CLASS_NAME,
		java::io::CharArrayReader::J2CPP_METHOD_NAME(9),
		java::io::CharArrayReader::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::CharArrayReader,"java/io/CharArrayReader")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,0,"<init>","([C)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,1,"<init>","([CII)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,3,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,4,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,5,"read","()I")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,6,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,7,"ready","()Z")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,8,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayReader,9,"skip","(J)J")
J2CPP_DEFINE_FIELD(java::io::CharArrayReader,0,"buf","[C")
J2CPP_DEFINE_FIELD(java::io::CharArrayReader,1,"pos","I")
J2CPP_DEFINE_FIELD(java::io::CharArrayReader,2,"markedPos","I")
J2CPP_DEFINE_FIELD(java::io::CharArrayReader,3,"count","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CHARARRAYREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
