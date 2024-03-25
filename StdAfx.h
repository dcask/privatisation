// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__E708B8F6_8CE7_4131_9B4F_A80CB4B1FAB9__INCLUDED_)
#define AFX_STDAFX_H__E708B8F6_8CE7_4131_9B4F_A80CB4B1FAB9__INCLUDED_

#define _WIN32_WINNT 0x0600
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxpriv.h>
#include <afxdisp.h>        // MFC Automation classes
#include <afxtempl.h>
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxctl.h>		// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT
#include "BaseTool.h"

double DoubleRound(double src, int n);
void MyDDX_Text(CDataExchange *pDX, int nIDC, double &value);
void MyDDX_Date(CDataExchange* pDX, int nIDC, CWnd& rControl);
void MyDDX_Text(CDataExchange* pDX, int nIDC, int& value);
CString ConvertDate2String(COleDateTime dt);
CString ConvertSum2String(double sum);
CString MonthByWords(int m);
void TransformFIO(CString *f, CString *n, CString *s,int i,CADOBaseTool* bt, int r=1);
void MyDump(CString filename,CString info);
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__E708B8F6_8CE7_4131_9B4F_A80CB4B1FAB9__INCLUDED_)
