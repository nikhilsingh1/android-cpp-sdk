/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.ParcelFileDescriptor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_DECL
#define J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class FileInputStream; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class FileOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/Socket.hpp>


namespace j2cpp {

namespace android { namespace os {

	class ParcelFileDescriptor;
	namespace ParcelFileDescriptor_ {

		class AutoCloseOutputStream;
		class AutoCloseOutputStream
			: public object<AutoCloseOutputStream>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit AutoCloseOutputStream(jobject jobj)
			: object<AutoCloseOutputStream>(jobj)
			{
			}

			operator local_ref<java::io::Closeable>() const;
			operator local_ref<java::io::Flushable>() const;
			operator local_ref<java::io::FileOutputStream>() const;
			operator local_ref<java::io::OutputStream>() const;
			operator local_ref<java::lang::Object>() const;


			AutoCloseOutputStream(local_ref< android::os::ParcelFileDescriptor > const&);
			void close();
		}; //class AutoCloseOutputStream

		class AutoCloseInputStream;
		class AutoCloseInputStream
			: public object<AutoCloseInputStream>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit AutoCloseInputStream(jobject jobj)
			: object<AutoCloseInputStream>(jobj)
			{
			}

			operator local_ref<java::io::InputStream>() const;
			operator local_ref<java::io::Closeable>() const;
			operator local_ref<java::io::FileInputStream>() const;
			operator local_ref<java::lang::Object>() const;


			AutoCloseInputStream(local_ref< android::os::ParcelFileDescriptor > const&);
			void close();
		}; //class AutoCloseInputStream

	} //namespace ParcelFileDescriptor_

	class ParcelFileDescriptor
		: public object<ParcelFileDescriptor>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		typedef ParcelFileDescriptor_::AutoCloseOutputStream AutoCloseOutputStream;
		typedef ParcelFileDescriptor_::AutoCloseInputStream AutoCloseInputStream;

