/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GestureOverlayView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGesturePerformedListener; } } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGesturingListener; } } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGestureListener; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }


#include <android/content/Context.hpp>
#include <android/gesture/Gesture.hpp>
#include <android/gesture/GestureOverlayView.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Path.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/widget/FrameLayout.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureOverlayView;
	namespace GestureOverlayView_ {

		class OnGesturePerformedListener;
		class OnGesturePerformedListener
			: public object<OnGesturePerformedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnGesturePerformedListener(jobject jobj)
			: object<OnGesturePerformedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGesturePerformed(local_ref< android::gesture::GestureOverlayView >  const&, local_ref< android::gesture::Gesture >  const&);
		}; //class OnGesturePerformedListener

		class OnGesturingListener;
		class OnGesturingListener
			: public object<OnGesturingListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit OnGesturingListener(jobject jobj)
			: object<OnGesturingListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGesturingStarted(local_ref< android::gesture::GestureOverlayView >  const&);
			void onGesturingEnded(local_ref< android::gesture::GestureOverlayView >  const&);
		}; //class OnGesturingListener

		class OnGestureListener;
		class OnGestureListener
			: public object<OnGestureListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit OnGestureListener(jobject jobj)
			: object<OnGestureListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGestureStarted(local_ref< android::gesture::GestureOverlayView >  const&, local_ref< android::view::MotionEvent >  const&);
			void onGesture(local_ref< android::gesture::GestureOverlayView >  const&, local_ref< android::view::MotionEvent >  const&);
			void onGestureEnded(local_ref< android::gesture::GestureOverlayView >  const&, local_ref< android::view::MotionEvent >  const&);
			void onGestureCancelled(local_ref< android::gesture::GestureOverlayView >  const&, local_ref< android::view::MotionEvent >  const&);
		}; //class OnGestureListener

	} //namespace GestureOverlayView_

	class GestureOverlayView
		: public object<GestureOverlayView>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef GestureOverlayView_::OnGesturePerformedListener OnGesturePerformedListener;
		typedef GestureOverlayView_::OnGesturingListener OnGesturingListener;
		typedef GestureOverlayView_::OnGestureListener OnGestureListener;

		explicit GestureOverlayView(jobject jobj)
		: object<GestureOverlayView>(jobj)
		{
		}

		operator local_ref<android::widget::FrameLayout>() const;


		GestureOverlayView(local_ref< android::content::Context > const&);
		GestureOverlayView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		GestureOverlayView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< java::util::ArrayList > getCurrentStroke();
		jint getOrientation();
		void setOrientation(jint);
		void setGestureColor(jint);
		void setUncertainGestureColor(jint);
		jint getUncertainGestureColor();
		jint getGestureColor();
		jfloat getGestureStrokeWidth();
		void setGestureStrokeWidth(jfloat);
		jint getGestureStrokeType();
		void setGestureStrokeType(jint);
		jfloat getGestureStrokeLengthThreshold();
		void setGestureStrokeLengthThreshold(jfloat);
		jfloat getGestureStrokeSquarenessTreshold();
		void setGestureStrokeSquarenessTreshold(jfloat);
		jfloat getGestureStrokeAngleThreshold();
		void setGestureStrokeAngleThreshold(jfloat);
		jboolean isEventsInterceptionEnabled();
		void setEventsInterceptionEnabled(jboolean);
		jboolean isFadeEnabled();
		void setFadeEnabled(jboolean);
		local_ref< android::gesture::Gesture > getGesture();
		void setGesture(local_ref< android::gesture::Gesture >  const&);
		local_ref< android::graphics::Path > getGesturePath();
		local_ref< android::graphics::Path > getGesturePath(local_ref< android::graphics::Path >  const&);
		jboolean isGestureVisible();
		void setGestureVisible(jboolean);
		jlong getFadeOffset();
		void setFadeOffset(jlong);
		void addOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener >  const&);
		void removeOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener >  const&);
		void removeAllOnGestureListeners();
		void addOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener >  const&);
		void removeOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener >  const&);
		void removeAllOnGesturePerformedListeners();
		void addOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener >  const&);
		void removeOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener >  const&);
		void removeAllOnGesturingListeners();
		jboolean isGesturing();
		void draw(local_ref< android::graphics::Canvas >  const&);
		void clear(jboolean);
		void cancelClearAnimation();
		void cancelGesture();
		jboolean dispatchTouchEvent(local_ref< android::view::MotionEvent >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > GESTURE_STROKE_TYPE_SINGLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > GESTURE_STROKE_TYPE_MULTIPLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ORIENTATION_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ORIENTATION_VERTICAL;
	}; //class GestureOverlayView

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL

