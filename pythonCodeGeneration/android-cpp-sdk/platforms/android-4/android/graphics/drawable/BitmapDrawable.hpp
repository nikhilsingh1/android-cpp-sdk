/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.BitmapDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Shader_ { class TileMode; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Shader.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/DisplayMetrics.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class BitmapDrawable;
	class BitmapDrawable
		: public object<BitmapDrawable>
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

		explicit BitmapDrawable(jobject jobj)
		: object<BitmapDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<java::lang::Object>() const;


		BitmapDrawable();
		BitmapDrawable(local_ref< android::content::res::Resources > const&);
		BitmapDrawable(local_ref< android::graphics::Bitmap > const&);
		BitmapDrawable(local_ref< android::content::res::Resources > const&, local_ref< android::graphics::Bitmap > const&);
		BitmapDrawable(local_ref< java::lang::String > const&);
		BitmapDrawable(local_ref< java::io::InputStream > const&);
		local_ref< android::graphics::Paint > getPaint();
		local_ref< android::graphics::Bitmap > getBitmap();
		void setTargetDensity(local_ref< android::graphics::Canvas >  const&);
		void setTargetDensity(local_ref< android::util::DisplayMetrics >  const&);
		void setTargetDensity(jint);
		jint getGravity();
		void setGravity(jint);
		void setAntiAlias(jboolean);
		void setFilterBitmap(jboolean);
		void setDither(jboolean);
		local_ref< android::graphics::Shader_::TileMode > getTileModeX();
		local_ref< android::graphics::Shader_::TileMode > getTileModeY();
		void setTileModeX(local_ref< android::graphics::Shader_::TileMode >  const&);
		void setTileModeY(local_ref< android::graphics::Shader_::TileMode >  const&);
		void setTileModeXY(local_ref< android::graphics::Shader_::TileMode >  const&, local_ref< android::graphics::Shader_::TileMode >  const&);
		jint getChangingConfigurations();
		void draw(local_ref< android::graphics::Canvas >  const&);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		local_ref< android::graphics::drawable::Drawable > mutate();
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jint getOpacity();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
	}; //class BitmapDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::BitmapDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::BitmapDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::drawable::BitmapDrawable::BitmapDrawable()
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::graphics::drawable::BitmapDrawable::BitmapDrawable(local_ref< android::content::res::Resources > const &a0)
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



android::graphics::drawable::BitmapDrawable::BitmapDrawable(local_ref< android::graphics::Bitmap > const &a0)
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



android::graphics::drawable::BitmapDrawable::BitmapDrawable(local_ref< android::content::res::Resources > const &a0, local_ref< android::graphics::Bitmap > const &a1)
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}



android::graphics::drawable::BitmapDrawable::BitmapDrawable(local_ref< java::lang::String > const &a0)
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
{
}



android::graphics::drawable::BitmapDrawable::BitmapDrawable(local_ref< java::io::InputStream > const &a0)
: object<android::graphics::drawable::BitmapDrawable>(
	call_new_object<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(5)
	>(a0)
)
{
}


local_ref< android::graphics::Paint > android::graphics::drawable::BitmapDrawable::getPaint()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::graphics::Paint >
	>(get_jobject());
}

local_ref< android::graphics::Bitmap > android::graphics::drawable::BitmapDrawable::getBitmap()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::graphics::Bitmap >
	>(get_jobject());
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(jint a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::BitmapDrawable::getGravity()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

void android::graphics::drawable::BitmapDrawable::setGravity(jint a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setAntiAlias(jboolean a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setFilterBitmap(jboolean a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::Shader_::TileMode > android::graphics::drawable::BitmapDrawable::getTileModeX()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::graphics::Shader_::TileMode >
	>(get_jobject());
}

local_ref< android::graphics::Shader_::TileMode > android::graphics::drawable::BitmapDrawable::getTileModeY()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::graphics::Shader_::TileMode >
	>(get_jobject());
}

void android::graphics::drawable::BitmapDrawable::setTileModeX(local_ref< android::graphics::Shader_::TileMode > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setTileModeY(local_ref< android::graphics::Shader_::TileMode > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setTileModeXY(local_ref< android::graphics::Shader_::TileMode > const &a0, local_ref< android::graphics::Shader_::TileMode > const &a1)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(20),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1);
}

jint android::graphics::drawable::BitmapDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(21),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}


void android::graphics::drawable::BitmapDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(23),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(24),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::BitmapDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(25),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::BitmapDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(26),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}

void android::graphics::drawable::BitmapDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(27),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint android::graphics::drawable::BitmapDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(28),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(28), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::BitmapDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(29),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject());
}

jint android::graphics::drawable::BitmapDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(30),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::BitmapDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::BitmapDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_NAME(31),
		android::graphics::drawable::BitmapDrawable::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::BitmapDrawable,"android/graphics/drawable/BitmapDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,1,"<init>","(Landroid/content/res/Resources;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,2,"<init>","(Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,3,"<init>","(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,4,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,5,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,6,"getPaint","()Landroid/graphics/Paint;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,7,"getBitmap","()Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,8,"setTargetDensity","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,9,"setTargetDensity","(Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,10,"setTargetDensity","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,11,"getGravity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,12,"setGravity","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,13,"setAntiAlias","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,14,"setFilterBitmap","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,15,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,16,"getTileModeX","()Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,17,"getTileModeY","()Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,18,"setTileModeX","(Landroid/graphics/Shader$TileMode;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,19,"setTileModeY","(Landroid/graphics/Shader$TileMode;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,20,"setTileModeXY","(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,21,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,22,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,23,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,24,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,25,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,26,"mutate","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,27,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,28,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,29,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,30,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::BitmapDrawable,31,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION