/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.BasicCookieStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class CookieStore; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/client/CookieStore.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class BasicCookieStore;
	class BasicCookieStore
		: public object<BasicCookieStore>
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

		explicit BasicCookieStore(jobject jobj)
		: object<BasicCookieStore>(jobj)
		{
		}

		operator local_ref<org::apache::http::client::CookieStore>() const;
		operator local_ref<java::lang::Object>() const;


		BasicCookieStore();
		void addCookie(local_ref< org::apache::http::cookie::Cookie >  const&);
		void addCookies(local_ref< array< local_ref< org::apache::http::cookie::Cookie >, 1> >  const&);
		local_ref< java::util::List > getCookies();
		jboolean clearExpired(local_ref< java::util::Date >  const&);
		local_ref< java::lang::String > toString();
		void clear();
	}; //class BasicCookieStore

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::BasicCookieStore::operator local_ref<org::apache::http::client::CookieStore>() const
{
	return local_ref<org::apache::http::client::CookieStore>(get_jobject());
}

org::apache::http::impl::client::BasicCookieStore::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::client::BasicCookieStore::BasicCookieStore()
: object<org::apache::http::impl::client::BasicCookieStore>(
	call_new_object<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::impl::client::BasicCookieStore::addCookie(local_ref< org::apache::http::cookie::Cookie > const &a0)
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::client::BasicCookieStore::addCookies(local_ref< array< local_ref< org::apache::http::cookie::Cookie >, 1> > const &a0)
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::List > org::apache::http::impl::client::BasicCookieStore::getCookies()
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::List >
	>(get_jobject());
}

jboolean org::apache::http::impl::client::BasicCookieStore::clearExpired(local_ref< java::util::Date > const &a0)
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::impl::client::BasicCookieStore::toString()
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::apache::http::impl::client::BasicCookieStore::clear()
{
	return call_method<
		org::apache::http::impl::client::BasicCookieStore::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::client::BasicCookieStore::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::BasicCookieStore,"org/apache/http/impl/client/BasicCookieStore")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,1,"addCookie","(Lorg/apache/http/cookie/Cookie;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,2,"addCookies","([org.apache.http.cookie.Cookie)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,3,"getCookies","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,4,"clearExpired","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCookieStore,6,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
