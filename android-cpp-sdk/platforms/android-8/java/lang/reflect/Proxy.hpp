/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.Proxy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class InvocationHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/InvocationHandler.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Proxy;
	class Proxy
		: public object<Proxy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit Proxy(jobject jobj)
		: object<Proxy>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		static local_ref< java::lang::Class > getProxyClass(local_ref< java::lang::ClassLoader >  const&, local_ref< array< local_ref< java::lang::Class >, 1> >  const&);
		static local_ref< java::lang::Object > newProxyInstance(local_ref< java::lang::ClassLoader >  const&, local_ref< array< local_ref< java::lang::Class >, 1> >  const&, local_ref< java::lang::reflect::InvocationHandler >  const&);
		static jboolean isProxyClass(local_ref< java::lang::Class >  const&);
		static local_ref< java::lang::reflect::InvocationHandler > getInvocationHandler(local_ref< java::lang::Object >  const&);

	}; //class Proxy

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_IMPL

namespace j2cpp {



java::lang::reflect::Proxy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::reflect::Proxy::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


local_ref< java::lang::Class > java::lang::reflect::Proxy::getProxyClass(local_ref< java::lang::ClassLoader > const &a0, local_ref< array< local_ref< java::lang::Class >, 1> > const &a1)
{
	return call_static_method<
		java::lang::reflect::Proxy::J2CPP_CLASS_NAME,
		java::lang::reflect::Proxy::J2CPP_METHOD_NAME(1),
		java::lang::reflect::Proxy::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Class >
	>(a0, a1);
}

local_ref< java::lang::Object > java::lang::reflect::Proxy::newProxyInstance(local_ref< java::lang::ClassLoader > const &a0, local_ref< array< local_ref< java::lang::Class >, 1> > const &a1, local_ref< java::lang::reflect::InvocationHandler > const &a2)
{
	return call_static_method<
		java::lang::reflect::Proxy::J2CPP_CLASS_NAME,
		java::lang::reflect::Proxy::J2CPP_METHOD_NAME(2),
		java::lang::reflect::Proxy::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(a0, a1, a2);
}

jboolean java::lang::reflect::Proxy::isProxyClass(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::lang::reflect::Proxy::J2CPP_CLASS_NAME,
		java::lang::reflect::Proxy::J2CPP_METHOD_NAME(3),
		java::lang::reflect::Proxy::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(a0);
}

local_ref< java::lang::reflect::InvocationHandler > java::lang::reflect::Proxy::getInvocationHandler(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::lang::reflect::Proxy::J2CPP_CLASS_NAME,
		java::lang::reflect::Proxy::J2CPP_METHOD_NAME(4),
		java::lang::reflect::Proxy::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::reflect::InvocationHandler >
	>(a0);
}



J2CPP_DEFINE_CLASS(java::lang::reflect::Proxy,"java/lang/reflect/Proxy")
J2CPP_DEFINE_METHOD(java::lang::reflect::Proxy,0,"<init>","(Ljava/lang/reflect/InvocationHandler;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Proxy,1,"getProxyClass","(Ljava/lang/ClassLoader;[java.lang.Class)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Proxy,2,"newProxyInstance","(Ljava/lang/ClassLoader;[java.lang.ClassLjava/lang/reflect/InvocationHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Proxy,3,"isProxyClass","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Proxy,4,"getInvocationHandler","(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;")
J2CPP_DEFINE_FIELD(java::lang::reflect::Proxy,0,"h","Ljava/lang/reflect/InvocationHandler;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
