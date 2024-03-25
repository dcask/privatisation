//{{AFX_INCLUDES()
#include "mshflexgrid.h"
//}}AFX_INCLUDES
#if !defined(AFX_FSEARCH_H__EBBC2B26_EF6B_4F68_96C1_A706AE75CE03__INCLUDED_)
#define AFX_FSEARCH_H__EBBC2B26_EF6B_4F68_96C1_A706AE75CE03__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FSearch.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FSearch dialog

class FSearch : public CDialog
{
// Construction
public:
	void PrepareList();
	FSearch(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FSearch)
	enum { IDD = IDD_SEARCH };
	CComboBox	m_Street;
	CMSHFlexGrid	m_List;
	CString	m_csBookNum;
	CString	m_csFamilyName;
	CString	m_csFlatNum;
	CString	m_csFirstName;
	CString	m_csPart;
	CString	m_csSurName;
	CString	m_csRegNum;
	int		m_iBuildingNum;
	CString	m_csBuildingNum;
	CString	m_csInfo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FSearch)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	BOOL	m_bSortInc;
	BOOL	m_bFilled;
	BOOL	m_bExport;
	BOOL	m_bFlag;
	HICON	m_hIcon;
	int		m_iCyBase;
	int		m_iCx;
	int		m_iCy;
	long	m_mrow;
	long	m_row;
	long	m_col;
	long	m_rows;
	// Generated message map functions
	//{{AFX_MSG(FSearch)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnClickList();
	afx_msg void OnExport();
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnClean();
	afx_msg void OnDblClickList();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnNew();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FSEARCH_H__EBBC2B26_EF6B_4F68_96C1_A706AE75CE03__INCLUDED_)


