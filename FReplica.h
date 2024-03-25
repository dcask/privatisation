//{{AFX_INCLUDES()
#include "mshflexgrid.h"
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FREPLICA_H__7FCE9D23_E947_4454_824F_5AFB4979124C__INCLUDED_)
#define AFX_FREPLICA_H__7FCE9D23_E947_4454_824F_5AFB4979124C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FReplica.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FReplica dialog

class FReplica : public FChildDialog
{
// Construction
public:
	BOOL Migrate();
	FReplica(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FReplica)
	enum { IDD = IDD_REPLICA };
	CButton	m_Button;
	CMSHFlexGrid	m_Dates;
	CString	m_csComments;
	CMSMask	m_Date;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FReplica)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FReplica)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnRowColChangeData();
	afx_msg void OnClickData();
	afx_msg void OnDblClickData();
	afx_msg void OnKeyDownData(short FAR* KeyCode, short Shift);
	afx_msg void OnAdd();
	afx_msg void OnRemove();
	afx_msg void OnTmpdateB();
	afx_msg void OnKillfocusComments();
	virtual BOOL OnInitDialog();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void	KillFocusDate();
	BOOL	m_bCellSelected;
	int		m_iRowSel;
	void	EnterCell();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FREPLICA_H__7FCE9D23_E947_4454_824F_5AFB4979124C__INCLUDED_)
