Option Explicit On
Option Strict On

Imports System
Imports System.Xml

'**********************************************************************************************
'* Copyright (c) 2001-2025 Liquid Technologies Limited. All rights reserved.
'* See www.liquid-technologies.com for product details.
'*
'* Please see products End User License Agreement for distribution permissions.
'*
'* WARNING: THIS FILE IS GENERATED
'* Changes made outside of ##HAND_CODED_BLOCK_START blocks will be overwritten
'*
'* Generation  :  by Liquid XML Data Binder 21.1.0.14151
'* Using Schema: D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
'**********************************************************************************************

Namespace BookStoreLib

    ''' <summary>
    ''' This class represents the ComplexType bookType
    ''' </summary>
    <LiquidTechnologies.Runtime.XmlObjectInfo(LiquidTechnologies.Runtime.XmlObjectBase.XmlElementGroupType.Sequence, _
                                                    LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element, _
                                                    "bookType", "", true, false, false)> _
    Public Partial Class BookType
        Inherits BookStoreLib.XmlCommonBase

        #Region "Constructors"
        ''' <summary>
        '''    Constructor for BookType
        ''' </summary>
        ''' <remarks>
        '''    The class is created with all the mandatory fields populated with the
        '''    default data. 
        '''    All Collection object are created.
        '''    However any 1-n relationships (these are represented as collections) are
        '''    empty. To comply with the schema these must be populated before the xml
        '''    obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
        ''' </remarks>
        Public Sub New()
            _elementName = "bookType"
            Init()
        End Sub
        
        Public Sub New(ByVal elementName As String)
            _elementName = elementName
            Init()
        End Sub
        #End Region

        #Region "Initialization methods for the class"
        ''' <summary>
        '''    Initializes the class
        ''' </summary>
        ''' <remarks>
        '''    This creates all the mandatory fields (populated with the default data) 
        '''    All Collection object are created.
        '''    However any 1-n relationships (these are represented as collections) are
        '''    empty. To comply with the schema these must be populated before the xml
        '''    obtained from ToXml is valid against the schema D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd.
        ''' </remarks>
        Protected Overrides Sub Init()
            BookStoreLib.Registration.iRegistrationIndicator = 0 ' causes registration to take place
            _Price = 0
            _Publicationdate = Nothing
            _ISBN = Nothing
            _Title = ""
            _Author = new BookStoreLib.AuthorName("author")
            _Genre = Nothing

' ##HAND_CODED_BLOCK_START ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Additional initialization code here...

' ##HAND_CODED_BLOCK_END ID="Additional Inits"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
        End Sub

        #End Region

        #Region "ICloneable Interface"
        ''' <summary>
        '''    Allows the class to be copied
        ''' </summary>
        ''' <remarks>
        '''    Performs a 'deep copy' of all the data in the class (and its children)
        ''' </remarks>
        Public Overrides Function Clone() As Object
            Dim newObject As New BookStoreLib.BookType(_elementName)
            Dim o As Object
            newObject._Price = _Price
            If _Publicationdate Is Nothing Then
                newObject._Publicationdate = Nothing
            Else
                newObject._Publicationdate = CType(_Publicationdate.Clone(), LiquidTechnologies.Runtime.XmlDateTime)
            End If
            newObject._ISBN = _ISBN
            newObject._Title = _Title
            newObject._Author = Nothing
            If Not _Author Is Nothing Then
                newObject._Author = CType(_Author.Clone(), BookStoreLib.AuthorName)
            End If
            newObject._Genre = _Genre

            o = Nothing

' ##HAND_CODED_BLOCK_START ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Additional clone code here...

