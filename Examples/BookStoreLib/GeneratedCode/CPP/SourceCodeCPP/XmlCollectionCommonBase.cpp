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
#include "BookStoreLib.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{
	CXmlCollectionCommonBase::CXmlCollectionCommonBase(LPCTSTR lpctElementName, LPCTSTR lpctNamespaceUri, int minOccurs, int maxOccurs)
		: CXmlCollection(lpctElementName, lpctNamespaceUri, minOccurs, maxOccurs)
	{
// ##HAND_CODED_BLOCK_START ID="Constructor"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Constructor Code here...

// ##HAND_CODED_BLOCK_END ID="Constructor"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	}

	CXmlCollectionCommonBase::~CXmlCollectionCommonBase()
	{
// ##HAND_CODED_BLOCK_START ID="Destructore"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Constructor Code here...

// ##HAND_CODED_BLOCK_END ID="Destructore"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	}

/*
 * You can use the following hand coded section to override the CXmlObjectBase FromXml... and ToXml...
 * virtual methods (see XmlObjectBase.h) to provide custom pre or post processing for all your generated classes,
 * or to add your own common methods.
 *
 * For Example you can add the prototype to XmlCollectionCommonBase.h and the following here:
 *
 *	void CXmlCollectionCommonBase::ToXmlFile(	LPCTSTR lpszFileName,
 *												bool bIncludeDocHeader,								// = true
 *												bool bFormatXML,									// = true
 *												LtXmlLib21::XmlEncoding encoding,					// = XmlEncoding_UTF8
 *												LtXmlLib21::EOLType eolType,							// = EOLType_CRLF
 *												const LtXmlLib21::CSerializationContext& context,	// = CSerializationContext::GetDefaultContext()
 *												LtXmlLib21::CompressionType compressionType			// = CompressionType_NONE
 *											) const
 *	{
 *		// Perform Custom Pre Processing
 *
 *		CXmlCollection::ToXmlFile(lpszFileName, bIncludeDocHeader, bFormatXML, encoding, eolType, context, compressionType);
 *
 *		// Perform Custom Post Processing
 *	}
 *
 */

// ##HAND_CODED_BLOCK_START ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Custom Base Methods here...

// ##HAND_CODED_BLOCK_END ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}; // namespace


