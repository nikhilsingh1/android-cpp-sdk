/*================================================================================
  code generated by: java2cpp
  class: android.app.backup.RestoreObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class RestoreObserver;
	class RestoreObserver
		: public cpp_object<RestoreObserver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		RestoreObserver(jobject jobj)
		: cpp_object<RestoreObserver>(jobj)
		{
		}

		void restoreStarting(cpp_int const&);
		void onUpdate(cpp_int const&, local_ref< java::lang::String > const&);
		void restoreFinished(cpp_int const&);
	}; //class RestoreObserver

} //namespace backup
} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::backup::RestoreObserver > create< android::app::backup::RestoreObserver>()
{
	return local_ref< android::app::backup::RestoreObserver >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::backup::RestoreObserver::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::backup::RestoreObserver::J2CPP_CLASS_NAME, android::app::backup::RestoreObserver::J2CPP_METHOD_NAME(0), android::app::backup::RestoreObserver::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::app::backup::RestoreObserver::restoreStarting(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::app::backup::RestoreObserver::onUpdate(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::app::backup::RestoreObserver::restoreFinished(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::backup::RestoreObserver,"android/app/backup/RestoreObserver")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,1,"restoreStarting","(I)V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,2,"onUpdate","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,3,"restoreFinished","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION