/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultConnectionKeepAliveStrategy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ConnectionKeepAliveStrategy; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/conn/ConnectionKeepAliveStrategy.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultConnectionKeepAliveStrategy;
	class DefaultConnectionKeepAliveStrategy
		: public object<DefaultConnectionKeepAliveStrategy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DefaultConnectionKeepAliveStrategy(jobject jobj)
		: object<DefaultConnectionKeepAliveStrategy>(jobj)
		{
		}

		operator local_ref<org::apache::http::conn::ConnectionKeepAliveStrategy>() const;
		operator local_ref<java::lang::Object>() const;


		DefaultConnectionKeepAliveStrategy();
		jlong getKeepAliveDuration(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class DefaultConnectionKeepAliveStrategy

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::operator local_ref<org::apache::http::conn::ConnectionKeepAliveStrategy>() const
{
	return local_ref<org::apache::http::conn::ConnectionKeepAliveStrategy>(get_jobject());
}

org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::DefaultConnectionKeepAliveStrategy()
: object<org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy>(
	call_new_object<
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jlong org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::getKeepAliveDuration(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy,"org/apache/http/impl/client/DefaultConnectionKeepAliveStrategy")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy,1,"getKeepAliveDuration","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)J")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
