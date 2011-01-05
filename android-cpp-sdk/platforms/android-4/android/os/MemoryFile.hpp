/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.MemoryFile
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MEMORYFILE_HPP_DECL
#define J2CPP_ANDROID_OS_MEMORYFILE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class MemoryFile;
	class MemoryFile
		: public object<MemoryFile>
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

		explicit MemoryFile(jobject jobj)
		: object<MemoryFile>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MemoryFile(local_ref< java::lang::String > const&, jint);
		void close();
		jint length();
		jboolean isPurgingAllowed();
		jboolean allowPurging(jboolean);
		local_ref< java::io::InputStream > getInputStream();
		local_ref< java::io::OutputStream > getOutputStream();
		jint readBytes(local_ref< array<jbyte,1> >  const&, jint, jint, jint);
		void writeBytes(local_ref< array<jbyte,1> >  const&, jint, jint, jint);
	}; //class MemoryFile

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MEMORYFILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MEMORYFILE_HPP_IMPL
#define J2CPP_ANDROID_OS_MEMORYFILE_HPP_IMPL

namespace j2cpp {



android::os::MemoryFile::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::MemoryFile::MemoryFile(local_ref< java::lang::String > const &a0, jint a1)
: object<android::os::MemoryFile>(
	call_new_object<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(0),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::os::MemoryFile::close()
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(1),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


jint android::os::MemoryFile::length()
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(3),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jboolean android::os::MemoryFile::isPurgingAllowed()
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(4),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jboolean android::os::MemoryFile::allowPurging(jboolean a0)
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(5),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::io::InputStream > android::os::MemoryFile::getInputStream()
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(6),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

local_ref< java::io::OutputStream > android::os::MemoryFile::getOutputStream()
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(7),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::io::OutputStream >
	>(get_jobject());
}

jint android::os::MemoryFile::readBytes(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(8),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0, a1, a2, a3);
}

void android::os::MemoryFile::writeBytes(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::os::MemoryFile::J2CPP_CLASS_NAME,
		android::os::MemoryFile::J2CPP_METHOD_NAME(9),
		android::os::MemoryFile::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::os::MemoryFile,"android/os/MemoryFile")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,1,"close","()V")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,3,"length","()I")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,4,"isPurgingAllowed","()Z")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,5,"allowPurging","(Z)Z")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,6,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,7,"getOutputStream","()Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,8,"readBytes","([BIII)I")
J2CPP_DEFINE_METHOD(android::os::MemoryFile,9,"writeBytes","([BIII)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MEMORYFILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
