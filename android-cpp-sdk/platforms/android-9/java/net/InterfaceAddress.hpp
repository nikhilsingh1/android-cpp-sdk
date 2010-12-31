/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.InterfaceAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_DECL
#define J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>


namespace j2cpp {

namespace java { namespace net {

	class InterfaceAddress;
	class InterfaceAddress
		: public object<InterfaceAddress>
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

		explicit InterfaceAddress(jobject jobj)
		: object<InterfaceAddress>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		local_ref< java::net::InetAddress > getAddress();
		local_ref< java::net::InetAddress > getBroadcast();
		jshort getNetworkPrefixLength();
	}; //class InterfaceAddress

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_IMPL
#define J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_IMPL

namespace j2cpp {



java::net::InterfaceAddress::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean java::net::InterfaceAddress::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(1),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jint java::net::InterfaceAddress::hashCode()
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(2),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::net::InterfaceAddress::toString()
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(3),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::net::InetAddress > java::net::InterfaceAddress::getAddress()
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(4),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::InetAddress > >
	(get_jobject());
}

local_ref< java::net::InetAddress > java::net::InterfaceAddress::getBroadcast()
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(5),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::InetAddress > >
	(get_jobject());
}

jshort java::net::InterfaceAddress::getNetworkPrefixLength()
{
	return call_method<
		java::net::InterfaceAddress::J2CPP_CLASS_NAME,
		java::net::InterfaceAddress::J2CPP_METHOD_NAME(6),
		java::net::InterfaceAddress::J2CPP_METHOD_SIGNATURE(6), 
		jshort >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::InterfaceAddress,"java/net/InterfaceAddress")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,4,"getAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,5,"getBroadcast","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InterfaceAddress,6,"getNetworkPrefixLength","()S")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INTERFACEADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION