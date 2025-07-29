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
#ifndef _BookStoreLib_BookStoreLib_CBookTypeCol_h
#define _BookStoreLib_BookStoreLib_CBookTypeCol_h

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

namespace BookStoreLib
{
	class BookStoreLib_DLL CBookTypeCol : public BookStoreLib::CXmlCollectionCommonBase, CInstanceMonitor
// ##HAND_CODED_BLOCK_START ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
// Add Additional base classes here...
// ##HAND_CODED_BLOCK_END ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	{
	protected:
		CBookTypeCol(LPCTSTR lpctElementName, LPCTSTR lpctNamespaceUri, int minOccurs, int maxOccurs);
	public:
		BookStoreLib::CBookTypePtr Add();
		void Add(BookStoreLib::CBookType* pCls);
		void AddAt(int index, BookStoreLib::CBookType* pCls);
		
		BookStoreLib::CBookTypePtr Item(int index) const;
		void Remove(BookStoreLib::CBookType* pCls);

		typedef LtXmlLib21::CLtIterator<BookStoreLib::CBookType> iterator;
		typedef LtXmlLib21::CLtConstIterator<BookStoreLib::CBookType> const_iterator;

		iterator begin();
		iterator end();
	
	protected:
		virtual void ToXml_Int( LtXmlLib21::CXmlWriter* pXmlOut, bool bRegisterNamespaces, LPCTSTR lpctNamespaceUri, const LtXmlLib21::CSerializationContext& context, bool isOptionalChoice) const;
		virtual LtXmlLib21::CXmlElement* FromXml_Int( LtXmlLib21::CXmlElement* pXmlParent, LtXmlLib21::CXmlElement* pXmlChild, const LtXmlLib21::CSerializationContext& context, bool isOptionalChoice);
		friend class BookStoreLib::CClassFactory;

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	};
}; // end namespace (BookStoreLib)

#endif // _BookStoreLib_CBookTypeCol_h

