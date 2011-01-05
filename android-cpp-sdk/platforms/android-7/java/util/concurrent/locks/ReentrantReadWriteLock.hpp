/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.locks.ReentrantReadWriteLock
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { namespace ReentrantReadWriteLock_ { class WriteLock; } } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Lock; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { namespace ReentrantReadWriteLock_ { class ReadLock; } } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class ReadWriteLock; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <java/util/concurrent/locks/Condition.hpp>
#include <java/util/concurrent/locks/Lock.hpp>
#include <java/util/concurrent/locks/ReadWriteLock.hpp>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace locks {

	class ReentrantReadWriteLock;
	namespace ReentrantReadWriteLock_ {

		class WriteLock;
		class WriteLock
			: public object<WriteLock>
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

			explicit WriteLock(jobject jobj)
			: object<WriteLock>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::locks::Lock>() const;


			void lock();
			void lockInterruptibly();
			jboolean tryLock();
			jboolean tryLock(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
			void unlock();
			local_ref< java::util::concurrent::locks::Condition > newCondition();
			local_ref< java::lang::String > toString();
		}; //class WriteLock

		class ReadLock;
		class ReadLock
			: public object<ReadLock>
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

			explicit ReadLock(jobject jobj)
			: object<ReadLock>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::locks::Lock>() const;


			void lock();
			void lockInterruptibly();
			jboolean tryLock();
			jboolean tryLock(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
			void unlock();
			local_ref< java::util::concurrent::locks::Condition > newCondition();
			local_ref< java::lang::String > toString();
		}; //class ReadLock

	} //namespace ReentrantReadWriteLock_

	class ReentrantReadWriteLock
		: public object<ReentrantReadWriteLock>
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

		typedef ReentrantReadWriteLock_::WriteLock WriteLock;
		typedef ReentrantReadWriteLock_::ReadLock ReadLock;

		explicit ReentrantReadWriteLock(jobject jobj)
		: object<ReentrantReadWriteLock>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::concurrent::locks::ReadWriteLock>() const;


		ReentrantReadWriteLock();
		ReentrantReadWriteLock(jboolean);
		local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock > writeLock();
		local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock > readLock();
		jboolean isFair();
		jint getReadLockCount();
		jboolean isWriteLocked();
		jboolean isWriteLockedByCurrentThread();
		jint getWriteHoldCount();
		jboolean hasQueuedThreads();
		jboolean hasQueuedThread(local_ref< java::lang::Thread >  const&);
		jint getQueueLength();
		jboolean hasWaiters(local_ref< java::util::concurrent::locks::Condition >  const&);
		jint getWaitQueueLength(local_ref< java::util::concurrent::locks::Condition >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::util::concurrent::locks::Lock > writeLock_1();
		local_ref< java::util::concurrent::locks::Lock > readLock_1();
	}; //class ReentrantReadWriteLock

} //namespace locks
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_IMPL

