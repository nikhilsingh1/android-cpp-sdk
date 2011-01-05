/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.auth.Destroyable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth {

	class Destroyable;
	class Destroyable
		: public object<Destroyable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Destroyable(jobject jobj)
		: object<Destroyable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void destroy();
		jboolean isDestroyed();
	}; //class Destroyable

} //namespace auth
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_IMPL

namespace j2cpp {



javax::security::auth::Destroyable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void javax::security::auth::Destroyable::destroy()
{
	return call_method<
		javax::security::auth::Destroyable::J2CPP_CLASS_NAME,
		javax::security::auth::Destroyable::J2CPP_METHOD_NAME(0),
		javax::security::auth::Destroyable::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

jboolean javax::security::auth::Destroyable::isDestroyed()
{
	return call_method<
		javax::security::auth::Destroyable::J2CPP_CLASS_NAME,
		javax::security::auth::Destroyable::J2CPP_METHOD_NAME(1),
		javax::security::auth::Destroyable::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::security::auth::Destroyable,"javax/security/auth/Destroyable")
J2CPP_DEFINE_METHOD(javax::security::auth::Destroyable,0,"destroy","()V")
J2CPP_DEFINE_METHOD(javax::security::auth::Destroyable,1,"isDestroyed","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_DESTROYABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
