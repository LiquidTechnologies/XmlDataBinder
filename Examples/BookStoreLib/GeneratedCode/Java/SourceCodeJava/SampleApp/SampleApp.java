package SampleApp;

/// <summary>
/// Summary description for Class1.
/// </summary>
class SampleApp
{
	/// <summary>
	/// The main entry point for the application.
	/// </summary>
	public static void main(String[] args)
  	{
			/* ---------------------------------------------------------------------------------
			 * This will load the sample file 
			 * "..\..\..\..\BookStoreSample.xml"
			 * and demonstrate briefly how to use it.
			 * --------------------------------------------------------------------------------- */
			simpleTestBookStoreLib_Bookstore("..\\..\\..\\..\\BookStoreSample.xml");
			

				
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
			// simpleTestBookStoreLib_Bookstore("<UNCOMMENT & INSERT A SAMPLE XML FILENAME HERE>");
			
  	}
	
		
	// Shows a simple example of how the class Bookstore
	// can be used. This class can be used to load documents whose 
	// root (document) element is <bookstore>.
  	private static void simpleTestBookStoreLib_Bookstore(String filename)
	{
		try
		{
			// create an instance of the class to load the XML file into
			BookStoreLib.Bookstore elm = new BookStoreLib.Bookstore();
			
			// load the xml from a file into the object (the root element in the
			// xml document must be <bookstore>.
			elm.fromXmlFile(filename);

			// You can then add code to navigate the data held in the class.
			// When navigating this object model you should refer to the documentation
			// generated in the directory:
			// D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\GeneratedCode\Java\DocumentationJava\.
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
			String strXml = elm.toXml();
			System.out.println(strXml);
			
			// This method will extract the xml into a file. This method provides options
			// for changing the encoding (UTF-8, UTF-16) as well as headers, 
			// end of line and indenting.
			elm.toXmlFile(filename + ".testouput.xml");
			
			// This method will extract the xml into a stream. This method provides options
			// for changing the encoding (UTF-8, UTF-16) as well as headers, 
			// end of line and indenting.
			// This method is useful when a specific encoding is required (typically
			// UTF-8), in order to transmit it over an 8-bit connection, smtp etc
			// without the need to write the xml to file first.
			byte[] byteArrayXml = elm.toXmlStream();

		}
		catch (Exception e)
		{
			// Note : exceptions are likely to contain inner exceptions
			// that provide further detail about the error.
			Throwable te = e;
			while (te != null)
			{
				System.out.println("Error - " + te.getMessage());
				te = te.getCause();
			}
		}
	}

	// Shows a generic way to load up an XML document.
	private static void SimpleTestLoadAnyXmlDocument(String filename)
	{
		try
		{
			// load the xml from a file into the object (the root element in the
			// xml document must be a valid root Element for the schema).
			com.liquid_technologies.ltxmllib21.XmlObjectBase elm = BookStoreLib.ClassFactory.fromXmlFile(filename);

			// You can then add code to navigate the data held in the class.
			// When navigating this object model you should refer to the documentation
			// generated in the directory:
			// D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\GeneratedCode\Java\DocumentationJava\.
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
			String strXml = elm.toXml();
			System.out.println(strXml);
			
			// This method will extract the xml into a file. This method provides options
			// for changing the encoding (UTF-8, UTF-16) as well as headers, 
			// end of line and indenting.
			elm.toXmlFile(filename + ".testouput.xml");
			
			// This method will extract the xml into a stream. This method provides options
			// for changing the encoding (UTF-8, UTF-16) as well as headers, 
			// end of line and indenting.
			// This method is useful when a specific encoding is required (typically
			// UTF-8), in order to transmit it over an 8-bit connection, smtp etc
			// without the need to write the xml to file first.
			byte[] byteArrayXml = elm.toXmlStream();

		}
		catch (Exception e)
		{
			// Note : exceptions are likely to contain inner exceptions
			// that provide further detail about the error.
			Throwable te = e;
			while (te != null)
			{
				System.out.println("Error - " + te.getMessage());
				te = te.getCause();
			}
		}
	}
}

