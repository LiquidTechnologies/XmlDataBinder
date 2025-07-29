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
	
// <summary>
// This class represents the Element bookstore
// </summary>
public class Bookstore extends com.liquid_technologies.ltxmllib21.XmlGeneratedClass {
	private static final long serialVersionUID = 13L;

	// <summary>
	// 	Constructor for Bookstore
	// </summary>
	// <remarks>
	// The class is created with all the mandatory fields populated with the
	// default data. 
	// All Collection object are created.
	// However any 1-n relationships (these are represented as collections) are
	// empty. To comply with the schema these must be populated before the xml
	// obtained from ToXml is valid against the schema D:/Development21/Liquid/Applications/XmlDataBinder/Documentation/xml-data-binder/Evaluation/BookStoreDemo/BookStore.xsd
	// </remarks>
	public Bookstore() {
		setElementName("bookstore");
		init();
	}
	public Bookstore(String elementName) {
		setElementName(elementName);
		init();
	}		

	// <summary>
	// 	Initializes the class
	// </summary>
	// <remarks>
	// This creates all the mandatory fields (populated with the default data) 
	// All Collection object are created.
	// However any 1-n relationships (these are represented as collections) are
	// empty. To comply with the schema these must be populated before the xml
	// obtained from ToXml is valid against the schema D:/Development21/Liquid/Applications/XmlDataBinder/Documentation/xml-data-binder/Evaluation/BookStoreDemo/BookStore.xsd.
	// </remarks>
	@Override
	protected void init() {
		try {
			BookStoreLib.Registration.iRegistrationIndicator = 0; // causes registration to take place
			_book = new BookStoreLib.XmlObjectCollection<BookStoreLib.BookType>("book", "", 0, -1, false, BookStoreLib.BookType.class);

			// ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
			// Add Additional initialization code here...
			// ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

			getClassAttributeInfo();
			getClassElementInfo();
		} catch (Exception ex) {
			// should never happen
			ex.printStackTrace();
			throw new InternalError();
		}
	}



	// <summary>
	// Allows the class to be copied
	// </summary>
	// <remarks>
	// Performs a 'deep copy' of all the data in the class (and its children)
	// </remarks>
	@Override
	public Object clone() throws CloneNotSupportedException {
		try {
			BookStoreLib.Bookstore newObject = (BookStoreLib.Bookstore)super.clone();

			// clone, creates a bitwise copy of the class, so all the collections are the
			// same as the parents. Init will re-create our own collections, and classes, 
			// preventing objects being shared between the new an original objects
			newObject.init();
			for(int i=0; i<_book.size(); i++)
				newObject._book.add((BookStoreLib.BookType)_book.get(i).clone());
	
// ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional clone code here...

// ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

			return newObject;
		} catch (CloneNotSupportedException e) {
			// should never happen
			e.printStackTrace();
			throw new InternalError();
		}
	}

	@Override
	public String getTargetNamespace() {
		return "";
	}

	// <summary>
	// A collection of books
	// </summary>
	// <remarks>
	// This property is represented as an Element in the XML.
	// This collection may contain 0 to Many objects.
	// </remarks>
	public BookStoreLib.XmlObjectCollection<BookStoreLib.BookType> getBook() {
		return _book; 
	}
	protected BookStoreLib.XmlObjectCollection<BookStoreLib.BookType> _book;


	@Override
	public String getNamespace() {
		return "";
	}	

	@Override
	public com.liquid_technologies.ltxmllib21.XmlObjectBase getBase() {
		return this;
	}
	protected void onEvent(com.liquid_technologies.ltxmllib21.XmlObjectBase msgSource, int msgType, Object data) {
		if (msgType == CollectionChangeEvent) {
		}
	}

	private static com.liquid_technologies.ltxmllib21.ParentElementInfo __parentElementInfo = null;
	private static com.liquid_technologies.ltxmllib21.ElementInfo[] __elementInfo = null;
	private static com.liquid_technologies.ltxmllib21.AttributeInfo[] __attributeInfo = null;
		
	protected com.liquid_technologies.ltxmllib21.ParentElementInfo getClassInfo() throws Exception {
		if (__parentElementInfo == null) {
			__parentElementInfo = new com.liquid_technologies.ltxmllib21.ParentElementInfo(	
																	com.liquid_technologies.ltxmllib21.XmlObjectBase.XmlElementGroupType.SEQUENCE,
																	com.liquid_technologies.ltxmllib21.XmlObjectBase.XmlElementType.ELEMENT, "bookstore", "", true, false,
																	null, null, com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_NONE, com.liquid_technologies.ltxmllib21.WhitespaceRule.NONE, null, false);
		}
		return __parentElementInfo;
	}

	protected com.liquid_technologies.ltxmllib21.ElementInfo[] getClassElementInfo() throws Exception {
		if (__elementInfo == null) {
			__elementInfo = new com.liquid_technologies.ltxmllib21.ElementInfo[] {
				 new com.liquid_technologies.ltxmllib21.data.ElementInfoSeqClsCol("book", "", findGetterMethod("BookStoreLib.Bookstore", "getBook"), com.liquid_technologies.ltxmllib21.XmlObjectBase.XmlElementType.ELEMENT)
			};
		}
		return __elementInfo;
	}

	protected com.liquid_technologies.ltxmllib21.AttributeInfo[] getClassAttributeInfo() throws Exception {
		if (__attributeInfo==null) {
			__attributeInfo = new com.liquid_technologies.ltxmllib21.AttributeInfo[] {
			};
		}
		return __attributeInfo;
	}

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods and members here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}


