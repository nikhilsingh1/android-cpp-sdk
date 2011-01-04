/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.AttributedString
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_DECL
#define J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { namespace AttributedCharacterIterator_ { class Attribute; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace text {

	class AttributedString;
	class AttributedString
		: public object<AttributedString>
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

		explicit AttributedString(jobject jobj)
		: object<AttributedString>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AttributedString(local_ref< java::text::AttributedCharacterIterator > const&);
		AttributedString(local_ref< java::text::AttributedCharacterIterator > const&, jint, jint);
		AttributedString(local_ref< java::text::AttributedCharacterIterator > const&, jint, jint, local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> > const&);
		AttributedString(local_ref< java::lang::String > const&);
		AttributedString(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		void addAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute >  const&, local_ref< java::lang::Object >  const&);
		void addAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute >  const&, local_ref< java::lang::Object >  const&, jint, jint);
		void addAttributes(local_ref< java::util::Map >  const&, jint, jint);
		local_ref< java::text::AttributedCharacterIterator > getIterator();
		local_ref< java::text::AttributedCharacterIterator > getIterator(local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> >  const&);
		local_ref< java::text::AttributedCharacterIterator > getIterator(local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> >  const&, jint, jint);
	}; //class AttributedString

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_IMPL
#define J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_IMPL

namespace j2cpp {



java::text::AttributedString::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::text::AttributedString::AttributedString(local_ref< java::text::AttributedCharacterIterator > const &a0)
: object<java::text::AttributedString>(
	call_new_object<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(0),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::text::AttributedString::AttributedString(local_ref< java::text::AttributedCharacterIterator > const &a0, jint a1, jint a2)
: object<java::text::AttributedString>(
	call_new_object<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(1),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



java::text::AttributedString::AttributedString(local_ref< java::text::AttributedCharacterIterator > const &a0, jint a1, jint a2, local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> > const &a3)
: object<java::text::AttributedString>(
	call_new_object<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(2),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2, a3)
)
{
}



java::text::AttributedString::AttributedString(local_ref< java::lang::String > const &a0)
: object<java::text::AttributedString>(
	call_new_object<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(3),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



java::text::AttributedString::AttributedString(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
: object<java::text::AttributedString>(
	call_new_object<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(4),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1)
)
{
}


void java::text::AttributedString::addAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(5),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void java::text::AttributedString::addAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute > const &a0, local_ref< java::lang::Object > const &a1, jint a2, jint a3)
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(6),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void java::text::AttributedString::addAttributes(local_ref< java::util::Map > const &a0, jint a1, jint a2)
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(7),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::text::AttributedCharacterIterator > java::text::AttributedString::getIterator()
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(8),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::text::AttributedCharacterIterator > >
	(get_jobject());
}

local_ref< java::text::AttributedCharacterIterator > java::text::AttributedString::getIterator(local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> > const &a0)
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(9),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::text::AttributedCharacterIterator > >
	(get_jobject(), a0);
}

local_ref< java::text::AttributedCharacterIterator > java::text::AttributedString::getIterator(local_ref< array< local_ref< java::text::AttributedCharacterIterator_::Attribute >, 1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::text::AttributedString::J2CPP_CLASS_NAME,
		java::text::AttributedString::J2CPP_METHOD_NAME(10),
		java::text::AttributedString::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::text::AttributedCharacterIterator > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::text::AttributedString,"java/text/AttributedString")
J2CPP_DEFINE_METHOD(java::text::AttributedString,0,"<init>","(Ljava/text/AttributedCharacterIterator;)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,1,"<init>","(Ljava/text/AttributedCharacterIterator;II)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,2,"<init>","(Ljava/text/AttributedCharacterIterator;II[java.text.AttributedCharacterIterator.Attribute)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,4,"<init>","(Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,5,"addAttribute","(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,6,"addAttribute","(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,7,"addAttributes","(Ljava/util/Map;II)V")
J2CPP_DEFINE_METHOD(java::text::AttributedString,8,"getIterator","()Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::AttributedString,9,"getIterator","([java.text.AttributedCharacterIterator.Attribute)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::AttributedString,10,"getIterator","([java.text.AttributedCharacterIterator.AttributeII)Ljava/text/AttributedCharacterIterator;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ATTRIBUTEDSTRING_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION