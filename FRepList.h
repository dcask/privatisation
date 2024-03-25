#if !defined(AFX_FREPLIST_H__3F1F0AF3_1E82_41D8_B53A_E3C0BE2D3E2D__INCLUDED_)
#define AFX_FREPLIST_H__3F1F0AF3_1E82_41D8_B53A_E3C0BE2D3E2D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FRepList.h : header file
//
#include "DocData.h"
/////////////////////////////////////////////////////////////////////////////
// FRepList dialog

class FRepList : public CDialog
{
// Construction
public:
	FRepList(CWnd* pParent = NULL);   // standard constructor
	int m_iReplicaNum;
	DocData *m_DocData;
// Dialog Data
	//{{AFX_DATA(FRepList)
	enum { IDD = IDD_REPLIST };
	CListBox	m_List;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FRepList)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FRepList)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FREPLIST_H__3F1F0AF3_1E82_41D8_B53A_E3C0BE2D3E2D__INCLUDED_)
