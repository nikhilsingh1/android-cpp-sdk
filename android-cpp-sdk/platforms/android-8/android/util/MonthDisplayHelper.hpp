/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.MonthDisplayHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL
#define J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace util {

	class MonthDisplayHelper;
	class MonthDisplayHelper
		: public object<MonthDisplayHelper>
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

		explicit MonthDisplayHelper(jobject jobj)
		: object<MonthDisplayHelper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MonthDisplayHelper(jint, jint, jint);
		MonthDisplayHelper(jint, jint);
		jint getYear();
		jint getMonth();
		jint getWeekStartDay();
		jint getFirstDayOfMonth();
		jint getNumberOfDaysInMonth();
		jint getOffset();
		local_ref< array<jint,1> > getDigitsForRow(jint);
		jint getDayAt(jint, jint);
		jint getRowOf(jint);
		jint getColumnOf(jint);
		void previousMonth();
		void nextMonth();
		jboolean isWithinCurrentMonth(jint, jint);
	}; //class MonthDisplayHelper

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL

namespace j2cpp {



android::util::MonthDisplayHelper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::MonthDisplayHelper::MonthDisplayHelper(jint a0, jint a1, jint a2)
: object<android::util::MonthDisplayHelper>(
	call_new_object<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(0),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



android::util::MonthDisplayHelper::MonthDisplayHelper(jint a0, jint a1)
: object<android::util::MonthDisplayHelper>(
	call_new_object<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(1),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jint android::util::MonthDisplayHelper::getYear()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(2),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::util::MonthDisplayHelper::getMonth()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(3),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint android::util::MonthDisplayHelper::getWeekStartDay()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(4),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::util::MonthDisplayHelper::getFirstDayOfMonth()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(5),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint android::util::MonthDisplayHelper::getNumberOfDaysInMonth()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(6),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint android::util::MonthDisplayHelper::getOffset()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(7),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

local_ref< array<jint,1> > android::util::MonthDisplayHelper::getDigitsForRow(jint a0)
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(8),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array<jint,1> >
	>(get_jobject(), a0);
}

jint android::util::MonthDisplayHelper::getDayAt(jint a0, jint a1)
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(9),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::util::MonthDisplayHelper::getRowOf(jint a0)
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(10),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject(), a0);
}

jint android::util::MonthDisplayHelper::getColumnOf(jint a0)
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(11),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject(), a0);
}

void android::util::MonthDisplayHelper::previousMonth()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(12),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject());
}

void android::util::MonthDisplayHelper::nextMonth()
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(13),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject());
}

jboolean android::util::MonthDisplayHelper::isWithinCurrentMonth(jint a0, jint a1)
{
	return call_method<
		android::util::MonthDisplayHelper::J2CPP_CLASS_NAME,
		android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(14),
		android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::util::MonthDisplayHelper,"android/util/MonthDisplayHelper")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,2,"getYear","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,3,"getMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,4,"getWeekStartDay","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,5,"getFirstDayOfMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,6,"getNumberOfDaysInMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,7,"getOffset","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,8,"getDigitsForRow","(I)[I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,9,"getDayAt","(II)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,10,"getRowOf","(I)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,11,"getColumnOf","(I)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,12,"previousMonth","()V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,13,"nextMonth","()V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,14,"isWithinCurrentMonth","(II)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
