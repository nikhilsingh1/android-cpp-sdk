/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.xpath.XPath
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATH_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace xml { namespace xpath { class XPathVariableResolver; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace xpath { class XPathFunctionResolver; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace xpath { class XPathExpression; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace namespace { class NamespaceContext; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/namespace/NamespaceContext.hpp>
#include <javax/xml/namespace/QName.hpp>
#include <javax/xml/xpath/XPathExpression.hpp>
#include <javax/xml/xpath/XPathFunctionResolver.hpp>
#include <javax/xml/xpath/XPathVariableResolver.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPath;
	class XPath
		: public object<XPath>
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

		explicit XPath(jobject jobj)
		: object<XPath>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void reset();
		void setXPathVariableResolver(local_ref< javax::xml::xpath::XPathVariableResolver >  const&);
		local_ref< javax::xml::xpath::XPathVariableResolver > getXPathVariableResolver();
		void setXPathFunctionResolver(local_ref< javax::xml::xpath::XPathFunctionResolver >  const&);
		local_ref< javax::xml::xpath::XPathFunctionResolver > getXPathFunctionResolver();
		void setNamespaceContext(local_ref< javax::xml::namespace::NamespaceContext >  const&);
		local_ref< javax::xml::namespace::NamespaceContext > getNamespaceContext();
		local_ref< javax::xml::xpath::XPathExpression > compile(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > evaluate(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< javax::xml::namespace::QName >  const&);
		local_ref< java::lang::String > evaluate(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > evaluate(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::InputSource >  const&, local_ref< javax::xml::namespace::QName >  const&);
		local_ref< java::lang::String > evaluate(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::InputSource >  const&);
	}; //class XPath

} //namespace xpath
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATH_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATH_HPP_IMPL

namespace j2cpp {



javax::xml::xpath::XPath::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void javax::xml::xpath::XPath::reset()
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(0),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void javax::xml::xpath::XPath::setXPathVariableResolver(local_ref< javax::xml::xpath::XPathVariableResolver > const &a0)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(1),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::xpath::XPathVariableResolver > javax::xml::xpath::XPath::getXPathVariableResolver()
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(2),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::xpath::XPathVariableResolver >
	>(get_jobject());
}

void javax::xml::xpath::XPath::setXPathFunctionResolver(local_ref< javax::xml::xpath::XPathFunctionResolver > const &a0)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(3),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::xpath::XPathFunctionResolver > javax::xml::xpath::XPath::getXPathFunctionResolver()
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(4),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::xml::xpath::XPathFunctionResolver >
	>(get_jobject());
}

void javax::xml::xpath::XPath::setNamespaceContext(local_ref< javax::xml::namespace::NamespaceContext > const &a0)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(5),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::namespace::NamespaceContext > javax::xml::xpath::XPath::getNamespaceContext()
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(6),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< javax::xml::namespace::NamespaceContext >
	>(get_jobject());
}

local_ref< javax::xml::xpath::XPathExpression > javax::xml::xpath::XPath::compile(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(7),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< javax::xml::xpath::XPathExpression >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > javax::xml::xpath::XPath::evaluate(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< javax::xml::namespace::QName > const &a2)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(8),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > javax::xml::xpath::XPath::evaluate(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(9),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > javax::xml::xpath::XPath::evaluate(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::InputSource > const &a1, local_ref< javax::xml::namespace::QName > const &a2)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(10),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > javax::xml::xpath::XPath::evaluate(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::InputSource > const &a1)
{
	return call_method<
		javax::xml::xpath::XPath::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPath::J2CPP_METHOD_NAME(11),
		javax::xml::xpath::XPath::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPath,"javax/xml/xpath/XPath")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,0,"reset","()V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,1,"setXPathVariableResolver","(Ljavax/xml/xpath/XPathVariableResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,2,"getXPathVariableResolver","()Ljavax/xml/xpath/XPathVariableResolver;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,3,"setXPathFunctionResolver","(Ljavax/xml/xpath/XPathFunctionResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,4,"getXPathFunctionResolver","()Ljavax/xml/xpath/XPathFunctionResolver;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,5,"setNamespaceContext","(Ljavax/xml/namespace/NamespaceContext;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,6,"getNamespaceContext","()Ljavax/xml/namespace/NamespaceContext;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,7,"compile","(Ljava/lang/String;)Ljavax/xml/xpath/XPathExpression;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,8,"evaluate","(Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,9,"evaluate","(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,10,"evaluate","(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPath,11,"evaluate","(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
