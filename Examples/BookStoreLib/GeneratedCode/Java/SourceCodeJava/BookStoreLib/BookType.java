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
// This class represents the ComplexType bookType
// </summary>
public class BookType extends com.liquid_technologies.ltxmllib21.XmlGeneratedClass {
	private static final long serialVersionUID = 13L;

	// <summary>
	// 	Constructor for BookType
	// </summary>
	// <remarks>
	// The class is created with all the mandatory fields populated with the
	// default data. 
	// All Collection object are created.
	// However any 1-n relationships (these are represented as collections) are
	// empty. To comply with the schema these must be populated before the xml
	// obtained from ToXml is valid against the schema D:/Development21/Liquid/Applications/XmlDataBinder/Documentation/xml-data-binder/Evaluation/BookStoreDemo/BookStore.xsd
	// </remarks>
	public BookType() {
		setElementName("bookType");
		init();
	}
	public BookType(String elementName) {
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
			_price = 0;
			_publicationdate = new com.liquid_technologies.ltxmllib21.DateTime(com.liquid_technologies.ltxmllib21.DateTimeType.date);
			_isValidPublicationdate = false;
			_iSBN = "";
			_isValidISBN = false;
			_title = "";
			_author = new BookStoreLib.AuthorName("author");
			_genre = "";
			_isValidGenre = false;

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
			BookStoreLib.BookType newObject = (BookStoreLib.BookType)super.clone();

			// clone, creates a bitwise copy of the class, so all the collections are the
			// same as the parents. Init will re-create our own collections, and classes, 
			// preventing objects being shared between the new an original objects
			newObject.init();
			newObject._price = _price;
			if (_isValidPublicationdate)
				newObject._publicationdate = (com.liquid_technologies.ltxmllib21.DateTime)_publicationdate.clone();
			newObject._isValidPublicationdate = _isValidPublicationdate;
			if (_isValidISBN)
				newObject._iSBN = _iSBN;
			newObject._isValidISBN = _isValidISBN;
			newObject._title = _title;
			newObject._author = null;
			if (_author != null)
				newObject._author = (BookStoreLib.AuthorName)_author.clone();
			if (_isValidGenre)
				newObject._genre = _genre;
			newObject._isValidGenre = _isValidGenre;
	
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
	// Represents a mandatory Attribute in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Attribute in the XML.
	// It is mandatory and therefore must be populated within the XML.
	// It is defaulted to 0.
	// </remarks>
	public double getPrice() throws com.liquid_technologies.ltxmllib21.exceptions.LtException {
		return _price;
	}
	public void setPrice(double value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		_price = value;
	}
	protected double _price;


	// <summary>
	// Represents an optional Attribute in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Attribute in the XML.
	// It is optional, initially it is not valid.
	// </remarks>
	public com.liquid_technologies.ltxmllib21.DateTime getPublicationdate() throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (_isValidPublicationdate == false)
			throw new com.liquid_technologies.ltxmllib21.exceptions.LtInvalidStateException("The Property publicationdate is not valid. Set publicationdateValid = true");
		return _publicationdate;  
	}
	public void setPublicationdate(com.liquid_technologies.ltxmllib21.DateTime value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		_isValidPublicationdate = true;
		_publicationdate.setDateTime(value, _publicationdate.getType()); 
	}

