//{{AFX_INCLUDES()
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FPERIOD_H__9F8E0296_6320_4EC1_A877_58C9068003A8__INCLUDED_)
#define AFX_FPERIOD_H__9F8E0296_6320_4EC1_A877_58C9068003A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FPeriod.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FPeriod dialog

class FPeriod : public CDialog
{
// Construction
public:
	FPeriod(CWnd* pParent = NULL);   // standard constructor
	COleDateTime	m_BeginPeriod;
	COleDateTime	m_EndPeriod;
// Dialog Data
	//{{AFX_DATA(FPeriod)
	enum { IDD = IDD_PERIOD };
	CMSMask	m_Begin;
	CMSMask	m_End;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FPeriod)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON	m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FPeriod)
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

#endif // !defined(AFX_FPERIOD_H__9F8E0296_6320_4EC1_A877_58C9068003A8__INCLUDED_)