namespace j2cpp {




java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::operator local_ref<java::util::concurrent::locks::Lock>() const
{
	return local_ref<java::util::concurrent::locks::Lock>(get_jobject());
}


void java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::lock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(1),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::lockInterruptibly()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(2),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::tryLock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(3),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::tryLock(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(4),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::unlock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(5),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::Condition > java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::newCondition()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(6),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::concurrent::locks::Condition >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::toString()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_NAME(7),
		java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,"java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,0,"<init>","(Ljava/util/concurrent/locks/ReentrantReadWriteLock;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,1,"lock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,2,"lockInterruptibly","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,3,"tryLock","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,4,"tryLock","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,5,"unlock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,6,"newCondition","()Ljava/util/concurrent/locks/Condition;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock,7,"toString","()Ljava/lang/String;")


java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::operator local_ref<java::util::concurrent::locks::Lock>() const
{
	return local_ref<java::util::concurrent::locks::Lock>(get_jobject());
}


void java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::lock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(1),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::lockInterruptibly()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(2),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::tryLock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(3),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::tryLock(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(4),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::unlock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(5),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::Condition > java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::newCondition()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(6),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::concurrent::locks::Condition >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::toString()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_NAME(7),
		java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,"java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,0,"<init>","(Ljava/util/concurrent/locks/ReentrantReadWriteLock;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,1,"lock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,2,"lockInterruptibly","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,3,"tryLock","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,4,"tryLock","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,5,"unlock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,6,"newCondition","()Ljava/util/concurrent/locks/Condition;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock,7,"toString","()Ljava/lang/String;")



java::util::concurrent::locks::ReentrantReadWriteLock::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::locks::ReentrantReadWriteLock::operator local_ref<java::util::concurrent::locks::ReadWriteLock>() const
{
	return local_ref<java::util::concurrent::locks::ReadWriteLock>(get_jobject());
}


java::util::concurrent::locks::ReentrantReadWriteLock::ReentrantReadWriteLock()
: object<java::util::concurrent::locks::ReentrantReadWriteLock>(
	call_new_object<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(0),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::locks::ReentrantReadWriteLock::ReentrantReadWriteLock(jboolean a0)
: object<java::util::concurrent::locks::ReentrantReadWriteLock>(
	call_new_object<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(1),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock > java::util::concurrent::locks::ReentrantReadWriteLock::writeLock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(2),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::WriteLock >
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock > java::util::concurrent::locks::ReentrantReadWriteLock::readLock()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(3),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::concurrent::locks::ReentrantReadWriteLock_::ReadLock >
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock::isFair()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(4),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}


jint java::util::concurrent::locks::ReentrantReadWriteLock::getReadLockCount()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(6),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock::isWriteLocked()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(7),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock::isWriteLockedByCurrentThread()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(8),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jint java::util::concurrent::locks::ReentrantReadWriteLock::getWriteHoldCount()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(9),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}



jboolean java::util::concurrent::locks::ReentrantReadWriteLock::hasQueuedThreads()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(12),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::locks::ReentrantReadWriteLock::hasQueuedThread(local_ref< java::lang::Thread > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(13),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::concurrent::locks::ReentrantReadWriteLock::getQueueLength()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(14),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}


jboolean java::util::concurrent::locks::ReentrantReadWriteLock::hasWaiters(local_ref< java::util::concurrent::locks::Condition > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(16),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::concurrent::locks::ReentrantReadWriteLock::getWaitQueueLength(local_ref< java::util::concurrent::locks::Condition > const &a0)
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(17),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject(), a0);
}


local_ref< java::lang::String > java::util::concurrent::locks::ReentrantReadWriteLock::toString()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(19),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::Lock > java::util::concurrent::locks::ReentrantReadWriteLock::writeLock_1()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(20),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::concurrent::locks::Lock >
	>(get_jobject());
}

local_ref< java::util::concurrent::locks::Lock > java::util::concurrent::locks::ReentrantReadWriteLock::readLock_1()
{
	return call_method<
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_NAME(21),
		java::util::concurrent::locks::ReentrantReadWriteLock::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::concurrent::locks::Lock >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::ReentrantReadWriteLock,"java/util/concurrent/locks/ReentrantReadWriteLock")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,2,"writeLock","()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,3,"readLock","()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,4,"isFair","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,5,"getOwner","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,6,"getReadLockCount","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,7,"isWriteLocked","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,8,"isWriteLockedByCurrentThread","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,9,"getWriteHoldCount","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,10,"getQueuedWriterThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,11,"getQueuedReaderThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,12,"hasQueuedThreads","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,13,"hasQueuedThread","(Ljava/lang/Thread;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,14,"getQueueLength","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,15,"getQueuedThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,16,"hasWaiters","(Ljava/util/concurrent/locks/Condition;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,17,"getWaitQueueLength","(Ljava/util/concurrent/locks/Condition;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,18,"getWaitingThreads","(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,19,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,20,"writeLock","()Ljava/util/concurrent/locks/Lock;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::ReentrantReadWriteLock,21,"readLock","()Ljava/util/concurrent/locks/Lock;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
