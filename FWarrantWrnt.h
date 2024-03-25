#if !defined(AFX_FWARRANTWRNT_H__94FFAA02_0181_450A_A12B_2461B1A5B447__INCLUDED_)
#define AFX_FWARRANTWRNT_H__94FFAA02_0181_450A_A12B_2461B1A5B447__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FWarrantWrnt.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FWarrantWrnt dialog

class FWarrantWrnt : public FChildDialog
{
// Construction
public:
	void Show();
	FWarrantWrnt(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FWarrantWrnt)
	enum { IDD = IDD_WRNT_WRNT };
	CListBox	m_List;
	CString	m_csText;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FWarrantWrnt)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FWarrantWrnt)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSelchangeList();
	afx_msg void OnKillfocusText();
	afx_msg void OnAdd();
	afx_msg void OnRemove();
	afx_msg void OnBind();
	virtual BOOL OnInitDialog();
	afx_msg void OnUnbind();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FWARRANTWRNT_H__94FFAA02_0181_450A_A12B_2461B1A5B447__INCLUDED_)
