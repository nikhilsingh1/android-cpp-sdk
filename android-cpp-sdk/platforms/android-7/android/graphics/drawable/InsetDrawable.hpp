/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.InsetDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class InsetDrawable;
	class InsetDrawable
		: public object<InsetDrawable>
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

		explicit InsetDrawable(jobject jobj)
		: object<InsetDrawable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;


		InsetDrawable(local_ref< android::graphics::drawable::Drawable > const&, jint);
		InsetDrawable(local_ref< android::graphics::drawable::Drawable > const&, jint, jint, jint, jint);
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&, jlong);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getChangingConfigurations();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		jboolean setVisible(jboolean, jboolean);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jint getOpacity();
		jboolean isStateful();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class InsetDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::InsetDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::drawable::InsetDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::InsetDrawable::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}


android::graphics::drawable::InsetDrawable::InsetDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, jint a1)
: object<android::graphics::drawable::InsetDrawable>(
	call_new_object<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::graphics::drawable::InsetDrawable::InsetDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, jint a1, jint a2, jint a3, jint a4)
: object<android::graphics::drawable::InsetDrawable>(
	call_new_object<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4)
)
{
}


void android::graphics::drawable::InsetDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::InsetDrawable::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::InsetDrawable::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, jlong a2)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::InsetDrawable::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

void android::graphics::drawable::InsetDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::InsetDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jboolean android::graphics::drawable::InsetDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::drawable::InsetDrawable::setVisible(jboolean a0, jboolean a1)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::graphics::drawable::InsetDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::InsetDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::InsetDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

jboolean android::graphics::drawable::InsetDrawable::isStateful()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}



jint android::graphics::drawable::InsetDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::InsetDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::InsetDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState >
	>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::InsetDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::InsetDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::InsetDrawable::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::InsetDrawable,"android/graphics/drawable/InsetDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,0,"<init>","(Landroid/graphics/drawable/Drawable;I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,1,"<init>","(Landroid/graphics/drawable/Drawable;IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,2,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,3,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,4,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,5,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,6,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,7,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,8,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,9,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,10,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,11,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,12,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,13,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,14,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,15,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,16,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,17,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,18,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::InsetDrawable,19,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
