﻿Imports System

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
    ''' <summary>
    ''' This is the base class for all the generated classes. 
    ''' </summary>
    ''' <remarks>
    ''' You can extend this class to provide common functionality to all
    ''' generated classes. Be sure to place all you additions inside the
    ''' hand coded blocks (or they will be lost when you re-generate the code.    
    ''' </remarks>
    Public MustInherit Class XmlCommonBase
        Inherits LiquidTechnologies.Runtime.XmlGeneratedClass


        Public Sub New()
' ##HAND_CODED_BLOCK_START ID="Constructor"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Constructor Code here...

' ##HAND_CODED_BLOCK_END ID="Constructor"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
        End Sub

        ' * You can use the following hand coded section to override the XmlObjectBase FromXml... and ToXml...
        ' * virtual methods to provide custom pre or post processing for all your generated classes,
        ' * or to add your own common methods.
        ' *
        ' * For Example you can add the following here:
        ' *
        ' *    Public Overrides Function ToXml() As String
        ' *
        ' *        ' Perform Custom Pre Processing
        ' *
        ' *        Dim xml as String
        ' *        xml = MyBase.ToXml()
        ' *
        ' *        ' Perform Custom Post Processing
        ' *
        ' *        Return xml
        ' * End Function
        ' *
            
' ##HAND_CODED_BLOCK_START ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Custom Base Methods here...

' ##HAND_CODED_BLOCK_END ID="Custom Base Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

    End Class
End Namespace

