/*================================================================================
  code generated by: java2cpp
  class: android.app.NotificationManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Notification; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/app/Notification.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class NotificationManager;
	class NotificationManager
		: public cpp_object<NotificationManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		NotificationManager(jobject jobj)
		: cpp_object<NotificationManager>(jobj)
		{
		}

		void notify(cpp_int const&, local_ref< android::app::Notification > const&);
		void notify(local_ref< java::lang::String > const&, cpp_int const&, local_ref< android::app::Notification > const&);
		void cancel(cpp_int const&);
		void cancel(local_ref< java::lang::String > const&, cpp_int const&);
		void cancelAll();
	}; //class NotificationManager

} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::NotificationManager > create< android::app::NotificationManager>()
{
	return local_ref< android::app::NotificationManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::NotificationManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::NotificationManager::J2CPP_CLASS_NAME, android::app::NotificationManager::J2CPP_METHOD_NAME(0), android::app::NotificationManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::app::NotificationManager::notify(cpp_int const &a0, local_ref< android::app::Notification > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::app::NotificationManager::notify(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< android::app::Notification > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::app::NotificationManager::cancel(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::app::NotificationManager::cancel(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::app::NotificationManager::cancelAll()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::NotificationManager,"android/app/NotificationManager")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,1,"notify","(ILandroid/app/Notification;)V")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,2,"notify","(Ljava/lang/String;ILandroid/app/Notification;)V")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,3,"cancel","(I)V")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,4,"cancel","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::app::NotificationManager,5,"cancelAll","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NOTIFICATIONMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
