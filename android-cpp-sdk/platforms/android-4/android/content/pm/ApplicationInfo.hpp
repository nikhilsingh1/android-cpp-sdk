/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.ApplicationInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageItemInfo; } } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/pm/PackageItemInfo.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Comparator.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ApplicationInfo;
	namespace ApplicationInfo_ {

		class DisplayNameComparator;
		class DisplayNameComparator
			: public object<DisplayNameComparator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit DisplayNameComparator(jobject jobj)
			: object<DisplayNameComparator>(jobj)
			{
			}

			operator local_ref<java::util::Comparator>() const;
			operator local_ref<java::lang::Object>() const;


			DisplayNameComparator(local_ref< android::content::pm::PackageManager > const&);
			jint compare(local_ref< android::content::pm::ApplicationInfo >  const&, local_ref< android::content::pm::ApplicationInfo >  const&);
			jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		}; //class DisplayNameComparator

	} //namespace ApplicationInfo_

	class ApplicationInfo
		: public object<ApplicationInfo>
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
		J2CPP_DECLARE_FIELD(29)

		typedef ApplicationInfo_::DisplayNameComparator DisplayNameComparator;

		explicit ApplicationInfo(jobject jobj)
		: object<ApplicationInfo>(jobj)
		, taskAffinity(jobj)
		, permission(jobj)
		, processName(jobj)
		, className(jobj)
		, descriptionRes(jobj)
		, theme(jobj)
		, manageSpaceActivityName(jobj)
		, flags(jobj)
		, sourceDir(jobj)
		, publicSourceDir(jobj)
		, sharedLibraryFiles(jobj)
		, dataDir(jobj)
		, uid(jobj)
		, targetSdkVersion(jobj)
		, enabled(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::content::pm::PackageItemInfo>() const;
		operator local_ref<java::lang::Object>() const;


		ApplicationInfo();
		ApplicationInfo(local_ref< android::content::pm::ApplicationInfo > const&);
		void dump(local_ref< android::util::Printer >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::CharSequence > loadDescription(local_ref< android::content::pm::PackageManager >  const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > taskAffinity;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > permission;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > processName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > className;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > descriptionRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > theme;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > manageSpaceActivityName;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > FLAG_SYSTEM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > FLAG_DEBUGGABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > FLAG_HAS_CODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > FLAG_PERSISTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > FLAG_FACTORY_TEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > FLAG_ALLOW_TASK_REPARENTING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > FLAG_ALLOW_CLEAR_USER_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > FLAG_UPDATED_SYSTEM_APP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > FLAG_TEST_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > FLAG_SUPPORTS_SMALL_SCREENS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > FLAG_SUPPORTS_NORMAL_SCREENS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > FLAG_SUPPORTS_LARGE_SCREENS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > FLAG_RESIZEABLE_FOR_SCREENS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > FLAG_SUPPORTS_SCREEN_DENSITIES;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > flags;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), local_ref< java::lang::String > > sourceDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), local_ref< java::lang::String > > publicSourceDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), local_ref< array< local_ref< java::lang::String >, 1> > > sharedLibraryFiles;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), local_ref< java::lang::String > > dataDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > uid;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > targetSdkVersion;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jboolean > enabled;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ApplicationInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_IMPL

namespace j2cpp {




android::content::pm::ApplicationInfo_::DisplayNameComparator::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}

