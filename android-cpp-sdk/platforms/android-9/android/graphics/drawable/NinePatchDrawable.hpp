/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.NinePatchDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { class NinePatch; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/NinePatch.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/Region.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/DisplayMetrics.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class NinePatchDrawable;
	class NinePatchDrawable
		: public object<NinePatchDrawable>
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

		explicit NinePatchDrawable(jobject jobj)
		: object<NinePatchDrawable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable>() const;


		NinePatchDrawable(local_ref< android::graphics::Bitmap > const&, local_ref< array<jbyte,1> > const&, local_ref< android::graphics::Rect > const&, local_ref< java::lang::String > const&);
		NinePatchDrawable(local_ref< android::content::res::Resources > const&, local_ref< android::graphics::Bitmap > const&, local_ref< array<jbyte,1> > const&, local_ref< android::graphics::Rect > const&, local_ref< java::lang::String > const&);
		NinePatchDrawable(local_ref< android::graphics::NinePatch > const&);
		NinePatchDrawable(local_ref< android::content::res::Resources > const&, local_ref< android::graphics::NinePatch > const&);
		void setTargetDensity(local_ref< android::graphics::Canvas >  const&);
		void setTargetDensity(local_ref< android::util::DisplayMetrics >  const&);
		void setTargetDensity(jint);
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getChangingConfigurations();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		void setDither(jboolean);
		void setFilterBitmap(jboolean);
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		local_ref< android::graphics::Paint > getPaint();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jint getMinimumWidth();
		jint getMinimumHeight();
		jint getOpacity();
		local_ref< android::graphics::Region > getTransparentRegion();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class NinePatchDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::NinePatchDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::drawable::NinePatchDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}


android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(local_ref< android::graphics::Bitmap > const &a0, local_ref< array<jbyte,1> > const &a1, local_ref< android::graphics::Rect > const &a2, local_ref< java::lang::String > const &a3)
: object<android::graphics::drawable::NinePatchDrawable>(
	call_new_object<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}



android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(local_ref< android::content::res::Resources > const &a0, local_ref< android::graphics::Bitmap > const &a1, local_ref< array<jbyte,1> > const &a2, local_ref< android::graphics::Rect > const &a3, local_ref< java::lang::String > const &a4)
: object<android::graphics::drawable::NinePatchDrawable>(
	call_new_object<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4)
)
{
}



android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(local_ref< android::graphics::NinePatch > const &a0)
: object<android::graphics::drawable::NinePatchDrawable>(
	call_new_object<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(local_ref< android::content::res::Resources > const &a0, local_ref< android::graphics::NinePatch > const &a1)
: object<android::graphics::drawable::NinePatchDrawable>(
	call_new_object<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}


void android::graphics::drawable::NinePatchDrawable::setTargetDensity(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setTargetDensity(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setTargetDensity(jint a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::NinePatchDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jboolean android::graphics::drawable::NinePatchDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::setFilterBitmap(jboolean a0)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::NinePatchDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::graphics::Paint > android::graphics::drawable::NinePatchDrawable::getPaint()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::graphics::Paint >
	>(get_jobject());
}

jint android::graphics::drawable::NinePatchDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::NinePatchDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::NinePatchDrawable::getMinimumWidth()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::NinePatchDrawable::getMinimumHeight()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::NinePatchDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(20),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

local_ref< android::graphics::Region > android::graphics::drawable::NinePatchDrawable::getTransparentRegion()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(21),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::graphics::Region >
	>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::NinePatchDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(22),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState >
	>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::NinePatchDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::NinePatchDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_NAME(23),
		android::graphics::drawable::NinePatchDrawable::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::NinePatchDrawable,"android/graphics/drawable/NinePatchDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,0,"<init>","(Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,1,"<init>","(Landroid/content/res/Resources;Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,2,"<init>","(Landroid/graphics/NinePatch;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,3,"<init>","(Landroid/content/res/Resources;Landroid/graphics/NinePatch;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,4,"setTargetDensity","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,5,"setTargetDensity","(Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,6,"setTargetDensity","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,7,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,8,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,9,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,10,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,11,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,12,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,13,"setFilterBitmap","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,14,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,15,"getPaint","()Landroid/graphics/Paint;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,16,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,17,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,18,"getMinimumWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,19,"getMinimumHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,20,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,21,"getTransparentRegion","()Landroid/graphics/Region;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,22,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::NinePatchDrawable,23,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
