
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
#include "BookStoreLib.h"

// ##HAND_CODED_BLOCK_START ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Includes here...

// ##HAND_CODED_BLOCK_END ID="Additional Includes"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Forward declarations - done like this to keep the intellisense happy
namespace BookStoreLib	{	class CClassFactory; };

namespace BookStoreLib 
{
	// This class is constructed when the dll is loaded,
	// and destroyed when the dll is unloaded.
	class CAppLifetime
	{
	public:
		CAppLifetime()
		{
			RegisterLibrary();
		}
		~CAppLifetime()
		{
			CleanupMetaData();
		}
		
		// remove all cached meta data
		// this method is NOT thread safe.
		static void CleanupMetaData()
		{
			BookStoreLib::CClassFactory::CleanMetaData();
		}


		// Register the redist when the library is loaded 
		// Stops the nag screen popping up!
		static void RegisterLibrary()
		{
			LtXmlLib21::Register(21, 1);

			// ##HAND_CODED_BLOCK_START ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
			// Add Additional namespace declarations here...
			LtXmlLib21::CSerializationContext::GetDefaultContext().SetSchemaType(LtXmlLib21::SchemaType_XSD);
			// LtXmlLib21::CSerializationContext::GetDefaultContext().SetDefaultNamespaceURI(_T("http://www.fpml.org/2003/FpML-4-0"));
			// LtXmlLib21::CSerializationContext::GetDefaultContext().GetNamespaceAliases().Add(_T("dsig"), _T("http://www.w3.org/2000/09/xmldsig#"), true);

			LtXmlLib21::CSerializationContext::GetDefaultContext().GetNamespaceAliases().Add(_T("xs"), _T("http://www.w3.org/2001/XMLSchema-instance"), true);

			// ##HAND_CODED_BLOCK_END ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
		}
	};
	static BookStoreLib::CAppLifetime s_oDuumy;
};
	
namespace BookStoreLib 
{
	// ##HAND_CODED_BLOCK_START ID="BookStoreLib::CEnumerations Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	// Add Additional Methods here...

	// ##HAND_CODED_BLOCK_END ID="BookStoreLib::CEnumerations Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

	
};






