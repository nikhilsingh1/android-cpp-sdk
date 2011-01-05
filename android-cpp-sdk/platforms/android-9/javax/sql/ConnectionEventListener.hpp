/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.sql.ConnectionEventListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_DECL
#define J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class ConnectionEvent; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class EventListener; } } }


#include <java/lang/Object.hpp>
#include <java/util/EventListener.hpp>
#include <javax/sql/ConnectionEvent.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class ConnectionEventListener;
	class ConnectionEventListener
		: public object<ConnectionEventListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConnectionEventListener(jobject jobj)
		: object<ConnectionEventListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventListener>() const;


		void connectionClosed(local_ref< javax::sql::ConnectionEvent >  const&);
		void connectionErrorOccurred(local_ref< javax::sql::ConnectionEvent >  const&);
	}; //class ConnectionEventListener

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_IMPL
#define J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_IMPL

namespace j2cpp {



javax::sql::ConnectionEventListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::sql::ConnectionEventListener::operator local_ref<java::util::EventListener>() const
{
	return local_ref<java::util::EventListener>(get_jobject());
}

void javax::sql::ConnectionEventListener::connectionClosed(local_ref< javax::sql::ConnectionEvent > const &a0)
{
	return call_method<
		javax::sql::ConnectionEventListener::J2CPP_CLASS_NAME,
		javax::sql::ConnectionEventListener::J2CPP_METHOD_NAME(0),
		javax::sql::ConnectionEventListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void javax::sql::ConnectionEventListener::connectionErrorOccurred(local_ref< javax::sql::ConnectionEvent > const &a0)
{
	return call_method<
		javax::sql::ConnectionEventListener::J2CPP_CLASS_NAME,
		javax::sql::ConnectionEventListener::J2CPP_METHOD_NAME(1),
		javax::sql::ConnectionEventListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::sql::ConnectionEventListener,"javax/sql/ConnectionEventListener")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionEventListener,0,"connectionClosed","(Ljavax/sql/ConnectionEvent;)V")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionEventListener,1,"connectionErrorOccurred","(Ljavax/sql/ConnectionEvent;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONEVENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
