# Microsoft Developer Studio Project File - Name="BookStoreLib" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102
# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=BookStoreLib - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "BookStoreLib.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "BookStoreLib.mak" CFG="BookStoreLib - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "BookStoreLib - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "BookStoreLib - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "BookStoreLib - Win32 Static Release" (based on "Win32 (x86) Static Library")
!MESSAGE "BookStoreLib - Win32 Static Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "BookStoreLib - Win32 Unicode Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "BookStoreLib - Win32 Unicode Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "BookStoreLib - Win32 Unicode Static Release" (based on "Win32 (x86) Static Library")
!MESSAGE "BookStoreLib - Win32 Unicode Static Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "BookStoreLib - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release_vc60"
# PROP BASE Intermediate_Dir "Release_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release_vc60"
# PROP Intermediate_Dir "Release_vc60"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /D "WIN32" /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /Zm300 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"Release_vc60/BookStoreLib_vc60.dll" /libpath:"D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\win32\lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug_vc60"
# PROP BASE Intermediate_Dir "Debug_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug_vc60"
# PROP Intermediate_Dir "Debug_vc60"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /GZ /Zm300 /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386  /out:"Debug_vc60/BookStoreLibD_vc60.dll" /pdbtype:sept /libpath:"D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\win32\lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Static Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseStatic_vc60"
# PROP BASE Intermediate_Dir "ReleaseStatic_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseStatic_vc60"
# PROP Intermediate_Dir "ReleaseStatic_vc60"
# PROP Target_Dir ""
MTL=midl.exe
CPP=cl.exe
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB"  /D "BookStoreLib_STATIC" /Yu"stdafx.h" /FD /c
RSC=rc.exe
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"ReleaseStatic_vc60\BookStoreLibS_vc60.lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Static Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugStatic_vc60"
# PROP BASE Intermediate_Dir "DebugStatic_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugStatic_vc60"
# PROP Intermediate_Dir "DebugStatic_vc60"
# PROP Target_Dir ""
MTL=midl.exe
CPP=cl.exe
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB"  /D "BookStoreLib_STATIC" /Yu"stdafx.h" /FD /GZ /c
RSC=rc.exe
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"DebugStatic_vc60\BookStoreLibSD_vc60.lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Unicode Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "UnicodeRelease_vc60"
# PROP BASE Intermediate_Dir "UnicodeRelease_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "UnicodeRelease_vc60"
# PROP Intermediate_Dir "UnicodeRelease_vc60"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /D "WIN32" /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "NDEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /Zm300 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"UnicodeRelease_vc60/BookStoreLibU_vc60.dll" /libpath:"D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\win32\lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Unicode Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UnicodeDebug_vc60"
# PROP BASE Intermediate_Dir "UnicodeDebug_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UnicodeDebug_vc60"
# PROP Intermediate_Dir "UnicodeDebug_vc60"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /D "_USRDLL" /D  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /D "_USRDLL"  /D "BookStoreLib_EXPORTS" /Yu"stdafx.h" /FD /GZ /Zm300 /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll  /debug /machine:I386 /out:"UnicodeDebug_vc60/BookStoreLibUD_vc60.dll" /pdbtype:sept /libpath:"D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\win32\lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Unicode Static Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "UnicodeReleaseStatic_vc60"
# PROP BASE Intermediate_Dir "UnicodeReleaseStatic_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "UnicodeReleaseStatic_vc60"
# PROP Intermediate_Dir "UnicodeReleaseStatic_vc60"
# PROP Target_Dir ""
MTL=midl.exe
CPP=cl.exe
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB"  /D "BookStoreLib_STATIC" /Yu"stdafx.h" /FD /c
RSC=rc.exe
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"UnicodeReleaseStatic_vc60\BookStoreLibSU_vc60.lib"

!ELSEIF  "$(CFG)" == "BookStoreLib - Win32 Unicode Static Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "UnicodeDebugStatic_vc60"
# PROP BASE Intermediate_Dir "UnicodeDebugStatic_vc60"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "UnicodeDebugStatic_vc60"
# PROP Intermediate_Dir "UnicodeDebugStatic_vc60"
# PROP Target_Dir ""
MTL=midl.exe
CPP=cl.exe
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I "D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "_LIB"  /D "BookStoreLib_STATIC" /Yu"stdafx.h" /FD /GZ /c
RSC=rc.exe
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"UnicodeDebugStatic_vc60\BookStoreLibSUD_vc60.lib"

!ENDIF


# Begin Target

# Name "BookStoreLib - Win32 Release"
# Name "BookStoreLib - Win32 Debug"
# Name "BookStoreLib - Win32 Static Release"
# Name "BookStoreLib - Win32 Static Debug"
# Name "BookStoreLib - Win32 Unicode Release"
# Name "BookStoreLib - Win32 Unicode Debug"
# Name "BookStoreLib - Win32 Unicode Static Release"
# Name "BookStoreLib - Win32 Unicode Static Debug"

# Begin Group "Source Files"
# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"

# Begin Source File
SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File

# Begin Source File
SOURCE=.\Enumerations.cpp
# End Source File

# Begin Source File
SOURCE=.\ClassFactory.cpp
# End Source File

# Begin Source File
SOURCE=.\XmlCollectionCommonBase.cpp
# End Source File

# Begin Source File
SOURCE=.\XmlCommonBase.cpp
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\AuthorName.cpp
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\Bookstore.cpp
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\BookType.cpp
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\BookTypeCol.cpp
# End Source File

# End Group

# Begin Group "Header Files"
# PROP Default_Filter "h;hpp;hxx;hm;inl"

# Begin Source File
SOURCE=.\StdAfx.h
# End Source File

# Begin Source File
SOURCE=.\ClassFactory.h
# End Source File

# Begin Source File
SOURCE=.\XmlCollectionCommonBase.h
# End Source File

# Begin Source File
SOURCE=.\XmlCommonBase.h
# End Source File

# Begin Source File
SOURCE=.\Enumerations.h
# End Source File

# Begin Source File
SOURCE="D:\Development21\Liquid\Staging\XmlStudio21\XmlDataBinder21\Redist21\cpp\include\SmartPtr.h"
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib.h
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\AuthorName.h
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\Bookstore.h
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\BookType.h
# End Source File

# Begin Source File
SOURCE=.\BookStoreLib\BookTypeCol.h
# End Source File

# End Group

# Begin Group "Resource Files"
# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group

# End Target

# End Project