		explicit ParcelFileDescriptor(jobject jobj)
		: object<ParcelFileDescriptor>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		ParcelFileDescriptor(local_ref< android::os::ParcelFileDescriptor > const&);
		static local_ref< android::os::ParcelFileDescriptor > open(local_ref< java::io::File >  const&, jint);
		static local_ref< android::os::ParcelFileDescriptor > fromSocket(local_ref< java::net::Socket >  const&);
		local_ref< java::io::FileDescriptor > getFileDescriptor();
		jlong getStatSize();
		void close();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > MODE_WORLD_READABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MODE_WORLD_WRITEABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > MODE_READ_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MODE_WRITE_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > MODE_READ_WRITE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > MODE_CREATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > MODE_TRUNCATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MODE_APPEND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ParcelFileDescriptor

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_IMPL
#define J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_IMPL

namespace j2cpp {




android::os::ParcelFileDescriptor_::AutoCloseOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseOutputStream::operator local_ref<java::io::FileOutputStream>() const
{
	return local_ref<java::io::FileOutputStream>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::ParcelFileDescriptor_::AutoCloseOutputStream::AutoCloseOutputStream(local_ref< android::os::ParcelFileDescriptor > const &a0)
: object<android::os::ParcelFileDescriptor_::AutoCloseOutputStream>(
	call_new_object<
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_NAME(0),
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void android::os::ParcelFileDescriptor_::AutoCloseOutputStream::close()
{
	return call_method<
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_NAME(1),
		android::os::ParcelFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::ParcelFileDescriptor_::AutoCloseOutputStream,"android/os/ParcelFileDescriptor$AutoCloseOutputStream")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor_::AutoCloseOutputStream,0,"<init>","(Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor_::AutoCloseOutputStream,1,"close","()V")


android::os::ParcelFileDescriptor_::AutoCloseInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseInputStream::operator local_ref<java::io::FileInputStream>() const
{
	return local_ref<java::io::FileInputStream>(get_jobject());
}

android::os::ParcelFileDescriptor_::AutoCloseInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::ParcelFileDescriptor_::AutoCloseInputStream::AutoCloseInputStream(local_ref< android::os::ParcelFileDescriptor > const &a0)
: object<android::os::ParcelFileDescriptor_::AutoCloseInputStream>(
	call_new_object<
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_NAME(0),
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void android::os::ParcelFileDescriptor_::AutoCloseInputStream::close()
{
	return call_method<
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_NAME(1),
		android::os::ParcelFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::ParcelFileDescriptor_::AutoCloseInputStream,"android/os/ParcelFileDescriptor$AutoCloseInputStream")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor_::AutoCloseInputStream,0,"<init>","(Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor_::AutoCloseInputStream,1,"close","()V")



android::os::ParcelFileDescriptor::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::os::ParcelFileDescriptor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::ParcelFileDescriptor::ParcelFileDescriptor(local_ref< android::os::ParcelFileDescriptor > const &a0)
: object<android::os::ParcelFileDescriptor>(
	call_new_object<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(0),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::os::ParcelFileDescriptor > android::os::ParcelFileDescriptor::open(local_ref< java::io::File > const &a0, jint a1)
{
	return call_static_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(1),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::ParcelFileDescriptor >
	>(a0, a1);
}

local_ref< android::os::ParcelFileDescriptor > android::os::ParcelFileDescriptor::fromSocket(local_ref< java::net::Socket > const &a0)
{
	return call_static_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(2),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::ParcelFileDescriptor >
	>(a0);
}

local_ref< java::io::FileDescriptor > android::os::ParcelFileDescriptor::getFileDescriptor()
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(3),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::FileDescriptor >
	>(get_jobject());
}

jlong android::os::ParcelFileDescriptor::getStatSize()
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(4),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(get_jobject());
}

void android::os::ParcelFileDescriptor::close()
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(5),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::lang::String > android::os::ParcelFileDescriptor::toString()
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(6),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}


jint android::os::ParcelFileDescriptor::describeContents()
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(8),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

void android::os::ParcelFileDescriptor::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
		android::os::ParcelFileDescriptor::J2CPP_METHOD_NAME(9),
		android::os::ParcelFileDescriptor::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(0),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::ParcelFileDescriptor::MODE_WORLD_READABLE;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(1),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::ParcelFileDescriptor::MODE_WORLD_WRITEABLE;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(2),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::os::ParcelFileDescriptor::MODE_READ_ONLY;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(3),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::os::ParcelFileDescriptor::MODE_WRITE_ONLY;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(4),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::os::ParcelFileDescriptor::MODE_READ_WRITE;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(5),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::os::ParcelFileDescriptor::MODE_CREATE;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(6),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::os::ParcelFileDescriptor::MODE_TRUNCATE;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(7),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::os::ParcelFileDescriptor::MODE_APPEND;

static_field<
	android::os::ParcelFileDescriptor::J2CPP_CLASS_NAME,
	android::os::ParcelFileDescriptor::J2CPP_FIELD_NAME(8),
	android::os::ParcelFileDescriptor::J2CPP_FIELD_SIGNATURE(8),
	local_ref< android::os::Parcelable_::Creator >
> android::os::ParcelFileDescriptor::CREATOR;


J2CPP_DEFINE_CLASS(android::os::ParcelFileDescriptor,"android/os/ParcelFileDescriptor")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,0,"<init>","(Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,1,"open","(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,2,"fromSocket","(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,3,"getFileDescriptor","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,4,"getStatSize","()J")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,5,"close","()V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,7,"finalize","()V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,8,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,9,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::ParcelFileDescriptor,10,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,0,"MODE_WORLD_READABLE","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,1,"MODE_WORLD_WRITEABLE","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,2,"MODE_READ_ONLY","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,3,"MODE_WRITE_ONLY","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,4,"MODE_READ_WRITE","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,5,"MODE_CREATE","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,6,"MODE_TRUNCATE","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,7,"MODE_APPEND","I")
J2CPP_DEFINE_FIELD(android::os::ParcelFileDescriptor,8,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELFILEDESCRIPTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
