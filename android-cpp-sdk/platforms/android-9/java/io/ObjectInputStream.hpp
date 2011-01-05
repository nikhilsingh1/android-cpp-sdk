/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.ObjectInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamClass; } } }
namespace j2cpp { namespace java { namespace io { class DataInput; } } }
namespace j2cpp { namespace java { namespace io { class ObjectInput; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { namespace ObjectInputStream_ { class GetField; } } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamConstants; } } }
namespace j2cpp { namespace java { namespace io { class ObjectInputValidation; } } }


#include <java/io/Closeable.hpp>
#include <java/io/DataInput.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/ObjectInput.hpp>
#include <java/io/ObjectInputStream.hpp>
#include <java/io/ObjectInputValidation.hpp>
#include <java/io/ObjectStreamClass.hpp>
#include <java/io/ObjectStreamConstants.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class ObjectInputStream;
	namespace ObjectInputStream_ {

		class GetField;
		class GetField
			: public object<GetField>
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

			explicit GetField(jobject jobj)
			: object<GetField>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			GetField();
			local_ref< java::io::ObjectStreamClass > getObjectStreamClass();
			jboolean defaulted(local_ref< java::lang::String >  const&);
			jboolean get(local_ref< java::lang::String >  const&, jboolean);
			jchar get(local_ref< java::lang::String >  const&, jchar);
			jbyte get(local_ref< java::lang::String >  const&, jbyte);
			jshort get(local_ref< java::lang::String >  const&, jshort);
			jint get(local_ref< java::lang::String >  const&, jint);
			jlong get(local_ref< java::lang::String >  const&, jlong);
			jfloat get(local_ref< java::lang::String >  const&, jfloat);
			jdouble get(local_ref< java::lang::String >  const&, jdouble);
			local_ref< java::lang::Object > get(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		}; //class GetField

	} //namespace ObjectInputStream_

	class ObjectInputStream
		: public object<ObjectInputStream>
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
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)

		typedef ObjectInputStream_::GetField GetField;

		explicit ObjectInputStream(jobject jobj)
		: object<ObjectInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::DataInput>() const;
		operator local_ref<java::io::ObjectInput>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::ObjectStreamConstants>() const;


		ObjectInputStream(local_ref< java::io::InputStream > const&);
		jint available();
		void close();
		void defaultReadObject();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		local_ref< java::io::ObjectInputStream_::GetField > readFields();
		jfloat readFloat();
		void readFully(local_ref< array<jbyte,1> >  const&);
		void readFully(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint readInt();
		local_ref< java::lang::String > readLine();
		jlong readLong();
		local_ref< java::lang::Object > readObject();
		local_ref< java::lang::Object > readUnshared();
		jshort readShort();
		jint readUnsignedByte();
		jint readUnsignedShort();
		local_ref< java::lang::String > readUTF();
		void registerValidation(local_ref< java::io::ObjectInputValidation >  const&, jint);
		jint skipBytes(jint);
	}; //class ObjectInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_IMPL

namespace j2cpp {




java::io::ObjectInputStream_::GetField::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::ObjectInputStream_::GetField::GetField()
: object<java::io::ObjectInputStream_::GetField>(
	call_new_object<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(0),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::io::ObjectStreamClass > java::io::ObjectInputStream_::GetField::getObjectStreamClass()
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(1),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::ObjectStreamClass >
	>(get_jobject());
}

jboolean java::io::ObjectInputStream_::GetField::defaulted(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(2),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(3),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1);
}

jchar java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jchar a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(4),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(4), 
		jchar
	>(get_jobject(), a0, a1);
}

jbyte java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jbyte a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(5),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(5), 
		jbyte
	>(get_jobject(), a0, a1);
}

jshort java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jshort a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(6),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(6), 
		jshort
	>(get_jobject(), a0, a1);
}

jint java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(7),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1);
}

jlong java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(8),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(get_jobject(), a0, a1);
}

jfloat java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jfloat a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(9),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(9), 
		jfloat
	>(get_jobject(), a0, a1);
}

jdouble java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(10),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(10), 
		jdouble
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(11),
		java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::io::ObjectInputStream_::GetField,"java/io/ObjectInputStream$GetField")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,1,"getObjectStreamClass","()Ljava/io/ObjectStreamClass;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,2,"defaulted","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,3,"get","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,4,"get","(Ljava/lang/String;C)C")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,5,"get","(Ljava/lang/String;B)B")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,6,"get","(Ljava/lang/String;S)S")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,7,"get","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,8,"get","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,9,"get","(Ljava/lang/String;F)F")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,10,"get","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream_::GetField,11,"get","(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;")