' ##HAND_CODED_BLOCK_END ID="Additional clone"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

            Return newObject
        End Function
        #End Region

        #Region "Member variables"

        Protected Overrides Readonly Property TargetNamespace() As String
            Get 
                Return ""
            End Get
        End Property

        #Region "Attribute - price"
        ''' <summary>
        ''' Represents a mandatory Attribute in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Attribute in the XML.
        ''' It is mandatory and therefore must be populated within the XML.
        ''' It is defaulted to 0.
        ''' </remarks>
        <LiquidTechnologies.Runtime.AttributeInfoPrimitive("price", "", LiquidTechnologies.Runtime.Conversions.ConversionType.type_r8, Nothing, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Collapse, "", -1, -1, "", "", "", "", -1, -1, -1, Nothing)> _
        Public Property Price() As Double
            Get 
                Return _Price
            End Get
            Set(ByVal value As Double)
                _Price = value 
            End Set
        End Property
        Protected _Price As Double

        #End Region
    
        #Region "Attribute - publicationdate"
        ''' <summary>
        ''' Represents an optional Attribute in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Attribute in the XML.
        ''' It is optional, initially it is not valid.
        ''' </remarks>
        <LiquidTechnologies.Runtime.AttributeInfoPrimitive("publicationdate", "", True, LiquidTechnologies.Runtime.Conversions.ConversionType.type_date, Nothing, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Collapse, "", -1, -1, "", "", "", "", -1, -1, -1, Nothing)> _
        Public Property Publicationdate() As LiquidTechnologies.Runtime.XmlDateTime
            Get
                Return _Publicationdate
            End Get
            Set(ByVal value As LiquidTechnologies.Runtime.XmlDateTime)
                If value Is Nothing Then
                    _Publicationdate = Nothing
                Else
                    If _Publicationdate Is Nothing Then
                        _Publicationdate = New LiquidTechnologies.Runtime.XmlDateTime(LiquidTechnologies.Runtime.XmlDateTime.DateType.date)
                    End If
                    _Publicationdate.SetDateTime(value, _Publicationdate.Type)
                End If
            End Set
        End Property
        Protected _Publicationdate As LiquidTechnologies.Runtime.XmlDateTime
        #End Region
    
        #Region "Attribute - ISBN"
        ''' <summary>
        ''' Represents an optional Attribute in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Attribute in the XML.
        ''' It is optional, initially it is not valid.
        ''' </remarks>
        <LiquidTechnologies.Runtime.AttributeInfoPrimitive("ISBN", "", True, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, Nothing, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, Nothing)> _
        Public Property ISBN() As String
            Get
                Return _ISBN
            End Get
            Set(ByVal value As String)
                If value Is Nothing Then
                    _ISBN = Nothing
                Else
                    ' Apply whitespace rules appropriately
                    value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value) 
                    _ISBN = value
                End If
            End Set
        End Property
        Protected _ISBN As String
        #End Region
    
        #Region "Attribute - title"
        ''' <summary>
        ''' Represents a mandatory Element in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Element in the XML.
        ''' It is mandatory and therefore must be populated within the XML.
        ''' It is defaulted to "".
        ''' </remarks>
        <LiquidTechnologies.Runtime.ElementInfoSeqPrimMnd("title", "", Nothing, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, Nothing, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, Nothing)> _
        Public Property Title() As String
            Get 
                Return _Title
            End Get
            Set(ByVal value As String)
                ' Apply whitespace rules appropriately
                value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value) 
                _Title = value 
            End Set
        End Property
        Protected _Title As String

        #End Region
    
        #Region "Attribute - author"
        ''' <summary>
        ''' Represents a mandatory Element in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Element in the XML.
        ''' It is mandatory and therefore must be populated within the XML.
        ''' If this property is set, then the object will be COPIED. If the property is set to Nothing an exception is raised.
        ''' </remarks>
        <LiquidTechnologies.Runtime.ElementInfoSeqClsMnd("author", "", LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element, GetType(BookStoreLib.AuthorName), true)> _
        Public Property Author() As BookStoreLib.AuthorName
            Get 
                Return _Author
            End Get
            Set(ByVal value As BookStoreLib.AuthorName)
                Throw_IfPropertyIsNull(value, "author")
                If Not value Is Nothing Then
                    SetElementName(value, "author")
                End If
                _Author = value 
            End Set
        End Property
        Protected _Author As BookStoreLib.AuthorName
        
        #End Region
    
        #Region "Attribute - genre"
        ''' <summary>
        ''' Represents an optional Element in the XML document
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Element in the XML.
        ''' It is optional, initially it is not valid.
        ''' </remarks>
        <LiquidTechnologies.Runtime.ElementInfoSeqPrimOpt("genre", "", True, Nothing, LiquidTechnologies.Runtime.Conversions.ConversionType.type_string, Nothing, LiquidTechnologies.Runtime.WhitespaceUtils.WhitespaceRule.Preserve, "", -1, -1, "", "", "", "", -1, -1, -1, Nothing)> _
        Public Property Genre() As String
            Get
                Return _Genre
            End Get
            Set(ByVal value As String)
                If value Is Nothing Then
                    _Genre = Nothing
                Else
                    ' Apply whitespace rules appropriately
                    value = LiquidTechnologies.Runtime.WhitespaceUtils.Preserve(value) 
                    _Genre = value
                End If
            End Set
        End Property
        Protected _Genre As String
        #End Region
    
        #Region "Attribute - Namespace"
        Public Overrides Readonly Property [Namespace]() As String
            Get 
                Return ""
            End Get
        End Property
        #End Region

        #Region "Attribute - GetBase"
        Public Overrides Function GetBase() As LiquidTechnologies.Runtime.XmlObjectBase
            Return Me
        End Function
        #End Region
        #End Region


' ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Additional Methods and members here...

' ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
    End Class
End Namespace


