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
    ''' This class represents the Element bookstore
    ''' </summary>
    <LiquidTechnologies.Runtime.XmlObjectInfo(LiquidTechnologies.Runtime.XmlObjectBase.XmlElementGroupType.Sequence, _
                                                    LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element, _
                                                    "bookstore", "", true, false, false)> _
    Public Partial Class Bookstore
        Inherits BookStoreLib.XmlCommonBase

        #Region "Constructors"
        ''' <summary>
        '''    Constructor for Bookstore
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
            _elementName = "bookstore"
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
            _Book = new BookStoreLib.XmlObjectCollection(Of BookStoreLib.BookType)("book", "", 0, -1, false)

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
            Dim newObject As New BookStoreLib.Bookstore(_elementName)
            Dim o As Object
            For Each o In _Book
                newObject._Book.Add(CType(CType(o, BookStoreLib.BookType).Clone(), BookStoreLib.BookType))
            Next o

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

        #Region "Attribute - book"
        ''' <summary>
        ''' A collection of books
        ''' </summary>
        ''' <remarks>
        ''' This property is represented as an Element in the XML.
        ''' This collection may contain 0 to Many objects.
        ''' </remarks>
        <LiquidTechnologies.Runtime.ElementInfoSeqClsCol("book", "", LiquidTechnologies.Runtime.XmlObjectBase.XmlElementType.Element)> _
        Public Readonly Property Book() As BookStoreLib.XmlObjectCollection(Of BookStoreLib.BookType)
            Get 
                Return _Book 
            End Get
        End Property
        Protected _Book As BookStoreLib.XmlObjectCollection(Of BookStoreLib.BookType)
        
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


