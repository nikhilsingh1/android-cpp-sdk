/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.ls.LSException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class LSException;
	class LSException
		: public object<LSException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit LSException(jobject jobj)
		: object<LSException>(jobj)
		, code(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		LSException(jshort, local_ref< java::lang::String > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jshort > code;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jshort > PARSE_ERR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jshort > SERIALIZE_ERR;
	}; //class LSException

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_IMPL

namespace j2cpp {



org::w3c::dom::ls::LSException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

org::w3c::dom::ls::LSException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::ls::LSException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

org::w3c::dom::ls::LSException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::w3c::dom::ls::LSException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::w3c::dom::ls::LSException::LSException(jshort a0, local_ref< java::lang::String > const &a1)
: object<org::w3c::dom::ls::LSException>(
	call_new_object<
		org::w3c::dom::ls::LSException::J2CPP_CLASS_NAME,
		org::w3c::dom::ls::LSException::J2CPP_METHOD_NAME(0),
		org::w3c::dom::ls::LSException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, code(get_jobject())
{
}



static_field<
	org::w3c::dom::ls::LSException::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSException::J2CPP_FIELD_NAME(1),
	org::w3c::dom::ls::LSException::J2CPP_FIELD_SIGNATURE(1),
	jshort
> org::w3c::dom::ls::LSException::PARSE_ERR;

static_field<
	org::w3c::dom::ls::LSException::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::LSException::J2CPP_FIELD_NAME(2),
	org::w3c::dom::ls::LSException::J2CPP_FIELD_SIGNATURE(2),
	jshort
> org::w3c::dom::ls::LSException::SERIALIZE_ERR;


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::LSException,"org/w3c/dom/ls/LSException")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::LSException,0,"<init>","(SLjava/lang/String;)V")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSException,0,"code","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSException,1,"PARSE_ERR","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::LSException,2,"SERIALIZE_ERR","S")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_LSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