android::content::pm::ApplicationInfo_::DisplayNameComparator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::pm::ApplicationInfo_::DisplayNameComparator::DisplayNameComparator(local_ref< android::content::pm::PackageManager > const &a0)
: object<android::content::pm::ApplicationInfo_::DisplayNameComparator>(
	call_new_object<
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(0),
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint android::content::pm::ApplicationInfo_::DisplayNameComparator::compare(local_ref< android::content::pm::ApplicationInfo > const &a0, local_ref< android::content::pm::ApplicationInfo > const &a1)
{
	return call_method<
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(1),
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::content::pm::ApplicationInfo_::DisplayNameComparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(2),
		android::content::pm::ApplicationInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::content::pm::ApplicationInfo_::DisplayNameComparator,"android/content/pm/ApplicationInfo$DisplayNameComparator")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo_::DisplayNameComparator,0,"<init>","(Landroid/content/pm/PackageManager;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo_::DisplayNameComparator,1,"compare","(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo_::DisplayNameComparator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")



android::content::pm::ApplicationInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::pm::ApplicationInfo::operator local_ref<android::content::pm::PackageItemInfo>() const
{
	return local_ref<android::content::pm::PackageItemInfo>(get_jobject());
}

android::content::pm::ApplicationInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::pm::ApplicationInfo::ApplicationInfo()
: object<android::content::pm::ApplicationInfo>(
	call_new_object<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, taskAffinity(get_jobject())
, permission(get_jobject())
, processName(get_jobject())
, className(get_jobject())
, descriptionRes(get_jobject())
, theme(get_jobject())
, manageSpaceActivityName(get_jobject())
, flags(get_jobject())
, sourceDir(get_jobject())
, publicSourceDir(get_jobject())
, sharedLibraryFiles(get_jobject())
, dataDir(get_jobject())
, uid(get_jobject())
, targetSdkVersion(get_jobject())
, enabled(get_jobject())
{
}



android::content::pm::ApplicationInfo::ApplicationInfo(local_ref< android::content::pm::ApplicationInfo > const &a0)
: object<android::content::pm::ApplicationInfo>(
	call_new_object<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, taskAffinity(get_jobject())
, permission(get_jobject())
, processName(get_jobject())
, className(get_jobject())
, descriptionRes(get_jobject())
, theme(get_jobject())
, manageSpaceActivityName(get_jobject())
, flags(get_jobject())
, sourceDir(get_jobject())
, publicSourceDir(get_jobject())
, sharedLibraryFiles(get_jobject())
, dataDir(get_jobject())
, uid(get_jobject())
, targetSdkVersion(get_jobject())
, enabled(get_jobject())
{
}


void android::content::pm::ApplicationInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::pm::ApplicationInfo::toString()
{
	return call_method<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::content::pm::ApplicationInfo::describeContents()
{
	return call_method<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void android::content::pm::ApplicationInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(5),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::content::pm::ApplicationInfo::loadDescription(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
		android::content::pm::ApplicationInfo::J2CPP_METHOD_NAME(6),
		android::content::pm::ApplicationInfo::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}



static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(7),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::content::pm::ApplicationInfo::FLAG_SYSTEM;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(8),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::content::pm::ApplicationInfo::FLAG_DEBUGGABLE;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(9),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::content::pm::ApplicationInfo::FLAG_HAS_CODE;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(10),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::content::pm::ApplicationInfo::FLAG_PERSISTENT;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(11),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::content::pm::ApplicationInfo::FLAG_FACTORY_TEST;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(12),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::content::pm::ApplicationInfo::FLAG_ALLOW_TASK_REPARENTING;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(13),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::content::pm::ApplicationInfo::FLAG_ALLOW_CLEAR_USER_DATA;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(14),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::content::pm::ApplicationInfo::FLAG_UPDATED_SYSTEM_APP;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(15),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::content::pm::ApplicationInfo::FLAG_TEST_ONLY;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(16),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::content::pm::ApplicationInfo::FLAG_SUPPORTS_SMALL_SCREENS;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(17),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::content::pm::ApplicationInfo::FLAG_SUPPORTS_NORMAL_SCREENS;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(18),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::content::pm::ApplicationInfo::FLAG_SUPPORTS_LARGE_SCREENS;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(19),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::content::pm::ApplicationInfo::FLAG_RESIZEABLE_FOR_SCREENS;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(20),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::content::pm::ApplicationInfo::FLAG_SUPPORTS_SCREEN_DENSITIES;

static_field<
	android::content::pm::ApplicationInfo::J2CPP_CLASS_NAME,
	android::content::pm::ApplicationInfo::J2CPP_FIELD_NAME(29),
	android::content::pm::ApplicationInfo::J2CPP_FIELD_SIGNATURE(29),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::ApplicationInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::ApplicationInfo,"android/content/pm/ApplicationInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,1,"<init>","(Landroid/content/pm/ApplicationInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,2,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,6,"loadDescription","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::ApplicationInfo,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,0,"taskAffinity","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,1,"permission","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,2,"processName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,3,"className","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,4,"descriptionRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,5,"theme","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,6,"manageSpaceActivityName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,7,"FLAG_SYSTEM","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,8,"FLAG_DEBUGGABLE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,9,"FLAG_HAS_CODE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,10,"FLAG_PERSISTENT","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,11,"FLAG_FACTORY_TEST","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,12,"FLAG_ALLOW_TASK_REPARENTING","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,13,"FLAG_ALLOW_CLEAR_USER_DATA","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,14,"FLAG_UPDATED_SYSTEM_APP","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,15,"FLAG_TEST_ONLY","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,16,"FLAG_SUPPORTS_SMALL_SCREENS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,17,"FLAG_SUPPORTS_NORMAL_SCREENS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,18,"FLAG_SUPPORTS_LARGE_SCREENS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,19,"FLAG_RESIZEABLE_FOR_SCREENS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,20,"FLAG_SUPPORTS_SCREEN_DENSITIES","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,21,"flags","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,22,"sourceDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,23,"publicSourceDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,24,"sharedLibraryFiles","[java.lang.String")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,25,"dataDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,26,"uid","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,27,"targetSdkVersion","I")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,28,"enabled","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ApplicationInfo,29,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_APPLICATIONINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
