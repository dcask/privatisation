// privatisation.h : main header file for the PRIVATISATION application
//

#if !defined(AFX_PRIVATISATION_H__1E9BA7D9_4C53_417F_BE57_40D2C7D3B4F4__INCLUDED_)
#define AFX_PRIVATISATION_H__1E9BA7D9_4C53_417F_BE57_40D2C7D3B4F4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "msword.h"
#include "excel.h"
#include "resource.h"       // main symbols
#include "FCalendar.h"
#include "FContractInfo.h"

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationApp:
// See privatisation.cpp for the implementation of this class
//

class CPrivatisationApp : public CWinApp
{
public:
	BOOL AddLog(long lStorage, long lRecord, long lAction, long lBook=0, long lNum=0);
	BOOL ExportWord(CString filename,CString newfilename, CObArray *param, BOOL bReplica=FALSE);
	BOOL ExportXLS(BOOL bDesign=TRUE, CString filename=_T(""), CString newfilename=_T(""),CString csinfo=_T(""));
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	int		m_iXPStyle;
	FCalendar * calendarDlg;
	CADOBaseTool*	m_bt;
	
	CString	m_csAppPath;
	CString	m_csDocumentsFolder;
	CString	m_csUser;
	CString	m_csUserSign1;
	CString	m_csUserSign2;
	CString m_csCurrentUserName;
	CString m_csIni;
	CString m_csFormatDate;
	CString m_TemplateSymbol;
	CString	m_csStreet;
	CString	m_csFullStreet;
	CString	m_csDistrict;
	CString	m_csPrefix;
	CString	m_csBuildingPart;
	CString	m_csDepTempl;
	CString	m_csReplicaAD;
	CString	m_csSign;
	CString	m_csStreetDate;
	CString m_csSignComment;
	
	COleDateTime m_Begin;
	COleDateTime m_End;
	COleDateTime m_StreetDate;

	int		m_iStreet;
	int		m_iBuilding;
	int		m_iFlat;
	int		m_iRights;
	
	int		m_iUserID;
	long	m_lContractID;
	long	m_lAdresID1;
	long	m_lAdresID2;
	long	m_lBh;

	BOOL	m_bSearch;	
	BOOL	m_bTransaction;	

	CPrivatisationApp();
	FContractInfo* m_pInfoDlg;

	

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrivatisationApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPrivatisationApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

class TemplParam:public CObject
{
public:
	CString	name;
	CString value;
	int rows;
	CStringArray* tab;
	TemplParam();
	~TemplParam();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRIVATISATION_H__1E9BA7D9_4C53_417F_BE57_40D2C7D3B4F4__INCLUDED_)
