/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicHeaderElement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/NameValuePair.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderElement;
	class BasicHeaderElement
		: public cpp_object<BasicHeaderElement>
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

		BasicHeaderElement(jobject jobj)
		: cpp_object<BasicHeaderElement>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > getParameters();
		cpp_int getParameterCount();
		local_ref< org::apache::http::NameValuePair > getParameter(cpp_int const&);
		local_ref< org::apache::http::NameValuePair > getParameterByName(local_ref< java::lang::String > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class BasicHeaderElement

} //namespace message
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::message::BasicHeaderElement > create< org::apache::http::message::BasicHeaderElement>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > const &a2)
{
	return local_ref< org::apache::http::message::BasicHeaderElement >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::message::BasicHeaderElement::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::message::BasicHeaderElement::J2CPP_CLASS_NAME, org::apache::http::message::BasicHeaderElement::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicHeaderElement::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::message::BasicHeaderElement > create< org::apache::http::message::BasicHeaderElement>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::apache::http::message::BasicHeaderElement >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::message::BasicHeaderElement::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::message::BasicHeaderElement::J2CPP_CLASS_NAME, org::apache::http::message::BasicHeaderElement::J2CPP_METHOD_NAME(1), org::apache::http::message::BasicHeaderElement::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicHeaderElement::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicHeaderElement::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> > org::apache::http::message::BasicHeaderElement::getParameters()
{
	return local_ref< cpp_object_array<org::apache::http::NameValuePair, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::apache::http::message::BasicHeaderElement::getParameterCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::BasicHeaderElement::getParameter(cpp_int const &a0)
{
	return local_ref< org::apache::http::NameValuePair >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::BasicHeaderElement::getParameterByName(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::NameValuePair >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::message::BasicHeaderElement::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::message::BasicHeaderElement::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicHeaderElement::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeaderElement::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderElement,"org/apache/http/message/BasicHeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,0,"<init>","(Ljava/lang/String;Ljava/lang/String;[org.apache.http.NameValuePair)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,2,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,3,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,4,"getParameters","()[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,5,"getParameterCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,6,"getParameter","(I)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,7,"getParameterByName","(Ljava/lang/String;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,8,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,9,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElement,11,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
