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
#ifndef __BookStoreLib_h
#define __BookStoreLib_h

#ifdef _WIN32
#include <tchar.h>
#endif

#include <string>
#include <vector>

#ifdef _WIN32
	
	// If the lib file is not found then you will need to set the
	// library path to point to Redist21/cpp/win32/lib or Redist21/cpp/win64/lib
	// in the project settings.
	// The associated .dll will need to be on the system path at runtime.
	
	#ifdef _WIN64
		#ifdef _DEBUG
			#ifdef _UNICODE
				// load appropriate unicode debug library
				#if _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21UD_vc80x64.lib")
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21UD_vc90x64.lib")
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21UD_vc100x64.lib")
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21UD_vc110x64.lib")
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21UD_vc120x64.lib")
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21UD_vc140x64.lib")
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21UD_vc141x64.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21UD_vc142x64.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21UD_vc143x64.lib")
				#endif
			#else
				// load appropriate debug library
				#if _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21D_vc80x64.lib") 
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21D_vc90x64.lib") 
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21D_vc100x64.lib") 
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21D_vc110x64.lib") 
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21D_vc120x64.lib") 
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21D_vc140x64.lib") 
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21D_vc141x64.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21D_vc142x64.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21D_vc143x64.lib")
				#endif
			#endif
		#else
			#ifdef _UNICODE
				// load appropriate unicode release library
				#if _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21U_vc80x64.lib") 
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21U_vc90x64.lib") 
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21U_vc100x64.lib") 
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21U_vc110x64.lib") 
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21U_vc120x64.lib") 
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21U_vc140x64.lib") 
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21U_vc141x64.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21U_vc142x64.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21U_vc143x64.lib")
				#endif
			#else
				// load appropriate debug release library
				#if _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21_vc80x64.lib") 
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21_vc90x64.lib") 
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21_vc100x64.lib") 
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21_vc110x64.lib") 
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21_vc120x64.lib") 
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21_vc140x64.lib") 
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21_vc141x64.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21_vc142x64.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21_vc143x64.lib")
				#endif
			#endif
		#endif
	#else
		#ifdef _DEBUG
			#ifdef _UNICODE
				// load appropriate unicode debug library
				#if _MSC_VER == 1200 // 6.0
					#pragma comment(lib, "LtXmlLib21UD_vc60.lib")
				#elif _MSC_VER == 1310 // 7.1
					#pragma comment(lib, "LtXmlLib21UD_vc71.lib")
				#elif _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21UD_vc80.lib")
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21UD_vc90.lib")
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21UD_vc100.lib")
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21UD_vc110.lib")
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21UD_vc120.lib")
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21UD_vc140.lib")
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21UD_vc141.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21UD_vc142.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21UD_vc143.lib")
				#endif
			#else
				// load appropriate debug library
				#if _MSC_VER == 1200 // 6.0
					#pragma comment(lib, "LtXmlLib21D_vc60.lib")
				#elif _MSC_VER == 1310 // 7.1
					#pragma comment(lib, "LtXmlLib21D_vc71.lib")
				#elif _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21D_vc80.lib")
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21D_vc90.lib")
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21D_vc100.lib")
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21D_vc110.lib")
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21D_vc120.lib")
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21D_vc140.lib")
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21D_vc141.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21D_vc142.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21D_vc143.lib")
				#endif
			#endif
		#else
			#ifdef _UNICODE
				// load appropriate unicode release library
				#if _MSC_VER == 1200 // 6.0
					#pragma comment(lib, "LtXmlLib21U_vc60.lib")
				#elif _MSC_VER == 1310 // 7.1
					#pragma comment(lib, "LtXmlLib21U_vc71.lib")
				#elif _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21U_vc80.lib")
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21U_vc90.lib")
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21U_vc100.lib")
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21U_vc110.lib")
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21U_vc120.lib")
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21U_vc140.lib")
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21U_vc141.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21U_vc142.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21U_vc143.lib")
				#endif
			#else
				// load appropriate debug release library
				#if _MSC_VER == 1200 // 6.0
					#pragma comment(lib, "LtXmlLib21_vc60.lib")
				#elif _MSC_VER == 1310 // 7.1
					#pragma comment(lib, "LtXmlLib21_vc71.lib")
				#elif _MSC_VER == 1400 // 8.0
					#pragma comment(lib, "LtXmlLib21_vc80.lib")
				#elif _MSC_VER == 1500 // 9.0
					#pragma comment(lib, "LtXmlLib21_vc90.lib")
				#elif _MSC_VER == 1600 // 10.0
					#pragma comment(lib, "LtXmlLib21_vc100.lib")
				#elif _MSC_VER == 1700 // 11.0
					#pragma comment(lib, "LtXmlLib21_vc110.lib")
				#elif _MSC_VER == 1800 // 12.0
					#pragma comment(lib, "LtXmlLib21_vc120.lib")
				#elif _MSC_VER == 1900 // 14.0
					#pragma comment(lib, "LtXmlLib21_vc140.lib")
				#elif _MSC_VER >= 1910 && _MSC_VER < 1920 // 14.1
					#pragma comment(lib, "LtXmlLib21_vc141.lib")
				#elif _MSC_VER >= 1920 && _MSC_VER < 1930 // 14.2
					#pragma comment(lib, "LtXmlLib21_vc142.lib")
				#elif _MSC_VER >= 1930 // 14.3
					#pragma comment(lib, "LtXmlLib21_vc143.lib")
				#endif
			#endif
		#endif
	#endif

	#pragma warning(disable:4786) // long debug names
	#pragma warning(disable:4251) // exporting from dll
	#pragma warning(disable:4250) // derivation warning

	#ifdef BookStoreLib_STATIC
		// static library (.lib)
		#define BookStoreLib_DLL
	#else
		// dynamic library (.dll)
		#ifndef BookStoreLib_EXPORTS
			#define BookStoreLib_DLL __declspec(dllimport)
		#else
			#define BookStoreLib_DLL __declspec(dllexport)
		#endif
	#endif
#endif

#ifdef _UNIX_
	#define BookStoreLib_DLL
#endif


// If this is not found then you will need to set the include path 
// to point to Redist21/cpp/include in the project settings.
#include "LtXmlLib21.h"

namespace BookStoreLib
{
	class CAuthorName;
	typedef CSmartPtr<CAuthorName> CAuthorNamePtr;
	class CBookstore;
	typedef CSmartPtr<CBookstore> CBookstorePtr;
	class CBookType;
	typedef CSmartPtr<CBookType> CBookTypePtr;
	class CBookTypeCol;
	typedef CSmartPtr<CBookTypeCol> CBookTypeColPtr;
};

namespace BookStoreLib
{
	class CClassFactory;
	class CXmlCollectionCommonBase;
	class CXmlCommonBase;
};

#include "Enumerations.h"
#include "ClassFactory.h"
#include "XmlCollectionCommonBase.h"
#include "XmlCommonBase.h"

#endif // __BookStoreLib_h

