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
#ifndef _BookStoreLib_BookStoreLib_CBookType_h
#define _BookStoreLib_BookStoreLib_CBookType_h

// Include Base classes
#include "../BookStoreLib/AuthorName.h"
#include "../BookStoreLib/AuthorName.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Forward declarations - done like this to keep the intellisense happy
namespace BookStoreLib	{	class CClassFactory; };

namespace BookStoreLib
{
	/*
	 * CBookType
	 *  
	 * This class wraps the element bookType in the schema
	 */
	class BookStoreLib_DLL CBookType : public CInstanceMonitor
					, public virtual BookStoreLib::CXmlCommonBase
// ##HAND_CODED_BLOCK_START ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
// Add Additional base classes here...
// ##HAND_CODED_BLOCK_END ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	{
	public:
		static BookStoreLib::CBookTypePtr CreateInstance(LPCTSTR lpctElementName=_T("bookType"));

	protected:
		CBookType(LPCTSTR lpctElementName=_T("bookType"));
		virtual ~CBookType();
		friend class BookStoreLib::CClassFactory;
	
		virtual void Init();
		virtual void AccessProperty(int iPropertyIndex, bool read, LtXmlLib21::LtVariant& rValue);
		virtual LtXmlLib21Data::CParentElementInfo* GetClassInfo() const;
		virtual LtXmlLib21Data::CElementInfo** GetClassElementInfo() const;
		virtual LtXmlLib21Data::CAttributeInfo** GetClassAttributeInfo() const;
		
		static	void CleanMetaData();
				void Cleanup();
		virtual void OnEvent(LtXmlLib21::CXmlObjectBase* pMsgSource, LtXmlLib21::IEventSink::MsgType eMsgType, void* pData);

	public:
		DOUBLE GetPrice() const;
		void SetPrice(DOUBLE val);
	protected:
 	    DOUBLE m_Price;

	public:
		LtXmlLib21::CDateTime GetPublicationdate() const;
		void SetPublicationdate(LtXmlLib21::CDateTime val);
		bool IsValidPublicationdate() const;
		void SetValidPublicationdate(bool val);
	protected:
		bool m_IsValidPublicationdate;
		LtXmlLib21::CDateTime m_Publicationdate;

	public:
		std::tstring GetISBN() const;
		void SetISBN(std::tstring val);
		bool IsValidISBN() const;
		void SetValidISBN(bool val);
	protected:
		bool m_IsValidISBN;
		std::tstring m_ISBN;

	public:
		std::tstring GetTitle() const;
		void SetTitle(std::tstring val);
	protected:
 	    std::tstring m_Title;

	public:
		BookStoreLib::CAuthorNamePtr GetAuthor() const;
		void SetAuthor(BookStoreLib::CAuthorName* value);
	protected:
		BookStoreLib::CAuthorNamePtr m_Author;

	public:
		std::tstring GetGenre() const;
		void SetGenre(std::tstring val);
		bool IsValidGenre() const;
		void SetValidGenre(bool val);
	protected:
		bool m_IsValidGenre;
		std::tstring m_Genre;



	public:
		// Performs a 'deep copy' of all the data in the class (and its children)
		virtual BookStoreLib::CBookTypePtr Clone() const;

		virtual std::tstring GetTargetNamespace() const;
		virtual std::tstring GetNamespace() const;
		virtual LtXmlLib21::CXmlObjectBase* GetBase();

	// Internal data for XML serialization
	private:
		static LtXmlLib21Data::CParentElementInfo* ms_pParentElementInfo;
		static LtXmlLib21Data::CElementInfo** ms_ppElementInfo;
		static LtXmlLib21Data::CAttributeInfo** ms_ppAttributeInfo;

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	};
}; // end namespace (BookStoreLib)


#endif // _BookStoreLib_CBookType_h

