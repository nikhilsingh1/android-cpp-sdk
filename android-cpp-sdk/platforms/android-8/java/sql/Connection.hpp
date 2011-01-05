/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Connection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CONNECTION_HPP_DECL
#define J2CPP_JAVA_SQL_CONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace sql { class Statement; } } }
namespace j2cpp { namespace java { namespace sql { class CallableStatement; } } }
namespace j2cpp { namespace java { namespace sql { class PreparedStatement; } } }
namespace j2cpp { namespace java { namespace sql { class DatabaseMetaData; } } }
namespace j2cpp { namespace java { namespace sql { class SQLWarning; } } }
namespace j2cpp { namespace java { namespace sql { class Savepoint; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/CallableStatement.hpp>
#include <java/sql/DatabaseMetaData.hpp>
#include <java/sql/PreparedStatement.hpp>
#include <java/sql/SQLWarning.hpp>
#include <java/sql/Savepoint.hpp>
#include <java/sql/Statement.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Connection;
	class Connection
		: public object<Connection>
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
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit Connection(jobject jobj)
		: object<Connection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void clearWarnings();
		void close();
		void commit();
		local_ref< java::sql::Statement > createStatement();
		local_ref< java::sql::Statement > createStatement(jint, jint);
		local_ref< java::sql::Statement > createStatement(jint, jint, jint);
		jboolean getAutoCommit();
		local_ref< java::lang::String > getCatalog();
		jint getHoldability();
		local_ref< java::sql::DatabaseMetaData > getMetaData();
		jint getTransactionIsolation();
		local_ref< java::util::Map > getTypeMap();
		local_ref< java::sql::SQLWarning > getWarnings();
		jboolean isClosed();
		jboolean isReadOnly();
		local_ref< java::lang::String > nativeSQL(local_ref< java::lang::String >  const&);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String >  const&);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String >  const&, jint, jint);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String >  const&, jint, jint, jint);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&, jint);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&, local_ref< array<jint,1> >  const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&, jint, jint);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&, jint, jint, jint);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void releaseSavepoint(local_ref< java::sql::Savepoint >  const&);
		void rollback();
		void rollback(local_ref< java::sql::Savepoint >  const&);
		void setAutoCommit(jboolean);
		void setCatalog(local_ref< java::lang::String >  const&);
		void setHoldability(jint);
		void setReadOnly(jboolean);
		local_ref< java::sql::Savepoint > setSavepoint();
		local_ref< java::sql::Savepoint > setSavepoint(local_ref< java::lang::String >  const&);
		void setTransactionIsolation(jint);
		void setTypeMap(local_ref< java::util::Map >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > TRANSACTION_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > TRANSACTION_READ_COMMITTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > TRANSACTION_READ_UNCOMMITTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > TRANSACTION_REPEATABLE_READ;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > TRANSACTION_SERIALIZABLE;
	}; //class Connection

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL
#define J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL

namespace j2cpp {



java::sql::Connection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::sql::Connection::clearWarnings()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(0),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void java::sql::Connection::close()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(1),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::sql::Connection::commit()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(2),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(3),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::sql::Statement >
	>(get_jobject());
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement(jint a0, jint a1)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(4),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::sql::Statement >
	>(get_jobject(), a0, a1);
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement(jint a0, jint a1, jint a2)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(5),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::sql::Statement >
	>(get_jobject(), a0, a1, a2);
}

jboolean java::sql::Connection::getAutoCommit()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(6),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::sql::Connection::getCatalog()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(7),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::sql::Connection::getHoldability()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(8),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

local_ref< java::sql::DatabaseMetaData > java::sql::Connection::getMetaData()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(9),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::sql::DatabaseMetaData >
	>(get_jobject());
}

jint java::sql::Connection::getTransactionIsolation()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(10),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

local_ref< java::util::Map > java::sql::Connection::getTypeMap()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(11),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::Map >
	>(get_jobject());
}

local_ref< java::sql::SQLWarning > java::sql::Connection::getWarnings()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(12),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::sql::SQLWarning >
	>(get_jobject());
}