namespace j2cpp {




android::gesture::GestureOverlayView_::OnGesturePerformedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::gesture::GestureOverlayView_::OnGesturePerformedListener::onGesturePerformed(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGesturePerformedListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGesturePerformedListener::J2CPP_METHOD_NAME(0),
		android::gesture::GestureOverlayView_::OnGesturePerformedListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGesturePerformedListener,"android/gesture/GestureOverlayView$OnGesturePerformedListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturePerformedListener,0,"onGesturePerformed","(Landroid/gesture/GestureOverlayView;Landroid/gesture/Gesture;)V")


android::gesture::GestureOverlayView_::OnGesturingListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::gesture::GestureOverlayView_::OnGesturingListener::onGesturingStarted(local_ref< android::gesture::GestureOverlayView > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_METHOD_NAME(0),
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView_::OnGesturingListener::onGesturingEnded(local_ref< android::gesture::GestureOverlayView > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_METHOD_NAME(1),
		android::gesture::GestureOverlayView_::OnGesturingListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGesturingListener,"android/gesture/GestureOverlayView$OnGesturingListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturingListener,0,"onGesturingStarted","(Landroid/gesture/GestureOverlayView;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturingListener,1,"onGesturingEnded","(Landroid/gesture/GestureOverlayView;)V")


android::gesture::GestureOverlayView_::OnGestureListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureStarted(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_NAME(0),
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGesture(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_NAME(1),
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureEnded(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_NAME(2),
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureCancelled(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return call_method<
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_NAME(3),
		android::gesture::GestureOverlayView_::OnGestureListener::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGestureListener,"android/gesture/GestureOverlayView$OnGestureListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,0,"onGestureStarted","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,1,"onGesture","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,2,"onGestureEnded","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,3,"onGestureCancelled","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")



android::gesture::GestureOverlayView::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}


android::gesture::GestureOverlayView::GestureOverlayView(local_ref< android::content::Context > const &a0)
: object<android::gesture::GestureOverlayView>(
	call_new_object<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(0),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::gesture::GestureOverlayView::GestureOverlayView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::gesture::GestureOverlayView>(
	call_new_object<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(1),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::gesture::GestureOverlayView::GestureOverlayView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::gesture::GestureOverlayView>(
	call_new_object<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(2),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


local_ref< java::util::ArrayList > android::gesture::GestureOverlayView::getCurrentStroke()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(3),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::ArrayList > >
	(get_jobject());
}

jint android::gesture::GestureOverlayView::getOrientation()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(4),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setOrientation(jint a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(5),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::setGestureColor(jint a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(6),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::setUncertainGestureColor(jint a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(7),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

jint android::gesture::GestureOverlayView::getUncertainGestureColor()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(8),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint android::gesture::GestureOverlayView::getGestureColor()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(9),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jfloat android::gesture::GestureOverlayView::getGestureStrokeWidth()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(10),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(10), 
		jfloat >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureStrokeWidth(jfloat a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(11),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

jint android::gesture::GestureOverlayView::getGestureStrokeType()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(12),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureStrokeType(jint a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(13),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

jfloat android::gesture::GestureOverlayView::getGestureStrokeLengthThreshold()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(14),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(14), 
		jfloat >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureStrokeLengthThreshold(jfloat a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(15),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

jfloat android::gesture::GestureOverlayView::getGestureStrokeSquarenessTreshold()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(16),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(16), 
		jfloat >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureStrokeSquarenessTreshold(jfloat a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(17),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

jfloat android::gesture::GestureOverlayView::getGestureStrokeAngleThreshold()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(18),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(18), 
		jfloat >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureStrokeAngleThreshold(jfloat a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(19),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

jboolean android::gesture::GestureOverlayView::isEventsInterceptionEnabled()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(20),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setEventsInterceptionEnabled(jboolean a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(21),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

jboolean android::gesture::GestureOverlayView::isFadeEnabled()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(22),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setFadeEnabled(jboolean a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(23),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

local_ref< android::gesture::Gesture > android::gesture::GestureOverlayView::getGesture()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(24),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< android::gesture::Gesture > >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGesture(local_ref< android::gesture::Gesture > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(25),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}

local_ref< android::graphics::Path > android::gesture::GestureOverlayView::getGesturePath()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(26),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< android::graphics::Path > >
	(get_jobject());
}

local_ref< android::graphics::Path > android::gesture::GestureOverlayView::getGesturePath(local_ref< android::graphics::Path > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(27),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< android::graphics::Path > >
	(get_jobject(), a0);
}

jboolean android::gesture::GestureOverlayView::isGestureVisible()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(28),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setGestureVisible(jboolean a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(29),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}

jlong android::gesture::GestureOverlayView::getFadeOffset()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(30),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(30), 
		jlong >
	(get_jobject());
}

void android::gesture::GestureOverlayView::setFadeOffset(jlong a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(31),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::addOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(32),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(33),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeAllOnGestureListeners()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(34),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject());
}

void android::gesture::GestureOverlayView::addOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(35),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(36),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeAllOnGesturePerformedListeners()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(37),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject());
}

void android::gesture::GestureOverlayView::addOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(38),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(39),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::removeAllOnGesturingListeners()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(40),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject());
}

jboolean android::gesture::GestureOverlayView::isGesturing()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(41),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(41), 
		jboolean >
	(get_jobject());
}

void android::gesture::GestureOverlayView::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(42),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::clear(jboolean a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(43),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0);
}

void android::gesture::GestureOverlayView::cancelClearAnimation()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(44),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject());
}

void android::gesture::GestureOverlayView::cancelGesture()
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(45),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(45), 
		void >
	(get_jobject());
}


jboolean android::gesture::GestureOverlayView::dispatchTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
		android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(47),
		android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(47), 
		jboolean >
	(get_jobject(), a0);
}


static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(0),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::gesture::GestureOverlayView::GESTURE_STROKE_TYPE_SINGLE;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(1),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::gesture::GestureOverlayView::GESTURE_STROKE_TYPE_MULTIPLE;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(2),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::gesture::GestureOverlayView::ORIENTATION_HORIZONTAL;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(3),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::gesture::GestureOverlayView::ORIENTATION_VERTICAL;


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView,"android/gesture/GestureOverlayView")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,3,"getCurrentStroke","()Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,4,"getOrientation","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,5,"setOrientation","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,6,"setGestureColor","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,7,"setUncertainGestureColor","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,8,"getUncertainGestureColor","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,9,"getGestureColor","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,10,"getGestureStrokeWidth","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,11,"setGestureStrokeWidth","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,12,"getGestureStrokeType","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,13,"setGestureStrokeType","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,14,"getGestureStrokeLengthThreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,15,"setGestureStrokeLengthThreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,16,"getGestureStrokeSquarenessTreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,17,"setGestureStrokeSquarenessTreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,18,"getGestureStrokeAngleThreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,19,"setGestureStrokeAngleThreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,20,"isEventsInterceptionEnabled","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,21,"setEventsInterceptionEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,22,"isFadeEnabled","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,23,"setFadeEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,24,"getGesture","()Landroid/gesture/Gesture;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,25,"setGesture","(Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,26,"getGesturePath","()Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,27,"getGesturePath","(Landroid/graphics/Path;)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,28,"isGestureVisible","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,29,"setGestureVisible","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,30,"getFadeOffset","()J")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,31,"setFadeOffset","(J)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,32,"addOnGestureListener","(Landroid/gesture/GestureOverlayView$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,33,"removeOnGestureListener","(Landroid/gesture/GestureOverlayView$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,34,"removeAllOnGestureListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,35,"addOnGesturePerformedListener","(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,36,"removeOnGesturePerformedListener","(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,37,"removeAllOnGesturePerformedListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,38,"addOnGesturingListener","(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,39,"removeOnGesturingListener","(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,40,"removeAllOnGesturingListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,41,"isGesturing","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,42,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,43,"clear","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,44,"cancelClearAnimation","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,45,"cancelGesture","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,46,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,47,"dispatchTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,0,"GESTURE_STROKE_TYPE_SINGLE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,1,"GESTURE_STROKE_TYPE_MULTIPLE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,2,"ORIENTATION_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,3,"ORIENTATION_VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION