/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicNameValuePair
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicNameValuePair;
	class BasicNameValuePair
		: public cpp_object<BasicNameValuePair>
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

		BasicNameValuePair(jobject jobj)
		: cpp_object<BasicNameValuePair>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< java::lang::String > toString();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::Object > clone();
	}; //class BasicNameValuePair

} //namespace message
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::message::BasicNameValuePair > create< org::apache::http::message::BasicNameValuePair>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::apache::http::message::BasicNameValuePair >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::message::BasicNameValuePair::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::message::BasicNameValuePair::J2CPP_CLASS_NAME, org::apache::http::message::BasicNameValuePair::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicNameValuePair::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicNameValuePair::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicNameValuePair::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicNameValuePair::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::message::BasicNameValuePair::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::message::BasicNameValuePair::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicNameValuePair::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicNameValuePair,"org/apache/http/message/BasicNameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicNameValuePair,6,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICNAMEVALUEPAIR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
