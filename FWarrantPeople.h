#if !defined(AFX_FWARRANTPEOPLE_H__CD5CF947_0397_419F_B5F9_ED31D10B8765__INCLUDED_)
#define AFX_FWARRANTPEOPLE_H__CD5CF947_0397_419F_B5F9_ED31D10B8765__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FWarrantPeople.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FWarrantPeople dialog

class FWarrantPeople : public FChildDialog
{
// Construction
public:
	FWarrantPeople(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FWarrantPeople)
	enum { IDD = IDD_WRNT_PEOPLE };
	CListBox	m_Refusers;
	CListBox	m_Owners;
	CString	m_csFamily;
	CString	m_csName;
	CString	m_csSurname;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FWarrantPeople)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FWarrantPeople)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnFreeRoot();
	afx_msg void OnFreeCurrent();
	afx_msg void OnOwnerRoot();
	afx_msg void OnOwnerCurrent();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FWARRANTPEOPLE_H__CD5CF947_0397_419F_B5F9_ED31D10B8765__INCLUDED_)
