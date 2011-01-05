/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.SingleClientConnManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpInetConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class AbstractPooledConnAdapter; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class AbstractClientConnAdapter; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class AbstractPoolEntry; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpClientConnection; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <org/apache/http/HttpClientConnection.hpp>
#include <org/apache/http/HttpConnection.hpp>
#include <org/apache/http/HttpInetConnection.hpp>
#include <org/apache/http/conn/ClientConnectionManager.hpp>
#include <org/apache/http/conn/ClientConnectionRequest.hpp>
#include <org/apache/http/conn/ConnectionReleaseTrigger.hpp>
#include <org/apache/http/conn/ManagedClientConnection.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/conn/scheme/SchemeRegistry.hpp>
#include <org/apache/http/impl/conn/AbstractClientConnAdapter.hpp>
#include <org/apache/http/impl/conn/AbstractPoolEntry.hpp>
#include <org/apache/http/impl/conn/AbstractPooledConnAdapter.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class SingleClientConnManager;
	namespace SingleClientConnManager_ {

		class ConnAdapter;
		class ConnAdapter
			: public object<ConnAdapter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)

			explicit ConnAdapter(jobject jobj)
			: object<ConnAdapter>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<org::apache::http::HttpInetConnection>() const;
			operator local_ref<org::apache::http::impl::conn::AbstractPooledConnAdapter>() const;
			operator local_ref<org::apache::http::impl::conn::AbstractClientConnAdapter>() const;
			operator local_ref<org::apache::http::conn::ManagedClientConnection>() const;
			operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const;
			operator local_ref<org::apache::http::HttpConnection>() const;
			operator local_ref<org::apache::http::HttpClientConnection>() const;



		}; //class ConnAdapter

		class PoolEntry;
		class PoolEntry
			: public object<PoolEntry>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit PoolEntry(jobject jobj)
			: object<PoolEntry>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<org::apache::http::impl::conn::AbstractPoolEntry>() const;



		}; //class PoolEntry

	} //namespace SingleClientConnManager_

	class SingleClientConnManager
		: public object<SingleClientConnManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		typedef SingleClientConnManager_::ConnAdapter ConnAdapter;
		typedef SingleClientConnManager_::PoolEntry PoolEntry;

		explicit SingleClientConnManager(jobject jobj)
		: object<SingleClientConnManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::ClientConnectionManager>() const;


		SingleClientConnManager(local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::conn::scheme::SchemeRegistry > const&);
		local_ref< org::apache::http::conn::scheme::SchemeRegistry > getSchemeRegistry();
		local_ref< org::apache::http::conn::ClientConnectionRequest > requestConnection(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< java::lang::Object >  const&);
		local_ref< org::apache::http::conn::ManagedClientConnection > getConnection(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< java::lang::Object >  const&);
		void releaseConnection(local_ref< org::apache::http::conn::ManagedClientConnection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void closeExpiredConnections();
		void closeIdleConnections(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void shutdown();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > MISUSE_MESSAGE;
	}; //class SingleClientConnManager

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_IMPL

namespace j2cpp {




org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::HttpInetConnection>() const
{
	return local_ref<org::apache::http::HttpInetConnection>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::impl::conn::AbstractPooledConnAdapter>() const
{
	return local_ref<org::apache::http::impl::conn::AbstractPooledConnAdapter>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::impl::conn::AbstractClientConnAdapter>() const
{
	return local_ref<org::apache::http::impl::conn::AbstractClientConnAdapter>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::conn::ManagedClientConnection>() const
{
	return local_ref<org::apache::http::conn::ManagedClientConnection>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const
{
	return local_ref<org::apache::http::conn::ConnectionReleaseTrigger>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::HttpConnection>() const
{
	return local_ref<org::apache::http::HttpConnection>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter::operator local_ref<org::apache::http::HttpClientConnection>() const
{
	return local_ref<org::apache::http::HttpClientConnection>(get_jobject());
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter,"org/apache/http/impl/conn/SingleClientConnManager$ConnAdapter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter,0,"<init>","(Lorg/apache/http/impl/conn/SingleClientConnManager;Lorg/apache/http/impl/conn/SingleClientConnManager$PoolEntry;Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager_::ConnAdapter,0,"this$0","Lorg/apache/http/impl/conn/SingleClientConnManager;")


org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry::operator local_ref<org::apache::http::impl::conn::AbstractPoolEntry>() const
{
	return local_ref<org::apache::http::impl::conn::AbstractPoolEntry>(get_jobject());
}






J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry,"org/apache/http/impl/conn/SingleClientConnManager$PoolEntry")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry,0,"<init>","(Lorg/apache/http/impl/conn/SingleClientConnManager;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry,1,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry,2,"shutdown","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager_::PoolEntry,0,"this$0","Lorg/apache/http/impl/conn/SingleClientConnManager;")



org::apache::http::impl::conn::SingleClientConnManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::SingleClientConnManager::operator local_ref<org::apache::http::conn::ClientConnectionManager>() const
{
	return local_ref<org::apache::http::conn::ClientConnectionManager>(get_jobject());
}


org::apache::http::impl::conn::SingleClientConnManager::SingleClientConnManager(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::conn::scheme::SchemeRegistry > const &a1)
: object<org::apache::http::impl::conn::SingleClientConnManager>(
	call_new_object<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



local_ref< org::apache::http::conn::scheme::SchemeRegistry > org::apache::http::impl::conn::SingleClientConnManager::getSchemeRegistry()
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::conn::scheme::SchemeRegistry >
	>(get_jobject());
}



local_ref< org::apache::http::conn::ClientConnectionRequest > org::apache::http::impl::conn::SingleClientConnManager::requestConnection(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::conn::ClientConnectionRequest >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::conn::ManagedClientConnection > org::apache::http::impl::conn::SingleClientConnManager::getConnection(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::conn::ManagedClientConnection >
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::SingleClientConnManager::releaseConnection(local_ref< org::apache::http::conn::ManagedClientConnection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::SingleClientConnManager::closeExpiredConnections()
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

void org::apache::http::impl::conn::SingleClientConnManager::closeIdleConnections(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::SingleClientConnManager::shutdown()
{
	return call_method<
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::conn::SingleClientConnManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}



static_field<
	org::apache::http::impl::conn::SingleClientConnManager::J2CPP_CLASS_NAME,
	org::apache::http::impl::conn::SingleClientConnManager::J2CPP_FIELD_NAME(0),
	org::apache::http::impl::conn::SingleClientConnManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::impl::conn::SingleClientConnManager::MISUSE_MESSAGE;


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::SingleClientConnManager,"org/apache/http/impl/conn/SingleClientConnManager")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,0,"<init>","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/scheme/SchemeRegistry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,1,"finalize","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,2,"getSchemeRegistry","()Lorg/apache/http/conn/scheme/SchemeRegistry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,3,"createConnectionOperator","(Lorg/apache/http/conn/scheme/SchemeRegistry;)Lorg/apache/http/conn/ClientConnectionOperator;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,4,"assertStillUp","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,5,"requestConnection","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ClientConnectionRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,6,"getConnection","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ManagedClientConnection;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,7,"releaseConnection","(Lorg/apache/http/conn/ManagedClientConnection;JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,8,"closeExpiredConnections","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,9,"closeIdleConnections","(JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,10,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::SingleClientConnManager,11,"revokeConnection","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,0,"MISUSE_MESSAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,1,"schemeRegistry","Lorg/apache/http/conn/scheme/SchemeRegistry;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,2,"connOperator","Lorg/apache/http/conn/ClientConnectionOperator;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,3,"uniquePoolEntry","Lorg/apache/http/impl/conn/SingleClientConnManager$PoolEntry;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,4,"managedConn","Lorg/apache/http/impl/conn/SingleClientConnManager$ConnAdapter;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,5,"lastReleaseTime","J")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,6,"connectionExpiresTime","J")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,7,"alwaysShutDown","Z")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::SingleClientConnManager,8,"isShutDown","Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
