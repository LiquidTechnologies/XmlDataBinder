# XML Data Binder

## What is XML Data Binder?

[Liquid XML Data Binder](https://www.liquid-technologies.com/xml-data-binder) is a tool written by [Liquid Technologies](https://www.liquid-technologies.com/) that enables you to load XML Documents into a strongly typed object model within your C++, Java, Visual Basic 6, C#<sup>\*</sup> or Visual Basic .Net<sup>\*</sup> source code.

Meaning fewer coding errors, reduced development and testing time, and an increase in schema conformance and coding reliability.

Liquid XML Data Binder Features

- Generates an easy to use class library for C++, C#<sup>\*</sup>, Java, Visual Basic .Net<sup>\*</sup>, and VB 6 (COM).
- Generated HTML documentation for your class library API.
- Supports Smart Device platforms Android and iOS.
- Supports W3C XML Schema (XSD), XDR and DTD standards.
- Supports generating WCF Web Services from WSDL.
- Supports JSON serialization.
- Supports Fast Infoset binary XML serialization.
- Support for the most complex XML standards.
- Royalty free distribution of compiled code and runtime.

## Whats in this repository?

The repository contain examples showing how to the code generated using Liquid XML Objects.

You can run the examples on there own, but if you want to generate code from your own XML schemas then you will need to [Download Liquid Studio](https://www.liquid-technologies.com/trial-download).

- Examples\
    - BookStoreLib\
        - Bookstore.xsd - The XML Schema the samples are based on
        - BookstoreSample.xml - An XML document compliant with Bookstore.xsd
        - GeneratedCode\ - The code generated using Liquid XML Data Binder
            - CPP\ - The generated C++ library/Docs
                - SourceCodeCPP\ - The generated library
                    - SampleApp\ - A sample application showing how to use the generated C++ library
                - DocumentationCPP\ - Generated docs for the library
            - CSharp\2022\ - The generated C# library/Docs
                - SourceCodeCS\ - The generated library
                    - SampleApp\ - A sample application showing how to use the generated C# library
                - DocumentationCS\ - Generated docs for the library
            - Java\ - The generated Java library/Docs
                - SourceCodeJava\ - The generated library
                    - SampleApp\ - A sample application showing how to use the generated Java library
                - DocumentationCPP\ - Generated docs for the library
            - VBNet\2022\ - The generated VB.Net library/Docs
                - SourceCodeVBNet\ - The generated library
                    - SampleApp\ - A sample application showing how to use the generated VB.Net library
                - DocumentationVBNet\ - Generated docs for the library
        - Help\ - The compiled help generated using Liquid XML Data Binder for the libraries in GeneratedCode


<sup>\*</sup> .Net languages are better supported using [Liquid XML Objects](https://www.liquid-technologies.com/xml-objects).