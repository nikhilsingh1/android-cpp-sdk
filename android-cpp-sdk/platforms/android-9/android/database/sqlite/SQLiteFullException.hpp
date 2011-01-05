/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteFullException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteException; } } } }
namespace j2cpp { namespace android { namespace database { class SQLException; } } }


#include <android/database/SQLException.hpp>
#include <android/database/sqlite/SQLiteException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteFullException;
	class SQLiteFullException
		: public object<SQLiteFullException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SQLiteFullException(jobject jobj)
		: object<SQLiteFullException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<android::database::sqlite::SQLiteException>() const;
		operator local_ref<android::database::SQLException>() const;


		SQLiteFullException();
		SQLiteFullException(local_ref< java::lang::String > const&);
	}; //class SQLiteFullException

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteFullException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<android::database::sqlite::SQLiteException>() const
{
	return local_ref<android::database::sqlite::SQLiteException>(get_jobject());
}

android::database::sqlite::SQLiteFullException::operator local_ref<android::database::SQLException>() const
{
	return local_ref<android::database::SQLException>(get_jobject());
}


android::database::sqlite::SQLiteFullException::SQLiteFullException()
: object<android::database::sqlite::SQLiteFullException>(
	call_new_object<
		android::database::sqlite::SQLiteFullException::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteFullException::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteFullException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::database::sqlite::SQLiteFullException::SQLiteFullException(local_ref< java::lang::String > const &a0)
: object<android::database::sqlite::SQLiteFullException>(
	call_new_object<
		android::database::sqlite::SQLiteFullException::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteFullException::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteFullException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteFullException,"android/database/sqlite/SQLiteFullException")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteFullException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteFullException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
