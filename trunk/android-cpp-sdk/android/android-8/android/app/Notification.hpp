/*================================================================================
  code generated by: java2cpp
  class: android.app.Notification
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NOTIFICATION_HPP_DECL
#define J2CPP_ANDROID_APP_NOTIFICATION_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace app { class PendingIntent; } } }
namespace j2cpp { namespace android { namespace widget { class RemoteViews; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/app/PendingIntent.hpp>
#include <android/content/Context.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/widget/RemoteViews.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class Notification;
	class Notification
		: public cpp_object<Notification>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)

		Notification(jobject jobj)
		: cpp_object<Notification>(jobj)
		, when(jobj)
		, icon(jobj)
		, number(jobj)
		, contentIntent(jobj)
		, deleteIntent(jobj)
		, tickerText(jobj)
		, contentView(jobj)
		, iconLevel(jobj)
		, sound(jobj)
		, audioStreamType(jobj)
		, vibrate(jobj)
		, ledARGB(jobj)
		, ledOnMS(jobj)
		, ledOffMS(jobj)
		, defaults(jobj)
		, flags(jobj)
		{
		}

		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		void setLatestEventInfo(local_ref< android::content::Context > const&, local_ref< java::lang::CharSequence > const&, local_ref< java::lang::CharSequence > const&, local_ref< android::app::PendingIntent > const&);
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > DEFAULT_SOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > DEFAULT_VIBRATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > DEFAULT_LIGHTS;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_long > when;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > icon;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > number;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::app::PendingIntent > > contentIntent;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::app::PendingIntent > > deleteIntent;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::CharSequence > > tickerText;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< android::widget::RemoteViews > > contentView;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > iconLevel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< android::net::Uri > > sound;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > STREAM_DEFAULT;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > audioStreamType;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< cpp_long_array<1> > > vibrate;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > ledARGB;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > ledOnMS;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > ledOffMS;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > defaults;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), cpp_int > FLAG_SHOW_LIGHTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), cpp_int > FLAG_ONGOING_EVENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), cpp_int > FLAG_INSISTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), cpp_int > FLAG_ONLY_ALERT_ONCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), cpp_int > FLAG_AUTO_CANCEL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), cpp_int > FLAG_NO_CLEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), cpp_int > FLAG_FOREGROUND_SERVICE;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), cpp_int > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Notification

} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NOTIFICATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NOTIFICATION_HPP_IMPL
#define J2CPP_ANDROID_APP_NOTIFICATION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::Notification > create< android::app::Notification>()
{
	return local_ref< android::app::Notification >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::Notification::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::Notification::J2CPP_CLASS_NAME, android::app::Notification::J2CPP_METHOD_NAME(0), android::app::Notification::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::app::Notification > create< android::app::Notification>(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_long const &a2)
{
	return local_ref< android::app::Notification >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::Notification::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::Notification::J2CPP_CLASS_NAME, android::app::Notification::J2CPP_METHOD_NAME(1), android::app::Notification::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::app::Notification > create< android::app::Notification>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::app::Notification >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::Notification::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::Notification::J2CPP_CLASS_NAME, android::app::Notification::J2CPP_METHOD_NAME(2), android::app::Notification::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::app::Notification::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::app::Notification::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::app::Notification::setLatestEventInfo(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< java::lang::CharSequence > const &a2, local_ref< android::app::PendingIntent > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::app::Notification::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(0),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::app::Notification::DEFAULT_ALL;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(1),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::app::Notification::DEFAULT_SOUND;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(2),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::app::Notification::DEFAULT_VIBRATE;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(3),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::app::Notification::DEFAULT_LIGHTS;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(13),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::app::Notification::STREAM_DEFAULT;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(20),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(20),
	cpp_int
> android::app::Notification::FLAG_SHOW_LIGHTS;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(21),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(21),
	cpp_int
> android::app::Notification::FLAG_ONGOING_EVENT;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(22),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(22),
	cpp_int
> android::app::Notification::FLAG_INSISTENT;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(23),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(23),
	cpp_int
> android::app::Notification::FLAG_ONLY_ALERT_ONCE;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(24),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(24),
	cpp_int
> android::app::Notification::FLAG_AUTO_CANCEL;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(25),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(25),
	cpp_int
> android::app::Notification::FLAG_NO_CLEAR;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(26),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(26),
	cpp_int
> android::app::Notification::FLAG_FOREGROUND_SERVICE;

static_field<
	android::app::Notification::J2CPP_CLASS_NAME,
	android::app::Notification::J2CPP_FIELD_NAME(28),
	android::app::Notification::J2CPP_FIELD_SIGNATURE(28),
	local_ref< android::os::Parcelable_::Creator >
> android::app::Notification::CREATOR;


J2CPP_DEFINE_CLASS(android::app::Notification,"android/app/Notification")
J2CPP_DEFINE_METHOD(android::app::Notification,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::Notification,1,"<init>","(ILjava/lang/CharSequence;J)V")
J2CPP_DEFINE_METHOD(android::app::Notification,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::app::Notification,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::app::Notification,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::app::Notification,5,"setLatestEventInfo","(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::app::Notification,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::Notification,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::app::Notification,0,"DEFAULT_ALL","I")
J2CPP_DEFINE_FIELD(android::app::Notification,1,"DEFAULT_SOUND","I")
J2CPP_DEFINE_FIELD(android::app::Notification,2,"DEFAULT_VIBRATE","I")
J2CPP_DEFINE_FIELD(android::app::Notification,3,"DEFAULT_LIGHTS","I")
J2CPP_DEFINE_FIELD(android::app::Notification,4,"when","J")
J2CPP_DEFINE_FIELD(android::app::Notification,5,"icon","I")
J2CPP_DEFINE_FIELD(android::app::Notification,6,"number","I")
J2CPP_DEFINE_FIELD(android::app::Notification,7,"contentIntent","Landroid/app/PendingIntent;")
J2CPP_DEFINE_FIELD(android::app::Notification,8,"deleteIntent","Landroid/app/PendingIntent;")
J2CPP_DEFINE_FIELD(android::app::Notification,9,"tickerText","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::app::Notification,10,"contentView","Landroid/widget/RemoteViews;")
J2CPP_DEFINE_FIELD(android::app::Notification,11,"iconLevel","I")
J2CPP_DEFINE_FIELD(android::app::Notification,12,"sound","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::app::Notification,13,"STREAM_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::app::Notification,14,"audioStreamType","I")
J2CPP_DEFINE_FIELD(android::app::Notification,15,"vibrate","[J")
J2CPP_DEFINE_FIELD(android::app::Notification,16,"ledARGB","I")
J2CPP_DEFINE_FIELD(android::app::Notification,17,"ledOnMS","I")
J2CPP_DEFINE_FIELD(android::app::Notification,18,"ledOffMS","I")
J2CPP_DEFINE_FIELD(android::app::Notification,19,"defaults","I")
J2CPP_DEFINE_FIELD(android::app::Notification,20,"FLAG_SHOW_LIGHTS","I")
J2CPP_DEFINE_FIELD(android::app::Notification,21,"FLAG_ONGOING_EVENT","I")
J2CPP_DEFINE_FIELD(android::app::Notification,22,"FLAG_INSISTENT","I")
J2CPP_DEFINE_FIELD(android::app::Notification,23,"FLAG_ONLY_ALERT_ONCE","I")
J2CPP_DEFINE_FIELD(android::app::Notification,24,"FLAG_AUTO_CANCEL","I")
J2CPP_DEFINE_FIELD(android::app::Notification,25,"FLAG_NO_CLEAR","I")
J2CPP_DEFINE_FIELD(android::app::Notification,26,"FLAG_FOREGROUND_SERVICE","I")
J2CPP_DEFINE_FIELD(android::app::Notification,27,"flags","I")
J2CPP_DEFINE_FIELD(android::app::Notification,28,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NOTIFICATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
