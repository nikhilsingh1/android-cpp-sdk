/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.params.ConnConnectionParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnConnectionParamBean;
	class ConnConnectionParamBean
		: public object<ConnConnectionParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConnConnectionParamBean(jobject jobj)
		: object<ConnConnectionParamBean>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;
		operator local_ref<java::lang::Object>() const;


		ConnConnectionParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setMaxStatusLineGarbage(jint);
	}; //class ConnConnectionParamBean

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::params::ConnConnectionParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}

org::apache::http::conn::params::ConnConnectionParamBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::conn::params::ConnConnectionParamBean::ConnConnectionParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::conn::params::ConnConnectionParamBean>(
	call_new_object<
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void org::apache::http::conn::params::ConnConnectionParamBean::setMaxStatusLineGarbage(jint a0)
{
	return call_method<
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::params::ConnConnectionParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnConnectionParamBean,"org/apache/http/conn/params/ConnConnectionParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnConnectionParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnConnectionParamBean,1,"setMaxStatusLineGarbage","(I)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
