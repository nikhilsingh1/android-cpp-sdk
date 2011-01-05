/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.Service
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_SERVICE_HPP_DECL
#define J2CPP_ANDROID_APP_SERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class Notification; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }


#include <android/app/Application.hpp>
#include <android/app/Notification.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/content/res/Configuration.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class Service;
	class Service
		: public object<Service>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit Service(jobject jobj)
		: object<Service>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ContextWrapper>() const;


		Service();
		local_ref< android::app::Application > getApplication();
		void onCreate();
		void onStart(local_ref< android::content::Intent >  const&, jint);
		jint onStartCommand(local_ref< android::content::Intent >  const&, jint, jint);
		void onDestroy();
		void onConfigurationChanged(local_ref< android::content::res::Configuration >  const&);
		void onLowMemory();
		local_ref< android::os::IBinder > onBind(local_ref< android::content::Intent >  const&);
		jboolean onUnbind(local_ref< android::content::Intent >  const&);
		void onRebind(local_ref< android::content::Intent >  const&);
		void stopSelf();
		void stopSelf(jint);
		jboolean stopSelfResult(jint);
		void setForeground(jboolean);
		void startForeground(jint, local_ref< android::app::Notification >  const&);
		void stopForeground(jboolean);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > START_CONTINUATION_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > START_STICKY_COMPATIBILITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > START_STICKY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > START_NOT_STICKY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > START_REDELIVER_INTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > START_FLAG_REDELIVERY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > START_FLAG_RETRY;
	}; //class Service

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_SERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_SERVICE_HPP_IMPL
#define J2CPP_ANDROID_APP_SERVICE_HPP_IMPL

namespace j2cpp {



android::app::Service::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::Service::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::app::Service::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::app::Service::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::app::Service::Service()
: object<android::app::Service>(
	call_new_object<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(0),
		android::app::Service::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< android::app::Application > android::app::Service::getApplication()
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(1),
		android::app::Service::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::Application >
	>(get_jobject());
}

void android::app::Service::onCreate()
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(2),
		android::app::Service::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::app::Service::onStart(local_ref< android::content::Intent > const &a0, jint a1)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(3),
		android::app::Service::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jint android::app::Service::onStartCommand(local_ref< android::content::Intent > const &a0, jint a1, jint a2)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(4),
		android::app::Service::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2);
}

void android::app::Service::onDestroy()
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(5),
		android::app::Service::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void android::app::Service::onConfigurationChanged(local_ref< android::content::res::Configuration > const &a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(6),
		android::app::Service::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::app::Service::onLowMemory()
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(7),
		android::app::Service::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

local_ref< android::os::IBinder > android::app::Service::onBind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(8),
		android::app::Service::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::os::IBinder >
	>(get_jobject(), a0);
}

jboolean android::app::Service::onUnbind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(9),
		android::app::Service::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Service::onRebind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(10),
		android::app::Service::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::app::Service::stopSelf()
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(11),
		android::app::Service::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void android::app::Service::stopSelf(jint a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(12),
		android::app::Service::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::Service::stopSelfResult(jint a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(13),
		android::app::Service::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

void android::app::Service::setForeground(jboolean a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(14),
		android::app::Service::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::app::Service::startForeground(jint a0, local_ref< android::app::Notification > const &a1)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(15),
		android::app::Service::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::Service::stopForeground(jboolean a0)
{
	return call_method<
		android::app::Service::J2CPP_CLASS_NAME,
		android::app::Service::J2CPP_METHOD_NAME(16),
		android::app::Service::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}




static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(0),
	android::app::Service::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::app::Service::START_CONTINUATION_MASK;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(1),
	android::app::Service::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::app::Service::START_STICKY_COMPATIBILITY;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(2),
	android::app::Service::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::app::Service::START_STICKY;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(3),
	android::app::Service::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::app::Service::START_NOT_STICKY;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(4),
	android::app::Service::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::app::Service::START_REDELIVER_INTENT;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(5),
	android::app::Service::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::app::Service::START_FLAG_REDELIVERY;

static_field<
	android::app::Service::J2CPP_CLASS_NAME,
	android::app::Service::J2CPP_FIELD_NAME(6),
	android::app::Service::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::app::Service::START_FLAG_RETRY;


J2CPP_DEFINE_CLASS(android::app::Service,"android/app/Service")
J2CPP_DEFINE_METHOD(android::app::Service,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::Service,1,"getApplication","()Landroid/app/Application;")
J2CPP_DEFINE_METHOD(android::app::Service,2,"onCreate","()V")
J2CPP_DEFINE_METHOD(android::app::Service,3,"onStart","(Landroid/content/Intent;I)V")
J2CPP_DEFINE_METHOD(android::app::Service,4,"onStartCommand","(Landroid/content/Intent;II)I")
J2CPP_DEFINE_METHOD(android::app::Service,5,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::Service,6,"onConfigurationChanged","(Landroid/content/res/Configuration;)V")
J2CPP_DEFINE_METHOD(android::app::Service,7,"onLowMemory","()V")
J2CPP_DEFINE_METHOD(android::app::Service,8,"onBind","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::app::Service,9,"onUnbind","(Landroid/content/Intent;)Z")
J2CPP_DEFINE_METHOD(android::app::Service,10,"onRebind","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::app::Service,11,"stopSelf","()V")
J2CPP_DEFINE_METHOD(android::app::Service,12,"stopSelf","(I)V")
J2CPP_DEFINE_METHOD(android::app::Service,13,"stopSelfResult","(I)Z")
J2CPP_DEFINE_METHOD(android::app::Service,14,"setForeground","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Service,15,"startForeground","(ILandroid/app/Notification;)V")
J2CPP_DEFINE_METHOD(android::app::Service,16,"stopForeground","(Z)V")
J2CPP_DEFINE_METHOD(android::app::Service,17,"dump","(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::app::Service,18,"finalize","()V")
J2CPP_DEFINE_FIELD(android::app::Service,0,"START_CONTINUATION_MASK","I")
J2CPP_DEFINE_FIELD(android::app::Service,1,"START_STICKY_COMPATIBILITY","I")
J2CPP_DEFINE_FIELD(android::app::Service,2,"START_STICKY","I")
J2CPP_DEFINE_FIELD(android::app::Service,3,"START_NOT_STICKY","I")
J2CPP_DEFINE_FIELD(android::app::Service,4,"START_REDELIVER_INTENT","I")
J2CPP_DEFINE_FIELD(android::app::Service,5,"START_FLAG_REDELIVERY","I")
J2CPP_DEFINE_FIELD(android::app::Service,6,"START_FLAG_RETRY","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_SERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
