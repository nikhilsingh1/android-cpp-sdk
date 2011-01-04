/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Iterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ITERATOR_HPP_DECL
#define J2CPP_JAVA_UTIL_ITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Iterator;
	class Iterator
		: public object<Iterator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Iterator(jobject jobj)
		: object<Iterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean hasNext();
		local_ref< java::lang::Object > next();
		void remove();
	}; //class Iterator

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ITERATOR_HPP_IMPL
#define J2CPP_JAVA_UTIL_ITERATOR_HPP_IMPL

namespace j2cpp {



java::util::Iterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::util::Iterator::hasNext()
{
	return call_method<
		java::util::Iterator::J2CPP_CLASS_NAME,
		java::util::Iterator::J2CPP_METHOD_NAME(0),
		java::util::Iterator::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::Iterator::next()
{
	return call_method<
		java::util::Iterator::J2CPP_CLASS_NAME,
		java::util::Iterator::J2CPP_METHOD_NAME(1),
		java::util::Iterator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

void java::util::Iterator::remove()
{
	return call_method<
		java::util::Iterator::J2CPP_CLASS_NAME,
		java::util::Iterator::J2CPP_METHOD_NAME(2),
		java::util::Iterator::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::Iterator,"java/util/Iterator")
J2CPP_DEFINE_METHOD(java::util::Iterator,0,"hasNext","()Z")
J2CPP_DEFINE_METHOD(java::util::Iterator,1,"next","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Iterator,2,"remove","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION