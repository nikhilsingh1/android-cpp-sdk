/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.util.Rfc822Tokenizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { namespace MultiAutoCompleteTextView_ { class Tokenizer; } } } }
namespace j2cpp { namespace android { namespace text { namespace util { class Rfc822Token; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/util/Rfc822Token.hpp>
#include <android/widget/MultiAutoCompleteTextView.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace util {

	class Rfc822Tokenizer;
	class Rfc822Tokenizer
		: public object<Rfc822Tokenizer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit Rfc822Tokenizer(jobject jobj)
		: object<Rfc822Tokenizer>(jobj)
		{
		}

		operator local_ref<android::widget::MultiAutoCompleteTextView_::Tokenizer>() const;
		operator local_ref<java::lang::Object>() const;


		Rfc822Tokenizer();
		static local_ref< array< local_ref< android::text::util::Rfc822Token >, 1> > tokenize(local_ref< java::lang::CharSequence >  const&);
		jint findTokenStart(local_ref< java::lang::CharSequence >  const&, jint);
		jint findTokenEnd(local_ref< java::lang::CharSequence >  const&, jint);
		local_ref< java::lang::CharSequence > terminateToken(local_ref< java::lang::CharSequence >  const&);
	}; //class Rfc822Tokenizer

} //namespace util
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL

namespace j2cpp {



android::text::util::Rfc822Tokenizer::operator local_ref<android::widget::MultiAutoCompleteTextView_::Tokenizer>() const
{
	return local_ref<android::widget::MultiAutoCompleteTextView_::Tokenizer>(get_jobject());
}

android::text::util::Rfc822Tokenizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::util::Rfc822Tokenizer::Rfc822Tokenizer()
: object<android::text::util::Rfc822Tokenizer>(
	call_new_object<
		android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME,
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(0),
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< array< local_ref< android::text::util::Rfc822Token >, 1> > android::text::util::Rfc822Tokenizer::tokenize(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME,
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(1),
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< android::text::util::Rfc822Token >, 1> >
	>(a0);
}

jint android::text::util::Rfc822Tokenizer::findTokenStart(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME,
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(2),
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::text::util::Rfc822Tokenizer::findTokenEnd(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME,
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(3),
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::text::util::Rfc822Tokenizer::terminateToken(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME,
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(4),
		android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::util::Rfc822Tokenizer,"android/text/util/Rfc822Tokenizer")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,1,"tokenize","(Ljava/lang/CharSequence;)[android.text.util.Rfc822Token")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,2,"findTokenStart","(Ljava/lang/CharSequence;I)I")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,3,"findTokenEnd","(Ljava/lang/CharSequence;I)I")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,4,"terminateToken","(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
