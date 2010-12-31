/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.FaceDetector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_DECL
#define J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { class PointF; } } }
namespace j2cpp { namespace android { namespace media { namespace FaceDetector_ { class Face; } } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/PointF.hpp>
#include <android/media/FaceDetector.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace media {

	class FaceDetector;
	namespace FaceDetector_ {

		class Face;
		class Face
			: public object<Face>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit Face(jobject jobj)
			: object<Face>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jfloat confidence();
			void getMidPoint(local_ref< android::graphics::PointF >  const&);
			jfloat eyesDistance();
			jfloat pose(jint);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jfloat > CONFIDENCE_THRESHOLD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > EULER_X;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > EULER_Y;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > EULER_Z;
		}; //class Face

	} //namespace FaceDetector_

	class FaceDetector
		: public object<FaceDetector>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		typedef FaceDetector_::Face Face;

		explicit FaceDetector(jobject jobj)
		: object<FaceDetector>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		FaceDetector(jint, jint, jint);
		jint findFaces(local_ref< android::graphics::Bitmap >  const&, local_ref< array< local_ref< android::media::FaceDetector_::Face >, 1> >  const&);
	}; //class FaceDetector

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_IMPL

namespace j2cpp {




android::media::FaceDetector_::Face::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jfloat android::media::FaceDetector_::Face::confidence()
{
	return call_method<
		android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
		android::media::FaceDetector_::Face::J2CPP_METHOD_NAME(1),
		android::media::FaceDetector_::Face::J2CPP_METHOD_SIGNATURE(1), 
		jfloat >
	(get_jobject());
}

void android::media::FaceDetector_::Face::getMidPoint(local_ref< android::graphics::PointF > const &a0)
{
	return call_method<
		android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
		android::media::FaceDetector_::Face::J2CPP_METHOD_NAME(2),
		android::media::FaceDetector_::Face::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jfloat android::media::FaceDetector_::Face::eyesDistance()
{
	return call_method<
		android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
		android::media::FaceDetector_::Face::J2CPP_METHOD_NAME(3),
		android::media::FaceDetector_::Face::J2CPP_METHOD_SIGNATURE(3), 
		jfloat >
	(get_jobject());
}

jfloat android::media::FaceDetector_::Face::pose(jint a0)
{
	return call_method<
		android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
		android::media::FaceDetector_::Face::J2CPP_METHOD_NAME(4),
		android::media::FaceDetector_::Face::J2CPP_METHOD_SIGNATURE(4), 
		jfloat >
	(get_jobject(), a0);
}


static_field<
	android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
	android::media::FaceDetector_::Face::J2CPP_FIELD_NAME(0),
	android::media::FaceDetector_::Face::J2CPP_FIELD_SIGNATURE(0),
	jfloat
> android::media::FaceDetector_::Face::CONFIDENCE_THRESHOLD;

static_field<
	android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
	android::media::FaceDetector_::Face::J2CPP_FIELD_NAME(1),
	android::media::FaceDetector_::Face::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::FaceDetector_::Face::EULER_X;

static_field<
	android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
	android::media::FaceDetector_::Face::J2CPP_FIELD_NAME(2),
	android::media::FaceDetector_::Face::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::FaceDetector_::Face::EULER_Y;

static_field<
	android::media::FaceDetector_::Face::J2CPP_CLASS_NAME,
	android::media::FaceDetector_::Face::J2CPP_FIELD_NAME(3),
	android::media::FaceDetector_::Face::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::FaceDetector_::Face::EULER_Z;


J2CPP_DEFINE_CLASS(android::media::FaceDetector_::Face,"android/media/FaceDetector$Face")
J2CPP_DEFINE_METHOD(android::media::FaceDetector_::Face,0,"<init>","(Landroid/media/FaceDetector;)V")
J2CPP_DEFINE_METHOD(android::media::FaceDetector_::Face,1,"confidence","()F")
J2CPP_DEFINE_METHOD(android::media::FaceDetector_::Face,2,"getMidPoint","(Landroid/graphics/PointF;)V")
J2CPP_DEFINE_METHOD(android::media::FaceDetector_::Face,3,"eyesDistance","()F")
J2CPP_DEFINE_METHOD(android::media::FaceDetector_::Face,4,"pose","(I)F")
J2CPP_DEFINE_FIELD(android::media::FaceDetector_::Face,0,"CONFIDENCE_THRESHOLD","F")
J2CPP_DEFINE_FIELD(android::media::FaceDetector_::Face,1,"EULER_X","I")
J2CPP_DEFINE_FIELD(android::media::FaceDetector_::Face,2,"EULER_Y","I")
J2CPP_DEFINE_FIELD(android::media::FaceDetector_::Face,3,"EULER_Z","I")
J2CPP_DEFINE_FIELD(android::media::FaceDetector_::Face,4,"this$0","Landroid/media/FaceDetector;")



android::media::FaceDetector::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::FaceDetector::FaceDetector(jint a0, jint a1, jint a2)
: object<android::media::FaceDetector>(
	call_new_object<
		android::media::FaceDetector::J2CPP_CLASS_NAME,
		android::media::FaceDetector::J2CPP_METHOD_NAME(0),
		android::media::FaceDetector::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


jint android::media::FaceDetector::findFaces(local_ref< android::graphics::Bitmap > const &a0, local_ref< array< local_ref< android::media::FaceDetector_::Face >, 1> > const &a1)
{
	return call_method<
		android::media::FaceDetector::J2CPP_CLASS_NAME,
		android::media::FaceDetector::J2CPP_METHOD_NAME(1),
		android::media::FaceDetector::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(android::media::FaceDetector,"android/media/FaceDetector")
J2CPP_DEFINE_METHOD(android::media::FaceDetector,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(android::media::FaceDetector,1,"findFaces","(Landroid/graphics/Bitmap;[android.media.FaceDetector.Face)I")
J2CPP_DEFINE_METHOD(android::media::FaceDetector,2,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_FACEDETECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION