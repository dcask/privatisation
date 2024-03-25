# Microsoft Developer Studio Project File - Name="privatisation" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=privatisation - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "privatisation.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "privatisation.mak" CFG="privatisation - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "privatisation - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "privatisation - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "privatisation - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 5
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GR /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /FR /FD /c
# SUBTRACT CPP /X /YX /Yc /Yu
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "privatisation - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /FD /GZ /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x419 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "privatisation - Win32 Release"
# Name "privatisation - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\ado2.cpp
# End Source File
# Begin Source File

SOURCE=.\BaseTool.cpp
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\DocData.cpp
# End Source File
# Begin Source File

SOURCE=.\excel.cpp
# End Source File
# Begin Source File

SOURCE=.\FAddress.cpp
# End Source File
# Begin Source File

SOURCE=.\FAFilter.cpp
# End Source File
# Begin Source File

SOURCE=.\FBalanceHolder.cpp
# End Source File
# Begin Source File

SOURCE=.\FBaseInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\FCalendar.cpp
# End Source File
# Begin Source File

SOURCE=.\FChildDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\FContract.cpp
# End Source File
# Begin Source File

SOURCE=.\FContractInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\FDeclare.cpp
# End Source File
# Begin Source File

SOURCE=.\FLogin.cpp
# End Source File
# Begin Source File

SOURCE=.\FNewAddress.cpp
# End Source File
# Begin Source File

SOURCE=.\FPeriod.cpp
# End Source File
# Begin Source File

SOURCE=.\FPeriodBH.cpp
# End Source File
# Begin Source File

SOURCE=.\FPeriodDistrict.cpp
# End Source File
# Begin Source File

SOURCE=.\FReplica.cpp
# End Source File
# Begin Source File

SOURCE=.\FRepList.cpp
# End Source File
# Begin Source File

SOURCE=.\FSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\FUserSetup.cpp
# End Source File
# Begin Source File

SOURCE=.\FWarrant.cpp
# End Source File
# Begin Source File

SOURCE=.\FWarrantPeople.cpp
# End Source File
# Begin Source File

SOURCE=.\FWarrantSetup.cpp
# End Source File
# Begin Source File

SOURCE=.\FWarrantWrnt.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\mshflexgrid.cpp
# End Source File
# Begin Source File

SOURCE=.\msmask.cpp
# End Source File
# Begin Source File

SOURCE=.\msword.cpp
# End Source File
# Begin Source File

SOURCE=.\picture.cpp
# End Source File
# Begin Source File

SOURCE=.\privatisation.cpp
# End Source File
# Begin Source File

SOURCE=.\privatisation.rc
# End Source File
# Begin Source File

SOURCE=.\privatisationDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\privatisationView.cpp
# End Source File
# Begin Source File

SOURCE=.\recordset.cpp
# End Source File
# Begin Source File

SOURCE=.\Splash.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StrArray.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\ado2.h
# End Source File
# Begin Source File

SOURCE=.\BaseTool.h
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\DocData.h
# End Source File
# Begin Source File

SOURCE=.\excel.h
# End Source File
# Begin Source File

SOURCE=.\FAddress.h
# End Source File
# Begin Source File

SOURCE=.\FAFilter.h
# End Source File
# Begin Source File

SOURCE=.\FBalanceHolder.h
# End Source File
# Begin Source File

SOURCE=.\FBaseInfo.h
# End Source File
# Begin Source File

SOURCE=.\FCalendar.h
# End Source File
# Begin Source File

SOURCE=.\FChildDialog.h
# End Source File
# Begin Source File

SOURCE=.\FContract.h
# End Source File
# Begin Source File

SOURCE=.\FContractInfo.h
# End Source File
# Begin Source File

SOURCE=.\FDeclare.h
# End Source File
# Begin Source File

SOURCE=.\FLogin.h
# End Source File
# Begin Source File

SOURCE=.\FNewAddress.h
# End Source File
# Begin Source File

SOURCE=.\FPeriod.h
# End Source File
# Begin Source File

SOURCE=.\FPeriodBH.h
# End Source File
# Begin Source File

SOURCE=.\FPeriodDistrict.h
# End Source File
# Begin Source File

SOURCE=.\FReplica.h
# End Source File
# Begin Source File

SOURCE=.\FRepList.h
# End Source File
# Begin Source File

SOURCE=.\FSearch.h
# End Source File
# Begin Source File

SOURCE=.\FUserSetup.h
# End Source File
# Begin Source File

SOURCE=.\FWarrant.h
# End Source File
# Begin Source File

SOURCE=.\FWarrantPeople.h
# End Source File
# Begin Source File

SOURCE=.\FWarrantSetup.h
# End Source File
# Begin Source File

