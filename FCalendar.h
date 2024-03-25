#if !defined(AFX_FCALENDAR_H__CFDCE5B7_A74A_40CB_8BC0_6CA1EE4DDC6B__INCLUDED_)
#define AFX_FCALENDAR_H__CFDCE5B7_A74A_40CB_8BC0_6CA1EE4DDC6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FCalendar.h : header file
//
#include "msmask.h"
/////////////////////////////////////////////////////////////////////////////
// FCalendar dialog

class FCalendar : public CDialog
{
// Construction
public:
	void Assign(CButton*,CMSMask*);
	COleDateTime GetDate();
	FCalendar(CWnd* pParent = NULL);   // standard constructor
	CButton *m_butt;
	CMSMask *m_mask;
// Dialog Data
	//{{AFX_DATA(FCalendar)
	enum { IDD = IDD_DTP };
	CMonthCalCtrl	m_Date;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FCalendar)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	BOOL m_bSelected;
	// Generated message map functions
	//{{AFX_MSG(FCalendar)
	afx_msg void OnSelectCalendar(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FCALENDAR_H__CFDCE5B7_A74A_40CB_8BC0_6CA1EE4DDC6B__INCLUDED_)