java::io::ObjectInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::ObjectInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::ObjectInputStream::operator local_ref<java::io::DataInput>() const
{
	return local_ref<java::io::DataInput>(get_jobject());
}

java::io::ObjectInputStream::operator local_ref<java::io::ObjectInput>() const
{
	return local_ref<java::io::ObjectInput>(get_jobject());
}

java::io::ObjectInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::io::ObjectInputStream::operator local_ref<java::io::ObjectStreamConstants>() const
{
	return local_ref<java::io::ObjectStreamConstants>(get_jobject());
}



java::io::ObjectInputStream::ObjectInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::io::ObjectInputStream>(
	call_new_object<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(1),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::io::ObjectInputStream::available()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(2),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void java::io::ObjectInputStream::close()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(3),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void java::io::ObjectInputStream::defaultReadObject()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(4),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}


jint java::io::ObjectInputStream::read()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(6),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint java::io::ObjectInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(7),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jboolean java::io::ObjectInputStream::readBoolean()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(8),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jbyte java::io::ObjectInputStream::readByte()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(9),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(9), 
		jbyte
	>(get_jobject());
}

jchar java::io::ObjectInputStream::readChar()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(10),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(10), 
		jchar
	>(get_jobject());
}

jdouble java::io::ObjectInputStream::readDouble()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(11),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(11), 
		jdouble
	>(get_jobject());
}

local_ref< java::io::ObjectInputStream_::GetField > java::io::ObjectInputStream::readFields()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(12),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::ObjectInputStream_::GetField >
	>(get_jobject());
}

jfloat java::io::ObjectInputStream::readFloat()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(13),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(13), 
		jfloat
	>(get_jobject());
}

void java::io::ObjectInputStream::readFully(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(14),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::io::ObjectInputStream::readFully(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(15),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint java::io::ObjectInputStream::readInt()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(16),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::ObjectInputStream::readLine()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(17),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::io::ObjectInputStream::readLong()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(18),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(18), 
		jlong
	>(get_jobject());
}



local_ref< java::lang::Object > java::io::ObjectInputStream::readObject()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(21),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::io::ObjectInputStream::readUnshared()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(22),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


jshort java::io::ObjectInputStream::readShort()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(24),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(24), 
		jshort
	>(get_jobject());
}


jint java::io::ObjectInputStream::readUnsignedByte()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(26),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

jint java::io::ObjectInputStream::readUnsignedShort()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(27),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::ObjectInputStream::readUTF()
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(28),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::io::ObjectInputStream::registerValidation(local_ref< java::io::ObjectInputValidation > const &a0, jint a1)
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(29),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0, a1);
}



jint java::io::ObjectInputStream::skipBytes(jint a0)
{
	return call_method<
		java::io::ObjectInputStream::J2CPP_CLASS_NAME,
		java::io::ObjectInputStream::J2CPP_METHOD_NAME(32),
		java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(32), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::ObjectInputStream,"java/io/ObjectInputStream")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,2,"available","()I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,4,"defaultReadObject","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,5,"enableResolveObject","(Z)Z")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,6,"read","()I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,7,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,8,"readBoolean","()Z")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,9,"readByte","()B")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,10,"readChar","()C")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,11,"readDouble","()D")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,12,"readFields","()Ljava/io/ObjectInputStream$GetField;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,13,"readFloat","()F")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,14,"readFully","([B)V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,15,"readFully","([BII)V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,16,"readInt","()I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,17,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,18,"readLong","()J")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,19,"readClassDescriptor","()Ljava/io/ObjectStreamClass;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,20,"resolveProxyClass","([java.lang.String)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,21,"readObject","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,22,"readUnshared","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,23,"readObjectOverride","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,24,"readShort","()S")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,25,"readStreamHeader","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,26,"readUnsignedByte","()I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,27,"readUnsignedShort","()I")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,28,"readUTF","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,29,"registerValidation","(Ljava/io/ObjectInputValidation;I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,30,"resolveClass","(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,31,"resolveObject","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::io::ObjectInputStream,32,"skipBytes","(I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
