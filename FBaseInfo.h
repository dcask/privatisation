//{{AFX_INCLUDES()
#include "mshflexgrid.h"
//}}AFX_INCLUDES
#if !defined(AFX_FBASEINFO_H__1EEB8F11_06B8_4926_ADBE_BCA1B51D864B__INCLUDED_)
#define AFX_FBASEINFO_H__1EEB8F11_06B8_4926_ADBE_BCA1B51D864B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FBaseInfo.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FBaseInfo dialog

class FBaseInfo : public CDialog
{
// Construction
public:
	void Show();
	FBaseInfo(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FBaseInfo)
	enum { IDD = IDD_BASE };
	COleDateTime	m_Date;
	CMSHFlexGrid	m_List;
	CString	m_csInfo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FBaseInfo)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FBaseInfo)
	afx_msg void OnDatetimechangeDate(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FBASEINFO_H__1EEB8F11_06B8_4926_ADBE_BCA1B51D864B__INCLUDED_)
