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
#include "../BookStoreLib.h"
#include "../BookStoreLib/BookTypeCol.h"
#include "../BookStoreLib/BookType.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{

/*
 * we don't want the users just creating these. They need to 
 * be initialize with the name of the element that they are
 * going to represent in the XML document. This information
 * requires knowledge of the schema, we are trying to 
 * prevent the user from having to know anything about that.
 */
CBookTypeCol::CBookTypeCol(LPCTSTR lpctElementName, LPCTSTR lpctNamespaceUri, int minOccurs, int maxOccurs)
 : CXmlCollectionCommonBase(lpctElementName, lpctNamespaceUri, minOccurs, maxOccurs), CInstanceMonitor(_T("CBookTypeCol"))
{
}

/*
 * Adds a BookStoreLib::CBookType to the collection
 */
void CBookTypeCol::Add(BookStoreLib::CBookType* pCls)
{
	SetElementName(pCls, m_elementName.c_str());
	AppendItem(pCls);
}

void CBookTypeCol::AddAt(int index, BookStoreLib::CBookType* pCls)
{
	SetElementName(pCls, m_elementName.c_str());
	AddItemAt(index, pCls);
}

/*
 * 	Create a new BookStoreLib::CBookType object and adds it the collection
 */
BookStoreLib::CBookTypePtr CBookTypeCol::Add()
{
	CSmartPtr<LtXmlLib21::CXmlObjectBase> spCls = BookStoreLib::CClassFactory::CreateClass(BookStoreLib::CClassFactory::ClsName_CBookType, m_elementName.c_str());
	AppendItem(spCls);
	return dynamic_cast<BookStoreLib::CBookType*>(spCls.Ptr());
}

/*
 * Gets a CBookType object from the collection (0 based)
 */
CSmartPtr<BookStoreLib::CBookType> CBookTypeCol::Item(int index) const
{	
	return dynamic_cast<BookStoreLib::CBookType*>(GetNodeAtIndex(index)->spObj.Ptr());
}

/*
 * 	Removes the object from the collection
 */
void CBookTypeCol::Remove(BookStoreLib::CBookType* pCls)
{
	RemoveNode(GetNodeForItem(pCls));
}

/*
 * Gets a representation of the class as XML - Marshalls Objects to XML
 */
void CBookTypeCol::ToXml_Int(LtXmlLib21::CXmlWriter* xmlOut, bool bRegisterNamespaces, LPCTSTR lpctNamespaceUri, const LtXmlLib21::CSerializationContext& context, bool isOptionalChoice) const
{
	ValidateCount(context);
	LtXmlLib21::CNode* pNode = m_pHead;
	while(pNode != NULL)
	{
		LtXmlLib21::CXmlObjectBase::ToXml_Int((pNode->spObj)->GetBase(), xmlOut, false, lpctNamespaceUri, context, isOptionalChoice);
		pNode = pNode->pNext;
	}
}

/*
 * Creates the collection from XML data - Unmarshalls XML to Objects
 */
LtXmlLib21::CXmlElement* CBookTypeCol::FromXml_Int(LtXmlLib21::CXmlElement* pXmlParent, LtXmlLib21::CXmlElement* pXmlChild, const LtXmlLib21::CSerializationContext& context, bool isOptionalChoice)
{
	// go through the nodes until we run out of ones that match
	while (pXmlChild != NULL)
	{
		// Stop reading when we hit an element we cant deal with
		if (!DoesElementNameMatch(context, pXmlChild, m_elementName.c_str(), GetNamespace().c_str()))
			break;
		CSmartPtr<LtXmlLib21::CXmlObjectBase> spObj = BookStoreLib::CClassFactory::CreateClass(BookStoreLib::CClassFactory::ClsName_CBookType, m_elementName.c_str());
		LtXmlLib21::CXmlObjectBase::FromXml_Int(spObj->GetBase(), pXmlChild, pXmlChild->GetFirstElement(), context);

		// Add new item to the collection
		AppendItem(spObj.Ptr());
	
		// Move to next node
		pXmlChild = pXmlChild->GetNextSiblingElement();
	}
	
	return pXmlChild;
}

CBookTypeCol::iterator CBookTypeCol::begin()
{
	return m_pHead;
}
CBookTypeCol::iterator CBookTypeCol::end()
{
	return NULL;
}

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

}; // namespace


