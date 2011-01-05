/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.util.VersionInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace util {

	class VersionInfo;
	class VersionInfo
		: public object<VersionInfo>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit VersionInfo(jobject jobj)
		: object<VersionInfo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getPackage();
		local_ref< java::lang::String > getModule();
		local_ref< java::lang::String > getRelease();
		local_ref< java::lang::String > getTimestamp();
		local_ref< java::lang::String > getClassloader();
		local_ref< java::lang::String > toString();
		static local_ref< array< local_ref< org::apache::http::util::VersionInfo >, 1> > loadVersionInfo(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::ClassLoader >  const&);
		static local_ref< org::apache::http::util::VersionInfo > loadVersionInfo(local_ref< java::lang::String >  const&, local_ref< java::lang::ClassLoader >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > UNAVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > VERSION_PROPERTY_FILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > PROPERTY_MODULE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > PROPERTY_RELEASE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > PROPERTY_TIMESTAMP;
	}; //class VersionInfo

} //namespace util
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_IMPL

namespace j2cpp {



org::apache::http::util::VersionInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > org::apache::http::util::VersionInfo::getPackage()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(1),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::util::VersionInfo::getModule()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(2),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::util::VersionInfo::getRelease()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(3),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::util::VersionInfo::getTimestamp()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(4),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::util::VersionInfo::getClassloader()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(5),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::util::VersionInfo::toString()
{
	return call_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(6),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< array< local_ref< org::apache::http::util::VersionInfo >, 1> > org::apache::http::util::VersionInfo::loadVersionInfo(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return call_static_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(7),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< org::apache::http::util::VersionInfo >, 1> >
	>(a0, a1);
}

local_ref< org::apache::http::util::VersionInfo > org::apache::http::util::VersionInfo::loadVersionInfo(local_ref< java::lang::String > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return call_static_method<
		org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
		org::apache::http::util::VersionInfo::J2CPP_METHOD_NAME(8),
		org::apache::http::util::VersionInfo::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::util::VersionInfo >
	>(a0, a1);
}



static_field<
	org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
	org::apache::http::util::VersionInfo::J2CPP_FIELD_NAME(0),
	org::apache::http::util::VersionInfo::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::util::VersionInfo::UNAVAILABLE;

static_field<
	org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
	org::apache::http::util::VersionInfo::J2CPP_FIELD_NAME(1),
	org::apache::http::util::VersionInfo::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::util::VersionInfo::VERSION_PROPERTY_FILE;

static_field<
	org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
	org::apache::http::util::VersionInfo::J2CPP_FIELD_NAME(2),
	org::apache::http::util::VersionInfo::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::util::VersionInfo::PROPERTY_MODULE;

static_field<
	org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
	org::apache::http::util::VersionInfo::J2CPP_FIELD_NAME(3),
	org::apache::http::util::VersionInfo::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::util::VersionInfo::PROPERTY_RELEASE;

static_field<
	org::apache::http::util::VersionInfo::J2CPP_CLASS_NAME,
	org::apache::http::util::VersionInfo::J2CPP_FIELD_NAME(4),
	org::apache::http::util::VersionInfo::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> org::apache::http::util::VersionInfo::PROPERTY_TIMESTAMP;


J2CPP_DEFINE_CLASS(org::apache::http::util::VersionInfo,"org/apache/http/util/VersionInfo")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,1,"getPackage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,2,"getModule","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,3,"getRelease","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,4,"getTimestamp","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,5,"getClassloader","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,7,"loadVersionInfo","([java.lang.StringLjava/lang/ClassLoader;)[org.apache.http.util.VersionInfo")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,8,"loadVersionInfo","(Ljava/lang/String;Ljava/lang/ClassLoader;)Lorg/apache/http/util/VersionInfo;")
J2CPP_DEFINE_METHOD(org::apache::http::util::VersionInfo,9,"fromMap","(Ljava/lang/String;Ljava/util/Map;Ljava/lang/ClassLoader;)Lorg/apache/http/util/VersionInfo;")
J2CPP_DEFINE_FIELD(org::apache::http::util::VersionInfo,0,"UNAVAILABLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::util::VersionInfo,1,"VERSION_PROPERTY_FILE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::util::VersionInfo,2,"PROPERTY_MODULE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::util::VersionInfo,3,"PROPERTY_RELEASE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::util::VersionInfo,4,"PROPERTY_TIMESTAMP","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_VERSIONINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
