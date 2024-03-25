#if !defined(AFX_FWARRANT_H__08A47D4E_2806_4807_8121_C8510D6C9A95__INCLUDED_)
#define AFX_FWARRANT_H__08A47D4E_2806_4807_8121_C8510D6C9A95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FWarrant.h : header file
//
#include "FChildDialog.h"
#include "StrArray.h"
/////////////////////////////////////////////////////////////////////////////
// FWarrant dialog

class FWarrant : public FChildDialog
{
// Construction
public:
	void ChangeImage(FlatRights* fr);
	void Add(HTREEITEM hItem,FlatRights* fr);
	BOOL Migrate();
	FWarrant(CWnd* pParent = NULL);   // standard constructor
	FlatRights* CurrentSelected;
// Dialog Data
	//{{AFX_DATA(FWarrant)
	enum { IDD = IDD_WARRANT };
	CTreeCtrl	m_Tree;
	CTabCtrl	m_Tab;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FWarrant)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	FChildDialog*	m_pTabDialog;
	CImageList*		m_pImageList;
	CImageList*		m_pImageListTree;
	int				m_iCurSelectedTab;
	// Generated message map functions
	//{{AFX_MSG(FWarrant)
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPersonRemove();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FWARRANT_H__08A47D4E_2806_4807_8121_C8510D6C9A95__INCLUDED_)
