/*================================================================================
  code generated by: java2cpp
  class: android.widget.ResourceCursorAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ResourceCursorAdapter;
	class ResourceCursorAdapter
		: public cpp_object<ResourceCursorAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		ResourceCursorAdapter(jobject jobj)
		: cpp_object<ResourceCursorAdapter>(jobj)
		{
		}

		local_ref< android::view::View > newView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newDropDownView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		void setViewResource(cpp_int const&);
		void setDropDownViewResource(cpp_int const&);
	}; //class ResourceCursorAdapter

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::ResourceCursorAdapter > create< android::widget::ResourceCursorAdapter>(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::database::Cursor > const &a2)
{
	return local_ref< android::widget::ResourceCursorAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ResourceCursorAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ResourceCursorAdapter::J2CPP_CLASS_NAME, android::widget::ResourceCursorAdapter::J2CPP_METHOD_NAME(0), android::widget::ResourceCursorAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ResourceCursorAdapter > create< android::widget::ResourceCursorAdapter>(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::database::Cursor > const &a2, cpp_boolean const &a3)
{
	return local_ref< android::widget::ResourceCursorAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ResourceCursorAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ResourceCursorAdapter::J2CPP_CLASS_NAME, android::widget::ResourceCursorAdapter::J2CPP_METHOD_NAME(1), android::widget::ResourceCursorAdapter::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::ResourceCursorAdapter::newView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::ResourceCursorAdapter::newDropDownView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::ResourceCursorAdapter::setViewResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ResourceCursorAdapter::setDropDownViewResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ResourceCursorAdapter,"android/widget/ResourceCursorAdapter")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,0,"<init>","(Landroid/content/Context;ILandroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,1,"<init>","(Landroid/content/Context;ILandroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,2,"newView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,3,"newDropDownView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,4,"setViewResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ResourceCursorAdapter,5,"setDropDownViewResource","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RESOURCECURSORADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
