/*================================================================================
  code generated by: java2cpp
  class: android.database.CursorWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CursorWrapper;
	class CursorWrapper
		: public cpp_object<CursorWrapper>
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
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)

		CursorWrapper(jobject jobj)
		: cpp_object<CursorWrapper>(jobj)
		{
		}

		void close();
		cpp_boolean isClosed();
		cpp_int getCount();
		void deactivate();
		cpp_boolean moveToFirst();
		cpp_int getColumnCount();
		cpp_int getColumnIndex(local_ref< java::lang::String > const&);
		cpp_int getColumnIndexOrThrow(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getColumnName(cpp_int const&);
		local_ref< cpp_object_array<java::lang::String, 1> > getColumnNames();
		cpp_double getDouble(cpp_int const&);
		local_ref< android::os::Bundle > getExtras();
		cpp_float getFloat(cpp_int const&);
		cpp_int getInt(cpp_int const&);
		cpp_long getLong(cpp_int const&);
		cpp_short getShort(cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&);
		void copyStringToBuffer(cpp_int const&, local_ref< android::database::CharArrayBuffer > const&);
		local_ref< cpp_byte_array<1> > getBlob(cpp_int const&);
		cpp_boolean getWantsAllOnMoveCalls();
		cpp_boolean isAfterLast();
		cpp_boolean isBeforeFirst();
		cpp_boolean isFirst();
		cpp_boolean isLast();
		cpp_boolean isNull(cpp_int const&);
		cpp_boolean moveToLast();
		cpp_boolean move(cpp_int const&);
		cpp_boolean moveToPosition(cpp_int const&);
		cpp_boolean moveToNext();
		cpp_int getPosition();
		cpp_boolean moveToPrevious();
		void registerContentObserver(local_ref< android::database::ContentObserver > const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		cpp_boolean requery();
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle > const&);
		void setNotificationUri(local_ref< android::content::ContentResolver > const&, local_ref< android::net::Uri > const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver > const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const&);
	}; //class CursorWrapper

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::database::CursorWrapper > create< android::database::CursorWrapper>(local_ref< android::database::Cursor > const &a0)
{
	return local_ref< android::database::CursorWrapper >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::CursorWrapper::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::CursorWrapper::J2CPP_CLASS_NAME, android::database::CursorWrapper::J2CPP_METHOD_NAME(0), android::database::CursorWrapper::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::CursorWrapper::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isClosed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::database::CursorWrapper::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::database::CursorWrapper::deactivate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::moveToFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::database::CursorWrapper::getColumnCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::database::CursorWrapper::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::CursorWrapper::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::database::CursorWrapper::getColumnName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > android::database::CursorWrapper::getColumnNames()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_double android::database::CursorWrapper::getDouble(cpp_int const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::database::CursorWrapper::getExtras()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_float android::database::CursorWrapper::getFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::CursorWrapper::getInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::database::CursorWrapper::getLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short android::database::CursorWrapper::getShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::database::CursorWrapper::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::CursorWrapper::copyStringToBuffer(cpp_int const &a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > android::database::CursorWrapper::getBlob(cpp_int const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::CursorWrapper::getWantsAllOnMoveCalls()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isAfterLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isBeforeFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::isNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::CursorWrapper::moveToLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::move(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::CursorWrapper::moveToPosition(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::CursorWrapper::moveToNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

cpp_int android::database::CursorWrapper::getPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_boolean android::database::CursorWrapper::moveToPrevious()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

void android::database::CursorWrapper::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::CursorWrapper::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::CursorWrapper::requery()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

local_ref< android::os::Bundle > android::database::CursorWrapper::respond(local_ref< android::os::Bundle > const &a0)
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::CursorWrapper::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::database::CursorWrapper::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::CursorWrapper::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::CursorWrapper,"android/database/CursorWrapper")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,0,"<init>","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,1,"close","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,2,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,3,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,4,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,5,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,6,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,7,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,8,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,9,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,10,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,11,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,12,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,13,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,14,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,15,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,16,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,17,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,18,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,19,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,20,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,21,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,22,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,23,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,24,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,25,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,26,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,27,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,28,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,29,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,30,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,31,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,32,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,33,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,34,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,35,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,36,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,37,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWrapper,38,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
