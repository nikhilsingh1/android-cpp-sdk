/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.HeaderGroup
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderIterator; } } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HeaderIterator.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class HeaderGroup;
	class HeaderGroup
		: public object<HeaderGroup>
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

		explicit HeaderGroup(jobject jobj)
		: object<HeaderGroup>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		HeaderGroup();
		void clear();
		void addHeader(local_ref< org::apache::http::Header >  const&);
		void removeHeader(local_ref< org::apache::http::Header >  const&);
		void updateHeader(local_ref< org::apache::http::Header >  const&);
		void setHeaders(local_ref< array< local_ref< org::apache::http::Header >, 1> >  const&);
		local_ref< org::apache::http::Header > getCondensedHeader(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< org::apache::http::Header >, 1> > getHeaders(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::Header > getFirstHeader(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::Header > getLastHeader(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< org::apache::http::Header >, 1> > getAllHeaders();
		jboolean containsHeader(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::HeaderIterator > iterator();
		local_ref< org::apache::http::HeaderIterator > iterator(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::message::HeaderGroup > copy();
		local_ref< java::lang::Object > clone();
	}; //class HeaderGroup

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_IMPL

namespace j2cpp {



org::apache::http::message::HeaderGroup::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::message::HeaderGroup::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::message::HeaderGroup::HeaderGroup()
: object<org::apache::http::message::HeaderGroup>(
	call_new_object<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(0),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::message::HeaderGroup::clear()
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(1),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void org::apache::http::message::HeaderGroup::addHeader(local_ref< org::apache::http::Header > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(2),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::message::HeaderGroup::removeHeader(local_ref< org::apache::http::Header > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(3),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::message::HeaderGroup::updateHeader(local_ref< org::apache::http::Header > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(4),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::message::HeaderGroup::setHeaders(local_ref< array< local_ref< org::apache::http::Header >, 1> > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(5),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< org::apache::http::Header > org::apache::http::message::HeaderGroup::getCondensedHeader(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(6),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< org::apache::http::Header >, 1> > org::apache::http::message::HeaderGroup::getHeaders(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(7),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< org::apache::http::Header >, 1> >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::Header > org::apache::http::message::HeaderGroup::getFirstHeader(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(8),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::Header > org::apache::http::message::HeaderGroup::getLastHeader(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(9),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< org::apache::http::Header >, 1> > org::apache::http::message::HeaderGroup::getAllHeaders()
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(10),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array< local_ref< org::apache::http::Header >, 1> >
	>(get_jobject());
}

jboolean org::apache::http::message::HeaderGroup::containsHeader(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(11),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< org::apache::http::HeaderIterator > org::apache::http::message::HeaderGroup::iterator()
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(12),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::apache::http::HeaderIterator >
	>(get_jobject());
}

local_ref< org::apache::http::HeaderIterator > org::apache::http::message::HeaderGroup::iterator(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(13),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::apache::http::HeaderIterator >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::message::HeaderGroup > org::apache::http::message::HeaderGroup::copy()
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(14),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< org::apache::http::message::HeaderGroup >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::HeaderGroup::clone()
{
	return call_method<
		org::apache::http::message::HeaderGroup::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_NAME(15),
		org::apache::http::message::HeaderGroup::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::HeaderGroup,"org/apache/http/message/HeaderGroup")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,1,"clear","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,2,"addHeader","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,3,"removeHeader","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,4,"updateHeader","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,5,"setHeaders","([org.apache.http.Header)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,6,"getCondensedHeader","(Ljava/lang/String;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,7,"getHeaders","(Ljava/lang/String;)[org.apache.http.Header")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,8,"getFirstHeader","(Ljava/lang/String;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,9,"getLastHeader","(Ljava/lang/String;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,10,"getAllHeaders","()[org.apache.http.Header")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,11,"containsHeader","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,12,"iterator","()Lorg/apache/http/HeaderIterator;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,13,"iterator","(Ljava/lang/String;)Lorg/apache/http/HeaderIterator;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,14,"copy","()Lorg/apache/http/message/HeaderGroup;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderGroup,15,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERGROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
