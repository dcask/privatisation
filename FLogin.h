#if !defined(AFX_FLOGIN_H__831AC066_940C_443D_AC11_42DBB5E418AE__INCLUDED_)
#define AFX_FLOGIN_H__831AC066_940C_443D_AC11_42DBB5E418AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FLogin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FLogin dialog

class FLogin : public CDialog
{
// Construction
public:
	FLogin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FLogin)
	enum { IDD = IDD_LOGIN };
	CComboBox	m_Login;
	CString	m_csPassword;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FLogin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FLogin)
	virtual BOOL OnInitDialog();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FLOGIN_H__831AC066_940C_443D_AC11_42DBB5E418AE__INCLUDED_)
