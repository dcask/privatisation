#if !defined(AFX_FADDRESS_H__B18298B0_35F5_48CD_B3F6_EF1352D37999__INCLUDED_)
#define AFX_FADDRESS_H__B18298B0_35F5_48CD_B3F6_EF1352D37999__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FAddress.h : header file
//
#include "DocData.h"
/////////////////////////////////////////////////////////////////////////////
// FAddress dialog

class FAddress : public CDialog
{
// Construction
public:
	FAddress(CWnd* pParent = NULL);   // standard constructor
	DocData*	m_DocData;
	long	m_lStreet;
	CString	m_csStreet;
// Dialog Data
	//{{AFX_DATA(FAddress)
	enum { IDD = IDD_ADDRESS };
	CComboBox	m_Street;
	CString	m_csPart;
	int		m_iBuilding;
	int		m_iFlatNum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FAddress)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FAddress)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	HICON	m_hIcon;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FADDRESS_H__B18298B0_35F5_48CD_B3F6_EF1352D37999__INCLUDED_)
