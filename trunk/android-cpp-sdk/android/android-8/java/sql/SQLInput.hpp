/*================================================================================
  code generated by: java2cpp
  class: java.sql.SQLInput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLINPUT_HPP_DECL
#define J2CPP_JAVA_SQL_SQLINPUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class Time; } } }
namespace j2cpp { namespace java { namespace sql { class Ref; } } }
namespace j2cpp { namespace java { namespace sql { class Timestamp; } } }
namespace j2cpp { namespace java { namespace sql { class Date; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/net/URL.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/Date.hpp>
#include <java/sql/Ref.hpp>
#include <java/sql/Time.hpp>
#include <java/sql/Timestamp.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLInput;
	class SQLInput
		: public cpp_object<SQLInput>
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

		SQLInput(jobject jobj)
		: cpp_object<SQLInput>(jobj)
		{
		}

		local_ref< java::lang::String > readString();
		cpp_boolean readBoolean();
		cpp_byte readByte();
		cpp_short readShort();
		cpp_int readInt();
		cpp_long readLong();
		cpp_float readFloat();
		cpp_double readDouble();
		local_ref< java::math::BigDecimal > readBigDecimal();
		local_ref< cpp_byte_array<1> > readBytes();
		local_ref< java::sql::Date > readDate();
		local_ref< java::sql::Time > readTime();
		local_ref< java::sql::Timestamp > readTimestamp();
		local_ref< java::io::Reader > readCharacterStream();
		local_ref< java::io::InputStream > readAsciiStream();
		local_ref< java::io::InputStream > readBinaryStream();
		local_ref< java::lang::Object > readObject();
		local_ref< java::sql::Ref > readRef();
		local_ref< java::sql::Blob > readBlob();
		local_ref< java::sql::Clob > readClob();
		local_ref< java::sql::Array > readArray();
		cpp_boolean wasNull();
		local_ref< java::net::URL > readURL();
	}; //class SQLInput

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLINPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLINPUT_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLINPUT_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > java::sql::SQLInput::readString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::sql::SQLInput::readBoolean()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_byte java::sql::SQLInput::readByte()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_short java::sql::SQLInput::readShort()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::sql::SQLInput::readInt()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long java::sql::SQLInput::readLong()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_float java::sql::SQLInput::readFloat()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_double java::sql::SQLInput::readDouble()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::math::BigDecimal > java::sql::SQLInput::readBigDecimal()
{
	return local_ref< java::math::BigDecimal >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > java::sql::SQLInput::readBytes()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::sql::Date > java::sql::SQLInput::readDate()
{
	return local_ref< java::sql::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::sql::Time > java::sql::SQLInput::readTime()
{
	return local_ref< java::sql::Time >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::sql::Timestamp > java::sql::SQLInput::readTimestamp()
{
	return local_ref< java::sql::Timestamp >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::io::Reader > java::sql::SQLInput::readCharacterStream()
{
	return local_ref< java::io::Reader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::io::InputStream > java::sql::SQLInput::readAsciiStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::io::InputStream > java::sql::SQLInput::readBinaryStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::Object > java::sql::SQLInput::readObject()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::sql::Ref > java::sql::SQLInput::readRef()
{
	return local_ref< java::sql::Ref >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::sql::Blob > java::sql::SQLInput::readBlob()
{
	return local_ref< java::sql::Blob >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::sql::Clob > java::sql::SQLInput::readClob()
{
	return local_ref< java::sql::Clob >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::sql::Array > java::sql::SQLInput::readArray()
{
	return local_ref< java::sql::Array >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean java::sql::SQLInput::wasNull()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::net::URL > java::sql::SQLInput::readURL()
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::SQLInput,"java/sql/SQLInput")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,0,"readString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,1,"readBoolean","()Z")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,2,"readByte","()B")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,3,"readShort","()S")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,4,"readInt","()I")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,5,"readLong","()J")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,6,"readFloat","()F")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,7,"readDouble","()D")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,8,"readBigDecimal","()Ljava/math/BigDecimal;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,9,"readBytes","()[B")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,10,"readDate","()Ljava/sql/Date;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,11,"readTime","()Ljava/sql/Time;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,12,"readTimestamp","()Ljava/sql/Timestamp;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,13,"readCharacterStream","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,14,"readAsciiStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,15,"readBinaryStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,16,"readObject","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,17,"readRef","()Ljava/sql/Ref;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,18,"readBlob","()Ljava/sql/Blob;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,19,"readClob","()Ljava/sql/Clob;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,20,"readArray","()Ljava/sql/Array;")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,21,"wasNull","()Z")
J2CPP_DEFINE_METHOD(java::sql::SQLInput,22,"readURL","()Ljava/net/URL;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLINPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
