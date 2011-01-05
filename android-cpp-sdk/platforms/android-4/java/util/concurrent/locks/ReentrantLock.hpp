/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.locks.ReentrantLock
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Lock; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <java/util/concurrent/locks/Condition.hpp>
#include <java/util/concurrent/locks/Lock.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace locks {

	class ReentrantLock;
	class ReentrantLock
		: public object<ReentrantLock>
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

		explicit ReentrantLock(jobject jobj)
		: object<ReentrantLock>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::concurrent::locks::Lock>() const;
		operator local_ref<java::lang::Object>() const;


		ReentrantLock();
		ReentrantLock(jboolean);
		void lock();
		void lockInterruptibly();
		jboolean tryLock();
		jboolean tryLock(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void unlock();
		local_ref< java::util::concurrent::locks::Condition > newCondition();
		jint getHoldCount();
		jboolean isHeldByCurrentThread();
		jboolean isLocked();
		jboolean isFair();
		jboolean hasQueuedThreads();
		jboolean hasQueuedThread(local_ref< java::lang::Thread >  const&);
		jint getQueueLength();
		jboolean hasWaiters(local_ref< java::util::concurrent::locks::Condition >  const&);
		jint getWaitQueueLength(local_ref< java::util::concurrent::locks::Condition >  const&);
		local_ref< java::lang::String > toString();
	}; //class ReentrantLock

} //namespace locks
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_IMPL

namespace j2cpp {



java::util::concurrent::locks::ReentrantLock::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::locks::ReentrantLock::operator local_ref<java::util::concurrent::locks::Lock>() const
{
	return local_ref<java::util::concurrent::locks::Lock>(get_jobject());
}

java::util::concurrent::locks::ReentrantLock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::concurrent::locks::ReentrantLock::ReentrantLock()
: object<java::util::concurrent::locks::ReentrantLock>(
	call_new_object<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(0),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::locks::ReentrantLock::ReentrantLock(jboolean a0)
: object<java::util::concurrent::locks::ReentrantLock>(
	call_new_object<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(1),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::util::concurrent::locks::ReentrantLock::lock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(2),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::util::concurrent::locks::ReentrantLock::lockInterruptibly()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(3),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::tryLock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(4),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::tryLock(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(5),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1);
}

void java::util::concurrent::locks::ReentrantLock::unlock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(6),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::Condition > java::util::concurrent::locks::ReentrantLock::newCondition()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(7),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::concurrent::locks::Condition >
	>(get_jobject());
}

jint java::util::concurrent::locks::ReentrantLock::getHoldCount()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(8),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::isHeldByCurrentThread()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(9),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::isLocked()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(10),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::isFair()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(11),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}


jboolean java::util::concurrent::locks::ReentrantLock::hasQueuedThreads()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(13),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantLock::hasQueuedThread(local_ref< java::lang::Thread > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(14),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::concurrent::locks::ReentrantLock::getQueueLength()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(15),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}


jboolean java::util::concurrent::locks::ReentrantLock::hasWaiters(local_ref< java::util::concurrent::locks::Condition > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(17),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::concurrent::locks::ReentrantLock::getWaitQueueLength(local_ref< java::util::concurrent::locks::Condition > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(18),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject(), a0);
}


local_ref< java::lang::String > java::util::concurrent::locks::ReentrantLock::toString()
{
	return call_method<
		java::util::concurrent::locks::ReentrantLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_NAME(20),
		java::util::concurrent::locks::ReentrantLock::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::ReentrantLock,"java/util/concurrent/locks/ReentrantLock")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,2,"lock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,3,"lockInterruptibly","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,4,"tryLock","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,5,"tryLock","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,6,"unlock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,7,"newCondition","()Ljava/util/concurrent/locks/Condition;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,8,"getHoldCount","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,9,"isHeldByCurrentThread","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,10,"isLocked","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,11,"isFair","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,12,"getOwner","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,13,"hasQueuedThreads","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,14,"hasQueuedThread","(Ljava/lang/Thread;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,15,"getQueueLength","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,16,"getQueuedThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,17,"hasWaiters","(Ljava/util/concurrent/locks/Condition;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,18,"getWaitQueueLength","(Ljava/util/concurrent/locks/Condition;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,19,"getWaitingThreads","(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantLock,20,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
