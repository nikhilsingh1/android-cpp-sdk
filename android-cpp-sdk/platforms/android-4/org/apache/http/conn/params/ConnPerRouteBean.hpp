/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.params.ConnPerRouteBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnPerRoute; } } } } } }


#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/conn/params/ConnPerRoute.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnPerRouteBean;
	class ConnPerRouteBean
		: public object<ConnPerRouteBean>
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

		explicit ConnPerRouteBean(jobject jobj)
		: object<ConnPerRouteBean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::params::ConnPerRoute>() const;


		ConnPerRouteBean(jint);
		ConnPerRouteBean();
		jint getDefaultMax();
		void setDefaultMaxPerRoute(jint);
		void setMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, jint);
		jint getMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute >  const&);
		void setMaxForRoutes(local_ref< java::util::Map >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT_MAX_CONNECTIONS_PER_ROUTE;
	}; //class ConnPerRouteBean

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::params::ConnPerRouteBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::params::ConnPerRouteBean::operator local_ref<org::apache::http::conn::params::ConnPerRoute>() const
{
	return local_ref<org::apache::http::conn::params::ConnPerRoute>(get_jobject());
}


org::apache::http::conn::params::ConnPerRouteBean::ConnPerRouteBean(jint a0)
: object<org::apache::http::conn::params::ConnPerRouteBean>(
	call_new_object<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



org::apache::http::conn::params::ConnPerRouteBean::ConnPerRouteBean()
: object<org::apache::http::conn::params::ConnPerRouteBean>(
	call_new_object<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}


jint org::apache::http::conn::params::ConnPerRouteBean::getDefaultMax()
{
	return call_method<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void org::apache::http::conn::params::ConnPerRouteBean::setDefaultMaxPerRoute(jint a0)
{
	return call_method<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, jint a1)
{
	return call_method<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jint org::apache::http::conn::params::ConnPerRouteBean::getMaxForRoute(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0)
{
	return call_method<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoutes(local_ref< java::util::Map > const &a0)
{
	return call_method<
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::params::ConnPerRouteBean::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


static_field<
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_CLASS_NAME,
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_FIELD_NAME(0),
	org::apache::http::conn::params::ConnPerRouteBean::J2CPP_FIELD_SIGNATURE(0),
	jint
> org::apache::http::conn::params::ConnPerRouteBean::DEFAULT_MAX_CONNECTIONS_PER_ROUTE;


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnPerRouteBean,"org/apache/http/conn/params/ConnPerRouteBean")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,2,"getDefaultMax","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,3,"setDefaultMaxPerRoute","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,4,"setMaxForRoute","(Lorg/apache/http/conn/routing/HttpRoute;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,5,"getMaxForRoute","(Lorg/apache/http/conn/routing/HttpRoute;)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnPerRouteBean,6,"setMaxForRoutes","(Ljava/util/Map;)V")
J2CPP_DEFINE_FIELD(org::apache::http::conn::params::ConnPerRouteBean,0,"DEFAULT_MAX_CONNECTIONS_PER_ROUTE","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
