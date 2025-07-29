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
#ifndef _BookStoreLib_COMMON_BASE_H
#define _BookStoreLib_COMMON_BASE_H

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{
	class BookStoreLib_DLL CXmlCommonBase : public LtXmlLib21::CXmlGeneratedClass
	{
		public:
			virtual ~CXmlCommonBase();

		protected:
			CXmlCommonBase();

/*
 * You can use the following hand coded section to override the CXmlObjectBase FromXml... and ToXml...
 * virtual methods to provide custom pre or post processing for all your generated classes, or to add
 * your own common methods.
 *
 * For Example you can add the prototype here and add the method to XmlCommonBase.cpp:
 *
 *		public:
 *			virtual void CXmlCommonBase::ToXmlFile	(	LPCTSTR lpszFileName,
 *														bool bIncludeDocHeader = true,
 *														bool bFormatXML = true,
 *														LtXmlLib21::XmlEncoding encoding = LtXmlLib21::XmlEncoding_UTF8,
 *														LtXmlLib21::EOLType eolType = LtXmlLib21::EOLType_CRLF,
 *														const LtXmlLib21::CSerializationContext& context = LtXmlLib21::CSerializationContext::GetDefaultContext(),
 *														LtXmlLib21::CompressionType compressionType = LtXmlLib21::CompressionType_NONE
 *													) const;
 */

// ##HAND_CODED_BLOCK_START ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Custom Base Methods here...

// ##HAND_CODED_BLOCK_END ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	};

}; // end namespace (BookStoreLib)

#endif // _BookStoreLib_COMMON_BASE_H

