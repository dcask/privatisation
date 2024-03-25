//{{AFX_INCLUDES()
#include "mshflexgrid.h"
//}}AFX_INCLUDES
#if !defined(AFX_FAFILTER_H__358B4369_FBE8_471B_BC8E_2BB44A8E0E6C__INCLUDED_)
#define AFX_FAFILTER_H__358B4369_FBE8_471B_BC8E_2BB44A8E0E6C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FAFilter.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FAFilter dialog

class FAFilter : public CDialog
{
// Construction
public:
	CString	m_csFilter;
	FAFilter(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FAFilter)
	enum { IDD = IDD_ADDRESS_FILTER };
	CComboBox	m_Street;
	CString	m_csPart;
	CMSHFlexGrid	m_List;
	CString	m_csExtFlat;
	CString	m_csBuilding;
	CString	m_csFlatNum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FAFilter)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(FAFilter)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual BOOL OnInitDialog();
	afx_msg void OnAdd();
	afx_msg void OnRemove();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FAFILTER_H__358B4369_FBE8_471B_BC8E_2BB44A8E0E6C__INCLUDED_)
