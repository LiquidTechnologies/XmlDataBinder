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
#include "../BookStoreLib/AuthorName.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Name                    : authorName
// Long Name               : authorName
// Element Name            : authorName
// Class Namespace         : BookStoreLib
// Namespace Alias         : 
// Schema Namespace        : 
// Mapped Class Name       : CAuthorName
// Mapped Class Full Name  : BookStoreLib::CAuthorName
// Mapped Class File Name  : CAuthorName
// IsAbstract              : False
// IsElement               : True
// IsComplexType           : True

namespace BookStoreLib
{

LtXmlLib21Data::CParentElementInfo* CAuthorName::ms_pParentElementInfo = NULL;
LtXmlLib21Data::CAttributeInfo** CAuthorName::ms_ppAttributeInfo = NULL;
LtXmlLib21Data::CElementInfo** CAuthorName::ms_ppElementInfo = NULL;

CAuthorNamePtr CAuthorName::CreateInstance(LPCTSTR lpctElementName/*=_T("authorName")*/)
{
	return new BookStoreLib::CAuthorName(lpctElementName);
}

/* 	
 * Constructor for CAuthorName
 *
 * The class is created with all the mandatory fields populated with the
 * default data.
 * All Collection objects are created.
 * However any 1-n relationships (these are represented as collections) are
 * empty. To comply with the schema these must be populated before the xml
 * obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
 */
CAuthorName::CAuthorName(LPCTSTR lpctElementName/*=_T("authorName")*/)
 : CInstanceMonitor(_T("CAuthorName"))
{
	m_elementName = lpctElementName;
	Init();
}

CAuthorName::~CAuthorName()
{
	Cleanup();
}

void CAuthorName::Cleanup()
{
	// unregister for any events we have asked for
	// cos there'll be no one left to hear soon
}

void CAuthorName::OnEvent(LtXmlLib21::CXmlObjectBase* pMsgSource, LtXmlLib21::IEventSink::MsgType eMsgType, void* pData)
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
void CAuthorName::Init()
{
	Cleanup();

	this->m_First_name = _T("");
	this->m_Last_name = _T("");
	


// ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Init Settings...

// ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}
	

void CAuthorName::AccessProperty(int iPropertyIndex, bool bRead, LtXmlLib21::LtVariant& rValue)
{
	if (bRead)
	{
		switch(iPropertyIndex)
		{
		case 1:
				rValue.SetString(GetFirst_name());
			break;
		case 2:
				rValue.SetString(GetLast_name());
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
			SetFirst_name(rValue.GetString());
			break;
		case 2:
			SetLast_name(rValue.GetString());
			break;
		default:
			throw LtXmlLib21::CLtException(_T("Unknown Property Index"));
		}
	}
}

/*
 * Represents a mandatory Element in the XML document
 *
 * 
 * This property is represented as an Element in the XML.
 * It is mandatory and therefore must be populated within the XML.
 * It is defaulted to _T("").
 */
std::tstring CAuthorName::GetFirst_name() const
{
	return this->m_First_name;
}
void CAuthorName::SetFirst_name(std::tstring value)
{ 
	// Apply whitespace rules appropriately
	value = LtXmlLib21::CWhitespaceUtils::Preserve(value); 
	this->m_First_name = value; 
}

/*
 * Represents a mandatory Element in the XML document
 *
 * 
 * This property is represented as an Element in the XML.
 * It is mandatory and therefore must be populated within the XML.
 * It is defaulted to _T("").
 */
std::tstring CAuthorName::GetLast_name() const
{
	return this->m_Last_name;
}
void CAuthorName::SetLast_name(std::tstring value)
{ 
	// Apply whitespace rules appropriately
	value = LtXmlLib21::CWhitespaceUtils::Preserve(value); 
	this->m_Last_name = value; 
}

/*
 * Allows the class to be copied
 * Performs a 'deep copy' of all the data in the class (and its children)
 */
BookStoreLib::CAuthorNamePtr CAuthorName::Clone() const
{
	BookStoreLib::CAuthorNamePtr newObject = CreateInstance(m_elementName.c_str());

	int index = 0;
	newObject->m_First_name = m_First_name;
	newObject->m_Last_name = m_Last_name;


// ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional clone code here...

// ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	return newObject.Ptr();
}

std::tstring CAuthorName::GetTargetNamespace() const
{
	return _T("");
}	

std::tstring CAuthorName::GetNamespace() const
{
	return _T("");
}	

LtXmlLib21::CXmlObjectBase* CAuthorName::GetBase()
{
	return this;
}	

void CAuthorName::CleanMetaData()
{
	LtXmlLib21::CXmlGeneratedClass::CleanMetaData(ms_pParentElementInfo, ms_ppElementInfo, ms_ppAttributeInfo);
}

LtXmlLib21Data::CParentElementInfo* CAuthorName::GetClassInfo() const
{
	if (ms_pParentElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_pParentElementInfo == NULL)
		{
			ms_pParentElementInfo = new LtXmlLib21Data::CParentElementInfo(
																			LtXmlLib21Data::XmlElementGroupType_SEQUENCE,
																			LtXmlLib21Data::XmlElementType_ELEMENT, 
																			_T("authorName"),					 
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

LtXmlLib21Data::CElementInfo** CAuthorName::GetClassElementInfo() const
{
	if (ms_ppElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_ppElementInfo == NULL)
		{
			ms_ppElementInfo = new LtXmlLib21Data::CElementInfo*[3];
		
			ms_ppElementInfo[0] = new LtXmlLib21Data::CElementInfoSeqPrimMnd(_T("first-name"), _T(""), 1, false, LtXmlLib21::ItemType_string, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Preserve, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppElementInfo[1] = new LtXmlLib21Data::CElementInfoSeqPrimMnd(_T("last-name"), _T(""), 2, false, LtXmlLib21::ItemType_string, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Preserve, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppElementInfo[2] = NULL;
		}
		m_csInit.Leave();
	}
	return ms_ppElementInfo;
}

LtXmlLib21Data::CAttributeInfo**	CAuthorName::GetClassAttributeInfo() const
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





