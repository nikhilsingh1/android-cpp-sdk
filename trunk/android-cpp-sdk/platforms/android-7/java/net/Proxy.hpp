/*================================================================================
  code generated by: java2cpp
  class: java.net.Proxy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_PROXY_HPP_DECL
#define J2CPP_JAVA_NET_PROXY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace net { namespace Proxy_ { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/Proxy.hpp>
#include <java/net/SocketAddress.hpp>


namespace j2cpp {

namespace java { namespace net {

	class Proxy;
	namespace Proxy_ {

		class Type;
		class Type
			: public cpp_object<Type>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			Type(jobject jobj)
			: cpp_object<Type>(jobj)
			{
			}

			static local_ref< cpp_object_array<java::net::Proxy_::Type, 1> > values();
			static local_ref< java::net::Proxy_::Type > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::net::Proxy_::Type > > DIRECT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::net::Proxy_::Type > > HTTP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::net::Proxy_::Type > > SOCKS;
		}; //class Type

	} //namespace Proxy_

	class Proxy
		: public cpp_object<Proxy>
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
		J2CPP_DECLARE_FIELD(0)

		typedef Proxy_::Type Type;

		Proxy(jobject jobj)
		: cpp_object<Proxy>(jobj)
		{
		}

		local_ref< java::net::Proxy_::Type > type();
		local_ref< java::net::SocketAddress > address();
		local_ref< java::lang::String > toString();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::net::Proxy > > NO_PROXY;
	}; //class Proxy

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_PROXY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_PROXY_HPP_IMPL
#define J2CPP_JAVA_NET_PROXY_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<java::net::Proxy_::Type, 1> > java::net::Proxy_::Type::values()
{
	return local_ref< cpp_object_array<java::net::Proxy_::Type, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< java::net::Proxy_::Type > java::net::Proxy_::Type::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::Proxy_::Type >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::net::Proxy_::Type > create< java::net::Proxy_::Type>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::net::Proxy_::Type >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::Proxy_::Type::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::Proxy_::Type::J2CPP_CLASS_NAME, java::net::Proxy_::Type::J2CPP_METHOD_NAME(2), java::net::Proxy_::Type::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	java::net::Proxy_::Type::J2CPP_CLASS_NAME,
	java::net::Proxy_::Type::J2CPP_FIELD_NAME(0),
	java::net::Proxy_::Type::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::net::Proxy_::Type >
> java::net::Proxy_::Type::DIRECT;

static_field<
	java::net::Proxy_::Type::J2CPP_CLASS_NAME,
	java::net::Proxy_::Type::J2CPP_FIELD_NAME(1),
	java::net::Proxy_::Type::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::net::Proxy_::Type >
> java::net::Proxy_::Type::HTTP;

static_field<
	java::net::Proxy_::Type::J2CPP_CLASS_NAME,
	java::net::Proxy_::Type::J2CPP_FIELD_NAME(2),
	java::net::Proxy_::Type::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::net::Proxy_::Type >
> java::net::Proxy_::Type::SOCKS;


J2CPP_DEFINE_CLASS(java::net::Proxy_::Type,"java/net/Proxy$Type")
J2CPP_DEFINE_METHOD(java::net::Proxy_::Type,0,"values","()[java.net.Proxy.Type")
J2CPP_DEFINE_METHOD(java::net::Proxy_::Type,1,"valueOf","(Ljava/lang/String;)Ljava/net/Proxy$Type;")
J2CPP_DEFINE_METHOD(java::net::Proxy_::Type,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::net::Proxy_::Type,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::net::Proxy_::Type,0,"DIRECT","Ljava/net/Proxy$Type;")
J2CPP_DEFINE_FIELD(java::net::Proxy_::Type,1,"HTTP","Ljava/net/Proxy$Type;")
J2CPP_DEFINE_FIELD(java::net::Proxy_::Type,2,"SOCKS","Ljava/net/Proxy$Type;")
J2CPP_DEFINE_FIELD(java::net::Proxy_::Type,3,"$VALUES","[java.net.Proxy.Type")


template <>
local_ref< java::net::Proxy > create< java::net::Proxy>(local_ref< java::net::Proxy_::Type > const &a0, local_ref< java::net::SocketAddress > const &a1)
{
	return local_ref< java::net::Proxy >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::Proxy::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::Proxy::J2CPP_CLASS_NAME, java::net::Proxy::J2CPP_METHOD_NAME(0), java::net::Proxy::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::Proxy_::Type > java::net::Proxy::type()
{
	return local_ref< java::net::Proxy_::Type >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::net::SocketAddress > java::net::Proxy::address()
{
	return local_ref< java::net::SocketAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::net::Proxy::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::net::Proxy::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::net::Proxy::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


static_field<
	java::net::Proxy::J2CPP_CLASS_NAME,
	java::net::Proxy::J2CPP_FIELD_NAME(0),
	java::net::Proxy::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::net::Proxy >
> java::net::Proxy::NO_PROXY;


J2CPP_DEFINE_CLASS(java::net::Proxy,"java/net/Proxy")
J2CPP_DEFINE_METHOD(java::net::Proxy,0,"<init>","(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::Proxy,1,"type","()Ljava/net/Proxy$Type;")
J2CPP_DEFINE_METHOD(java::net::Proxy,2,"address","()Ljava/net/SocketAddress;")
J2CPP_DEFINE_METHOD(java::net::Proxy,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::Proxy,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::Proxy,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::Proxy,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::net::Proxy,0,"NO_PROXY","Ljava/net/Proxy;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_PROXY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION