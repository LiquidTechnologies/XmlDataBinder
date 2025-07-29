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
#include "../BookStoreLib/BookType.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Name                    : bookType
// Long Name               : bookType
// Element Name            : bookType
// Class Namespace         : BookStoreLib
// Namespace Alias         : 
// Schema Namespace        : 
// Mapped Class Name       : CBookType
// Mapped Class Full Name  : BookStoreLib::CBookType
// Mapped Class File Name  : CBookType
// IsAbstract              : False
// IsElement               : True
// IsComplexType           : True

namespace BookStoreLib
{

LtXmlLib21Data::CParentElementInfo* CBookType::ms_pParentElementInfo = NULL;
LtXmlLib21Data::CAttributeInfo** CBookType::ms_ppAttributeInfo = NULL;
LtXmlLib21Data::CElementInfo** CBookType::ms_ppElementInfo = NULL;

CBookTypePtr CBookType::CreateInstance(LPCTSTR lpctElementName/*=_T("bookType")*/)
{
	return new BookStoreLib::CBookType(lpctElementName);
}

/* 	
 * Constructor for CBookType
 *
 * The class is created with all the mandatory fields populated with the
 * default data.
 * All Collection objects are created.
 * However any 1-n relationships (these are represented as collections) are
 * empty. To comply with the schema these must be populated before the xml
 * obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
 */
CBookType::CBookType(LPCTSTR lpctElementName/*=_T("bookType")*/)
 : CInstanceMonitor(_T("CBookType"))
 , m_Publicationdate(LtXmlLib21::CDateTime::dt_date)
{
	m_elementName = lpctElementName;
	Init();
}

CBookType::~CBookType()
{
	Cleanup();
}

void CBookType::Cleanup()
{
	// unregister for any events we have asked for
	// cos there'll be no one left to hear soon
}

void CBookType::OnEvent(LtXmlLib21::CXmlObjectBase* pMsgSource, LtXmlLib21::IEventSink::MsgType eMsgType, void* pData)
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
void CBookType::Init()
{
	Cleanup();

	this->m_Price = 0;
	this->m_Publicationdate = LtXmlLib21::CDateTime(LtXmlLib21::CDateTime::dt_date);
	this->m_IsValidPublicationdate = false;
	this->m_ISBN = _T("");
	this->m_IsValidISBN = false;
	this->m_Title = _T("");
	this->m_Author = dynamic_cast<BookStoreLib::CAuthorName*>(BookStoreLib::CClassFactory::CreateClass(BookStoreLib::CClassFactory::ClsName_CAuthorName, _T("author")).Ptr());
	this->m_Genre = _T("");
	this->m_IsValidGenre = false;
	


// ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Init Settings...

// ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}
	

void CBookType::AccessProperty(int iPropertyIndex, bool bRead, LtXmlLib21::LtVariant& rValue)
{
	if (bRead)
	{
		switch(iPropertyIndex)
		{
		case 1:
				rValue.SetR8(GetPrice());
			break;
		case 2:
			if (IsValidPublicationdate())
				rValue.SetDate(GetPublicationdate());
			else
				rValue.SetInvalid();
			break;
		case 3:
			if (IsValidISBN())
				rValue.SetString(GetISBN());
			else
				rValue.SetInvalid();
			break;
		case 4:
				rValue.SetString(GetTitle());
			break;
		case 5:
				rValue.SetXmlObject(GetAuthor().Ptr());
			break;
		case 6:
			if (IsValidGenre())
				rValue.SetString(GetGenre());
			else
				rValue.SetInvalid();
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
			SetPrice(rValue.GetR8());
			break;
		case 2:
			if (rValue.IsValid())
				SetPublicationdate(rValue.GetDate());
			else
				SetValidPublicationdate(false);
			break;
		case 3:
			if (rValue.IsValid())
				SetISBN(rValue.GetString());
			else
				SetValidISBN(false);
			break;
		case 4:
			SetTitle(rValue.GetString());
			break;
		case 5:
			SetAuthor(dynamic_cast<BookStoreLib::CAuthorName*>(rValue.GetXmlObject().Ptr()));
			break;
		case 6:
			if (rValue.IsValid())
				SetGenre(rValue.GetString());
			else
				SetValidGenre(false);
			break;
		default:
			throw LtXmlLib21::CLtException(_T("Unknown Property Index"));
		}
	}
}

/*
 * Represents a mandatory Attribute in the XML document
 *
 * 
 * This property is represented as an Attribute in the XML.
 * It is mandatory and therefore must be populated within the XML.
 * It is defaulted to 0.
 */
DOUBLE CBookType::GetPrice() const
{
	return this->m_Price;
}
void CBookType::SetPrice(DOUBLE value)
{ 
	this->m_Price = value; 
}

/*
 * Represents an optional Attribute in the XML document
 *
 * 
 * This property is represented as an Attribute in the XML.
 * It is optional, initially it is not valid.
 */
LtXmlLib21::CDateTime CBookType::GetPublicationdate() const
{
	if (m_IsValidPublicationdate == false)
		throw LtXmlLib21::CLtInvalidStateException(_T("The Property GetPublicationdate is not valid. SetPublicationdate must be called first"));
	return this->m_Publicationdate;
}
void CBookType::SetPublicationdate(LtXmlLib21::CDateTime value)
{ 
	this->m_IsValidPublicationdate = true;

	this->m_Publicationdate.SetDateTime(value, m_Publicationdate.GetType()); 
}

/*
 * Indicates if GetPublicationdate contains a valid value.
 *
 * true if the value for GetPublicationdate is valid, false if not.
 * If this is set to true then the property is considered valid, and assigned its
 * default value (LtXmlLib21::CDateTime(LtXmlLib21::CDateTime::dt_date)).
 * If its set to false then its made invalid, and subsequent calls to GetPublicationdate
 * will raise an exception.
 */
bool CBookType::IsValidPublicationdate() const
{ 
	return m_IsValidPublicationdate;
}
void CBookType::SetValidPublicationdate(bool value)
{ 
	if (value != m_IsValidPublicationdate)
	{
		this->m_Publicationdate = LtXmlLib21::CDateTime(LtXmlLib21::CDateTime::dt_date);
		m_IsValidPublicationdate = value;
	}
}

/*
 * Represents an optional Attribute in the XML document
 *
 * 
 * This property is represented as an Attribute in the XML.
 * It is optional, initially it is not valid.
 */
std::tstring CBookType::GetISBN() const
{
	if (m_IsValidISBN == false)
		throw LtXmlLib21::CLtInvalidStateException(_T("The Property GetISBN is not valid. SetISBN must be called first"));
	return this->m_ISBN;
}
void CBookType::SetISBN(std::tstring value)
{ 
	// Apply whitespace rules appropriately
	value = LtXmlLib21::CWhitespaceUtils::Preserve(value); 
	this->m_IsValidISBN = true;

	this->m_ISBN = value; 
}

/*
 * Indicates if GetISBN contains a valid value.
 *
 * true if the value for GetISBN is valid, false if not.
 * If this is set to true then the property is considered valid, and assigned its
 * default value (_T("")).
 * If its set to false then its made invalid, and subsequent calls to GetISBN
 * will raise an exception.
 */
bool CBookType::IsValidISBN() const
{ 
	return m_IsValidISBN;
}
void CBookType::SetValidISBN(bool value)
{ 
	if (value != m_IsValidISBN)
	{
		this->m_ISBN = _T("");
		m_IsValidISBN = value;
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
std::tstring CBookType::GetTitle() const
{
	return this->m_Title;
}
void CBookType::SetTitle(std::tstring value)
{ 
	// Apply whitespace rules appropriately
	value = LtXmlLib21::CWhitespaceUtils::Preserve(value); 
	this->m_Title = value; 
}

/*
 * Represents a mandatory Element in the XML document
 *
 * 
 * This property is represented as an Element in the XML.
 * It is mandatory and therefore must be populated within the XML.
 * If this property is set, then the object will be COPIED. If the property is set to NULL an exception is raised.
 */
BookStoreLib::CAuthorNamePtr CBookType::GetAuthor() const
{ 
	return this->m_Author;  
}
void CBookType::SetAuthor(BookStoreLib::CAuthorName* value)
{ 
	Throw_IfPropertyIsNull(value, _T("author"));
	if (value != NULL)
		SetElementName(value, _T("author"));
	this->m_Author = value; 
}

/*
 * Represents an optional Element in the XML document
 *
 * 
 * This property is represented as an Element in the XML.
 * It is optional, initially it is not valid.
 */
std::tstring CBookType::GetGenre() const
{
	if (m_IsValidGenre == false)
		throw LtXmlLib21::CLtInvalidStateException(_T("The Property GetGenre is not valid. SetGenre must be called first"));
	return this->m_Genre;
}
void CBookType::SetGenre(std::tstring value)
{ 
	// Apply whitespace rules appropriately
	value = LtXmlLib21::CWhitespaceUtils::Preserve(value); 
	this->m_IsValidGenre = true;

	this->m_Genre = value; 
}

/*
 * Indicates if GetGenre contains a valid value.
 *
 * true if the value for GetGenre is valid, false if not.
 * If this is set to true then the property is considered valid, and assigned its
 * default value (_T("")).
 * If its set to false then its made invalid, and subsequent calls to GetGenre
 * will raise an exception.
 */
bool CBookType::IsValidGenre() const
{ 
	return m_IsValidGenre;
}
void CBookType::SetValidGenre(bool value)
{ 
	if (value != m_IsValidGenre)
	{
		this->m_Genre = _T("");
		m_IsValidGenre = value;
	}
}

/*
 * Allows the class to be copied
 * Performs a 'deep copy' of all the data in the class (and its children)
 */
BookStoreLib::CBookTypePtr CBookType::Clone() const
{
	BookStoreLib::CBookTypePtr newObject = CreateInstance(m_elementName.c_str());

	int index = 0;
	newObject->m_Price = m_Price;
	newObject->m_Publicationdate = m_Publicationdate;
	newObject->m_IsValidPublicationdate = m_IsValidPublicationdate;
	newObject->m_ISBN = m_ISBN;
	newObject->m_IsValidISBN = m_IsValidISBN;
	newObject->m_Title = m_Title;
	newObject->m_Author = NULL;
	if (m_Author != NULL)
		newObject->m_Author = dynamic_cast<BookStoreLib::CAuthorName*>(m_Author->Clone().Ptr());
	newObject->m_Genre = m_Genre;
	newObject->m_IsValidGenre = m_IsValidGenre;


// ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional clone code here...

// ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	return newObject.Ptr();
}

std::tstring CBookType::GetTargetNamespace() const
{
	return _T("");
}	

std::tstring CBookType::GetNamespace() const
{
	return _T("");
}	

LtXmlLib21::CXmlObjectBase* CBookType::GetBase()
{
	return this;
}	

void CBookType::CleanMetaData()
{
	LtXmlLib21::CXmlGeneratedClass::CleanMetaData(ms_pParentElementInfo, ms_ppElementInfo, ms_ppAttributeInfo);
}

LtXmlLib21Data::CParentElementInfo* CBookType::GetClassInfo() const
{
	if (ms_pParentElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_pParentElementInfo == NULL)
		{
			ms_pParentElementInfo = new LtXmlLib21Data::CParentElementInfo(
																			LtXmlLib21Data::XmlElementGroupType_SEQUENCE,
																			LtXmlLib21Data::XmlElementType_ELEMENT, 
																			_T("bookType"),					 
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

LtXmlLib21Data::CElementInfo** CBookType::GetClassElementInfo() const
{
	if (ms_ppElementInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_ppElementInfo == NULL)
		{
			ms_ppElementInfo = new LtXmlLib21Data::CElementInfo*[4];
		
			ms_ppElementInfo[0] = new LtXmlLib21Data::CElementInfoSeqPrimMnd(_T("title"), _T(""), 4, false, LtXmlLib21::ItemType_string, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Preserve, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppElementInfo[1] = new LtXmlLib21Data::CElementInfoSeqClsMnd(_T("author"), _T(""), 5, LtXmlLib21Data::XmlElementType_ELEMENT, (LtXmlLib21Data::pfnCreateClassDef)&BookStoreLib::CClassFactory::CreateClass, BookStoreLib::CClassFactory::ClsName_CAuthorName, true);
			ms_ppElementInfo[2] = new LtXmlLib21Data::CElementInfoSeqPrimOpt(_T("genre"), _T(""), 6, false, LtXmlLib21::ItemType_string, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Preserve, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppElementInfo[3] = NULL;
		}
		m_csInit.Leave();
	}
	return ms_ppElementInfo;
}

LtXmlLib21Data::CAttributeInfo**	CBookType::GetClassAttributeInfo() const
{
	if (ms_ppAttributeInfo == NULL)
	{
		m_csInit.Enter();
		if (ms_ppAttributeInfo == NULL)
		{
			ms_ppAttributeInfo = new LtXmlLib21Data::CAttributeInfo*[4];
			ms_ppAttributeInfo[0] = new LtXmlLib21Data::CAttributeInfoPrimitive(_T("price"), _T(""), 1, false, LtXmlLib21::ItemType_r8, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Collapse, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppAttributeInfo[1] = new LtXmlLib21Data::CAttributeInfoPrimitive(_T("publicationdate"), _T(""), 2, true, LtXmlLib21::ItemType_date, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Collapse, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppAttributeInfo[2] = new LtXmlLib21Data::CAttributeInfoPrimitive(_T("ISBN"), _T(""), 3, true, LtXmlLib21::ItemType_string, NULL, LtXmlLib21::CWhitespaceUtils::WhitespaceRule_Preserve, LtXmlLib21::CPrimitiveRestrictions(_T(""), -1, -1, _T(""), _T(""), _T(""), _T(""), -1, -1, -1), NULL);
			ms_ppAttributeInfo[3] = NULL;
		}
		m_csInit.Leave();
	}
	return ms_ppAttributeInfo;
}

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

}; // namespace





