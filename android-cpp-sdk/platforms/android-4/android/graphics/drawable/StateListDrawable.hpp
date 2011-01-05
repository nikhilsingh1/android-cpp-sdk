/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.StateListDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class DrawableContainer; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/graphics/drawable/DrawableContainer.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Object.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class StateListDrawable;
	class StateListDrawable
		: public object<StateListDrawable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit StateListDrawable(jobject jobj)
		: object<StateListDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::DrawableContainer>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		StateListDrawable();
		void addState(local_ref< array<jint,1> >  const&, local_ref< android::graphics::drawable::Drawable >  const&);
		jboolean isStateful();
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class StateListDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::StateListDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::StateListDrawable::operator local_ref<android::graphics::drawable::DrawableContainer>() const
{
	return local_ref<android::graphics::drawable::DrawableContainer>(get_jobject());
}

android::graphics::drawable::StateListDrawable::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::graphics::drawable::StateListDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::drawable::StateListDrawable::StateListDrawable()
: object<android::graphics::drawable::StateListDrawable>(
	call_new_object<
		android::graphics::drawable::StateListDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::graphics::drawable::StateListDrawable::addState(local_ref< array<jint,1> > const &a0, local_ref< android::graphics::drawable::Drawable > const &a1)
{
	return call_method<
		android::graphics::drawable::StateListDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::drawable::StateListDrawable::isStateful()
{
	return call_method<
		android::graphics::drawable::StateListDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}


void android::graphics::drawable::StateListDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::StateListDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::StateListDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::StateListDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::StateListDrawable::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::StateListDrawable,"android/graphics/drawable/StateListDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,1,"addState","([ILandroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,2,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,3,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,4,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::StateListDrawable,5,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
