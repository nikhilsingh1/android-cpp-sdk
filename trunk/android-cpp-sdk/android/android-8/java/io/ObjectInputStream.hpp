/*================================================================================
  code generated by: java2cpp
  class: java.io.ObjectInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class ObjectInputValidation; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { namespace ObjectInputStream_ { class GetField; } } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamClass; } } }


#include <java/io/InputStream.hpp>
#include <java/io/ObjectInputStream.hpp>
#include <java/io/ObjectInputValidation.hpp>
#include <java/io/ObjectStreamClass.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class ObjectInputStream;
	namespace ObjectInputStream_ {

		class GetField;
		class GetField
			: public cpp_object<GetField>
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

			GetField(jobject jobj)
			: cpp_object<GetField>(jobj)
			{
			}

			local_ref< java::io::ObjectStreamClass > getObjectStreamClass();
			cpp_boolean defaulted(local_ref< java::lang::String > const&);
			cpp_boolean get(local_ref< java::lang::String > const&, cpp_boolean const&);
			cpp_char get(local_ref< java::lang::String > const&, cpp_char const&);
			cpp_byte get(local_ref< java::lang::String > const&, cpp_byte const&);
			cpp_short get(local_ref< java::lang::String > const&, cpp_short const&);
			cpp_int get(local_ref< java::lang::String > const&, cpp_int const&);
			cpp_long get(local_ref< java::lang::String > const&, cpp_long const&);
			cpp_float get(local_ref< java::lang::String > const&, cpp_float const&);
			cpp_double get(local_ref< java::lang::String > const&, cpp_double const&);
			local_ref< java::lang::Object > get(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		}; //class GetField

	} //namespace ObjectInputStream_

	class ObjectInputStream
		: public cpp_object<ObjectInputStream>
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

		ObjectInputStream(jobject jobj)
		: cpp_object<ObjectInputStream>(jobj)
		{
		}

		cpp_int available();
		void close();
		void defaultReadObject();
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean readBoolean();
		cpp_byte readByte();
		cpp_char readChar();
		cpp_double readDouble();
		local_ref< java::io::ObjectInputStream_::GetField > readFields();
		cpp_float readFloat();
		void readFully(local_ref< cpp_byte_array<1> > const&);
		void readFully(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int readInt();
		local_ref< java::lang::String > readLine();
		cpp_long readLong();
		local_ref< java::lang::Object > readObject();
		local_ref< java::lang::Object > readUnshared();
		cpp_short readShort();
		cpp_int readUnsignedByte();
		cpp_int readUnsignedShort();
		local_ref< java::lang::String > readUTF();
		void registerValidation(local_ref< java::io::ObjectInputValidation > const&, cpp_int const&);
		cpp_int skipBytes(cpp_int const&);
	}; //class ObjectInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_OBJECTINPUTSTREAM_HPP_IMPL

namespace j2cpp {



template <>
local_ref< java::io::ObjectInputStream_::GetField > create< java::io::ObjectInputStream_::GetField>()
{
	return local_ref< java::io::ObjectInputStream_::GetField >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::ObjectInputStream_::GetField::J2CPP_CLASS_NAME, java::io::ObjectInputStream_::GetField::J2CPP_METHOD_NAME(0), java::io::ObjectInputStream_::GetField::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::io::ObjectStreamClass > java::io::ObjectInputStream_::GetField::getObjectStreamClass()
{
	return local_ref< java::io::ObjectStreamClass >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::io::ObjectInputStream_::GetField::defaulted(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_char java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_char const &a1)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_byte java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_byte const &a1)
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_short java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_short const &a1)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_float const &a1)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_double java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, cpp_double const &a1)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::io::ObjectInputStream_::GetField::get(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
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


template <>
local_ref< java::io::ObjectInputStream > create< java::io::ObjectInputStream>()
{
	return local_ref< java::io::ObjectInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::ObjectInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::ObjectInputStream::J2CPP_CLASS_NAME, java::io::ObjectInputStream::J2CPP_METHOD_NAME(0), java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::io::ObjectInputStream > create< java::io::ObjectInputStream>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::io::ObjectInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::ObjectInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::ObjectInputStream::J2CPP_CLASS_NAME, java::io::ObjectInputStream::J2CPP_METHOD_NAME(1), java::io::ObjectInputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::ObjectInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::ObjectInputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::io::ObjectInputStream::defaultReadObject()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


cpp_int java::io::ObjectInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::io::ObjectInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::ObjectInputStream::readBoolean()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_byte java::io::ObjectInputStream::readByte()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_char java::io::ObjectInputStream::readChar()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_double java::io::ObjectInputStream::readDouble()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::io::ObjectInputStream_::GetField > java::io::ObjectInputStream::readFields()
{
	return local_ref< java::io::ObjectInputStream_::GetField >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_float java::io::ObjectInputStream::readFloat()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void java::io::ObjectInputStream::readFully(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::ObjectInputStream::readFully(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int java::io::ObjectInputStream::readInt()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::io::ObjectInputStream::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_long java::io::ObjectInputStream::readLong()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}



local_ref< java::lang::Object > java::io::ObjectInputStream::readObject()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::lang::Object > java::io::ObjectInputStream::readUnshared()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


cpp_short java::io::ObjectInputStream::readShort()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}


cpp_int java::io::ObjectInputStream::readUnsignedByte()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_int java::io::ObjectInputStream::readUnsignedShort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< java::lang::String > java::io::ObjectInputStream::readUTF()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void java::io::ObjectInputStream::registerValidation(local_ref< java::io::ObjectInputValidation > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



cpp_int java::io::ObjectInputStream::skipBytes(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
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
