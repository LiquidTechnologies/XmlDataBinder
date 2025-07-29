package BookStoreLib;

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
 * Using Schema: D:/Development21/Liquid/Applications/XmlDataBinder/Documentation/xml-data-binder/Evaluation/BookStoreDemo/BookStore.xsd
 **********************************************************************************************/
public final class ClassFactory {
	private static java.util.Map<String, java.util.Map<String, Class<? extends com.liquid_technologies.ltxmllib21.XmlObjectBase>>> _nsMap = null;
	static {
		_nsMap = new java.util.HashMap<String, java.util.Map<String, Class<? extends com.liquid_technologies.ltxmllib21.XmlObjectBase>>>();
		java.util.Map<String, Class<? extends com.liquid_technologies.ltxmllib21.XmlObjectBase>> itemMap = null;
		itemMap = new java.util.HashMap<String, Class<? extends com.liquid_technologies.ltxmllib21.XmlObjectBase>>();
		itemMap.put("authorName", BookStoreLib.AuthorName.class);
		itemMap.put("bookstore", BookStoreLib.Bookstore.class);
		itemMap.put("bookType", BookStoreLib.BookType.class);
		_nsMap.put("", itemMap);
	}

	/**
	 *  Creates an object from XML data held in a string.
	 *
	 *  @param	xmlIn		The data to be loaded
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXml(String xmlIn)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		return fromXml( xmlIn, com.liquid_technologies.ltxmllib21.SerializationContext.Default );
	}
	/**
	 *  Creates an object from XML data held in a string.
	 *
	 *  @param	xmlIn		The data to be loaded
	 *  @param	context		The context to use when loading the data
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXml(String xmlIn, com.liquid_technologies.ltxmllib21.SerializationContext context)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		com.liquid_technologies.ltxmllib21.dom.XmlDocument parser = new com.liquid_technologies.ltxmllib21.dom.XmlDocument();
		parser.parse(new java.io.ByteArrayInputStream(xmlIn.getBytes()), context);
		return fromXmlElement(parser.getDocumentElement(), context);
	}

	/**
	 *  Creates an object from XML data held in a File
	 *
	 *  @param	FileName	The file to be loaded
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlFile(String FileName)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		return fromXmlFile(FileName, com.liquid_technologies.ltxmllib21.SerializationContext.Default);
	}
	/**
	 *  Creates an object from XML data held in a File
	 *
	 *  @param	FileName	The file to be loaded
	 *  @param	context		The context to use when loading the data
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlFile(String FileName, com.liquid_technologies.ltxmllib21.SerializationContext context)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		com.liquid_technologies.ltxmllib21.dom.XmlDocument parser = new com.liquid_technologies.ltxmllib21.dom.XmlDocument();
		parser.parse(FileName, context);
		return fromXmlElement(parser.getDocumentElement(), context);
	}

	/**
	 *  Creates an object from XML data held in a stream.
	 *
	 *  @param	stream		The data to be loaded
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlStream(byte[] data)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		return fromXmlStream(data, com.liquid_technologies.ltxmllib21.SerializationContext.Default);
	}
	/**
	 *  Creates an object from XML data held in a stream.
	 *
	 *  @param	stream		The data to be loaded
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlStream(byte[] data, com.liquid_technologies.ltxmllib21.SerializationContext context)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		com.liquid_technologies.ltxmllib21.dom.XmlDocument parser = new com.liquid_technologies.ltxmllib21.dom.XmlDocument();
		java.io.ByteArrayInputStream baStream = new java.io.ByteArrayInputStream(data);
		parser.parse(baStream, context);
		return fromXmlElement(parser.getDocumentElement(), context);
	}
		
	/**
	 *  Creates an object from an XML Element.
	 *
	 *  @param	xmlParent	The data that needs loading
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlElement(com.liquid_technologies.ltxmllib21.dom.XmlElement xmlParent)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {
		return fromXmlElement(xmlParent, com.liquid_technologies.ltxmllib21.SerializationContext.Default);
	}
	/**
	 *  Creates an object from an XML Element.
	 *
	 *  @param	xmlParent	The data that needs loading
	 *  @param	context		The context to use when loading the data
	 *  @return				The wrapper object, loaded with the supplied data
	 *  @throws	LtException	Throws an exception if the XML data is not compatible with the schema</remarks>
	 *  @throws	IOException
	 */
	public static com.liquid_technologies.ltxmllib21.XmlObjectBase fromXmlElement(com.liquid_technologies.ltxmllib21.dom.XmlElement xmlParent, com.liquid_technologies.ltxmllib21.SerializationContext context)
		throws com.liquid_technologies.ltxmllib21.exceptions.LtException, java.io.IOException {

		com.liquid_technologies.ltxmllib21.XmlObjectBase retVal = null;
		String elementName;
		String elementNamespaceUri;

		// Get the type name this is either 
		// from the element i.e. <Parent>... = Parent
		// or from the type i.e. <Parent xsi:type="someNS:SomeElement">... = SomeElement
		elementName = com.liquid_technologies.ltxmllib21.ClassFactoryHelper.getElementType(xmlParent);
		if (elementName.length() == 0) {
			elementName = xmlParent.getLocalName();
			elementNamespaceUri = xmlParent.getNamespaceURI();
		} else {
			elementNamespaceUri = com.liquid_technologies.ltxmllib21.ClassFactoryHelper.getElementTypeNamespaceUri(xmlParent);
		}

		// create the appropriate object
		retVal = com.liquid_technologies.ltxmllib21.ClassFactoryHelper.createObject(_nsMap, elementName, elementNamespaceUri, context);
		if (retVal == null) {
			throw new com.liquid_technologies.ltxmllib21.exceptions.LtException("Failed load the element " + elementName + ":" + elementNamespaceUri + ". No appropriate class exists to load the data into. Ensure that the XML document complies with the schema.");
		}

		// load the data into the object
		retVal.fromXmlElement(xmlParent, context);

		return retVal;
	}
}

