/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicHeaderIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderIterator;
	class BasicHeaderIterator
		: public cpp_object<BasicHeaderIterator>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		BasicHeaderIterator(jobject jobj)
		: cpp_object<BasicHeaderIterator>(jobj)
		{
		}

		cpp_boolean hasNext();
		local_ref< org::apache::http::Header > nextHeader();
		local_ref< java::lang::Object > next();
		void remove();

	}; //class BasicHeaderIterator

} //namespace message
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::message::BasicHeaderIterator > create< org::apache::http::message::BasicHeaderIterator>(local_ref< cpp_object_array<org::apache::http::Header, 1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::apache::http::message::BasicHeaderIterator >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME, org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



cpp_boolean org::apache::http::message::BasicHeaderIterator::hasNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::message::BasicHeaderIterator::nextHeader()
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeaderIterator::next()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::apache::http::message::BasicHeaderIterator::remove()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderIterator,"org/apache/http/message/BasicHeaderIterator")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,0,"<init>","([org.apache.http.HeaderLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,1,"findNext","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,2,"filterHeader","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,3,"hasNext","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,4,"nextHeader","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,5,"next","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,6,"remove","()V")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,0,"allHeaders","[org.apache.http.Header")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,1,"currentIndex","I")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,2,"headerName","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION