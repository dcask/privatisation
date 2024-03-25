#if !defined(AFX_FUSERSETUP_H__699C03B9_A265_4EF6_9248_9B9AE74D77B3__INCLUDED_)
#define AFX_FUSERSETUP_H__699C03B9_A265_4EF6_9248_9B9AE74D77B3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FUserSetup.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FUserSetup dialog

class FUserSetup : public CDialog
{
// Construction
public:
	FUserSetup(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FUserSetup)
	enum { IDD = IDD_USERSETUP };
	CString	m_csSign1;
	CString	m_csSign2;
	CString	m_csUser;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FUserSetup)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON	m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FUserSetup)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FUSERSETUP_H__699C03B9_A265_4EF6_9248_9B9AE74D77B3__INCLUDED_)
