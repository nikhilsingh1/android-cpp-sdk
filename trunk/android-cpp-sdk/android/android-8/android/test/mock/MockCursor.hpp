/*================================================================================
  code generated by: java2cpp
  class: android.test.mock.MockCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockCursor;
	class MockCursor
		: public cpp_object<MockCursor>
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
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)

		MockCursor(jobject jobj)
		: cpp_object<MockCursor>(jobj)
		{
		}

		cpp_int getColumnCount();
		cpp_int getColumnIndex(local_ref< java::lang::String > const&);
		cpp_int getColumnIndexOrThrow(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getColumnName(cpp_int const&);
		local_ref< cpp_object_array<java::lang::String, 1> > getColumnNames();
		cpp_int getCount();
		cpp_boolean isNull(cpp_int const&);
		cpp_int getInt(cpp_int const&);
		cpp_long getLong(cpp_int const&);
		cpp_short getShort(cpp_int const&);
		cpp_float getFloat(cpp_int const&);
		cpp_double getDouble(cpp_int const&);
		local_ref< cpp_byte_array<1> > getBlob(cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&);
		local_ref< android::os::Bundle > getExtras();
		cpp_int getPosition();
		cpp_boolean isAfterLast();
		cpp_boolean isBeforeFirst();
		cpp_boolean isFirst();
		cpp_boolean isLast();
		cpp_boolean move(cpp_int const&);
		cpp_boolean moveToFirst();
		cpp_boolean moveToLast();
		cpp_boolean moveToNext();
		cpp_boolean moveToPrevious();
		cpp_boolean moveToPosition(cpp_int const&);
		void copyStringToBuffer(cpp_int const&, local_ref< android::database::CharArrayBuffer > const&);
		void deactivate();
		void close();
		cpp_boolean isClosed();
		cpp_boolean requery();
		void registerContentObserver(local_ref< android::database::ContentObserver > const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle > const&);
		cpp_boolean getWantsAllOnMoveCalls();
		cpp_boolean commitUpdates();
		cpp_boolean commitUpdates(local_ref< java::util::Map > const&);
		cpp_boolean hasUpdates();
		void setNotificationUri(local_ref< android::content::ContentResolver > const&, local_ref< android::net::Uri > const&);
		cpp_boolean supportsUpdates();
		cpp_boolean deleteRow();
		void unregisterContentObserver(local_ref< android::database::ContentObserver > const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		cpp_boolean updateBlob(cpp_int const&, local_ref< cpp_byte_array<1> > const&);
		cpp_boolean updateDouble(cpp_int const&, cpp_double const&);
		cpp_boolean updateFloat(cpp_int const&, cpp_float const&);
		cpp_boolean updateInt(cpp_int const&, cpp_int const&);
		cpp_boolean updateLong(cpp_int const&, cpp_long const&);
		cpp_boolean updateShort(cpp_int const&, cpp_short const&);
		cpp_boolean updateString(cpp_int const&, local_ref< java::lang::String > const&);
		cpp_boolean updateToNull(cpp_int const&);
		void abortUpdates();
	}; //class MockCursor

} //namespace mock
} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::mock::MockCursor > create< android::test::mock::MockCursor>()
{
	return local_ref< android::test::mock::MockCursor >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::mock::MockCursor::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::mock::MockCursor::J2CPP_CLASS_NAME, android::test::mock::MockCursor::J2CPP_METHOD_NAME(0), android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::test::mock::MockCursor::getColumnCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::test::mock::MockCursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::test::mock::MockCursor::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::test::mock::MockCursor::getColumnName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > android::test::mock::MockCursor::getColumnNames()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::test::mock::MockCursor::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::test::mock::MockCursor::getInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::test::mock::MockCursor::getLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short android::test::mock::MockCursor::getShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::test::mock::MockCursor::getFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double android::test::mock::MockCursor::getDouble(cpp_int const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > android::test::mock::MockCursor::getBlob(cpp_int const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::test::mock::MockCursor::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::test::mock::MockCursor::getExtras()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int android::test::mock::MockCursor::getPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isAfterLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isBeforeFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::move(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::moveToFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::moveToLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::moveToNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::moveToPrevious()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::moveToPosition(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::mock::MockCursor::copyStringToBuffer(cpp_int const &a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::mock::MockCursor::deactivate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::test::mock::MockCursor::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::isClosed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::requery()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

void android::test::mock::MockCursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::mock::MockCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::test::mock::MockCursor::respond(local_ref< android::os::Bundle > const &a0)
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::getWantsAllOnMoveCalls()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::commitUpdates()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::commitUpdates(local_ref< java::util::Map > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::hasUpdates()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

void android::test::mock::MockCursor::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::supportsUpdates()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::deleteRow()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

void android::test::mock::MockCursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::mock::MockCursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateBlob(cpp_int const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateDouble(cpp_int const &a0, cpp_double const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateFloat(cpp_int const &a0, cpp_float const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateInt(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateLong(cpp_int const &a0, cpp_long const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateShort(cpp_int const &a0, cpp_short const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateString(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::test::mock::MockCursor::updateToNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::mock::MockCursor::abortUpdates()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::mock::MockCursor,"android/test/mock/MockCursor")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,1,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,2,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,3,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,4,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,5,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,6,"getCount","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,7,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,8,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,9,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,10,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,11,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,12,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,13,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,14,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,15,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,16,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,17,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,18,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,19,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,20,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,21,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,22,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,23,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,24,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,25,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,26,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,27,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,28,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,29,"close","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,30,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,31,"requery","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,32,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,33,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,34,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,35,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,36,"commitUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,37,"commitUpdates","(Ljava/util/Map;)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,38,"hasUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,39,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,40,"supportsUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,41,"deleteRow","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,42,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,43,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,44,"updateBlob","(I[B)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,45,"updateDouble","(ID)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,46,"updateFloat","(IF)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,47,"updateInt","(II)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,48,"updateLong","(IJ)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,49,"updateShort","(IS)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,50,"updateString","(ILjava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,51,"updateToNull","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,52,"abortUpdates","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
