/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.DOMImplementation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Document; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentType; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/w3c/dom/DocumentType.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DOMImplementation;
	class DOMImplementation
		: public cpp_object<DOMImplementation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		DOMImplementation(jobject jobj)
		: cpp_object<DOMImplementation>(jobj)
		{
		}

		cpp_boolean hasFeature(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::DocumentType > createDocumentType(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Document > createDocument(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< org::w3c::dom::DocumentType > const&);
		local_ref< java::lang::Object > getFeature(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class DOMImplementation

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL

namespace j2cpp {


cpp_boolean org::w3c::dom::DOMImplementation::hasFeature(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::DocumentType > org::w3c::dom::DOMImplementation::createDocumentType(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< org::w3c::dom::DocumentType >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Document > org::w3c::dom::DOMImplementation::createDocument(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< org::w3c::dom::DocumentType > const &a2)
{
	return local_ref< org::w3c::dom::Document >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > org::w3c::dom::DOMImplementation::getFeature(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DOMImplementation,"org/w3c/dom/DOMImplementation")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,0,"hasFeature","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,1,"createDocumentType","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,2,"createDocument","(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,3,"getFeature","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
