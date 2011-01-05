/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Region
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_REGION_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_REGION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Region_ { class Op; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/graphics/Path.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/Region.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Region;
	namespace Region_ {

		class Op;
		class Op
			: public object<Op>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)

			explicit Op(jobject jobj)
			: object<Op>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::graphics::Region_::Op >, 1> > values();
			static local_ref< android::graphics::Region_::Op > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Region_::Op > > DIFFERENCE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Region_::Op > > INTERSECT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Region_::Op > > REPLACE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Region_::Op > > REVERSE_DIFFERENCE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::graphics::Region_::Op > > UNION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::graphics::Region_::Op > > XOR;
		}; //class Op

	} //namespace Region_

	class Region
		: public object<Region>
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
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_FIELD(0)

		typedef Region_::Op Op;

		explicit Region(jobject jobj)
		: object<Region>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		Region();
		Region(local_ref< android::graphics::Region > const&);
		Region(local_ref< android::graphics::Rect > const&);
		Region(jint, jint, jint, jint);
		void setEmpty();
		jboolean set(local_ref< android::graphics::Region >  const&);
		jboolean set(local_ref< android::graphics::Rect >  const&);
		jboolean set(jint, jint, jint, jint);
		jboolean setPath(local_ref< android::graphics::Path >  const&, local_ref< android::graphics::Region >  const&);
		jboolean isEmpty();
		jboolean isRect();
		jboolean isComplex();
		local_ref< android::graphics::Rect > getBounds();
		jboolean getBounds(local_ref< android::graphics::Rect >  const&);
		local_ref< android::graphics::Path > getBoundaryPath();
		jboolean getBoundaryPath(local_ref< android::graphics::Path >  const&);
		jboolean contains(jint, jint);
		jboolean quickContains(local_ref< android::graphics::Rect >  const&);
		jboolean quickContains(jint, jint, jint, jint);
		jboolean quickReject(local_ref< android::graphics::Rect >  const&);
		jboolean quickReject(jint, jint, jint, jint);
		jboolean quickReject(local_ref< android::graphics::Region >  const&);
		void translate(jint, jint);
		void translate(jint, jint, local_ref< android::graphics::Region >  const&);
		jboolean union_(local_ref< android::graphics::Rect >  const&);
		jboolean op(local_ref< android::graphics::Rect >  const&, local_ref< android::graphics::Region_::Op >  const&);
		jboolean op(jint, jint, jint, jint, local_ref< android::graphics::Region_::Op >  const&);
		jboolean op(local_ref< android::graphics::Region >  const&, local_ref< android::graphics::Region_::Op >  const&);
		jboolean op(local_ref< android::graphics::Rect >  const&, local_ref< android::graphics::Region >  const&, local_ref< android::graphics::Region_::Op >  const&);
		jboolean op(local_ref< android::graphics::Region >  const&, local_ref< android::graphics::Region >  const&, local_ref< android::graphics::Region_::Op >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jboolean equals(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Region

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_REGION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_REGION_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_REGION_HPP_IMPL

namespace j2cpp {




android::graphics::Region_::Op::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::graphics::Region_::Op::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Region_::Op::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::graphics::Region_::Op::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Region_::Op >, 1> > android::graphics::Region_::Op::values()
{
	return call_static_method<
		android::graphics::Region_::Op::J2CPP_CLASS_NAME,
		android::graphics::Region_::Op::J2CPP_METHOD_NAME(0),
		android::graphics::Region_::Op::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Region_::Op >, 1> >
	>();
}

local_ref< android::graphics::Region_::Op > android::graphics::Region_::Op::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Region_::Op::J2CPP_CLASS_NAME,
		android::graphics::Region_::Op::J2CPP_METHOD_NAME(1),
		android::graphics::Region_::Op::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Region_::Op >
	>(a0);
}




static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(0),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::DIFFERENCE;

static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(1),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::INTERSECT;

static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(2),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::REPLACE;

static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(3),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::REVERSE_DIFFERENCE;

static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(4),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::UNION;

static_field<
	android::graphics::Region_::Op::J2CPP_CLASS_NAME,
	android::graphics::Region_::Op::J2CPP_FIELD_NAME(5),
	android::graphics::Region_::Op::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::graphics::Region_::Op >
> android::graphics::Region_::Op::XOR;


J2CPP_DEFINE_CLASS(android::graphics::Region_::Op,"android/graphics/Region$Op")
J2CPP_DEFINE_METHOD(android::graphics::Region_::Op,0,"values","()[android.graphics.Region.Op")
J2CPP_DEFINE_METHOD(android::graphics::Region_::Op,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Region$Op;")
J2CPP_DEFINE_METHOD(android::graphics::Region_::Op,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Region_::Op,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,0,"DIFFERENCE","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,1,"INTERSECT","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,2,"REPLACE","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,3,"REVERSE_DIFFERENCE","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,4,"UNION","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,5,"XOR","Landroid/graphics/Region$Op;")
J2CPP_DEFINE_FIELD(android::graphics::Region_::Op,6,"$VALUES","[android.graphics.Region.Op")



android::graphics::Region::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Region::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::graphics::Region::Region()
: object<android::graphics::Region>(
	call_new_object<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(0),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::graphics::Region::Region(local_ref< android::graphics::Region > const &a0)
: object<android::graphics::Region>(
	call_new_object<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(1),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



android::graphics::Region::Region(local_ref< android::graphics::Rect > const &a0)
: object<android::graphics::Region>(
	call_new_object<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(2),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



android::graphics::Region::Region(jint a0, jint a1, jint a2, jint a3)
: object<android::graphics::Region>(
	call_new_object<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(3),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2, a3)
)
{
}


void android::graphics::Region::setEmpty()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(4),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jboolean android::graphics::Region::set(local_ref< android::graphics::Region > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(5),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::set(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(6),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::set(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(7),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Region::setPath(local_ref< android::graphics::Path > const &a0, local_ref< android::graphics::Region > const &a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(8),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::Region::isEmpty()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(9),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jboolean android::graphics::Region::isRect()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(10),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jboolean android::graphics::Region::isComplex()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(11),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

local_ref< android::graphics::Rect > android::graphics::Region::getBounds()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(12),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::graphics::Rect >
	>(get_jobject());
}

jboolean android::graphics::Region::getBounds(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(13),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< android::graphics::Path > android::graphics::Region::getBoundaryPath()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(14),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::graphics::Path >
	>(get_jobject());
}

jboolean android::graphics::Region::getBoundaryPath(local_ref< android::graphics::Path > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(15),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::contains(jint a0, jint a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(16),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::Region::quickContains(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(17),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::quickContains(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(18),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Region::quickReject(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(19),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::quickReject(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(20),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Region::quickReject(local_ref< android::graphics::Region > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(21),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0);
}

void android::graphics::Region::translate(jint a0, jint a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(22),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0, a1);
}

void android::graphics::Region::translate(jint a0, jint a1, local_ref< android::graphics::Region > const &a2)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(23),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Region::union_(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(24),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::graphics::Region::op(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Region_::Op > const &a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(25),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::Region::op(jint a0, jint a1, jint a2, jint a3, local_ref< android::graphics::Region_::Op > const &a4)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(26),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3, a4);
}

jboolean android::graphics::Region::op(local_ref< android::graphics::Region > const &a0, local_ref< android::graphics::Region_::Op > const &a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(27),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::Region::op(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Region > const &a1, local_ref< android::graphics::Region_::Op > const &a2)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(28),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Region::op(local_ref< android::graphics::Region > const &a0, local_ref< android::graphics::Region > const &a1, local_ref< android::graphics::Region_::Op > const &a2)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(29),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jint android::graphics::Region::describeContents()
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(30),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject());
}

void android::graphics::Region::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(31),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::graphics::Region::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::graphics::Region::J2CPP_CLASS_NAME,
		android::graphics::Region::J2CPP_METHOD_NAME(32),
		android::graphics::Region::J2CPP_METHOD_SIGNATURE(32), 
		jboolean
	>(get_jobject(), a0);
}




static_field<
	android::graphics::Region::J2CPP_CLASS_NAME,
	android::graphics::Region::J2CPP_FIELD_NAME(0),
	android::graphics::Region::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::graphics::Region::CREATOR;


J2CPP_DEFINE_CLASS(android::graphics::Region,"android/graphics/Region")
J2CPP_DEFINE_METHOD(android::graphics::Region,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Region,1,"<init>","(Landroid/graphics/Region;)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,2,"<init>","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,3,"<init>","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,4,"setEmpty","()V")
J2CPP_DEFINE_METHOD(android::graphics::Region,5,"set","(Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,6,"set","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,7,"set","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,8,"setPath","(Landroid/graphics/Path;Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,9,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,10,"isRect","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,11,"isComplex","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,12,"getBounds","()Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::Region,13,"getBounds","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,14,"getBoundaryPath","()Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::graphics::Region,15,"getBoundaryPath","(Landroid/graphics/Path;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,16,"contains","(II)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,17,"quickContains","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,18,"quickContains","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,19,"quickReject","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,20,"quickReject","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,21,"quickReject","(Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,22,"translate","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,23,"translate","(IILandroid/graphics/Region;)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,24,"union","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,25,"op","(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,26,"op","(IIIILandroid/graphics/Region$Op;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,27,"op","(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,28,"op","(Landroid/graphics/Rect;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,29,"op","(Landroid/graphics/Region;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,30,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::graphics::Region,31,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Region,32,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Region,33,"finalize","()V")
J2CPP_DEFINE_METHOD(android::graphics::Region,34,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Region,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_REGION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
