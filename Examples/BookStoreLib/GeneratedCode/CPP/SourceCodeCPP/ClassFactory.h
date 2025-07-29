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
#ifndef _BookStoreLib_CLASS_FACTORY_H
#define _BookStoreLib_CLASS_FACTORY_H

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{
	class BookStoreLib_DLL CClassFactory  : public LtXmlLib21::CClassfactoryBase
	{
	public:
		// These Methods can be used to construct and load data into a generated object, 
		// without needing to know the type of XML Document being loaded
		static LtXmlLib21::CXmlObjectBasePtr FromXml(LPCTSTR lpszXmlIn);
		static LtXmlLib21::CXmlObjectBasePtr FromXml(LPCTSTR lpszXmlIn, const LtXmlLib21::CSerializationContext& context);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlFile(LPCTSTR lpszFileName);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlFile(LPCTSTR lpszFileName, const LtXmlLib21::CSerializationContext&  context);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlStream(const LtXmlLib21::CBinaryData& stream);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlStream(const LtXmlLib21::CBinaryData& stream, const LtXmlLib21::CSerializationContext& context);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlElement(LtXmlLib21::CXmlElement* pXmlParent);
		static LtXmlLib21::CXmlObjectBasePtr FromXmlElement(LtXmlLib21::CXmlElement* pXmlParent, const LtXmlLib21::CSerializationContext& context);
	
		enum BookStoreLib_Classes
		{
			ClsName_NONE
			, ClsName_CAuthorName
			, ClsName_CBookstore
			, ClsName_CBookType
			, ClsName_CBookTypeCol
		};
		
		
		static LtXmlLib21::CXmlObjectBasePtr CreateClass(BookStoreLib_Classes eCls, LPCTSTR strElementName);
		static LtXmlLib21::CXmlCollectionBasePtr CreateClassCollection(BookStoreLib_Classes eCls, LPCTSTR strElementName, LPCTSTR strElementNamespaceURI, long iMinOccurs, long iMaxOccurs);
		static LtXmlLib21::CXmlCollectionBasePtr CreateEnumCollection(BookStoreLib_Classes eCls, LPCTSTR strElementName, LPCTSTR strNamespace, long iMinOccurs, long iMaxOccurs);

		// removes all cached data help by the data binding library.
		// can be called at the end of the program to free memory that may look like its leaked
		// or if the data binding code is no longer needed within the application, and you need to free up space.
		static void CleanMetaData();

// ##HAND_CODED_BLOCK_START ID="Additional Methods - BookStoreLib"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods - BookStoreLib"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	};
};

#endif // _BookStoreLib_CLASS_FACTORY_H

