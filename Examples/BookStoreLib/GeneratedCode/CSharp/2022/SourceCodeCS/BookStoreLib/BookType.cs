using System;
using System.Xml;

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

namespace BookStoreLib
{
    /// <summary>
    /// This class represents the ComplexType bookType
    /// </summary>
    [LiquidTechnologies.Runtime.XmlObjectInfo(LiquidTechnologies.Runtime.XmlObjectBase.XmlElementGroupType.Sequence,
                                                    LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element,
                                                    "bookType", "", true, false, false)]
    public partial class BookType : BookStoreLib.XmlCommonBase
    {
        #region Constructors
        /// <summary>
        /// Constructor for BookType
        /// </summary>
        /// <remarks>
        /// The class is created with all the mandatory fields populated with the
        /// default data. 
        /// All Collection object are created.
        /// However any 1-n relationships (these are represented as collections) are
        /// empty. To comply with the schema these must be populated before the xml
        /// obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
        /// </remarks>
        public BookType()
        {
            _elementName = "bookType";
            Init();
        }
        public BookType(string elementName)
        {
            _elementName = elementName;
            Init();
        }
        #endregion

        #region Initialization methods for the class
        /// <summary>
        /// Initializes the class
        /// </summary>
        /// <remarks>
        /// This creates all the mandatory fields (populated with the default data) 
        /// All Collection object are created.
        /// However any 1-n relationships (these are represented as collections) are
        /// empty. To comply with the schema these must be populated before the xml
        /// obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd.
        /// </remarks>
        protected override void Init()
        {
            BookStoreLib.Registration.iRegistrationIndicator = 0; // causes registration to take place
            m_Price = 0;
            m_Publicationdate = null;
            m_ISBN = null;
            m_Title = "";
            m_Author = new BookStoreLib.AuthorName("author");
            m_Genre = null;

// ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional initialization code here...

// ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
        }
        #endregion

        #region ICloneable Interface
        /// <summary>
        /// Allows the class to be copied
        /// </summary>
        /// <remarks>
        /// Performs a 'deep copy' of all the data in the class (and its children)
        /// </remarks>
        public override object Clone()
        {
            BookStoreLib.BookType newObject = new BookStoreLib.BookType(_elementName);
            newObject.m_Price = m_Price;
            if (m_Publicationdate == null)
                newObject.m_Publicationdate = null;
            else
                newObject.m_Publicationdate = (LiquidTechnologies.Runtime.XmlDateTime)m_Publicationdate.Clone();
            newObject.m_ISBN = m_ISBN;
            newObject.m_Title = m_Title;
            newObject.m_Author = null;
            if (m_Author != null)
                newObject.m_Author = (BookStoreLib.AuthorName)m_Author.Clone();
            newObject.m_Genre = m_Genre;

// ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional clone code here...

// ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

            return newObject;
        }
        #endregion

        #region Member variables

        protected override string TargetNamespace
        {
            get { return ""; }
        }

        #region Attribute - price
        /// <summary>
        /// Represents a mandatory Attribute in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Attribute in the XML.
        /// It is mandatory and therefore must be populated within the XML.
        /// It is defaulted to 0.
        /// </remarks>
        [LiquidTechnologies.Runtime.AttributeInfoPrimitive("price", "", LiquidTechnologies.Runtime.Conversions.ConversionType.type_r8, null, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Collapse, "", -1, -1, "", "", "", "", -1, -1, -1, null)]
        public double Price
        {
            get
            {
                return m_Price;
            }
            set 
            {
                m_Price = value;
            }
        }
        protected double m_Price;

        #endregion

