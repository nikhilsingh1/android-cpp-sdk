/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.HttpHost
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpHost;
	class HttpHost
		: public cpp_object<HttpHost>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		HttpHost(jobject jobj)
		: cpp_object<HttpHost>(jobj)
		{
		}

		local_ref< java::lang::String > getHostName();
		cpp_int getPort();
		local_ref< java::lang::String > getSchemeName();
		local_ref< java::lang::String > toURI();
		local_ref< java::lang::String > toHostString();
		local_ref< java::lang::String > toString();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::Object > clone();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > DEFAULT_SCHEME_NAME;
	}; //class HttpHost

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::HttpHost > create< org::apache::http::HttpHost>(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::HttpHost::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::HttpHost::J2CPP_CLASS_NAME, org::apache::http::HttpHost::J2CPP_METHOD_NAME(0), org::apache::http::HttpHost::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::HttpHost > create< org::apache::http::HttpHost>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::HttpHost::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::HttpHost::J2CPP_CLASS_NAME, org::apache::http::HttpHost::J2CPP_METHOD_NAME(1), org::apache::http::HttpHost::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::HttpHost > create< org::apache::http::HttpHost>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::HttpHost::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::HttpHost::J2CPP_CLASS_NAME, org::apache::http::HttpHost::J2CPP_METHOD_NAME(2), org::apache::http::HttpHost::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::HttpHost > create< org::apache::http::HttpHost>(local_ref< org::apache::http::HttpHost > const &a0)
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::HttpHost::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::HttpHost::J2CPP_CLASS_NAME, org::apache::http::HttpHost::J2CPP_METHOD_NAME(3), org::apache::http::HttpHost::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HttpHost::getHostName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::apache::http::HttpHost::getPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HttpHost::getSchemeName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HttpHost::toURI()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HttpHost::toHostString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::HttpHost::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean org::apache::http::HttpHost::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::HttpHost::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::HttpHost::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}


static_field<
	org::apache::http::HttpHost::J2CPP_CLASS_NAME,
	org::apache::http::HttpHost::J2CPP_FIELD_NAME(0),
	org::apache::http::HttpHost::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::HttpHost::DEFAULT_SCHEME_NAME;


J2CPP_DEFINE_CLASS(org::apache::http::HttpHost,"org/apache/http/HttpHost")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,0,"<init>","(Ljava/lang/String;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,3,"<init>","(Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,4,"getHostName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,5,"getPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,6,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,7,"toURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,8,"toHostString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,11,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::HttpHost,12,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpHost,0,"DEFAULT_SCHEME_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpHost,1,"hostname","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpHost,2,"lcHostname","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpHost,3,"port","I")
J2CPP_DEFINE_FIELD(org::apache::http::HttpHost,4,"schemeName","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPHOST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
