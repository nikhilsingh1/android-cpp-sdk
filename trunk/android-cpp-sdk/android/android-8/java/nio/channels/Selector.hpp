/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.Selector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/nio/channels/spi/SelectorProvider.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class Selector;
	class Selector
		: public cpp_object<Selector>
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

		Selector(jobject jobj)
		: cpp_object<Selector>(jobj)
		{
		}

		static local_ref< java::nio::channels::Selector > open();
		void close();
		cpp_boolean isOpen();
		local_ref< java::util::Set > keys();
		local_ref< java::nio::channels::spi::SelectorProvider > provider();
		cpp_int select();
		cpp_int select(cpp_long const&);
		local_ref< java::util::Set > selectedKeys();
		cpp_int selectNow();
		local_ref< java::nio::channels::Selector > wakeup();
	}; //class Selector

} //namespace channels
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::channels::Selector > create< java::nio::channels::Selector>()
{
	return local_ref< java::nio::channels::Selector >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::channels::Selector::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::channels::Selector::J2CPP_CLASS_NAME, java::nio::channels::Selector::J2CPP_METHOD_NAME(0), java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::nio::channels::Selector > java::nio::channels::Selector::open()
{
	return local_ref< java::nio::channels::Selector >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

void java::nio::channels::Selector::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::nio::channels::Selector::isOpen()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::util::Set > java::nio::channels::Selector::keys()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::nio::channels::spi::SelectorProvider > java::nio::channels::Selector::provider()
{
	return local_ref< java::nio::channels::spi::SelectorProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::nio::channels::Selector::select()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::nio::channels::Selector::select(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::nio::channels::Selector::selectedKeys()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::nio::channels::Selector::selectNow()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::nio::channels::Selector > java::nio::channels::Selector::wakeup()
{
	return local_ref< java::nio::channels::Selector >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::Selector,"java/nio/channels/Selector")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,1,"open","()Ljava/nio/channels/Selector;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,2,"close","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,3,"isOpen","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,4,"keys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,5,"provider","()Ljava/nio/channels/spi/SelectorProvider;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,6,"select","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,7,"select","(J)I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,8,"selectedKeys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,9,"selectNow","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,10,"wakeup","()Ljava/nio/channels/Selector;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
