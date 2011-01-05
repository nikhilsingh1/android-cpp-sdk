/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Dictionary
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DICTIONARY_HPP_DECL
#define J2CPP_JAVA_UTIL_DICTIONARY_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Dictionary;
	class Dictionary
		: public object<Dictionary>
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

		explicit Dictionary(jobject jobj)
		: object<Dictionary>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Dictionary();
		local_ref< java::util::Enumeration > elements();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jboolean isEmpty();
		local_ref< java::util::Enumeration > keys();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jint size();
	}; //class Dictionary

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DICTIONARY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DICTIONARY_HPP_IMPL
#define J2CPP_JAVA_UTIL_DICTIONARY_HPP_IMPL

namespace j2cpp {



java::util::Dictionary::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::Dictionary::Dictionary()
: object<java::util::Dictionary>(
	call_new_object<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(0),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::util::Enumeration > java::util::Dictionary::elements()
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(1),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::Dictionary::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(2),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::util::Dictionary::isEmpty()
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(3),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Enumeration > java::util::Dictionary::keys()
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(4),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::Dictionary::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(5),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::Dictionary::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(6),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::Dictionary::size()
{
	return call_method<
		java::util::Dictionary::J2CPP_CLASS_NAME,
		java::util::Dictionary::J2CPP_METHOD_NAME(7),
		java::util::Dictionary::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::Dictionary,"java/util/Dictionary")
J2CPP_DEFINE_METHOD(java::util::Dictionary,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Dictionary,1,"elements","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::Dictionary,2,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Dictionary,3,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::Dictionary,4,"keys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::Dictionary,5,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Dictionary,6,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Dictionary,7,"size","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DICTIONARY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
