/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.AttributeList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_DECL
#define J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class AttributeList;
	class AttributeList
		: public object<AttributeList>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit AttributeList(jobject jobj)
		: object<AttributeList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getLength();
		local_ref< java::lang::String > getName(jint);
		local_ref< java::lang::String > getType(jint);
		local_ref< java::lang::String > getValue(jint);
		local_ref< java::lang::String > getType(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String >  const&);
	}; //class AttributeList

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_IMPL
#define J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_IMPL

namespace j2cpp {



org::xml::sax::AttributeList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint org::xml::sax::AttributeList::getLength()
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(0),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::xml::sax::AttributeList::getName(jint a0)
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(1),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::AttributeList::getType(jint a0)
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(2),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::AttributeList::getValue(jint a0)
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(3),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::AttributeList::getType(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(4),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::AttributeList::getValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::AttributeList::J2CPP_CLASS_NAME,
		org::xml::sax::AttributeList::J2CPP_METHOD_NAME(5),
		org::xml::sax::AttributeList::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::AttributeList,"org/xml/sax/AttributeList")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,0,"getLength","()I")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,1,"getName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,2,"getType","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,3,"getValue","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,4,"getType","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::AttributeList,5,"getValue","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ATTRIBUTELIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
