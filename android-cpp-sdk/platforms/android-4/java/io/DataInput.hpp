/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.DataInput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAINPUT_HPP_DECL
#define J2CPP_JAVA_IO_DATAINPUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class DataInput;
	class DataInput
		: public object<DataInput>
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

		explicit DataInput(jobject jobj)
		: object<DataInput>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		jfloat readFloat();
		void readFully(local_ref< array<jbyte,1> >  const&);
		void readFully(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint readInt();
		local_ref< java::lang::String > readLine();
		jlong readLong();
		jshort readShort();
		jint readUnsignedByte();
		jint readUnsignedShort();
		local_ref< java::lang::String > readUTF();
		jint skipBytes(jint);
	}; //class DataInput

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAINPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAINPUT_HPP_IMPL
#define J2CPP_JAVA_IO_DATAINPUT_HPP_IMPL

namespace j2cpp {



java::io::DataInput::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::io::DataInput::readBoolean()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(0),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}

jbyte java::io::DataInput::readByte()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(1),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(1), 
		jbyte
	>(get_jobject());
}

jchar java::io::DataInput::readChar()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(2),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(2), 
		jchar
	>(get_jobject());
}

jdouble java::io::DataInput::readDouble()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(3),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(3), 
		jdouble
	>(get_jobject());
}

jfloat java::io::DataInput::readFloat()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(4),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(4), 
		jfloat
	>(get_jobject());
}

void java::io::DataInput::readFully(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(5),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void java::io::DataInput::readFully(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(6),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint java::io::DataInput::readInt()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(7),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::DataInput::readLine()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(8),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::io::DataInput::readLong()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(9),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject());
}

jshort java::io::DataInput::readShort()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(10),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(10), 
		jshort
	>(get_jobject());
}

jint java::io::DataInput::readUnsignedByte()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(11),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint java::io::DataInput::readUnsignedShort()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(12),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::DataInput::readUTF()
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(13),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::io::DataInput::skipBytes(jint a0)
{
	return call_method<
		java::io::DataInput::J2CPP_CLASS_NAME,
		java::io::DataInput::J2CPP_METHOD_NAME(14),
		java::io::DataInput::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::DataInput,"java/io/DataInput")
J2CPP_DEFINE_METHOD(java::io::DataInput,0,"readBoolean","()Z")
J2CPP_DEFINE_METHOD(java::io::DataInput,1,"readByte","()B")
J2CPP_DEFINE_METHOD(java::io::DataInput,2,"readChar","()C")
J2CPP_DEFINE_METHOD(java::io::DataInput,3,"readDouble","()D")
J2CPP_DEFINE_METHOD(java::io::DataInput,4,"readFloat","()F")
J2CPP_DEFINE_METHOD(java::io::DataInput,5,"readFully","([B)V")
J2CPP_DEFINE_METHOD(java::io::DataInput,6,"readFully","([BII)V")
J2CPP_DEFINE_METHOD(java::io::DataInput,7,"readInt","()I")
J2CPP_DEFINE_METHOD(java::io::DataInput,8,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::DataInput,9,"readLong","()J")
J2CPP_DEFINE_METHOD(java::io::DataInput,10,"readShort","()S")
J2CPP_DEFINE_METHOD(java::io::DataInput,11,"readUnsignedByte","()I")
J2CPP_DEFINE_METHOD(java::io::DataInput,12,"readUnsignedShort","()I")
J2CPP_DEFINE_METHOD(java::io::DataInput,13,"readUTF","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::DataInput,14,"skipBytes","(I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAINPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
