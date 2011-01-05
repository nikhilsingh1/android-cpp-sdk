/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.EnumMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ENUMMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_ENUMMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class AbstractMap; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class EnumMap;
	class EnumMap
		: public object<EnumMap>
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
		J2CPP_DECLARE_METHOD(17)

		explicit EnumMap(jobject jobj)
		: object<EnumMap>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::AbstractMap>() const;
		operator local_ref<java::util::Map>() const;
		operator local_ref<java::io::Serializable>() const;


		EnumMap(local_ref< java::lang::Class > const&);
		EnumMap(local_ref< java::util::EnumMap > const&);
		EnumMap(local_ref< java::util::Map > const&);
		void clear();
		local_ref< java::util::EnumMap > clone();
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > entrySet();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > put(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< java::util::Collection > values();
		local_ref< java::lang::Object > clone_1();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
	}; //class EnumMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ENUMMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ENUMMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_ENUMMAP_HPP_IMPL

namespace j2cpp {



java::util::EnumMap::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::EnumMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::EnumMap::operator local_ref<java::util::AbstractMap>() const
{
	return local_ref<java::util::AbstractMap>(get_jobject());
}

java::util::EnumMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

java::util::EnumMap::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::EnumMap::EnumMap(local_ref< java::lang::Class > const &a0)
: object<java::util::EnumMap>(
	call_new_object<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(0),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::EnumMap::EnumMap(local_ref< java::util::EnumMap > const &a0)
: object<java::util::EnumMap>(
	call_new_object<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(1),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::EnumMap::EnumMap(local_ref< java::util::Map > const &a0)
: object<java::util::EnumMap>(
	call_new_object<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(2),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


void java::util::EnumMap::clear()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(3),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

local_ref< java::util::EnumMap > java::util::EnumMap::clone()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(4),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::EnumMap >
	>(get_jobject());
}

jboolean java::util::EnumMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(5),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::EnumMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(6),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::EnumMap::entrySet()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(7),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Set >
	>(get_jobject());
}

jboolean java::util::EnumMap::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(8),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::EnumMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(9),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::EnumMap::keySet()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(10),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::EnumMap::put(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(11),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

void java::util::EnumMap::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(12),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::EnumMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(13),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::EnumMap::size()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(14),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

local_ref< java::util::Collection > java::util::EnumMap::values()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(15),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::util::Collection >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::EnumMap::clone_1()
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(16),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::EnumMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::EnumMap::J2CPP_CLASS_NAME,
		java::util::EnumMap::J2CPP_METHOD_NAME(17),
		java::util::EnumMap::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::EnumMap,"java/util/EnumMap")
J2CPP_DEFINE_METHOD(java::util::EnumMap,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(java::util::EnumMap,1,"<init>","(Ljava/util/EnumMap;)V")
J2CPP_DEFINE_METHOD(java::util::EnumMap,2,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::EnumMap,3,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::EnumMap,4,"clone","()Ljava/util/EnumMap;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,5,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::EnumMap,6,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::EnumMap,7,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,8,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::EnumMap,9,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,10,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,11,"put","(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,12,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::EnumMap,13,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,14,"size","()I")
J2CPP_DEFINE_METHOD(java::util::EnumMap,15,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,16,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EnumMap,17,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ENUMMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
