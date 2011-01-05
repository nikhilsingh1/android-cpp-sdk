/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.SimpleCursorTreeAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class CursorTreeAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class ResourceCursorTreeAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }
namespace j2cpp { namespace android { namespace widget { class ExpandableListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class BaseExpandableListAdapter; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/widget/BaseExpandableListAdapter.hpp>
#include <android/widget/CursorTreeAdapter.hpp>
#include <android/widget/ExpandableListAdapter.hpp>
#include <android/widget/Filterable.hpp>
#include <android/widget/ResourceCursorTreeAdapter.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleCursorTreeAdapter;
	class SimpleCursorTreeAdapter
		: public object<SimpleCursorTreeAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SimpleCursorTreeAdapter(jobject jobj)
		: object<SimpleCursorTreeAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::CursorTreeAdapter>() const;
		operator local_ref<android::widget::ResourceCursorTreeAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;
		operator local_ref<android::widget::ExpandableListAdapter>() const;
		operator local_ref<android::widget::BaseExpandableListAdapter>() const;
		operator local_ref<java::lang::Object>() const;


		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		SimpleCursorTreeAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
	}; //class SimpleCursorTreeAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::CursorTreeAdapter>() const
{
	return local_ref<android::widget::CursorTreeAdapter>(get_jobject());
}

android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::ResourceCursorTreeAdapter>() const
{
	return local_ref<android::widget::ResourceCursorTreeAdapter>(get_jobject());
}

android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}

android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::ExpandableListAdapter>() const
{
	return local_ref<android::widget::ExpandableListAdapter>(get_jobject());
}

android::widget::SimpleCursorTreeAdapter::operator local_ref<android::widget::BaseExpandableListAdapter>() const
{
	return local_ref<android::widget::BaseExpandableListAdapter>(get_jobject());
}

android::widget::SimpleCursorTreeAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, jint a3, local_ref< array< local_ref< java::lang::String >, 1> > const &a4, local_ref< array<jint,1> > const &a5, jint a6, jint a7, local_ref< array< local_ref< java::lang::String >, 1> > const &a8, local_ref< array<jint,1> > const &a9)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(0),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
)
{
}



android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, jint a3, local_ref< array< local_ref< java::lang::String >, 1> > const &a4, local_ref< array<jint,1> > const &a5, jint a6, local_ref< array< local_ref< java::lang::String >, 1> > const &a7, local_ref< array<jint,1> > const &a8)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(1),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4, a5, a6, a7, a8)
)
{
}



android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jint a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< array<jint,1> > const &a4, jint a5, local_ref< array< local_ref< java::lang::String >, 1> > const &a6, local_ref< array<jint,1> > const &a7)
: object<android::widget::SimpleCursorTreeAdapter>(
	call_new_object<
		android::widget::SimpleCursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_NAME(2),
		android::widget::SimpleCursorTreeAdapter::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2, a3, a4, a5, a6, a7)
)
{
}






J2CPP_DEFINE_CLASS(android::widget::SimpleCursorTreeAdapter,"android/widget/SimpleCursorTreeAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,0,"<init>","(Landroid/content/Context;Landroid/database/Cursor;II[java.lang.String[III[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,1,"<init>","(Landroid/content/Context;Landroid/database/Cursor;II[java.lang.String[II[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,2,"<init>","(Landroid/content/Context;Landroid/database/Cursor;I[java.lang.String[II[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,3,"bindChildView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,4,"bindGroupView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorTreeAdapter,5,"setViewImage","(Landroid/widget/ImageView;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
