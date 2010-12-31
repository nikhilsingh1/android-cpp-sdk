/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.Inflater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class Inflater;
	class Inflater
		: public object<Inflater>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)

		explicit Inflater(jobject jobj)
		: object<Inflater>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Inflater();
		Inflater(jboolean);
		void end();
		jboolean finished();
		jint getAdler();
		jlong getBytesRead();
		jlong getBytesWritten();
		jint getRemaining();
		jint getTotalIn();
		jint getTotalOut();
		jint inflate(local_ref< array<jbyte,1> >  const&);
		jint inflate(local_ref< array<jbyte,1> >  const&, jint, jint);
		jboolean needsDictionary();
		jboolean needsInput();
		void reset();
		void setDictionary(local_ref< array<jbyte,1> >  const&);
		void setDictionary(local_ref< array<jbyte,1> >  const&, jint, jint);
		void setInput(local_ref< array<jbyte,1> >  const&);
		void setInput(local_ref< array<jbyte,1> >  const&, jint, jint);
	}; //class Inflater

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL

namespace j2cpp {



java::util::zip::Inflater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::zip::Inflater::Inflater()
: object<java::util::zip::Inflater>(
	call_new_object<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(0),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::zip::Inflater::Inflater(jboolean a0)
: object<java::util::zip::Inflater>(
	call_new_object<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(1),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


void java::util::zip::Inflater::end()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(2),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}


jboolean java::util::zip::Inflater::finished()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(4),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jint java::util::zip::Inflater::getAdler()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(5),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jlong java::util::zip::Inflater::getBytesRead()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(6),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(6), 
		jlong >
	(get_jobject());
}

jlong java::util::zip::Inflater::getBytesWritten()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(7),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(7), 
		jlong >
	(get_jobject());
}

jint java::util::zip::Inflater::getRemaining()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(8),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint java::util::zip::Inflater::getTotalIn()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(9),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint java::util::zip::Inflater::getTotalOut()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(10),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint java::util::zip::Inflater::inflate(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(11),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject(), a0);
}

jint java::util::zip::Inflater::inflate(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(12),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jboolean java::util::zip::Inflater::needsDictionary()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(13),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject());
}

jboolean java::util::zip::Inflater::needsInput()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(14),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject());
}

void java::util::zip::Inflater::reset()
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(15),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

void java::util::zip::Inflater::setDictionary(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(16),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::util::zip::Inflater::setDictionary(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(17),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::zip::Inflater::setInput(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(18),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void java::util::zip::Inflater::setInput(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::Inflater::J2CPP_CLASS_NAME,
		java::util::zip::Inflater::J2CPP_METHOD_NAME(19),
		java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::zip::Inflater,"java/util/zip/Inflater")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,2,"end","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,3,"finalize","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,4,"finished","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,5,"getAdler","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,6,"getBytesRead","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,7,"getBytesWritten","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,8,"getRemaining","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,9,"getTotalIn","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,10,"getTotalOut","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,11,"inflate","([B)I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,12,"inflate","([BII)I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,13,"needsDictionary","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,14,"needsInput","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,15,"reset","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,16,"setDictionary","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,17,"setDictionary","([BII)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,18,"setInput","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,19,"setInput","([BII)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION