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

public class Registration {
	private static int registerLicense() {
		try {
			
			// ##HAND_CODED_BLOCK_START ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
			// Add Additional namespace declarations here...
			com.liquid_technologies.ltxmllib21.SerializationContext.Default.setSchemaType(com.liquid_technologies.ltxmllib21.SchemaType.XSD);
			// com.liquid_technologies.ltxmllib21.SerializationContext.Default.setDefaultNamespaceURI("http://www.fpml.org/2003/FpML-4-0");
			// com.liquid_technologies.ltxmllib21.SerializationContext.Default.getNamespaceAliases().add("dsig", "http://www.w3.org/2000/09/xmldsig#", true);

			com.liquid_technologies.ltxmllib21.SerializationContext.Default.getNamespaceAliases().add("xs", "http://www.w3.org/2001/XMLSchema-instance", true);

			// ##HAND_CODED_BLOCK_END ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
			return 1;
		} catch (Exception e) {
			throw new RuntimeException(e.getMessage());
		}
	}
	static public int iRegistrationIndicator = registerLicense();
}


