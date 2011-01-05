/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.AbstractPoolEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class AbstractPoolEntry;
	class AbstractPoolEntry
		: public object<AbstractPoolEntry>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit AbstractPoolEntry(jobject jobj)
		: object<AbstractPoolEntry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > getState();
		void setState(local_ref< java::lang::Object >  const&);
		void open(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		void tunnelTarget(jboolean, local_ref< org::apache::http::params::HttpParams >  const&);
		void tunnelProxy(local_ref< org::apache::http::HttpHost >  const&, jboolean, local_ref< org::apache::http::params::HttpParams >  const&);
		void layerProtocol(local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);

	}; //class AbstractPoolEntry

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::AbstractPoolEntry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > org::apache::http::impl::conn::AbstractPoolEntry::getState()
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void org::apache::http::impl::conn::AbstractPoolEntry::setState(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::AbstractPoolEntry::open(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::AbstractPoolEntry::tunnelTarget(jboolean a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::AbstractPoolEntry::tunnelProxy(local_ref< org::apache::http::HttpHost > const &a0, jboolean a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::AbstractPoolEntry::layerProtocol(local_ref< org::apache::http::protocol::HttpContext > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::AbstractPoolEntry::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::AbstractPoolEntry,"org/apache/http/impl/conn/AbstractPoolEntry")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,0,"<init>","(Lorg/apache/http/conn/ClientConnectionOperator;Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,1,"getState","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,2,"setState","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,3,"open","(Lorg/apache/http/conn/routing/HttpRoute;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,4,"tunnelTarget","(ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,5,"tunnelProxy","(Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,6,"layerProtocol","(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::AbstractPoolEntry,7,"shutdownEntry","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::AbstractPoolEntry,0,"connOperator","Lorg/apache/http/conn/ClientConnectionOperator;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::AbstractPoolEntry,1,"connection","Lorg/apache/http/conn/OperatedClientConnection;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::AbstractPoolEntry,2,"route","Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::AbstractPoolEntry,3,"state","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::AbstractPoolEntry,4,"tracker","Lorg/apache/http/conn/routing/RouteTracker;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_ABSTRACTPOOLENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
