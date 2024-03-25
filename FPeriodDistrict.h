//{{AFX_INCLUDES()
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FPERIODDISTRICT_H__9438C22C_DD64_4A28_9528_AD998267746B__INCLUDED_)
#define AFX_FPERIODDISTRICT_H__9438C22C_DD64_4A28_9528_AD998267746B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FPeriodDistrict.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FPeriodDistrict dialog

class FPeriodDistrict : public CDialog
{
// Construction
public:
	COleDateTime	m_BeginPeriod;
	COleDateTime	m_EndPeriod;
	int				m_iDistrict;
	CString			m_csDistrict;
	FPeriodDistrict(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FPeriodDistrict)
	enum { IDD = IDD_PERIOD_DISTRICT };
	CComboBox	m_District;
	CMSMask	m_Begin;
	CMSMask	m_End;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FPeriodDistrict)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FPeriodDistrict)
	afx_msg void OnBeginB();
	afx_msg void OnEndB();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FPERIODDISTRICT_H__9438C22C_DD64_4A28_9528_AD998267746B__INCLUDED_)
