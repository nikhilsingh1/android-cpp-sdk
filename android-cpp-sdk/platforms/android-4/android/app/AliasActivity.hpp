/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.AliasActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace view { class ContextThemeWrapper; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }


#include <android/app/Activity.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/view/ContextThemeWrapper.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class AliasActivity;
	class AliasActivity
		: public object<AliasActivity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit AliasActivity(jobject jobj)
		: object<AliasActivity>(jobj)
		{
		}

		operator local_ref<android::view::LayoutInflater_::Factory>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::view::ContextThemeWrapper>() const;
		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::Activity>() const;


		AliasActivity();
	}; //class AliasActivity

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_IMPL

namespace j2cpp {



android::app::AliasActivity::operator local_ref<android::view::LayoutInflater_::Factory>() const
{
	return local_ref<android::view::LayoutInflater_::Factory>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::view::ContextThemeWrapper>() const
{
	return local_ref<android::view::ContextThemeWrapper>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::app::AliasActivity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::AliasActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}


android::app::AliasActivity::AliasActivity()
: object<android::app::AliasActivity>(
	call_new_object<
		android::app::AliasActivity::J2CPP_CLASS_NAME,
		android::app::AliasActivity::J2CPP_METHOD_NAME(0),
		android::app::AliasActivity::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}




J2CPP_DEFINE_CLASS(android::app::AliasActivity,"android/app/AliasActivity")
J2CPP_DEFINE_METHOD(android::app::AliasActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::AliasActivity,1,"onCreate","(Landroid/os/Bundle;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ALIASACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