SOURCE=.\FWarrantWrnt.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\mshflexgrid.h
# End Source File
# Begin Source File

SOURCE=.\msmask.h
# End Source File
# Begin Source File

SOURCE=.\msword.h
# End Source File
# Begin Source File

SOURCE=.\picture.h
# End Source File
# Begin Source File

SOURCE=.\privatisation.h
# End Source File
# Begin Source File

SOURCE=.\privatisationDoc.h
# End Source File
# Begin Source File

SOURCE=.\privatisationView.h
# End Source File
# Begin Source File

SOURCE=.\recordset.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\Splash.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StrArray.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\add.ico
# End Source File
# Begin Source File

SOURCE=.\res\address.ico
# End Source File
# Begin Source File

SOURCE=.\res\bind.ico
# End Source File
# Begin Source File

SOURCE=.\res\calendar.ico
# End Source File
# Begin Source File

SOURCE=.\res\close.ico
# End Source File
# Begin Source File

SOURCE=.\res\closeall.ico
# End Source File
# Begin Source File

SOURCE=.\res\closealld.ico
# End Source File
# Begin Source File

SOURCE=.\res\contract.ico
# End Source File
# Begin Source File

SOURCE=.\res\current.ico
# End Source File
# Begin Source File

SOURCE=.\res\declare.ico
# End Source File
# Begin Source File

SOURCE=.\res\delete.ico
# End Source File
# Begin Source File

SOURCE=.\res\find.ico
# End Source File
# Begin Source File

SOURCE=.\res\folder.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\last.ico
# End Source File
# Begin Source File

SOURCE=.\res\lock.ico
# End Source File
# Begin Source File

SOURCE=.\res\notowner.ico
# End Source File
# Begin Source File

SOURCE=.\res\owner.ico
# End Source File
# Begin Source File

SOURCE=.\res\p_add.ico
# End Source File
# Begin Source File

SOURCE=.\res\p_remove.ico
# End Source File
# Begin Source File

SOURCE=.\res\persons.ico
# End Source File
# Begin Source File

SOURCE=.\res\post.ico
# End Source File
# Begin Source File

SOURCE=.\res\privatisation.ico
# End Source File
# Begin Source File

SOURCE=.\res\privatisation.rc2
# End Source File
# Begin Source File

SOURCE=.\res\privatisationDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\remove.ico
# End Source File
# Begin Source File

SOURCE=.\res\replica.ico
# End Source File
# Begin Source File

SOURCE=.\res\root.ico
# End Source File
# Begin Source File

SOURCE=.\res\save.ico
# End Source File
# Begin Source File

SOURCE=.\res\search.ico
# End Source File
# Begin Source File

SOURCE=.\res\setup.ico
# End Source File
# Begin Source File

SOURCE=.\Splsh16.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\res\trash.ico
# End Source File
# Begin Source File

SOURCE=.\res\unbind.ico
# End Source File
# Begin Source File

SOURCE=.\res\warrant.ico
# End Source File
# Begin Source File

SOURCE=.\res\wrnt.ico
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section privatisation : {0ECD9B62-23AA-11D0-B351-00A0C9055D8E}
# 	2:5:Class:CMSHFlexGrid
# 	2:10:HeaderFile:mshflexgrid.h
# 	2:8:ImplFile:mshflexgrid.cpp
# End Section
# Section privatisation : {0000050E-0000-0010-8000-00AA006D2EA4}
# 	2:5:Class:CRecordset1
# 	2:10:HeaderFile:recordset.h
# 	2:8:ImplFile:recordset.cpp
# End Section
# Section privatisation : {C932BA85-4374-101B-A56C-00AA003668DC}
# 	2:21:DefaultSinkHeaderFile:msmask.h
# 	2:16:DefaultSinkClass:CMSMask
# End Section
# Section privatisation : {0ECD9B64-23AA-11D0-B351-00A0C9055D8E}
# 	2:21:DefaultSinkHeaderFile:mshflexgrid.h
# 	2:16:DefaultSinkClass:CMSHFlexGrid
# End Section
# Section privatisation : {4D6CC9A0-DF77-11CF-8E74-00A0C90F26F8}
# 	2:5:Class:CMSMask
# 	2:10:HeaderFile:msmask.h
# 	2:8:ImplFile:msmask.cpp
# End Section
# Section privatisation : {72ADFD78-2C39-11D0-9903-00A0C91BC942}
# 	1:10:IDB_SPLASH:102
# 	2:21:SplashScreenInsertKey:4.0
# End Section
# Section privatisation : {7BF80981-BF32-101A-8BBB-00AA00300CAB}
# 	2:5:Class:CPicture
# 	2:10:HeaderFile:picture.h
# 	2:8:ImplFile:picture.cpp
# End Section
