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
#ifndef _BookStoreLib_BookStoreLib_CAuthorName_h
#define _BookStoreLib_BookStoreLib_CAuthorName_h

// Include Base classes

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Forward declarations - done like this to keep the intellisense happy
namespace BookStoreLib	{	class CClassFactory; };

namespace BookStoreLib
{
	/*
	 * CAuthorName
	 *  
	 * This class wraps the element authorName in the schema
	 */
	class BookStoreLib_DLL CAuthorName : public CInstanceMonitor
					, public virtual BookStoreLib::CXmlCommonBase
// ##HAND_CODED_BLOCK_START ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
// Add Additional base classes here...
// ##HAND_CODED_BLOCK_END ID="Additional Base Classes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
	{
	public:
		static BookStoreLib::CAuthorNamePtr CreateInstance(LPCTSTR lpctElementName=_T("authorName"));

	protected:
		CAuthorName(LPCTSTR lpctElementName=_T("authorName"));
		virtual ~CAuthorName();
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
		std::tstring GetFirst_name() const;
		void SetFirst_name(std::tstring val);
	protected:
 	    std::tstring m_First_name;

	public:
		std::tstring GetLast_name() const;
		void SetLast_name(std::tstring val);
	protected:
 	    std::tstring m_Last_name;



	public:
		// Performs a 'deep copy' of all the data in the class (and its children)
		virtual BookStoreLib::CAuthorNamePtr Clone() const;

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


#endif // _BookStoreLib_CAuthorName_h

