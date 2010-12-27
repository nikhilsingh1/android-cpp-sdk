/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.routing.HttpRouteDirector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo; } } } } } }


#include <org/apache/http/conn/routing/RouteInfo.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace routing {

	class HttpRouteDirector;
	class HttpRouteDirector
		: public cpp_object<HttpRouteDirector>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		HttpRouteDirector(jobject jobj)
		: cpp_object<HttpRouteDirector>(jobj)
		{
		}

		cpp_int nextStep(local_ref< org::apache::http::conn::routing::RouteInfo > const&, local_ref< org::apache::http::conn::routing::RouteInfo > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > UNREACHABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > COMPLETE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > CONNECT_TARGET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > CONNECT_PROXY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > TUNNEL_TARGET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > TUNNEL_PROXY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > LAYER_PROTOCOL;
	}; //class HttpRouteDirector

} //namespace routing
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_IMPL

namespace j2cpp {


cpp_int org::apache::http::conn::routing::HttpRouteDirector::nextStep(local_ref< org::apache::http::conn::routing::RouteInfo > const &a0, local_ref< org::apache::http::conn::routing::RouteInfo > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(0),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::UNREACHABLE;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(1),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::COMPLETE;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(2),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::CONNECT_TARGET;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(3),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::CONNECT_PROXY;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(4),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::TUNNEL_TARGET;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(5),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::TUNNEL_PROXY;

static_field<
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_CLASS_NAME,
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_NAME(6),
	org::apache::http::conn::routing::HttpRouteDirector::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> org::apache::http::conn::routing::HttpRouteDirector::LAYER_PROTOCOL;


J2CPP_DEFINE_CLASS(org::apache::http::conn::routing::HttpRouteDirector,"org/apache/http/conn/routing/HttpRouteDirector")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRouteDirector,0,"nextStep","(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,0,"UNREACHABLE","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,1,"COMPLETE","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,2,"CONNECT_TARGET","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,3,"CONNECT_PROXY","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,4,"TUNNEL_TARGET","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,5,"TUNNEL_PROXY","I")
J2CPP_DEFINE_FIELD(org::apache::http::conn::routing::HttpRouteDirector,6,"LAYER_PROTOCOL","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEDIRECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
