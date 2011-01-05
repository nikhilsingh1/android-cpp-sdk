/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.beans.PropertyChangeEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_DECL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class EventObject; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/EventObject.hpp>


namespace j2cpp {

namespace java { namespace beans {

	class PropertyChangeEvent;
	class PropertyChangeEvent
		: public object<PropertyChangeEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit PropertyChangeEvent(jobject jobj)
		: object<PropertyChangeEvent>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventObject>() const;


		PropertyChangeEvent(local_ref< java::lang::Object > const&, local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > getPropertyName();
		void setPropagationId(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getPropagationId();
		local_ref< java::lang::Object > getOldValue();
		local_ref< java::lang::Object > getNewValue();
	}; //class PropertyChangeEvent

} //namespace beans
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_IMPL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_IMPL

namespace j2cpp {



java::beans::PropertyChangeEvent::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::beans::PropertyChangeEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::beans::PropertyChangeEvent::operator local_ref<java::util::EventObject>() const
{
	return local_ref<java::util::EventObject>(get_jobject());
}


java::beans::PropertyChangeEvent::PropertyChangeEvent(local_ref< java::lang::Object > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Object > const &a2, local_ref< java::lang::Object > const &a3)
: object<java::beans::PropertyChangeEvent>(
	call_new_object<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(0),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}


local_ref< java::lang::String > java::beans::PropertyChangeEvent::getPropertyName()
{
	return call_method<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(1),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::beans::PropertyChangeEvent::setPropagationId(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(2),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::beans::PropertyChangeEvent::getPropagationId()
{
	return call_method<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(3),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::beans::PropertyChangeEvent::getOldValue()
{
	return call_method<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(4),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::beans::PropertyChangeEvent::getNewValue()
{
	return call_method<
		java::beans::PropertyChangeEvent::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeEvent::J2CPP_METHOD_NAME(5),
		java::beans::PropertyChangeEvent::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::beans::PropertyChangeEvent,"java/beans/PropertyChangeEvent")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,0,"<init>","(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,1,"getPropertyName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,2,"setPropagationId","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,3,"getPropagationId","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,4,"getOldValue","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeEvent,5,"getNewValue","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGEEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
