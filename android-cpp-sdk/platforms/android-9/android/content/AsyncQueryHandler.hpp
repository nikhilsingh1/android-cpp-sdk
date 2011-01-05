/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.AsyncQueryHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace os { class Message; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace os { class Looper; } } }


#include <android/content/ContentResolver.hpp>
#include <android/content/ContentValues.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Handler.hpp>
#include <android/os/Looper.hpp>
#include <android/os/Message.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class AsyncQueryHandler;
	namespace AsyncQueryHandler_ {

		class WorkerArgs;
		class WorkerArgs
			: public object<WorkerArgs>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)

			explicit WorkerArgs(jobject jobj)
			: object<WorkerArgs>(jobj)
			, uri(jobj)
			, handler(jobj)
			, projection(jobj)
			, selection(jobj)
			, selectionArgs(jobj)
			, orderBy(jobj)
			, result(jobj)
			, cookie(jobj)
			, values(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > uri;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::os::Handler > > handler;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< array< local_ref< java::lang::String >, 1> > > projection;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > selection;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< array< local_ref< java::lang::String >, 1> > > selectionArgs;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > orderBy;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::Object > > result;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::Object > > cookie;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::content::ContentValues > > values;
		}; //class WorkerArgs

		class WorkerHandler;
		class WorkerHandler
			: public object<WorkerHandler>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit WorkerHandler(jobject jobj)
			: object<WorkerHandler>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::os::Handler>() const;


			WorkerHandler(local_ref< android::content::AsyncQueryHandler > const&, local_ref< android::os::Looper > const&);
			void handleMessage(local_ref< android::os::Message >  const&);

		}; //class WorkerHandler

	} //namespace AsyncQueryHandler_

	class AsyncQueryHandler
		: public object<AsyncQueryHandler>
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

		typedef AsyncQueryHandler_::WorkerArgs WorkerArgs;
		typedef AsyncQueryHandler_::WorkerHandler WorkerHandler;

		explicit AsyncQueryHandler(jobject jobj)
		: object<AsyncQueryHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Handler>() const;


		AsyncQueryHandler(local_ref< android::content::ContentResolver > const&);
		void startQuery(jint, local_ref< java::lang::Object >  const&, local_ref< android::net::Uri >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&);
		void cancelOperation(jint);
		void startInsert(jint, local_ref< java::lang::Object >  const&, local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&);
		void startUpdate(jint, local_ref< java::lang::Object >  const&, local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void startDelete(jint, local_ref< java::lang::Object >  const&, local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void handleMessage(local_ref< android::os::Message >  const&);
	}; //class AsyncQueryHandler

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_IMPL

namespace j2cpp {




android::content::AsyncQueryHandler_::WorkerArgs::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




J2CPP_DEFINE_CLASS(android::content::AsyncQueryHandler_::WorkerArgs,"android/content/AsyncQueryHandler$WorkerArgs")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler_::WorkerArgs,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,0,"uri","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,1,"handler","Landroid/os/Handler;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,2,"projection","[java.lang.String")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,3,"selection","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,4,"selectionArgs","[java.lang.String")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,5,"orderBy","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,6,"result","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,7,"cookie","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerArgs,8,"values","Landroid/content/ContentValues;")


android::content::AsyncQueryHandler_::WorkerHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::AsyncQueryHandler_::WorkerHandler::operator local_ref<android::os::Handler>() const
{
	return local_ref<android::os::Handler>(get_jobject());
}


android::content::AsyncQueryHandler_::WorkerHandler::WorkerHandler(local_ref< android::content::AsyncQueryHandler > const &a0, local_ref< android::os::Looper > const &a1)
: object<android::content::AsyncQueryHandler_::WorkerHandler>(
	call_new_object<
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_METHOD_NAME(0),
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::content::AsyncQueryHandler_::WorkerHandler::handleMessage(local_ref< android::os::Message > const &a0)
{
	return call_method<
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_METHOD_NAME(1),
		android::content::AsyncQueryHandler_::WorkerHandler::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::content::AsyncQueryHandler_::WorkerHandler,"android/content/AsyncQueryHandler$WorkerHandler")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler_::WorkerHandler,0,"<init>","(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler_::WorkerHandler,1,"handleMessage","(Landroid/os/Message;)V")
J2CPP_DEFINE_FIELD(android::content::AsyncQueryHandler_::WorkerHandler,0,"this$0","Landroid/content/AsyncQueryHandler;")



android::content::AsyncQueryHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::AsyncQueryHandler::operator local_ref<android::os::Handler>() const
{
	return local_ref<android::os::Handler>(get_jobject());
}


android::content::AsyncQueryHandler::AsyncQueryHandler(local_ref< android::content::ContentResolver > const &a0)
: object<android::content::AsyncQueryHandler>(
	call_new_object<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(0),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



void android::content::AsyncQueryHandler::startQuery(jint a0, local_ref< java::lang::Object > const &a1, local_ref< android::net::Uri > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4, local_ref< array< local_ref< java::lang::String >, 1> > const &a5, local_ref< java::lang::String > const &a6)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(2),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

void android::content::AsyncQueryHandler::cancelOperation(jint a0)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(3),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::content::AsyncQueryHandler::startInsert(jint a0, local_ref< java::lang::Object > const &a1, local_ref< android::net::Uri > const &a2, local_ref< android::content::ContentValues > const &a3)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(4),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::content::AsyncQueryHandler::startUpdate(jint a0, local_ref< java::lang::Object > const &a1, local_ref< android::net::Uri > const &a2, local_ref< android::content::ContentValues > const &a3, local_ref< java::lang::String > const &a4, local_ref< array< local_ref< java::lang::String >, 1> > const &a5)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(5),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::content::AsyncQueryHandler::startDelete(jint a0, local_ref< java::lang::Object > const &a1, local_ref< android::net::Uri > const &a2, local_ref< java::lang::String > const &a3, local_ref< array< local_ref< java::lang::String >, 1> > const &a4)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(6),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}





void android::content::AsyncQueryHandler::handleMessage(local_ref< android::os::Message > const &a0)
{
	return call_method<
		android::content::AsyncQueryHandler::J2CPP_CLASS_NAME,
		android::content::AsyncQueryHandler::J2CPP_METHOD_NAME(11),
		android::content::AsyncQueryHandler::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::AsyncQueryHandler,"android/content/AsyncQueryHandler")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,0,"<init>","(Landroid/content/ContentResolver;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,1,"createHandler","(Landroid/os/Looper;)Landroid/os/Handler;")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,2,"startQuery","(ILjava/lang/Object;Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,3,"cancelOperation","(I)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,4,"startInsert","(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,5,"startUpdate","(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,6,"startDelete","(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,7,"onQueryComplete","(ILjava/lang/Object;Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,8,"onInsertComplete","(ILjava/lang/Object;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,9,"onUpdateComplete","(ILjava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,10,"onDeleteComplete","(ILjava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(android::content::AsyncQueryHandler,11,"handleMessage","(Landroid/os/Message;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ASYNCQUERYHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
