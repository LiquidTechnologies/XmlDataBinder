Option Explicit On
Option Strict On

Imports System
Imports System.Xml

' **********************************************************************************************
' * Copyright (c) 2001-2025 Liquid Technologies Limited. All rights reserved.
' * See www.liquid-technologies.com for product details.
' *
' * Please see products End User License Agreement for distribution permissions.
' *
' * WARNING: THIS FILE IS GENERATED
' * Changes made outside of ##HAND_CODED_BLOCK_START blocks will be overwritten
' *
' * Generation  :  by Liquid XML Data Binder 21.1.0.14151
' * Using Schema: D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
' **********************************************************************************************

Namespace BookStoreLib

    Public NotInheritable Class ClassFactory

#Region "Shared New"
        Private Shared _nsMap As System.Collections.Generic.Dictionary(Of String, System.Collections.Generic.Dictionary(Of String, System.Type)) = Nothing
        Shared Sub New()
            _nsMap = New System.Collections.Generic.Dictionary(Of String, System.Collections.Generic.Dictionary(Of String, System.Type))()
            Dim itemMap As System.Collections.Generic.Dictionary(Of String, System.Type) = Nothing
            itemMap = New System.Collections.Generic.Dictionary(Of String, System.Type)()
            itemMap.Add("authorName", GetType(BookStoreLib.AuthorName))
            itemMap.Add("bookstore", GetType(BookStoreLib.Bookstore))
            itemMap.Add("bookType", GetType(BookStoreLib.BookType))
            _nsMap.Add("", itemMap)
        End Sub
#End Region

#Region "FromXml"
        ''' <summary>
        ''' Creates an object from XML data held in a string.
        ''' </summary>
        ''' <param name="xmlIn">The data to be loaded</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXml(ByVal xmlIn As String) As LiquidTechnologies.Runtime.XmlObjectBase 
            Return FromXml(xmlIn, LiquidTechnologies.Runtime.SerializationContext.Default)
        End Function
        ''' <summary>
        ''' Creates an object from XML data held in a string.
        ''' </summary>
        ''' <param name="xmlIn">The data to be loaded</param>
        ''' <param name="context">The context to use when loading the data</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXml(ByVal xmlIn As String, ByVal context As LiquidTechnologies.Runtime.SerializationContext) As LiquidTechnologies.Runtime.XmlObjectBase 
            Dim xmlDoc as XmlDocument = LiquidTechnologies.Runtime.XmlObjectBase.LoadXmlDocument(xmlIn, context)
            Return FromXmlElement(xmlDoc.DocumentElement, context)
        End Function
#End Region

#Region "FromXmlFile"
        ''' <summary>
        ''' Creates an object from XML data held in a File
        ''' </summary>
        ''' <param name="FileName">The file to be loaded</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlFile(ByVal FileName As String) As LiquidTechnologies.Runtime.XmlObjectBase 
            Return FromXmlFile(FileName, LiquidTechnologies.Runtime.SerializationContext.Default)
        End Function
        ''' <summary>
        ''' Creates an object from XML data held in a File
        ''' </summary>
        ''' <param name="FileName">The file to be loaded</param>
        ''' <param name="context">The context to use when loading the data</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlFile(ByVal FileName As String, ByVal context As LiquidTechnologies.Runtime.SerializationContext) As LiquidTechnologies.Runtime.XmlObjectBase 
            Using stream As System.IO.Stream = new System.IO.FileStream(FileName, System.IO.FileMode.Open, System.IO.FileAccess.Read,System.IO.FileShare.Read)
                Return FromXmlStream(stream, context)
            End Using
        End Function
#End Region

#Region "FromXmlStream"
        ''' <summary>
        ''' Creates an object from XML data held in a stream.
        ''' </summary>
        ''' <param name="stream">The data to be loaded</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlStream(ByVal stream As System.IO.Stream) As LiquidTechnologies.Runtime.XmlObjectBase 
            Return FromXmlStream(stream, LiquidTechnologies.Runtime.SerializationContext.Default)
        End Function
        ''' <summary>
        ''' Creates an object from XML data held in a stream.
        ''' </summary>
        ''' <param name="stream">The data to be loaded</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlStream(ByVal stream As System.IO.Stream, ByVal context As LiquidTechnologies.Runtime.SerializationContext) As LiquidTechnologies.Runtime.XmlObjectBase 
            Dim xmlDoc As XmlDocument = LiquidTechnologies.Runtime.XmlObjectBase.LoadXmlDocument(stream, context)
            Return FromXmlElement(xmlDoc.DocumentElement, context)
        End Function
#End Region
        
#Region "FromXmlElement"
        ''' <summary>
        ''' Creates an object from an XML Element.
        ''' </summary>
        ''' <param name="xmlParent">The data that needs loading</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlElement(ByVal xmlParent As XmlElement) As LiquidTechnologies.Runtime.XmlObjectBase 
            Return FromXmlElement(xmlParent, LiquidTechnologies.Runtime.SerializationContext.Default)
        End Function
            
        ''' <summary>
        ''' Creates an object from an XML Element.
        ''' </summary>
        ''' <param name="xmlParent">The data that needs loading</param>
        ''' <param name="context">The context to use when loading the data</param>
        ''' <returns>The wrapper object, loaded with the supplied data</returns>
        ''' <remarks>Throws an exception if the XML data is not compatible with the schema</remarks>
        Public Shared Function FromXmlElement(ByVal xmlParent As XmlElement, ByVal context As LiquidTechnologies.Runtime.SerializationContext) As LiquidTechnologies.Runtime.XmlObjectBase 
            Dim retVal As LiquidTechnologies.Runtime.XmlObjectBase = Nothing
            Dim elementName As String
            Dim elementNamespaceUri As String 

            ' Get the type name this is either 
            ' from the element i.e. <Parent>... = Parent
            ' or from the type i.e. <Parent xsi:type="someNS:SomeElement">... = SomeElement
            if (LiquidTechnologies.Runtime.ClassFactoryHelper.GetElementType(xmlParent) = "")
                elementName = xmlParent.LocalName
                elementNamespaceUri = xmlParent.NamespaceURI
            else
                elementName = LiquidTechnologies.Runtime.ClassFactoryHelper.GetElementType(xmlParent)
                elementNamespaceUri = LiquidTechnologies.Runtime.ClassFactoryHelper.GetElementTypeNamespaceUri(xmlParent)
            end if 

            ' create the appropriate object
            retVal = LiquidTechnologies.Runtime.ClassFactoryHelper.CreateObject(_nsMap, elementName, elementNamespaceUri, context)
            If retVal Is Nothing Then
                throw new LiquidTechnologies.Runtime.LtException(string.Format("Failed load the element {0}:{1}. No appropriate class exists to load the data into. Ensure that the XML document complies with the schema.", elementName, elementNamespaceUri))
            End If
            
            ' load the data into the object
            retVal.FromXmlElement(xmlParent, context)

            Return retVal
        End Function
#End Region
    End Class
End Namespace

