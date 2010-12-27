/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.Proxy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_PROXY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class InvocationHandler; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/InvocationHandler.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Proxy;
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
		J2CPP_DECLARE_FIELD(0)

		Proxy(jobject jobj)
		: cpp_object<Proxy>(jobj)
		{
		}

		static local_ref< java::lang::Class > getProxyClass(local_ref< java::lang::ClassLoader > const&, local_ref< cpp_object_array<java::lang::Class, 1> > const&);
		static local_ref< java::lang::Object > newProxyInstance(local_ref< java::lang::ClassLoader > const&, local_ref< cpp_object_array<java::lang::Class, 1> > const&, local_ref< java::lang::reflect::InvocationHandler > const&);
		static cpp_boolean isProxyClass(local_ref< java::lang::Class > const&);
		static local_ref< java::lang::reflect::InvocationHandler > getInvocationHandler(local_ref< java::lang::Object > const&);

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


template <>
local_ref< java::lang::reflect::Proxy > create< java::lang::reflect::Proxy>(local_ref< java::lang::reflect::InvocationHandler > const &a0)
{
	return local_ref< java::lang::reflect::Proxy >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::reflect::Proxy::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::reflect::Proxy::J2CPP_CLASS_NAME, java::lang::reflect::Proxy::J2CPP_METHOD_NAME(0), java::lang::reflect::Proxy::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > java::lang::reflect::Proxy::getProxyClass(local_ref< java::lang::ClassLoader > const &a0, local_ref< cpp_object_array<java::lang::Class, 1> > const &a1)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::lang::reflect::Proxy::newProxyInstance(local_ref< java::lang::ClassLoader > const &a0, local_ref< cpp_object_array<java::lang::Class, 1> > const &a1, local_ref< java::lang::reflect::InvocationHandler > const &a2)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::lang::reflect::Proxy::isProxyClass(local_ref< java::lang::Class > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::reflect::InvocationHandler > java::lang::reflect::Proxy::getInvocationHandler(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::reflect::InvocationHandler >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
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