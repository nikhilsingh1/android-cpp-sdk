/*================================================================================
  code generated by: java2cpp
  class: android.database.MergeCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/DataSetObserver.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class MergeCursor;
	class MergeCursor
		: public cpp_object<MergeCursor>
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

		MergeCursor(jobject jobj)
		: cpp_object<MergeCursor>(jobj)
		{
		}

		cpp_int getCount();
		cpp_boolean onMove(cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&);
		cpp_short getShort(cpp_int const&);
		cpp_int getInt(cpp_int const&);
		cpp_long getLong(cpp_int const&);
		cpp_float getFloat(cpp_int const&);
		cpp_double getDouble(cpp_int const&);
		cpp_boolean isNull(cpp_int const&);
		local_ref< cpp_byte_array<1> > getBlob(cpp_int const&);
		local_ref< cpp_object_array<java::lang::String, 1> > getColumnNames();
		void deactivate();
		void close();
		void registerContentObserver(local_ref< android::database::ContentObserver > const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver > const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		cpp_boolean requery();
	}; //class MergeCursor

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::database::MergeCursor > create< android::database::MergeCursor>(local_ref< cpp_object_array<android::database::Cursor, 1> > const &a0)
{
	return local_ref< android::database::MergeCursor >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::MergeCursor::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::MergeCursor::J2CPP_CLASS_NAME, android::database::MergeCursor::J2CPP_METHOD_NAME(0), android::database::MergeCursor::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::MergeCursor::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::database::MergeCursor::onMove(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::database::MergeCursor::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short android::database::MergeCursor::getShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::MergeCursor::getInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::database::MergeCursor::getLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::database::MergeCursor::getFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double android::database::MergeCursor::getDouble(cpp_int const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::MergeCursor::isNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > android::database::MergeCursor::getBlob(cpp_int const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > android::database::MergeCursor::getColumnNames()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::database::MergeCursor::deactivate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::database::MergeCursor::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::database::MergeCursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::MergeCursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::MergeCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::MergeCursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::MergeCursor::requery()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::MergeCursor,"android/database/MergeCursor")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,0,"<init>","([android.database.Cursor)V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,1,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,2,"onMove","(II)Z")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,3,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,4,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,5,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,6,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,7,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,8,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,9,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,10,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,11,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,12,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,13,"close","()V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,14,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,15,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,16,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,17,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::MergeCursor,18,"requery","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_MERGECURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
