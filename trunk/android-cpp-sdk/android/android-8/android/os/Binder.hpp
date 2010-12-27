/*================================================================================
  code generated by: java2cpp
  class: android.os.Binder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BINDER_HPP_DECL
#define J2CPP_ANDROID_OS_BINDER_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace IBinder_ { class DeathRecipient; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class IInterface; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }


#include <android/os/IBinder.hpp>
#include <android/os/IInterface.hpp>
#include <android/os/Parcel.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Binder;
	class Binder
		: public cpp_object<Binder>
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

		Binder(jobject jobj)
		: cpp_object<Binder>(jobj)
		{
		}

		static cpp_int getCallingPid();
		static cpp_int getCallingUid();
		static cpp_long clearCallingIdentity();
		static void restoreCallingIdentity(cpp_long const&);
		static void flushPendingCommands();
		static void joinThreadPool();
		void attachInterface(local_ref< android::os::IInterface > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getInterfaceDescriptor();
		cpp_boolean pingBinder();
		cpp_boolean isBinderAlive();
		local_ref< android::os::IInterface > queryLocalInterface(local_ref< java::lang::String > const&);
		void dump(local_ref< java::io::FileDescriptor > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		cpp_boolean transact(cpp_int const&, local_ref< android::os::Parcel > const&, local_ref< android::os::Parcel > const&, cpp_int const&);
		void linkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const&, cpp_int const&);
		cpp_boolean unlinkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const&, cpp_int const&);
	}; //class Binder

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BINDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BINDER_HPP_IMPL
#define J2CPP_ANDROID_OS_BINDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::Binder > create< android::os::Binder>()
{
	return local_ref< android::os::Binder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Binder::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Binder::J2CPP_CLASS_NAME, android::os::Binder::J2CPP_METHOD_NAME(0), android::os::Binder::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::os::Binder::getCallingPid()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_int android::os::Binder::getCallingUid()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_long android::os::Binder::clearCallingIdentity()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

void android::os::Binder::restoreCallingIdentity(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

void android::os::Binder::flushPendingCommands()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

void android::os::Binder::joinThreadPool()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

void android::os::Binder::attachInterface(local_ref< android::os::IInterface > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::os::Binder::getInterfaceDescriptor()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean android::os::Binder::pingBinder()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean android::os::Binder::isBinderAlive()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< android::os::IInterface > android::os::Binder::queryLocalInterface(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::os::IInterface >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}


void android::os::Binder::dump(local_ref< java::io::FileDescriptor > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


cpp_boolean android::os::Binder::transact(cpp_int const &a0, local_ref< android::os::Parcel > const &a1, local_ref< android::os::Parcel > const &a2, cpp_int const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::os::Binder::linkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::os::Binder::unlinkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::os::Binder,"android/os/Binder")
J2CPP_DEFINE_METHOD(android::os::Binder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Binder,1,"getCallingPid","()I")
J2CPP_DEFINE_METHOD(android::os::Binder,2,"getCallingUid","()I")
J2CPP_DEFINE_METHOD(android::os::Binder,3,"clearCallingIdentity","()J")
J2CPP_DEFINE_METHOD(android::os::Binder,4,"restoreCallingIdentity","(J)V")
J2CPP_DEFINE_METHOD(android::os::Binder,5,"flushPendingCommands","()V")
J2CPP_DEFINE_METHOD(android::os::Binder,6,"joinThreadPool","()V")
J2CPP_DEFINE_METHOD(android::os::Binder,7,"attachInterface","(Landroid/os/IInterface;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Binder,8,"getInterfaceDescriptor","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::Binder,9,"pingBinder","()Z")
J2CPP_DEFINE_METHOD(android::os::Binder,10,"isBinderAlive","()Z")
J2CPP_DEFINE_METHOD(android::os::Binder,11,"queryLocalInterface","(Ljava/lang/String;)Landroid/os/IInterface;")
J2CPP_DEFINE_METHOD(android::os::Binder,12,"onTransact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z")
J2CPP_DEFINE_METHOD(android::os::Binder,13,"dump","(Ljava/io/FileDescriptor;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::os::Binder,14,"dump","(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::os::Binder,15,"transact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z")
J2CPP_DEFINE_METHOD(android::os::Binder,16,"linkToDeath","(Landroid/os/IBinder$DeathRecipient;I)V")
J2CPP_DEFINE_METHOD(android::os::Binder,17,"unlinkToDeath","(Landroid/os/IBinder$DeathRecipient;I)Z")
J2CPP_DEFINE_METHOD(android::os::Binder,18,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BINDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
