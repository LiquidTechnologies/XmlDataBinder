﻿Option Explicit On
Option Strict On

Imports System
Imports System.Collections
Imports System.Xml
Imports System.Diagnostics
Imports System.Collections.Specialized

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

    Public Class Enumerations
        ' All the enumerations used within the Schema

' ##HAND_CODED_BLOCK_START ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS

' Add Additional Methods and members here...

' ##HAND_CODED_BLOCK_END ID="Additional Methods"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
    End Class
End Namespace 
    
Namespace BookStoreLib 

    Friend class Registration
    
        Private Shared Function RegisterLicense() as Int32 
            
            
' ##HAND_CODED_BLOCK_START ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
' Add Additional namespace declarations here...
            LiquidTechnologies.Runtime.SerializationContext.Default.SchemaType = LiquidTechnologies.Runtime.SchemaType.XSD
'            LiquidTechnologies.Runtime.SerializationContext.Default.DefaultNamespaceURI = "http://www.fpml.org/2003/FpML-4-0"
'            LiquidTechnologies.Runtime.SerializationContext.Default.NamespaceAliases.Add("dsig", "http://www.w3.org/2000/09/xmldsig#", True)

            LiquidTechnologies.Runtime.SerializationContext.Default.NamespaceAliases.Add("xs", "http://www.w3.org/2001/XMLSchema-instance", True)

' ##HAND_CODED_BLOCK_END ID="Namespace Declarations"## DO NOT MODIFY ANYTHING OUTSIDE OF THESE TAGS
            
            Return 1
        End Function
        Public Shared iRegistrationIndicator as Int32  = RegisterLicense()
    End Class
End Namespace




