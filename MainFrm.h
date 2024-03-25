// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__C5BACFDC_6585_413F_A56E_7516FEE09F46__INCLUDED_)
#define AFX_MAINFRM_H__C5BACFDC_6585_413F_A56E_7516FEE09F46__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "FSearch.h"
#include "FCalendar.h"

class CMainFrame : public CMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// Attributes
public:
	FSearch *searchDlg;
	//FCalendar * calendarDlg;
	CImageList* m_ToolbarIL;
	CImageList* m_ToolbarIL_;
	BOOL m_bSearchNotExist;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnRecordFind();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnListInfo();
	afx_msg void OnListReport();
	afx_msg void OnListReportDep();
	afx_msg void OnListInjury();
	afx_msg void OnListConclusion();
	afx_msg void OnListCancel();
	afx_msg void OnListCancelDep();
	afx_msg void OnListSigned();
	afx_msg void OnListSignedDep();
	afx_msg void OnListTax();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSetupUser();
	afx_msg void OnRecordAddress();
	afx_msg void OnListFlattype();
	afx_msg void OnListInjurySqr();
	afx_msg void OnListBase();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__C5BACFDC_6585_413F_A56E_7516FEE09F46__INCLUDED_)
