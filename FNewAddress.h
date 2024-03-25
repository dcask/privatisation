#if !defined(AFX_FNEWADDRESS_H__A02780DC_DBD4_4858_AE19_80F2BF538A68__INCLUDED_)
#define AFX_FNEWADDRESS_H__A02780DC_DBD4_4858_AE19_80F2BF538A68__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FNewAddress.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FNewAddress dialog

class FNewAddress : public CDialog
{
// Construction
public:
	FNewAddress(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FNewAddress)
	enum { IDD = IDD_NEWADDRESS };
	CComboBox	m_Street;
	CComboBox	m_District;
	int		m_iBuilding;
	CString	m_csPart;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FNewAddress)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FNewAddress)
	virtual void OnOK();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FNEWADDRESS_H__A02780DC_DBD4_4858_AE19_80F2BF538A68__INCLUDED_)
