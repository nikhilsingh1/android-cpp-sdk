/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.FrameLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_DECL
#define J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace FrameLayout_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Region.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/FrameLayout.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class FrameLayout;
	namespace FrameLayout_ {

		class LayoutParams;
		class LayoutParams
			: public object<LayoutParams>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_FIELD(0)

			explicit LayoutParams(jobject jobj)
			: object<LayoutParams>(jobj)
			, gravity(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const;
			operator local_ref<android::view::ViewGroup_::LayoutParams>() const;


			LayoutParams(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
			LayoutParams(jint, jint);
			LayoutParams(jint, jint, jint);
			LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const&);
			LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > gravity;
		}; //class LayoutParams

	} //namespace FrameLayout_

	class FrameLayout
		: public object<FrameLayout>
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

		typedef FrameLayout_::LayoutParams LayoutParams;

		explicit FrameLayout(jobject jobj)
		: object<FrameLayout>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;


		FrameLayout(local_ref< android::content::Context > const&);
		FrameLayout(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		FrameLayout(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setForegroundGravity(jint);
		void setForeground(local_ref< android::graphics::drawable::Drawable >  const&);
		local_ref< android::graphics::drawable::Drawable > getForeground();
		void draw(local_ref< android::graphics::Canvas >  const&);
		jboolean gatherTransparentRegion(local_ref< android::graphics::Region >  const&);
		void setMeasureAllChildren(jboolean);
		jboolean getConsiderGoneChildrenWhenMeasuring();
		local_ref< android::widget::FrameLayout_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet >  const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet >  const&);
	}; //class FrameLayout

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_IMPL

namespace j2cpp {




android::widget::FrameLayout_::LayoutParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::FrameLayout_::LayoutParams::operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::MarginLayoutParams>(get_jobject());
}

android::widget::FrameLayout_::LayoutParams::operator local_ref<android::view::ViewGroup_::LayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::LayoutParams>(get_jobject());
}


android::widget::FrameLayout_::LayoutParams::LayoutParams(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::FrameLayout_::LayoutParams>(
	call_new_object<
		android::widget::FrameLayout_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_NAME(0),
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, gravity(get_jobject())
{
}



android::widget::FrameLayout_::LayoutParams::LayoutParams(jint a0, jint a1)
: object<android::widget::FrameLayout_::LayoutParams>(
	call_new_object<
		android::widget::FrameLayout_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_NAME(1),
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
, gravity(get_jobject())
{
}



android::widget::FrameLayout_::LayoutParams::LayoutParams(jint a0, jint a1, jint a2)
: object<android::widget::FrameLayout_::LayoutParams>(
	call_new_object<
		android::widget::FrameLayout_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_NAME(2),
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
, gravity(get_jobject())
{
}



android::widget::FrameLayout_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
: object<android::widget::FrameLayout_::LayoutParams>(
	call_new_object<
		android::widget::FrameLayout_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_NAME(3),
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
, gravity(get_jobject())
{
}



android::widget::FrameLayout_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
: object<android::widget::FrameLayout_::LayoutParams>(
	call_new_object<
		android::widget::FrameLayout_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_NAME(4),
		android::widget::FrameLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
, gravity(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::widget::FrameLayout_::LayoutParams,"android/widget/FrameLayout$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout_::LayoutParams,2,"<init>","(III)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout_::LayoutParams,3,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout_::LayoutParams,4,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_FIELD(android::widget::FrameLayout_::LayoutParams,0,"gravity","I")



android::widget::FrameLayout::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::FrameLayout::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}


android::widget::FrameLayout::FrameLayout(local_ref< android::content::Context > const &a0)
: object<android::widget::FrameLayout>(
	call_new_object<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(0),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::FrameLayout::FrameLayout(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::FrameLayout>(
	call_new_object<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(1),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::FrameLayout::FrameLayout(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::FrameLayout>(
	call_new_object<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(2),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::FrameLayout::setForegroundGravity(jint a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(3),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}




void android::widget::FrameLayout::setForeground(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(7),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::widget::FrameLayout::getForeground()
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(8),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}




void android::widget::FrameLayout::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(12),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::FrameLayout::gatherTransparentRegion(local_ref< android::graphics::Region > const &a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(13),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

void android::widget::FrameLayout::setMeasureAllChildren(jboolean a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(14),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::FrameLayout::getConsiderGoneChildrenWhenMeasuring()
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(15),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

local_ref< android::widget::FrameLayout_::LayoutParams > android::widget::FrameLayout::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(16),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::widget::FrameLayout_::LayoutParams >
	>(get_jobject(), a0);
}




local_ref< android::view::ViewGroup_::LayoutParams > android::widget::FrameLayout::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::FrameLayout::J2CPP_CLASS_NAME,
		android::widget::FrameLayout::J2CPP_METHOD_NAME(20),
		android::widget::FrameLayout::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< android::view::ViewGroup_::LayoutParams >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::FrameLayout,"android/widget/FrameLayout")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,3,"setForegroundGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,4,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,5,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,6,"generateDefaultLayoutParams","()Landroid/widget/FrameLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,7,"setForeground","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,8,"getForeground","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,9,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,10,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,11,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,12,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,13,"gatherTransparentRegion","(Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,14,"setMeasureAllChildren","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,15,"getConsiderGoneChildrenWhenMeasuring","()Z")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,16,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,17,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,18,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,19,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::FrameLayout,20,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FRAMELAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
