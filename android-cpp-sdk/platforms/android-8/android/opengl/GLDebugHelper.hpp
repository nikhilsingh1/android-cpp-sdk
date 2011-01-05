/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.GLDebugHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_DECL
#define J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } } }


#include <java/io/Writer.hpp>
#include <java/lang/Object.hpp>
#include <javax/microedition/khronos/egl/EGL.hpp>
#include <javax/microedition/khronos/opengles/GL.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class GLDebugHelper;
	class GLDebugHelper
		: public object<GLDebugHelper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit GLDebugHelper(jobject jobj)
		: object<GLDebugHelper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GLDebugHelper();
		static local_ref< javax::microedition::khronos::opengles::GL > wrap(local_ref< javax::microedition::khronos::opengles::GL >  const&, jint, local_ref< java::io::Writer >  const&);
		static local_ref< javax::microedition::khronos::egl::EGL > wrap(local_ref< javax::microedition::khronos::egl::EGL >  const&, jint, local_ref< java::io::Writer >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > CONFIG_CHECK_GL_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CONFIG_CHECK_THREAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > CONFIG_LOG_ARGUMENT_NAMES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ERROR_WRONG_THREAD;
	}; //class GLDebugHelper

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_IMPL

namespace j2cpp {



android::opengl::GLDebugHelper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::opengl::GLDebugHelper::GLDebugHelper()
: object<android::opengl::GLDebugHelper>(
	call_new_object<
		android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
		android::opengl::GLDebugHelper::J2CPP_METHOD_NAME(0),
		android::opengl::GLDebugHelper::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< javax::microedition::khronos::opengles::GL > android::opengl::GLDebugHelper::wrap(local_ref< javax::microedition::khronos::opengles::GL > const &a0, jint a1, local_ref< java::io::Writer > const &a2)
{
	return call_static_method<
		android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
		android::opengl::GLDebugHelper::J2CPP_METHOD_NAME(1),
		android::opengl::GLDebugHelper::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::microedition::khronos::opengles::GL >
	>(a0, a1, a2);
}

local_ref< javax::microedition::khronos::egl::EGL > android::opengl::GLDebugHelper::wrap(local_ref< javax::microedition::khronos::egl::EGL > const &a0, jint a1, local_ref< java::io::Writer > const &a2)
{
	return call_static_method<
		android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
		android::opengl::GLDebugHelper::J2CPP_METHOD_NAME(2),
		android::opengl::GLDebugHelper::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::microedition::khronos::egl::EGL >
	>(a0, a1, a2);
}


static_field<
	android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
	android::opengl::GLDebugHelper::J2CPP_FIELD_NAME(0),
	android::opengl::GLDebugHelper::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::opengl::GLDebugHelper::CONFIG_CHECK_GL_ERROR;

static_field<
	android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
	android::opengl::GLDebugHelper::J2CPP_FIELD_NAME(1),
	android::opengl::GLDebugHelper::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::opengl::GLDebugHelper::CONFIG_CHECK_THREAD;

static_field<
	android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
	android::opengl::GLDebugHelper::J2CPP_FIELD_NAME(2),
	android::opengl::GLDebugHelper::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::opengl::GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES;

static_field<
	android::opengl::GLDebugHelper::J2CPP_CLASS_NAME,
	android::opengl::GLDebugHelper::J2CPP_FIELD_NAME(3),
	android::opengl::GLDebugHelper::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::opengl::GLDebugHelper::ERROR_WRONG_THREAD;


J2CPP_DEFINE_CLASS(android::opengl::GLDebugHelper,"android/opengl/GLDebugHelper")
J2CPP_DEFINE_METHOD(android::opengl::GLDebugHelper,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::GLDebugHelper,1,"wrap","(Ljavax/microedition/khronos/opengles/GL;ILjava/io/Writer;)Ljavax/microedition/khronos/opengles/GL;")
J2CPP_DEFINE_METHOD(android::opengl::GLDebugHelper,2,"wrap","(Ljavax/microedition/khronos/egl/EGL;ILjava/io/Writer;)Ljavax/microedition/khronos/egl/EGL;")
J2CPP_DEFINE_FIELD(android::opengl::GLDebugHelper,0,"CONFIG_CHECK_GL_ERROR","I")
J2CPP_DEFINE_FIELD(android::opengl::GLDebugHelper,1,"CONFIG_CHECK_THREAD","I")
J2CPP_DEFINE_FIELD(android::opengl::GLDebugHelper,2,"CONFIG_LOG_ARGUMENT_NAMES","I")
J2CPP_DEFINE_FIELD(android::opengl::GLDebugHelper,3,"ERROR_WRONG_THREAD","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLDEBUGHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