	// <summary>
	// Indicates if publicationdate contains a valid value.
	// </summary>
	// <remarks>
	// true if the value for publicationdate is valid, false if not.
	// If this is set to true then the property is considered valid, and assigned its
	// default value (new com.liquid_technologies.ltxmllib21.DateTime(com.liquid_technologies.ltxmllib21.DateTimeType.date)).
	// If its set to false then its made invalid, and subsequent calls to get publicationdate
	// will raise an exception.
	// </remarks>
	public boolean isValidPublicationdate() {
		return _isValidPublicationdate;
	}
	public void setValidPublicationdate(boolean value)  throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (value != _isValidPublicationdate) {
			_publicationdate = new com.liquid_technologies.ltxmllib21.DateTime(com.liquid_technologies.ltxmllib21.DateTimeType.date);
			_isValidPublicationdate = value;
		}
	}
	protected boolean _isValidPublicationdate;
	protected com.liquid_technologies.ltxmllib21.DateTime _publicationdate;

	// <summary>
	// Represents an optional Attribute in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Attribute in the XML.
	// It is optional, initially it is not valid.
	// </remarks>
	public java.lang.String getISBN() throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (_isValidISBN == false)
			throw new com.liquid_technologies.ltxmllib21.exceptions.LtInvalidStateException("The Property ISBN is not valid. Set ISBNValid = true");
		return _iSBN;  
	}
	public void setISBN(java.lang.String value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		// Apply whitespace rules appropriately
		value = com.liquid_technologies.ltxmllib21.WhitespaceUtils.preserve(value); 
		_isValidISBN = true;
		_iSBN = value;
	}

	// <summary>
	// Indicates if ISBN contains a valid value.
	// </summary>
	// <remarks>
	// true if the value for ISBN is valid, false if not.
	// If this is set to true then the property is considered valid, and assigned its
	// default value ("").
	// If its set to false then its made invalid, and subsequent calls to get ISBN
	// will raise an exception.
	// </remarks>
	public boolean isValidISBN() {
		return _isValidISBN;
	}
	public void setValidISBN(boolean value)  throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (value != _isValidISBN) {
			_iSBN = "";
			_isValidISBN = value;
		}
	}
	protected boolean _isValidISBN;
	protected java.lang.String _iSBN;

	// <summary>
	// Represents a mandatory Element in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Element in the XML.
	// It is mandatory and therefore must be populated within the XML.
	// It is defaulted to "".
	// </remarks>
	public java.lang.String getTitle() throws com.liquid_technologies.ltxmllib21.exceptions.LtException {
		return _title;
	}
	public void setTitle(java.lang.String value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		// Apply whitespace rules appropriately
		value = com.liquid_technologies.ltxmllib21.WhitespaceUtils.preserve(value);
		_title = value;
	}
	protected java.lang.String _title;


	// <summary>
	// Represents a mandatory Element in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Element in the XML.
	// It is mandatory and therefore must be populated within the XML.
	// If this property is set, then the object will be COPIED. If the property is set to null an exception is raised.
	// </remarks>
	public BookStoreLib.AuthorName getAuthor() {
		return _author;
	}
	public void setAuthor(BookStoreLib.AuthorName value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		throw_IfPropertyIsNull(value, "author");
		if (value != null)
			setElementName(value.getBase(), "author");
//		throw_IfElementNameDiffers(value, "author");
		_author = value;
	}
	protected BookStoreLib.AuthorName _author;


	// <summary>
	// Represents an optional Element in the XML document
	// </summary>
	// <remarks>
	// This property is represented as an Element in the XML.
	// It is optional, initially it is not valid.
	// </remarks>
	public java.lang.String getGenre() throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (_isValidGenre == false)
			throw new com.liquid_technologies.ltxmllib21.exceptions.LtInvalidStateException("The Property genre is not valid. Set genreValid = true");
		return _genre;  
	}
	public void setGenre(java.lang.String value) throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		// Apply whitespace rules appropriately
		value = com.liquid_technologies.ltxmllib21.WhitespaceUtils.preserve(value); 
		_isValidGenre = true;
		_genre = value;
	}

	// <summary>
	// Indicates if genre contains a valid value.
	// </summary>
	// <remarks>
	// true if the value for genre is valid, false if not.
	// If this is set to true then the property is considered valid, and assigned its
	// default value ("").
	// If its set to false then its made invalid, and subsequent calls to get genre
	// will raise an exception.
	// </remarks>
	public boolean isValidGenre() {
		return _isValidGenre;
	}
	public void setValidGenre(boolean value)  throws com.liquid_technologies.ltxmllib21.exceptions.LtException { 
		if (value != _isValidGenre) {
			_genre = "";
			_isValidGenre = value;
		}
	}
	protected boolean _isValidGenre;
	protected java.lang.String _genre;

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
																	com.liquid_technologies.ltxmllib21.XmlObjectBase.XmlElementType.ELEMENT, "bookType", "", true, false,
																	null, null, com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_NONE, com.liquid_technologies.ltxmllib21.WhitespaceRule.NONE, null, false);
		}
		return __parentElementInfo;
	}

	protected com.liquid_technologies.ltxmllib21.ElementInfo[] getClassElementInfo() throws Exception {
		if (__elementInfo == null) {
			__elementInfo = new com.liquid_technologies.ltxmllib21.ElementInfo[] {
				 new com.liquid_technologies.ltxmllib21.data.ElementInfoSeqPrimMnd("title", "", findGetterMethod("BookStoreLib.BookType", "getTitle"), findSetterMethod("BookStoreLib.BookType", "setTitle", "java.lang.String"), null, null, com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_STRING, null, com.liquid_technologies.ltxmllib21.WhitespaceRule.PRESERVE, new com.liquid_technologies.ltxmllib21.PrimitiveRestrictions("", -1, -1, "", "", "", "", -1, -1, -1), null)
				,new com.liquid_technologies.ltxmllib21.data.ElementInfoSeqClsMnd("author", "", findGetterMethod("BookStoreLib.BookType", "getAuthor"), findSetterMethod("BookStoreLib.BookType", "setAuthor", "BookStoreLib.AuthorName"), com.liquid_technologies.ltxmllib21.XmlObjectBase.XmlElementType.ELEMENT, BookStoreLib.AuthorName.class, true)
				,new com.liquid_technologies.ltxmllib21.data.ElementInfoSeqPrimOpt("genre", "", findGetterMethod("BookStoreLib.BookType", "getGenre"), findSetterMethod("BookStoreLib.BookType", "setGenre", "java.lang.String"), findGetterMethod("BookStoreLib.BookType", "isValidGenre"), null, null, com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_STRING, null, com.liquid_technologies.ltxmllib21.WhitespaceRule.PRESERVE, new com.liquid_technologies.ltxmllib21.PrimitiveRestrictions("", -1, -1, "", "", "", "", -1, -1, -1), null)
			};
		}
		return __elementInfo;
	}

	protected com.liquid_technologies.ltxmllib21.AttributeInfo[] getClassAttributeInfo() throws Exception {
		if (__attributeInfo==null) {
			__attributeInfo = new com.liquid_technologies.ltxmllib21.AttributeInfo[] {
				 new com.liquid_technologies.ltxmllib21.AttributeInfoPrimitive("price", "", findGetterMethod("BookStoreLib.BookType", "getPrice"), findSetterMethod("BookStoreLib.BookType", "setPrice", "double"), com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_R8, null, com.liquid_technologies.ltxmllib21.WhitespaceRule.COLLAPSE, new com.liquid_technologies.ltxmllib21.PrimitiveRestrictions("", -1, -1, "", "", "", "", -1, -1, -1), null)
				,new com.liquid_technologies.ltxmllib21.AttributeInfoPrimitive("publicationdate", "", findGetterMethod("BookStoreLib.BookType", "getPublicationdate"), findSetterMethod("BookStoreLib.BookType", "setPublicationdate", "com.liquid_technologies.ltxmllib21.DateTime"), findGetterMethod("BookStoreLib.BookType", "isValidPublicationdate"), com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_DATE, null, com.liquid_technologies.ltxmllib21.WhitespaceRule.COLLAPSE, new com.liquid_technologies.ltxmllib21.PrimitiveRestrictions("", -1, -1, "", "", "", "", -1, -1, -1), null)
				,new com.liquid_technologies.ltxmllib21.AttributeInfoPrimitive("ISBN", "", findGetterMethod("BookStoreLib.BookType", "getISBN"), findSetterMethod("BookStoreLib.BookType", "setISBN", "java.lang.String"), findGetterMethod("BookStoreLib.BookType", "isValidISBN"), com.liquid_technologies.ltxmllib21.Conversions.ConversionType.TYPE_STRING, null, com.liquid_technologies.ltxmllib21.WhitespaceRule.PRESERVE, new com.liquid_technologies.ltxmllib21.PrimitiveRestrictions("", -1, -1, "", "", "", "", -1, -1, -1), null)
			};
		}
		return __attributeInfo;
	}

// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods and members here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
}


