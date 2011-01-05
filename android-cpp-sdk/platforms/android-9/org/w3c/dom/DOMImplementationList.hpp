/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.DOMImplementationList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementation; } } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/DOMImplementation.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DOMImplementationList;
	class DOMImplementationList
		: public object<DOMImplementationList>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DOMImplementationList(jobject jobj)
		: object<DOMImplementationList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::w3c::dom::DOMImplementation > item(jint);
		jint getLength();
	}; //class DOMImplementationList

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_IMPL

namespace j2cpp {



org::w3c::dom::DOMImplementationList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::w3c::dom::DOMImplementation > org::w3c::dom::DOMImplementationList::item(jint a0)
{
	return call_method<
		org::w3c::dom::DOMImplementationList::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementationList::J2CPP_METHOD_NAME(0),
		org::w3c::dom::DOMImplementationList::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::DOMImplementation >
	>(get_jobject(), a0);
}

jint org::w3c::dom::DOMImplementationList::getLength()
{
	return call_method<
		org::w3c::dom::DOMImplementationList::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementationList::J2CPP_METHOD_NAME(1),
		org::w3c::dom::DOMImplementationList::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DOMImplementationList,"org/w3c/dom/DOMImplementationList")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementationList,0,"item","(I)Lorg/w3c/dom/DOMImplementation;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementationList,1,"getLength","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
