#include "StdAfx.h"
#include "../BookStoreLib.h"
#include "../BookStoreLib/Bookstore.h"

using namespace LtXmlLib21;

// forward declarations
void SimpleTestBookStoreLibCBookstore(LPCTSTR);

/// <summary>
/// The main entry point for the application.
/// </summary>
int main(int argc, char* argv[])
{
	_tprintf(_T("*** This Sample Application shows the basic serialization mechanism for reading and writing xml documents using Liquid XML Data Binding.\n\n*** A good place to start examining the code is in SampleApp.cpp.\n\n"));

			/* ---------------------------------------------------------------------------------
			 * This will load the sample file 
			 * "..\..\..\..\BookStoreSample.xml"
			 * and demonstrate briefly how to use it.
			 * --------------------------------------------------------------------------------- */
			SimpleTestBookStoreLibCBookstore(_T("..\\..\\..\\..\\BookStoreSample.xml"));
			

				
			/* ---------------------------------------------------------------------------------
			 * This function can be used to open an XML document with a document element 
			 * (the first element in the file) named 'bookstore' 
			 * e.g. 
			 *
			 * <?xml version="1.0" encoding="UTF-8"?>
			 * <bookstore>
			 *     ...
			 * </bookstore>
			 * --------------------------------------------------------------------------------- */
			// SimpleTestBookStoreLibCBookstore(_T("<UNCOMMENT & INSERT A SAMPLE XML FILENAME HERE>"));
			

	getchar();

	return 0;
}
		
			
// Shows a simple example of how the class CBookstore
// can be used. This class can be used to load documents whose 
// root (document) element is <bookstore>.
void SimpleTestBookStoreLibCBookstore(LPCTSTR lpctFilename)
{
	try
	{
		// create an instance of the class to load the XML file into
		BookStoreLib::CBookstorePtr elm = BookStoreLib::CBookstore::CreateInstance();

		// load the xml from a file into the object (the root element in the
		// xml document must be <bookstore>.
		elm->FromXmlFile(lpctFilename);

		// You can then add code to navigate the data held in the class.
		// When navigating this object model you should refer to the documentation
		// generated in the directory:
		// D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\GeneratedCode\CPP\DocumentationCPP\.
		// The help should be compiled into a chm before being used, (use build.bat)
		//- HTML Help Workshop is required to perform this,
		// and can be downloaded from Microsoft. The path to the help compiler (hhc.exe) 
		// may need adjusting in build.bat
					
		// ...

		////////////////////////////////////////////////////////////////////				
		// The Xml can be extracted from the class using one of 3 methods //
		////////////////////////////////////////////////////////////////////
		
		// This method will extract the xml into a string. The string is always encoded 
		// using Unicode, there a number of options allowing the headers, 
		// end of line & indenting to be set.
		// Note : std::tstring is just a typedef to stl std::string or std::wstring 
		// if a UNICODE build is selected.
		std::tstring strXml = elm->ToXml();
		_tprintf(_T("The XML created\n%s"), strXml.c_str());
		
		// This method will extract the xml into a file. This method provides options
		// for changing the encoding (UTF-8, UTF-16) as well as headers, 
		// end of line and indenting.
		std::tstring strNewFileName = lpctFilename;
		strNewFileName += _T(".testouput.xml");
		elm->ToXmlFile(strNewFileName.c_str());
		
		// This method will extract the xml into a stream. This method provides options
		// for changing the encoding (UTF-8, UTF-16) as well as headers, 
		// end of line and indenting.
		// This method is useful when a specific encoding is required (typically
		// UTF-8), in order to transmit it over an 8-bit connection, smtp etc
		// without the need to write the xml to file first.
		CBinaryData	bd = elm->ToXmlStream();

	}
	catch (CLtException& e)
	{
		// Note : exceptions are likely to contain inner exceptions
		// that provide further detail about the error, GetFullMessage
		// concatenates the messages from them all.
		_tprintf(_T("Error - %s\n"), e.GetFullMessage().c_str());
	}
}

