#if !defined(AFX_FCHILDDIALOG_H__CB01023F_59EE_4B62_8769_2D092FC25285__INCLUDED_)
#define AFX_FCHILDDIALOG_H__CB01023F_59EE_4B62_8769_2D092FC25285__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FChildDialog.h : header file
//
#include "DocData.h"

/////////////////////////////////////////////////////////////////////////////
// FChildDialog dialog

class FChildDialog : public CDialog
{
// Construction
public:
	DocData *m_DocData;
public:
	virtual BOOL Migrate();
	FChildDialog();
	virtual ~FChildDialog();
	FChildDialog(UINT nIDTemplate, CWnd* pParentWnd = NULL);   // standard constructor
// Dialog Data
	//{{AFX_DATA(FChildDialog)
	enum { IDD = 0 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FChildDialog)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CToolTipCtrl*	m_ToolTip;
	// Generated message map functions
	//{{AFX_MSG(FChildDialog)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FCHILDDIALOG_H__CB01023F_59EE_4B62_8769_2D092FC25285__INCLUDED_)
