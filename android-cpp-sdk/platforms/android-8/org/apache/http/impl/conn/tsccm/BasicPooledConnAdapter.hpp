/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.BasicPooledConnAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_DECL






namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class BasicPooledConnAdapter;
	class BasicPooledConnAdapter
		: public cpp_object<BasicPooledConnAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		BasicPooledConnAdapter(jobject jobj)
		: cpp_object<BasicPooledConnAdapter>(jobj)
		{
		}

	}; //class BasicPooledConnAdapter

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter > create< org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter>(local_ref< org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager > const &a0, local_ref< org::apache::http::impl::conn::AbstractPoolEntry > const &a1)
{
	return local_ref< org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter::J2CPP_CLASS_NAME, org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}





J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter,"org/apache/http/impl/conn/tsccm/BasicPooledConnAdapter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter,0,"<init>","(Lorg/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager;Lorg/apache/http/impl/conn/AbstractPoolEntry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter,1,"getManager","()Lorg/apache/http/conn/ClientConnectionManager;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter,2,"getPoolEntry","()Lorg/apache/http/impl/conn/AbstractPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter,3,"detach","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLEDCONNADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION