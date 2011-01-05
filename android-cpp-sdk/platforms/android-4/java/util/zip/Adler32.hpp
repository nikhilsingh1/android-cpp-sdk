/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.Adler32
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_DECL


namespace j2cpp { namespace java { namespace util { namespace zip { class Checksum; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/zip/Checksum.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class Adler32;
	class Adler32
		: public object<Adler32>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Adler32(jobject jobj)
		: object<Adler32>(jobj)
		{
		}

		operator local_ref<java::util::zip::Checksum>() const;
		operator local_ref<java::lang::Object>() const;


		Adler32();
		jlong getValue();
		void reset();
		void update(jint);
		void update(local_ref< array<jbyte,1> >  const&);
		void update(local_ref< array<jbyte,1> >  const&, jint, jint);
	}; //class Adler32

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_IMPL

namespace j2cpp {



java::util::zip::Adler32::operator local_ref<java::util::zip::Checksum>() const
{
	return local_ref<java::util::zip::Checksum>(get_jobject());
}

java::util::zip::Adler32::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::zip::Adler32::Adler32()
: object<java::util::zip::Adler32>(
	call_new_object<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(0),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jlong java::util::zip::Adler32::getValue()
{
	return call_method<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(1),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject());
}

void java::util::zip::Adler32::reset()
{
	return call_method<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(2),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::util::zip::Adler32::update(jint a0)
{
	return call_method<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(3),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::Adler32::update(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(4),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::Adler32::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::Adler32::J2CPP_CLASS_NAME,
		java::util::zip::Adler32::J2CPP_METHOD_NAME(5),
		java::util::zip::Adler32::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::zip::Adler32,"java/util/zip/Adler32")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,1,"getValue","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,2,"reset","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,3,"update","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,4,"update","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::Adler32,5,"update","([BII)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ADLER32_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
