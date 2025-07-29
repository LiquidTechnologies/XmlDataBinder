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
#pragma warning (push)
#pragma warning (disable:4251)	// template export warning
#pragma warning (disable:4786)	// long debug names
#include "../BookStoreLib.h"
#include "../BookStoreLib/Bookstore.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Name                    : bookstore
// Long Name               : bookstore
// Element Name            : bookstore
// Class Namespace         : BookStoreLib
// Namespace Alias         : 
// Schema Namespace        : 
// Mapped Class Name       : CBookstore
// Mapped Class Full Name  : BookStoreLib::CBookstore
// Mapped Class File Name  : CBookstore
// IsAbstract              : False
// IsElement               : True
// IsComplexType           : False

namespace BookStoreLib
{

LtXmlLib21Data::CParentElementInfo* CBookstore::ms_pParentElementInfo = NULL;
LtXmlLib21Data::CAttributeInfo** CBookstore::ms_ppAttributeInfo = NULL;
LtXmlLib21Data::CElementInfo** CBookstore::ms_ppElementInfo = NULL;

CBookstorePtr CBookstore::CreateInstance(LPCTSTR lpctElementName/*=_T("bookstore")*/)
{
	return new BookStoreLib::CBookstore(lpctElementName);
}

/* 	
 * Constructor for CBookstore
 *
 * The class is created with all the mandatory fields populated with the
 * default data.
 * All Collection objects are created.
 * However any 1-n relationships (these are represented as collections) are
 * empty. To comply with the schema these must be populated before the xml
 * obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
 */
CBookstore::CBookstore(LPCTSTR lpctElementName/*=_T("bookstore")*/)
 : CInstanceMonitor(_T("CBookstore"))
{
	m_elementName = lpctElementName;
	Init();
}

CBookstore::~CBookstore()
{
	Cleanup();
}

void CBookstore::Cleanup()
{
	// unregister for any events we have asked for
	// cos there'll be no one left to hear soon
	this->m_Book = NULL;
}

void CBookstore::OnEvent(LtXmlLib21::CXmlObjectBase* pMsgSource, LtXmlLib21::IEventSink::MsgType eMsgType, void* pData)
{
	if (eMsgType == LtXmlLib21::IEventSink::MT_CollectionChangeEvent)
	{
	}
}

/*
 * Initializes the class
 *
 * The Creates all the mandatory fields (populated with the default data) 
 * All Collection object are created.
 * However any 1-n relationships (these are represented as collections) are
 * empty. To comply with the schema these must be populated before the xml
 * obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd.
 */
void CBookstore::Init()
{
	Cleanup();

	this->m_Book = dynamic_cast<BookStoreLib::CBookTypeCol*>(BookStoreLib::CClassFactory::CreateClassCollection(BookStoreLib::CClassFactory::ClsName_CBookTypeCol, _T("book"), _T(""), 0, -1).Ptr());
	


// ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Init Settings...

// ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}
	

void CBookstore::AccessProperty(int iPropertyIndex, bool bRead, LtXmlLib21::LtVariant& rValue)
{
	if (bRead)
	{
		switch(iPropertyIndex)
		{
		case 1:
			rValue.SetXmlCollection(GetBook().Ptr());
			break;
		default:
			throw LtXmlLib21::CLtException(_T("Unknown Property Index"));
		};
	}
	else
	{
		switch(iPropertyIndex)
		{
		case 1:
			throw LtXmlLib21::CLtException(_T("Collections can not be set"));
			break;
		default:
			throw LtXmlLib21::CLtException(_T("Unknown Property Index"));
		}
	}
}

/*
 * A collection of CBookstores
 *
 * 
 * This property is represented as an Element in the XML.
 * This collection may contain 0 to Many objects.
 */
BookStoreLib::CBookTypeColPtr CBookstore::GetBook() const
{
	return this->m_Book; 
}

/*
 * Allows the class to be copied
 * Performs a 'deep copy' of all the data in the class (and its children)
 */
BookStoreLib::CBookstorePtr CBookstore::Clone() const
{
	BookStoreLib::CBookstorePtr newObject = CreateInstance(m_elementName.c_str());

	int index = 0;
	for (index = 0; index < m_Book->GetCount(); index++)
		newObject->m_Book->Add(dynamic_cast<BookStoreLib::CBookType*>(m_Book->Item(index)->Clone().Ptr()));


// ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional clone code here...

// ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	return newObject.Ptr();
}

std::tstring CBookstore::GetTargetNamespace() const
{
	return _T("");
}	

std::tstring CBookstore::GetNamespace() const
{
	return _T("");
}	

LtXmlLib21::CXmlObjectBase* CBookstore::GetBase()
{
	return this;
}	

void CBookstore::CleanMetaData()
{
	LtXmlLib21::CXmlGeneratedClass::CleanMetaData(ms_pParentElementInfo, ms_ppElementInfo, ms_ppAttributeInfo);
}

LtXmlLib21Data::CParentElementInfo* CBookstore::GetClassInfo() const
{
	if (ms_pParentElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_pParentElementInfo == NULL)
		{
			ms_pParentElementInfo = new LtXmlLib21Data::CParentElementInfo(
																			LtXmlLib21Data::XmlElementGroupType_SEQUENCE,
																			LtXmlLib21Data::XmlElementType_ELEMENT, 
																			_T("bookstore"),					 
																			_T(""), 
																			true,
																			false,
																			-1,
																			LtXmlLib21::ItemType_none,
																			LtXmlLib21::CWhitespaceUtils::WhitespaceRule_None,
																			NULL,
																			false);
		}
		m_csInit.Leave();
	}
	
	return ms_pParentElementInfo;
}

LtXmlLib21Data::CElementInfo** CBookstore::GetClassElementInfo() const
{
	if (ms_ppElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_ppElementInfo == NULL)
		{
			ms_ppElementInfo = new LtXmlLib21Data::CElementInfo*[2];
		
			ms_ppElementInfo[0] = new LtXmlLib21Data::CElementInfoSeqClsCol(_T("book"), _T(""), 1, LtXmlLib21Data::XmlElementType_ELEMENT);
			ms_ppElementInfo[1] = NULL;
		}
		m_csInit.Leave();
	}
	return ms_ppElementInfo;
}

LtXmlLib21Data::CAttributeInfo**	CBookstore::GetClassAttributeInfo() const
{
	if (ms_ppAttributeInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_ppAttributeInfo == NULL)
		{
			ms_ppAttributeInfo = new LtXmlLib21Data::CAttributeInfo*[1];
			ms_ppAttributeInfo[0] = NULL;
		}
		m_csInit.Leave();
	}
	return ms_ppAttributeInfo;
}

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

}; // namespace