        #region Attribute - publicationdate
        /// <summary>
        /// Represents an optional Attribute in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Attribute in the XML.
        /// It is optional, initially it is not valid.
        /// </remarks>
        [LiquidTechnologies.Runtime.AttributeInfoPrimitive("publicationdate", "", true, LiquidTechnologies.Runtime.Conversions.ConversionType.type_date, null, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Collapse, "", -1, -1, "", "", "", "", -1, -1, -1, null)]
        public LiquidTechnologies.Runtime.XmlDateTime Publicationdate
        {
            get 
            { 
                return m_Publicationdate;  
            }
            set 
            { 
                if (value == null)
                {
                    m_Publicationdate = null;
                }
                else
                {
                    if (m_Publicationdate == null)
                        m_Publicationdate = new LiquidTechnologies.Runtime.XmlDateTime(LiquidTechnologies.Runtime.XmlDateTime.DateType.date);
                    m_Publicationdate.SetDateTime(value, m_Publicationdate.Type);
                }
            }
        }
        protected LiquidTechnologies.Runtime.XmlDateTime m_Publicationdate;
        #endregion

        #region Attribute - ISBN
        /// <summary>
        /// Represents an optional Attribute in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Attribute in the XML.
        /// It is optional, initially it is not valid.
        /// </remarks>
        [LiquidTechnologies.Runtime.AttributeInfoPrimitive("ISBN", "", true, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, null, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, null)]
        public string ISBN
        {
            get 
            { 
                return m_ISBN;  
            }
            set 
            { 
                if (value == null)
                {
                    m_ISBN = null;
                }
                else
                {
                    // Apply whitespace rules appropriately
                    value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value); 
                    m_ISBN = value;
                }
            }
        }
        protected string m_ISBN;
        #endregion

        #region Attribute - title
        /// <summary>
        /// Represents a mandatory Element in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Element in the XML.
        /// It is mandatory and therefore must be populated within the XML.
        /// It is defaulted to "".
        /// </remarks>
        [LiquidTechnologies.Runtime.ElementInfoSeqPrimMnd("title", "", null, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, null, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, null)]
        public string Title
        {
            get
            {
                return m_Title;
            }
            set 
            {
                // Apply whitespace rules appropriately
                value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value);
                m_Title = value;
            }
        }
        protected string m_Title;

        #endregion

        #region Attribute - author
        /// <summary>
        /// Represents a mandatory Element in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Element in the XML.
        /// It is mandatory and therefore must be populated within the XML.
        /// If this property is set, then the object will be COPIED. If the property is set to null an exception is raised.
        /// </remarks>
        [LiquidTechnologies.Runtime.ElementInfoSeqClsMnd("author", "", LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element, typeof(BookStoreLib.AuthorName), true)]
        public BookStoreLib.AuthorName Author
        {
            get 
            { 
                return m_Author;  
            }
            set 
            { 
                Throw_IfPropertyIsNull(value, "author");
                if (value != null)
                    SetElementName(value, "author");
                m_Author = value;
            }
        }
        protected BookStoreLib.AuthorName m_Author;
        
        #endregion

        #region Attribute - genre
        /// <summary>
        /// Represents an optional Element in the XML document
        /// </summary>
        /// <remarks>
        /// This property is represented as an Element in the XML.
        /// It is optional, initially it is not valid.
        /// </remarks>
        [LiquidTechnologies.Runtime.ElementInfoSeqPrimOpt("genre", "", true, null, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, null, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, null)]
        public string Genre
        {
            get 
            { 
                return m_Genre;  
            }
            set 
            { 
                if (value == null)
                {
                    m_Genre = null;
                }
                else
                {
                    // Apply whitespace rules appropriately
                    value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value); 
                    m_Genre = value;
                }
            }
        }
        protected string m_Genre;
        #endregion

        #region Attribute - Namespace
        public override string Namespace
        {
            get { return ""; }
        }    
        #endregion    

        #region Attribute - GetBase
        public override LiquidTechnologies.Runtime.XmlObjectBase GetBase()
        {
            return this;
        }
        #endregion
        #endregion


// ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

// Add Additional Methods and members here...

// ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
    }
}