jboolean java::sql::Connection::isClosed()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(13),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jboolean java::sql::Connection::isReadOnly()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(14),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::sql::Connection::nativeSQL(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(15),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(16),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::sql::CallableStatement >
	>(get_jobject(), a0);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(17),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::sql::CallableStatement >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(18),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::sql::CallableStatement >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(19),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(20),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0, a1);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, local_ref< array<jint,1> > const &a1)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(21),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0, a1);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(22),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(23),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(24),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::sql::PreparedStatement >
	>(get_jobject(), a0, a1);
}

void java::sql::Connection::releaseSavepoint(local_ref< java::sql::Savepoint > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(25),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::rollback()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(26),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject());
}

void java::sql::Connection::rollback(local_ref< java::sql::Savepoint > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(27),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::setAutoCommit(jboolean a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(28),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::setCatalog(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(29),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::setHoldability(jint a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(30),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::setReadOnly(jboolean a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(31),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

local_ref< java::sql::Savepoint > java::sql::Connection::setSavepoint()
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(32),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::sql::Savepoint >
	>(get_jobject());
}

local_ref< java::sql::Savepoint > java::sql::Connection::setSavepoint(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(33),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::sql::Savepoint >
	>(get_jobject(), a0);
}

void java::sql::Connection::setTransactionIsolation(jint a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(34),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void java::sql::Connection::setTypeMap(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::sql::Connection::J2CPP_CLASS_NAME,
		java::sql::Connection::J2CPP_METHOD_NAME(35),
		java::sql::Connection::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}


static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(0),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::sql::Connection::TRANSACTION_NONE;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(1),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::sql::Connection::TRANSACTION_READ_COMMITTED;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(2),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::sql::Connection::TRANSACTION_READ_UNCOMMITTED;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(3),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::sql::Connection::TRANSACTION_REPEATABLE_READ;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(4),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(4),
	jint
> java::sql::Connection::TRANSACTION_SERIALIZABLE;


J2CPP_DEFINE_CLASS(java::sql::Connection,"java/sql/Connection")
J2CPP_DEFINE_METHOD(java::sql::Connection,0,"clearWarnings","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,1,"close","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,2,"commit","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,3,"createStatement","()Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,4,"createStatement","(II)Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,5,"createStatement","(III)Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,6,"getAutoCommit","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,7,"getCatalog","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Connection,8,"getHoldability","()I")
J2CPP_DEFINE_METHOD(java::sql::Connection,9,"getMetaData","()Ljava/sql/DatabaseMetaData;")
J2CPP_DEFINE_METHOD(java::sql::Connection,10,"getTransactionIsolation","()I")
J2CPP_DEFINE_METHOD(java::sql::Connection,11,"getTypeMap","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::sql::Connection,12,"getWarnings","()Ljava/sql/SQLWarning;")
J2CPP_DEFINE_METHOD(java::sql::Connection,13,"isClosed","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,14,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,15,"nativeSQL","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Connection,16,"prepareCall","(Ljava/lang/String;)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,17,"prepareCall","(Ljava/lang/String;II)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,18,"prepareCall","(Ljava/lang/String;III)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,19,"prepareStatement","(Ljava/lang/String;)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,20,"prepareStatement","(Ljava/lang/String;I)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,21,"prepareStatement","(Ljava/lang/String;[I)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,22,"prepareStatement","(Ljava/lang/String;II)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,23,"prepareStatement","(Ljava/lang/String;III)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,24,"prepareStatement","(Ljava/lang/String;[java.lang.String)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,25,"releaseSavepoint","(Ljava/sql/Savepoint;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,26,"rollback","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,27,"rollback","(Ljava/sql/Savepoint;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,28,"setAutoCommit","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,29,"setCatalog","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,30,"setHoldability","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,31,"setReadOnly","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,32,"setSavepoint","()Ljava/sql/Savepoint;")
J2CPP_DEFINE_METHOD(java::sql::Connection,33,"setSavepoint","(Ljava/lang/String;)Ljava/sql/Savepoint;")
J2CPP_DEFINE_METHOD(java::sql::Connection,34,"setTransactionIsolation","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,35,"setTypeMap","(Ljava/util/Map;)V")
J2CPP_DEFINE_FIELD(java::sql::Connection,0,"TRANSACTION_NONE","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,1,"TRANSACTION_READ_COMMITTED","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,2,"TRANSACTION_READ_UNCOMMITTED","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,3,"TRANSACTION_REPEATABLE_READ","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,4,"TRANSACTION_SERIALIZABLE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
