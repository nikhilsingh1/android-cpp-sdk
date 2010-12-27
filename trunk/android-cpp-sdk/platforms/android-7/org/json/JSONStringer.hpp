/*================================================================================
  code generated by: java2cpp
  class: org.json.JSONStringer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONSTRINGER_HPP_DECL
#define J2CPP_ORG_JSON_JSONSTRINGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace json {

	class JSONStringer;
	class JSONStringer
		: public cpp_object<JSONStringer>
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

		explicit JSONStringer(jobject jobj)
		: cpp_object<JSONStringer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		JSONStringer();
		local_ref< org::json::JSONStringer > array();
		local_ref< org::json::JSONStringer > endArray();
		local_ref< org::json::JSONStringer > endObject();
		local_ref< org::json::JSONStringer > key(local_ref< java::lang::String > const&);
		local_ref< org::json::JSONStringer > object();
		local_ref< org::json::JSONStringer > value(cpp_boolean const&);
		local_ref< org::json::JSONStringer > value(cpp_double const&);
		local_ref< org::json::JSONStringer > value(cpp_long const&);
		local_ref< org::json::JSONStringer > value(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
	}; //class JSONStringer

} //namespace json
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONSTRINGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONSTRINGER_HPP_IMPL
#define J2CPP_ORG_JSON_JSONSTRINGER_HPP_IMPL

namespace j2cpp {



org::json::JSONStringer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


org::json::JSONStringer::JSONStringer()
: cpp_object<org::json::JSONStringer>(
	environment::get().get_jenv()->NewObject(
		get_class<org::json::JSONStringer::J2CPP_CLASS_NAME>(),
		get_method_id<org::json::JSONStringer::J2CPP_CLASS_NAME, org::json::JSONStringer::J2CPP_METHOD_NAME(0), org::json::JSONStringer::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< org::json::JSONStringer > org::json::JSONStringer::array()
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::endArray()
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::endObject()
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::key(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::object()
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::value(cpp_boolean const &a0)
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::value(cpp_double const &a0)
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::value(cpp_long const &a0)
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONStringer > org::json::JSONStringer::value(local_ref< java::lang::Object > const &a0)
{
	return local_ref< org::json::JSONStringer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONStringer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::json::JSONStringer,"org/json/JSONStringer")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,1,"array","()Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,2,"endArray","()Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,3,"endObject","()Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,4,"key","(Ljava/lang/String;)Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,5,"object","()Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,6,"value","(Z)Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,7,"value","(D)Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,8,"value","(J)Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,9,"value","(Ljava/lang/Object;)Lorg/json/JSONStringer;")
J2CPP_DEFINE_METHOD(org::json::JSONStringer,10,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONSTRINGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION