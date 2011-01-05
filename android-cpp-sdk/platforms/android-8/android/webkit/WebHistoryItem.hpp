/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebHistoryItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }


#include <android/graphics/Bitmap.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebHistoryItem;
	class WebHistoryItem
		: public object<WebHistoryItem>
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

		explicit WebHistoryItem(jobject jobj)
		: object<WebHistoryItem>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		jint getId();
		local_ref< java::lang::String > getUrl();
		local_ref< java::lang::String > getOriginalUrl();
		local_ref< java::lang::String > getTitle();
		local_ref< android::graphics::Bitmap > getFavicon();
	}; //class WebHistoryItem

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_IMPL

namespace j2cpp {



android::webkit::WebHistoryItem::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::webkit::WebHistoryItem::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


jint android::webkit::WebHistoryItem::getId()
{
	return call_method<
		android::webkit::WebHistoryItem::J2CPP_CLASS_NAME,
		android::webkit::WebHistoryItem::J2CPP_METHOD_NAME(1),
		android::webkit::WebHistoryItem::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::webkit::WebHistoryItem::getUrl()
{
	return call_method<
		android::webkit::WebHistoryItem::J2CPP_CLASS_NAME,
		android::webkit::WebHistoryItem::J2CPP_METHOD_NAME(2),
		android::webkit::WebHistoryItem::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::webkit::WebHistoryItem::getOriginalUrl()
{
	return call_method<
		android::webkit::WebHistoryItem::J2CPP_CLASS_NAME,
		android::webkit::WebHistoryItem::J2CPP_METHOD_NAME(3),
		android::webkit::WebHistoryItem::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::webkit::WebHistoryItem::getTitle()
{
	return call_method<
		android::webkit::WebHistoryItem::J2CPP_CLASS_NAME,
		android::webkit::WebHistoryItem::J2CPP_METHOD_NAME(4),
		android::webkit::WebHistoryItem::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::graphics::Bitmap > android::webkit::WebHistoryItem::getFavicon()
{
	return call_method<
		android::webkit::WebHistoryItem::J2CPP_CLASS_NAME,
		android::webkit::WebHistoryItem::J2CPP_METHOD_NAME(5),
		android::webkit::WebHistoryItem::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::graphics::Bitmap >
	>(get_jobject());
}




J2CPP_DEFINE_CLASS(android::webkit::WebHistoryItem,"android/webkit/WebHistoryItem")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,1,"getId","()I")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,2,"getUrl","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,3,"getOriginalUrl","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,4,"getTitle","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,5,"getFavicon","()Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,6,"clone","()Landroid/webkit/WebHistoryItem;")
J2CPP_DEFINE_METHOD(android::webkit::WebHistoryItem,7,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBHISTORYITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
