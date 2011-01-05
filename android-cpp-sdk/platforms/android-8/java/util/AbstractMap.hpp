/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.AbstractMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class AbstractMap;
	class AbstractMap
		: public object<AbstractMap>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)

		explicit AbstractMap(jobject jobj)
		: object<AbstractMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Map>() const;


		void clear();
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > entrySet();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jboolean isEmpty();
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< java::lang::String > toString();
		local_ref< java::util::Collection > values();
	}; //class AbstractMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_IMPL

namespace j2cpp {



java::util::AbstractMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::AbstractMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}


void java::util::AbstractMap::clear()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(1),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

jboolean java::util::AbstractMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(2),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::AbstractMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(3),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::AbstractMap::entrySet()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(4),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Set >
	>(get_jobject());
}

jboolean java::util::AbstractMap::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(5),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(6),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::AbstractMap::hashCode()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(7),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jboolean java::util::AbstractMap::isEmpty()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(8),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Set > java::util::AbstractMap::keySet()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(9),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::AbstractMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(10),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

void java::util::AbstractMap::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(11),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(12),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::AbstractMap::size()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(13),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::util::AbstractMap::toString()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(14),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::Collection > java::util::AbstractMap::values()
{
	return call_method<
		java::util::AbstractMap::J2CPP_CLASS_NAME,
		java::util::AbstractMap::J2CPP_METHOD_NAME(15),
		java::util::AbstractMap::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::util::Collection >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::AbstractMap,"java/util/AbstractMap")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,1,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,2,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,3,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,4,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,6,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,7,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,9,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,10,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,11,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,12,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,13,"size","()I")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,15,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::AbstractMap,16,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
