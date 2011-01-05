/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.EditorInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace text { class InputType; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Bundle.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/InputType.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class EditorInfo;
	class EditorInfo
		: public object<EditorInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
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

		explicit EditorInfo(jobject jobj)
		: object<EditorInfo>(jobj)
		, inputType(jobj)
		, imeOptions(jobj)
		, privateImeOptions(jobj)
		, actionLabel(jobj)
		, actionId(jobj)
		, initialSelStart(jobj)
		, initialSelEnd(jobj)
		, initialCapsMode(jobj)
		, hintText(jobj)
		, label(jobj)
		, packageName(jobj)
		, fieldId(jobj)
		, fieldName(jobj)
		, extras(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::InputType>() const;
		operator local_ref<android::os::Parcelable>() const;


		EditorInfo();
		void dump(local_ref< android::util::Printer >  const&, local_ref< java::lang::String >  const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > inputType;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > IME_MASK_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > IME_ACTION_UNSPECIFIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > IME_ACTION_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > IME_ACTION_GO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > IME_ACTION_SEARCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > IME_ACTION_SEND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > IME_ACTION_NEXT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > IME_ACTION_DONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > IME_FLAG_NO_EXTRACT_UI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > IME_FLAG_NO_ACCESSORY_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > IME_FLAG_NO_ENTER_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > IME_NULL;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > imeOptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > privateImeOptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::CharSequence > > actionLabel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > actionId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > initialSelStart;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > initialSelEnd;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > initialCapsMode;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), local_ref< java::lang::CharSequence > > hintText;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), local_ref< java::lang::CharSequence > > label;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), local_ref< java::lang::String > > packageName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > fieldId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), local_ref< java::lang::String > > fieldName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), local_ref< android::os::Bundle > > extras;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class EditorInfo

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::EditorInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::inputmethod::EditorInfo::operator local_ref<android::text::InputType>() const
{
	return local_ref<android::text::InputType>(get_jobject());
}

android::view::inputmethod::EditorInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::view::inputmethod::EditorInfo::EditorInfo()
: object<android::view::inputmethod::EditorInfo>(
	call_new_object<
		android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, inputType(get_jobject())
, imeOptions(get_jobject())
, privateImeOptions(get_jobject())
, actionLabel(get_jobject())
, actionId(get_jobject())
, initialSelStart(get_jobject())
, initialSelEnd(get_jobject())
, initialCapsMode(get_jobject())
, hintText(get_jobject())
, label(get_jobject())
, packageName(get_jobject())
, fieldId(get_jobject())
, fieldName(get_jobject())
, extras(get_jobject())
{
}


void android::view::inputmethod::EditorInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

void android::view::inputmethod::EditorInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

jint android::view::inputmethod::EditorInfo::describeContents()
{
	return call_method<
		android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::EditorInfo::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}



static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(1),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::inputmethod::EditorInfo::IME_MASK_ACTION;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(2),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_UNSPECIFIED;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(3),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_NONE;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(4),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_GO;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(5),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_SEARCH;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(6),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_SEND;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(7),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_NEXT;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(8),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::view::inputmethod::EditorInfo::IME_ACTION_DONE;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(9),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::view::inputmethod::EditorInfo::IME_FLAG_NO_EXTRACT_UI;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(10),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::view::inputmethod::EditorInfo::IME_FLAG_NO_ACCESSORY_ACTION;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(11),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::view::inputmethod::EditorInfo::IME_FLAG_NO_ENTER_ACTION;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(12),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::view::inputmethod::EditorInfo::IME_NULL;

static_field<
	android::view::inputmethod::EditorInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_NAME(26),
	android::view::inputmethod::EditorInfo::J2CPP_FIELD_SIGNATURE(26),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::EditorInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::EditorInfo,"android/view/inputmethod/EditorInfo")
J2CPP_DEFINE_METHOD(android::view::inputmethod::EditorInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::EditorInfo,1,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::EditorInfo,2,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::EditorInfo,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::EditorInfo,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,0,"inputType","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,1,"IME_MASK_ACTION","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,2,"IME_ACTION_UNSPECIFIED","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,3,"IME_ACTION_NONE","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,4,"IME_ACTION_GO","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,5,"IME_ACTION_SEARCH","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,6,"IME_ACTION_SEND","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,7,"IME_ACTION_NEXT","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,8,"IME_ACTION_DONE","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,9,"IME_FLAG_NO_EXTRACT_UI","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,10,"IME_FLAG_NO_ACCESSORY_ACTION","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,11,"IME_FLAG_NO_ENTER_ACTION","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,12,"IME_NULL","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,13,"imeOptions","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,14,"privateImeOptions","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,15,"actionLabel","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,16,"actionId","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,17,"initialSelStart","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,18,"initialSelEnd","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,19,"initialCapsMode","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,20,"hintText","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,21,"label","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,22,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,23,"fieldId","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,24,"fieldName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,25,"extras","Landroid/os/Bundle;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::EditorInfo,26,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
