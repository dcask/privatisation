#if !defined(AFX_FWARRANTSETUP_H__9EA284E0_72FB_454A_B7A0_C6BAECBF0682__INCLUDED_)
#define AFX_FWARRANTSETUP_H__9EA284E0_72FB_454A_B7A0_C6BAECBF0682__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FWarrantSetup.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FWarrantSetup dialog

class FWarrantSetup : public FChildDialog
{
// Construction
public:
	BOOL Migrate();
	FWarrantSetup(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FWarrantSetup)
	enum { IDD = IDD_WRNT_SETUP };
	CComboBox	m_Verb;
	CComboBox	m_Status;
	CComboBox	m_Agreement;
	BOOL	m_bInTheName;
	CString	m_csPreview;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FWarrantSetup)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FWarrantSetup)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSelchangeStatus();
	afx_msg void OnSelchangeVerb();
	afx_msg void OnSelchangeAgreement();
	afx_msg void OnInthename();
	afx_msg void OnEditchangeAgreement();
	afx_msg void OnEditchangeStatus();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FWARRANTSETUP_H__9EA284E0_72FB_454A_B7A0_C6BAECBF0682__INCLUDED_)
