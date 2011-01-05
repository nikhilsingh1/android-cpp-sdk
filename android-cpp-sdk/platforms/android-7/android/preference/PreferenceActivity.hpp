/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.PreferenceActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace app { class ListActivity; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace view { class ContextThemeWrapper; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceManager; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceScreen; } } }


#include <android/app/Activity.hpp>
#include <android/app/ListActivity.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceManager.hpp>
#include <android/preference/PreferenceScreen.hpp>
#include <android/view/ContextThemeWrapper.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class PreferenceActivity;
	class PreferenceActivity
		: public object<PreferenceActivity>
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

		explicit PreferenceActivity(jobject jobj)
		: object<PreferenceActivity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::ListActivity>() const;
		operator local_ref<android::app::Activity>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::view::LayoutInflater_::Factory>() const;
		operator local_ref<android::view::ContextThemeWrapper>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;


		PreferenceActivity();
		void onContentChanged();
		local_ref< android::preference::PreferenceManager > getPreferenceManager();
		void setPreferenceScreen(local_ref< android::preference::PreferenceScreen >  const&);
		local_ref< android::preference::PreferenceScreen > getPreferenceScreen();
		void addPreferencesFromIntent(local_ref< android::content::Intent >  const&);
		void addPreferencesFromResource(jint);
		jboolean onPreferenceTreeClick(local_ref< android::preference::PreferenceScreen >  const&, local_ref< android::preference::Preference >  const&);
		local_ref< android::preference::Preference > findPreference(local_ref< java::lang::CharSequence >  const&);
	}; //class PreferenceActivity

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_IMPL

namespace j2cpp {



android::preference::PreferenceActivity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::app::ListActivity>() const
{
	return local_ref<android::app::ListActivity>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::view::LayoutInflater_::Factory>() const
{
	return local_ref<android::view::LayoutInflater_::Factory>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::view::ContextThemeWrapper>() const
{
	return local_ref<android::view::ContextThemeWrapper>(get_jobject());
}

android::preference::PreferenceActivity::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}


android::preference::PreferenceActivity::PreferenceActivity()
: object<android::preference::PreferenceActivity>(
	call_new_object<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(0),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}








void android::preference::PreferenceActivity::onContentChanged()
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(7),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

local_ref< android::preference::PreferenceManager > android::preference::PreferenceActivity::getPreferenceManager()
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(8),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::preference::PreferenceManager >
	>(get_jobject());
}

void android::preference::PreferenceActivity::setPreferenceScreen(local_ref< android::preference::PreferenceScreen > const &a0)
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(9),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

local_ref< android::preference::PreferenceScreen > android::preference::PreferenceActivity::getPreferenceScreen()
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(10),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::preference::PreferenceScreen >
	>(get_jobject());
}

void android::preference::PreferenceActivity::addPreferencesFromIntent(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(11),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::preference::PreferenceActivity::addPreferencesFromResource(jint a0)
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(12),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

jboolean android::preference::PreferenceActivity::onPreferenceTreeClick(local_ref< android::preference::PreferenceScreen > const &a0, local_ref< android::preference::Preference > const &a1)
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(13),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< android::preference::Preference > android::preference::PreferenceActivity::findPreference(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::PreferenceActivity::J2CPP_CLASS_NAME,
		android::preference::PreferenceActivity::J2CPP_METHOD_NAME(14),
		android::preference::PreferenceActivity::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::preference::Preference >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::preference::PreferenceActivity,"android/preference/PreferenceActivity")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,2,"onStop","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,3,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,4,"onSaveInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,5,"onRestoreInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,6,"onActivityResult","(IILandroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,7,"onContentChanged","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,8,"getPreferenceManager","()Landroid/preference/PreferenceManager;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,9,"setPreferenceScreen","(Landroid/preference/PreferenceScreen;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,10,"getPreferenceScreen","()Landroid/preference/PreferenceScreen;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,11,"addPreferencesFromIntent","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,12,"addPreferencesFromResource","(I)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,13,"onPreferenceTreeClick","(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,14,"findPreference","(Ljava/lang/CharSequence;)Landroid/preference/Preference;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceActivity,15,"onNewIntent","(Landroid/content/Intent;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
