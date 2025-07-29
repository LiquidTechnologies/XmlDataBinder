/**********************************************************************************************
 * Copyright (c) 2001-2025 Liquid Technologies Limited. All rights reserved.
 * See www.liquid-technologies.com for product details.
 *
 * Please see products End User License Agreement for distribution permissions.
 *
 * WARNING: THIS FILE IS GENERATED
 * Changes made outside of ##HAND_CODED_BLOCK_START blocks will be overwritten
 *
 * Generation  :  by Liquid XML Data Binder 21.1.0.14151
 * Using Schema: D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
 **********************************************************************************************/
#include "StdAfx.h"
#pragma warning( disable : 4786 )
#pragma warning( disable : 4251 )
#include "BookStoreLib.h"
#include "ClassFactory.h"
#include "BookStoreLib/AuthorName.h"
#include "BookStoreLib/Bookstore.h"
#include "BookStoreLib/BookType.h"
#include "BookStoreLib/BookTypeCol.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{

LtXmlLib21::CXmlObjectBasePtr CClassFactory::CreateClass(BookStoreLib_Classes eCls, LPCTSTR strElementName)
{
	// This is structured like this to get around compiler limitations
	if (eCls == ClsName_NONE)
		throw LtXmlLib21::CLtException(_T("Invalid Class (NONE)"));

	switch (eCls)
	{
	case ClsName_CAuthorName:
		return new BookStoreLib::CAuthorName(strElementName);
	case ClsName_CBookstore:
		return new BookStoreLib::CBookstore(strElementName);
	case ClsName_CBookType:
		return new BookStoreLib::CBookType(strElementName);
	default:
		throw LtXmlLib21::CLtException(_T("Unknown Class id"));
	}
	return NULL; // appease compiler
}

LtXmlLib21::CXmlCollectionBasePtr CClassFactory::CreateClassCollection(BookStoreLib_Classes eCls, LPCTSTR strElementName, LPCTSTR strElementNamespaceURI, long iMinOccurs, long iMaxOccurs)
{
	switch(eCls)
	{
	case ClsName_NONE:
		throw LtXmlLib21::CLtException(_T("Invalid Class (NONE)"));
	case ClsName_CBookTypeCol:
		return new BookStoreLib::CBookTypeCol(strElementName, strElementNamespaceURI, iMinOccurs, iMaxOccurs);
	default:
		throw LtXmlLib21::CLtException(_T("Unknown Collection Class id"));
	}
	return NULL; // appease compiler
}

LtXmlLib21::CXmlCollectionBasePtr CClassFactory::CreateEnumCollection(BookStoreLib_Classes eCls, LPCTSTR strElementName, LPCTSTR strNamespace, long iMinOccurs, long iMaxOccurs)
{
	switch(eCls)
	{
	case ClsName_NONE:
		throw LtXmlLib21::CLtException(_T("Invalid Class (NONE)"));
	default:
		throw LtXmlLib21::CLtException(_T("Unknown Collection Class id"));
	}
	return NULL; // appease compiler
}


void CClassFactory::CleanMetaData()
{
	BookStoreLib::CAuthorName::CleanMetaData();
	BookStoreLib::CBookstore::CleanMetaData();
	BookStoreLib::CBookType::CleanMetaData();
}

// These Methods can be used to construct and load data into a generated object, 
// without needing to know the type of XML Document being loaded
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXml(LPCTSTR lpszXmlIn)
{
	return FromXml(lpszXmlIn, LtXmlLib21::CSerializationContext::GetDefaultContext());
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXml(LPCTSTR lpszXmlIn, const LtXmlLib21::CSerializationContext& context)
{
	LtXmlLib21::CXmlDocument XmlDoc(context);
	XmlDoc.LoadXml(lpszXmlIn);
	return FromXmlElement(XmlDoc.GetDocumentElement(), context);
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlFile(LPCTSTR lpszFileName )
{
	return FromXmlFile(lpszFileName, LtXmlLib21::CSerializationContext::GetDefaultContext());
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlFile(LPCTSTR lpszFileName, const LtXmlLib21::CSerializationContext& context)
{
	LtXmlLib21::CXmlDocument XmlDoc(context);
	XmlDoc.Load(lpszFileName);
	return FromXmlElement(XmlDoc.GetDocumentElement(), context);
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlStream(const LtXmlLib21::CBinaryData& stream)
{
	return FromXmlStream(stream, LtXmlLib21::CSerializationContext::GetDefaultContext());
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlStream(const LtXmlLib21::CBinaryData& stream, const LtXmlLib21::CSerializationContext& context)
{
	LtXmlLib21::CXmlDocument XmlDoc(context);
	XmlDoc.LoadXmlStream(stream.GetData(), stream.GetLength());
	return FromXmlElement(XmlDoc.GetDocumentElement(), context);
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlElement(LtXmlLib21::CXmlElement* pXmlParent)
{
	return FromXmlElement(pXmlParent, LtXmlLib21::CSerializationContext::GetDefaultContext());
}
LtXmlLib21::CXmlObjectBasePtr CClassFactory::FromXmlElement(LtXmlLib21::CXmlElement* pXmlParent, const LtXmlLib21::CSerializationContext& context)
{
	LtXmlLib21::CXmlObjectBasePtr spRetVal;
	std::tstring strElementName;
	std::tstring strElementNamespaceUri;

	// Get the type name this is either 
	// from the element i.e. <Parent>... = Parent
	// or from the type i.e. <Parent xsi:type="someNS:SomeElement">... = SomeElement
	if (GetElementType(pXmlParent) == _T(""))
	{
		strElementName = pXmlParent->GetLocalName();
		strElementNamespaceUri = pXmlParent->GetNamespaceURI();
	}
	else
	{
		strElementName = GetElementType(pXmlParent);
		strElementNamespaceUri = GetElementTypeNamespaceUri(pXmlParent);
	}

	// create the appropriate object
	if (strElementName == _T(""))
		throw LtXmlLib21::CLtInvalidStateException(_T("The element to load has no name")); 
	if (strElementName == _T("authorName") && strElementNamespaceUri == _T(""))
		spRetVal = new BookStoreLib::CAuthorName();
	if (strElementName == _T("bookstore") && strElementNamespaceUri == _T(""))
		spRetVal = new BookStoreLib::CBookstore();
	if (strElementName == _T("bookType") && strElementNamespaceUri == _T(""))
		spRetVal = new BookStoreLib::CBookType();
	if (spRetVal == NULL)
	{
		throw LtXmlLib21::CLtException(
			LtXmlLib21::FormatString(_T("Failed load the element ") _T_STR_FORMATTER _T(":") _T_STR_FORMATTER _T(". No appropriate class exists to load the data into. Ensure that the XML document complies with the schema."), 
			pXmlParent->GetLocalName().c_str(), pXmlParent->GetNamespaceURI().c_str()));
	}
			
	// load the data into the object
	spRetVal->FromXmlElement(pXmlParent, context);

	return spRetVal;
}

// ##HAND_CODED_BLOCK_START ID="Additional Methods - BookStoreLib"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods - BookStoreLib"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

}; // namespace BookStoreLib
// EOF

