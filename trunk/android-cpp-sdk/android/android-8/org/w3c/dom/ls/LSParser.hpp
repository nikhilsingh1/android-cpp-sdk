/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.ls.LSParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Document; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSParserFilter; } } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSInput; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/w3c/dom/DOMConfiguration.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/ls/LSInput.hpp>
#include <org/w3c/dom/ls/LSParserFilter.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class LSParser;
	class LSParser
		: public cpp_object<LSParser>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		LSParser(jobject jobj)
		: cpp_object<LSParser>(jobj)
		{
		}

		local_ref< org::w3c::dom::DOMConfiguration > getDomConfig();
		local_ref< org::w3c::dom::ls::LSParserFilter > getFilter();
		void setFilter(local_ref< org::w3c::dom::ls::LSParserFilter > const&);
		cpp_boolean getAsync();
		cpp_boolean getBusy();
		local_ref< org::w3c::dom::Document > parse(local_ref< org::w3c::dom::ls::LSInput > const&);
		local_ref< org::w3c::dom::Document > parseURI(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Node > parseWithContext(local_ref< org::w3c::dom::ls::LSInput > const&, local_ref< org::w3c::dom::Node > const&, cpp_short const&);
		void abort();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_short > ACTION_APPEND_AS_CHILDREN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_short > ACTION_REPLACE_CHILDREN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_short > ACTION_INSERT_BEFORE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_short > ACTION_INSERT_AFTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_short > ACTION_REPLACE;
	}; //class LSParser

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_IMPL

namespace j2cpp {


local_ref< org::w3c::dom::DOMConfiguration > org::w3c::dom::ls::LSParser::getDomConfig()
{
	return local_ref< org::w3c::dom::DOMConfiguration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::w3c::dom::ls::LSParserFilter > org::w3c::dom::ls::LSParser::getFilter()
{
	return local_ref< org::w3c::dom::ls::LSParserFilter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::w3c::dom::ls::LSParser::setFilter(local_ref< org::w3c::dom::ls::LSParserFilter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::w3c::dom::ls::LSParser::getAsync()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::w3c::dom::ls::LSParser::getBusy()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::w3c::dom::Document > org::w3c::dom::ls::LSParser::parse(local_ref< org::w3c::dom::ls::LSInput > const &a0)
{
	return local_ref< org::w3c::dom::Document >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Document > org::w3c::dom::ls::LSParser::parseURI(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::w3c::dom::Document >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::ls::LSParser::parseWithContext(local_ref< org::w3c::dom::ls::LSInput > const &a0, local_ref< org::w3c::dom::Node > const &a1, cpp_short const &a2)
{
	return local_ref< org::w3c::dom::Node >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::w3c::dom::ls::LSParser::abort()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


static_field<
	org::w3c::dom::ls::LSParser::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_NAME(0),
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_SIGNATURE(0),
	cpp_short
> org::w3c::dom::ls::LSParser::ACTION_APPEND_AS_CHILDREN;

static_field<
	org::w3c::dom::ls::LSParser::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_NAME(1),
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_SIGNATURE(1),
	cpp_short
> org::w3c::dom::ls::LSParser::ACTION_REPLACE_CHILDREN;

static_field<
	org::w3c::dom::ls::LSParser::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_NAME(2),
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_SIGNATURE(2),
	cpp_short
> org::w3c::dom::ls::LSParser::ACTION_INSERT_BEFORE;

static_field<
	org::w3c::dom::ls::LSParser::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_NAME(3),
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_SIGNATURE(3),
	cpp_short
> org::w3c::dom::ls::LSParser::ACTION_INSERT_AFTER;

static_field<
	org::w3c::dom::ls::LSParser::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_NAME(4),
	org::w3c::dom::ls::LSParser::J2CPP_FIELD_SIGNATURE(4),
	cpp_short
> org::w3c::dom::ls::LSParser::ACTION_REPLACE;


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::LSParser,"org/w3c/dom/ls/LSParser")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,0,"getDomConfig","()Lorg/w3c/dom/DOMConfiguration;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,1,"getFilter","()Lorg/w3c/dom/ls/LSParserFilter;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,2,"setFilter","(Lorg/w3c/dom/ls/LSParserFilter;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,3,"getAsync","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,4,"getBusy","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,5,"parse","(Lorg/w3c/dom/ls/LSInput;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,6,"parseURI","(Ljava/lang/String;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,7,"parseWithContext","(Lorg/w3c/dom/ls/LSInput;Lorg/w3c/dom/Node;S)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSParser,8,"abort","()V")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParser,0,"ACTION_APPEND_AS_CHILDREN","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParser,1,"ACTION_REPLACE_CHILDREN","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParser,2,"ACTION_INSERT_BEFORE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParser,3,"ACTION_INSERT_AFTER","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSParser,4,"ACTION_REPLACE","S")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
