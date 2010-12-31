/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.PermissionCollection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PermissionCollection;
	class PermissionCollection
		: public object<PermissionCollection>
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

		explicit PermissionCollection(jobject jobj)
		: object<PermissionCollection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		PermissionCollection();
		void add(local_ref< java::security::Permission >  const&);
		local_ref< java::util::Enumeration > elements();
		jboolean implies(local_ref< java::security::Permission >  const&);
		jboolean isReadOnly();
		void setReadOnly();
		local_ref< java::lang::String > toString();
	}; //class PermissionCollection

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_IMPL

namespace j2cpp {



java::security::PermissionCollection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::PermissionCollection::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::PermissionCollection::PermissionCollection()
: object<java::security::PermissionCollection>(
	call_new_object<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(0),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void java::security::PermissionCollection::add(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(1),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Enumeration > java::security::PermissionCollection::elements()
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(2),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

jboolean java::security::PermissionCollection::implies(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(3),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::security::PermissionCollection::isReadOnly()
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(4),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

void java::security::PermissionCollection::setReadOnly()
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(5),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::security::PermissionCollection::toString()
{
	return call_method<
		java::security::PermissionCollection::J2CPP_CLASS_NAME,
		java::security::PermissionCollection::J2CPP_METHOD_NAME(6),
		java::security::PermissionCollection::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::PermissionCollection,"java/security/PermissionCollection")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,1,"add","(Ljava/security/Permission;)V")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,2,"elements","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,3,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,4,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,5,"setReadOnly","()V")
J2CPP_DEFINE_METHOD(java::security::PermissionCollection,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PERMISSIONCOLLECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION