/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLSessionContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }


#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLSessionContext;
	class SSLSessionContext
		: public object<SSLSessionContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SSLSessionContext(jobject jobj)
		: object<SSLSessionContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::util::Enumeration > getIds();
		local_ref< javax::net::ssl::SSLSession > getSession(local_ref< array<jbyte,1> >  const&);
		jint getSessionCacheSize();
		jint getSessionTimeout();
		void setSessionCacheSize(jint);
		void setSessionTimeout(jint);
	}; //class SSLSessionContext

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLSessionContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::util::Enumeration > javax::net::ssl::SSLSessionContext::getIds()
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(0),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLSessionContext::getSession(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(1),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::net::ssl::SSLSession >
	>(get_jobject(), a0);
}

jint javax::net::ssl::SSLSessionContext::getSessionCacheSize()
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(2),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint javax::net::ssl::SSLSessionContext::getSessionTimeout()
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(3),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void javax::net::ssl::SSLSessionContext::setSessionCacheSize(jint a0)
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(4),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void javax::net::ssl::SSLSessionContext::setSessionTimeout(jint a0)
{
	return call_method<
		javax::net::ssl::SSLSessionContext::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_NAME(5),
		javax::net::ssl::SSLSessionContext::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLSessionContext,"javax/net/ssl/SSLSessionContext")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,0,"getIds","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,1,"getSession","([B)Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,2,"getSessionCacheSize","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,3,"getSessionTimeout","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,4,"setSessionCacheSize","(I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionContext,5,"setSessionTimeout","(I)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
