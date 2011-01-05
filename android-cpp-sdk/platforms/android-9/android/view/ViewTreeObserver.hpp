/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.ViewTreeObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnScrollChangedListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalFocusChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnTouchModeChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalLayoutListener; } } } }


#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewTreeObserver;
	namespace ViewTreeObserver_ {

		class OnScrollChangedListener;
		class OnScrollChangedListener
			: public object<OnScrollChangedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnScrollChangedListener(jobject jobj)
			: object<OnScrollChangedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onScrollChanged();
		}; //class OnScrollChangedListener

		class OnPreDrawListener;
		class OnPreDrawListener
			: public object<OnPreDrawListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnPreDrawListener(jobject jobj)
			: object<OnPreDrawListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onPreDraw();
		}; //class OnPreDrawListener

		class OnGlobalFocusChangeListener;
		class OnGlobalFocusChangeListener
			: public object<OnGlobalFocusChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnGlobalFocusChangeListener(jobject jobj)
			: object<OnGlobalFocusChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGlobalFocusChanged(local_ref< android::view::View >  const&, local_ref< android::view::View >  const&);
		}; //class OnGlobalFocusChangeListener

		class OnTouchModeChangeListener;
		class OnTouchModeChangeListener
			: public object<OnTouchModeChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnTouchModeChangeListener(jobject jobj)
			: object<OnTouchModeChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onTouchModeChanged(jboolean);
		}; //class OnTouchModeChangeListener

		class OnGlobalLayoutListener;
		class OnGlobalLayoutListener
			: public object<OnGlobalLayoutListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnGlobalLayoutListener(jobject jobj)
			: object<OnGlobalLayoutListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGlobalLayout();
		}; //class OnGlobalLayoutListener

	} //namespace ViewTreeObserver_

	class ViewTreeObserver
		: public object<ViewTreeObserver>
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

		typedef ViewTreeObserver_::OnScrollChangedListener OnScrollChangedListener;
		typedef ViewTreeObserver_::OnPreDrawListener OnPreDrawListener;
		typedef ViewTreeObserver_::OnGlobalFocusChangeListener OnGlobalFocusChangeListener;
		typedef ViewTreeObserver_::OnTouchModeChangeListener OnTouchModeChangeListener;
		typedef ViewTreeObserver_::OnGlobalLayoutListener OnGlobalLayoutListener;

		explicit ViewTreeObserver(jobject jobj)
		: object<ViewTreeObserver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener >  const&);
		void removeOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener >  const&);
		void addOnGlobalLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener >  const&);
		void removeGlobalOnLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener >  const&);
		void addOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener >  const&);
		void removeOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener >  const&);
		void addOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener >  const&);
		void removeOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener >  const&);
		void addOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener >  const&);
		void removeOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener >  const&);
		jboolean isAlive();
		void dispatchOnGlobalLayout();
		jboolean dispatchOnPreDraw();
	}; //class ViewTreeObserver

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL

namespace j2cpp {




android::view::ViewTreeObserver_::OnScrollChangedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::ViewTreeObserver_::OnScrollChangedListener::onScrollChanged()
{
	return call_method<
		android::view::ViewTreeObserver_::OnScrollChangedListener::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver_::OnScrollChangedListener::J2CPP_METHOD_NAME(0),
		android::view::ViewTreeObserver_::OnScrollChangedListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnScrollChangedListener,"android/view/ViewTreeObserver$OnScrollChangedListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnScrollChangedListener,0,"onScrollChanged","()V")


android::view::ViewTreeObserver_::OnPreDrawListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::ViewTreeObserver_::OnPreDrawListener::onPreDraw()
{
	return call_method<
		android::view::ViewTreeObserver_::OnPreDrawListener::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver_::OnPreDrawListener::J2CPP_METHOD_NAME(0),
		android::view::ViewTreeObserver_::OnPreDrawListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnPreDrawListener,"android/view/ViewTreeObserver$OnPreDrawListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnPreDrawListener,0,"onPreDraw","()Z")


android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::onGlobalFocusChanged(local_ref< android::view::View > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::J2CPP_METHOD_NAME(0),
		android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnGlobalFocusChangeListener,"android/view/ViewTreeObserver$OnGlobalFocusChangeListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnGlobalFocusChangeListener,0,"onGlobalFocusChanged","(Landroid/view/View;Landroid/view/View;)V")


android::view::ViewTreeObserver_::OnTouchModeChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::ViewTreeObserver_::OnTouchModeChangeListener::onTouchModeChanged(jboolean a0)
{
	return call_method<
		android::view::ViewTreeObserver_::OnTouchModeChangeListener::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver_::OnTouchModeChangeListener::J2CPP_METHOD_NAME(0),
		android::view::ViewTreeObserver_::OnTouchModeChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnTouchModeChangeListener,"android/view/ViewTreeObserver$OnTouchModeChangeListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnTouchModeChangeListener,0,"onTouchModeChanged","(Z)V")


android::view::ViewTreeObserver_::OnGlobalLayoutListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::ViewTreeObserver_::OnGlobalLayoutListener::onGlobalLayout()
{
	return call_method<
		android::view::ViewTreeObserver_::OnGlobalLayoutListener::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver_::OnGlobalLayoutListener::J2CPP_METHOD_NAME(0),
		android::view::ViewTreeObserver_::OnGlobalLayoutListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnGlobalLayoutListener,"android/view/ViewTreeObserver$OnGlobalLayoutListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnGlobalLayoutListener,0,"onGlobalLayout","()V")



android::view::ViewTreeObserver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::view::ViewTreeObserver::addOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(1),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::removeOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(2),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::addOnGlobalLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(3),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::removeGlobalOnLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(4),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::addOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(5),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::removeOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(6),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::addOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(7),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::removeOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(8),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::addOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(9),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::view::ViewTreeObserver::removeOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const &a0)
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(10),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::ViewTreeObserver::isAlive()
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(11),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

void android::view::ViewTreeObserver::dispatchOnGlobalLayout()
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(12),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject());
}

jboolean android::view::ViewTreeObserver::dispatchOnPreDraw()
{
	return call_method<
		android::view::ViewTreeObserver::J2CPP_CLASS_NAME,
		android::view::ViewTreeObserver::J2CPP_METHOD_NAME(13),
		android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver,"android/view/ViewTreeObserver")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,1,"addOnGlobalFocusChangeListener","(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,2,"removeOnGlobalFocusChangeListener","(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,3,"addOnGlobalLayoutListener","(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,4,"removeGlobalOnLayoutListener","(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,5,"addOnPreDrawListener","(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,6,"removeOnPreDrawListener","(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,7,"addOnScrollChangedListener","(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,8,"removeOnScrollChangedListener","(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,9,"addOnTouchModeChangeListener","(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,10,"removeOnTouchModeChangeListener","(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,11,"isAlive","()Z")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,12,"dispatchOnGlobalLayout","()V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,13,"dispatchOnPreDraw","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
