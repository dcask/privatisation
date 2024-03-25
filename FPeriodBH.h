//{{AFX_INCLUDES()
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FPERIODBH_H__96D59823_3858_4885_9CBA_A545D6A9A47F__INCLUDED_)
#define AFX_FPERIODBH_H__96D59823_3858_4885_9CBA_A545D6A9A47F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FPeriodBH.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FPeriodBH dialog

class FPeriodBH : public CDialog
{
// Construction
public:
	COleDateTime	m_BeginPeriod;
	COleDateTime	m_EndPeriod;
	long			m_lBH;
	CString			m_csBH;
	FPeriodBH(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FPeriodBH)
	enum { IDD = IDD_PERIOD_BH };
	CComboBox	m_BH;
	CMSMask	m_Begin;
	CMSMask	m_End;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FPeriodBH)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FPeriodBH)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnBeginB();
	afx_msg void OnEndB();
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FPERIODBH_H__96D59823_3858_4885_9CBA_A545D6A9A47F__INCLUDED_)
