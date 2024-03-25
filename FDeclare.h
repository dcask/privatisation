//{{AFX_INCLUDES()
#include "mshflexgrid.h"
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FDECLARE_H__3AFD4CFC_CE60_41A7_AEEF_11C012C680C1__INCLUDED_)
#define AFX_FDECLARE_H__3AFD4CFC_CE60_41A7_AEEF_11C012C680C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FDeclare.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FDeclare dialog

class FDeclare : public FChildDialog
{
// Construction
public:
	FDeclare(CWnd* pParent = NULL);   // standard constructor
	BOOL Migrate();
// Dialog Data
	//{{AFX_DATA(FDeclare)
	enum { IDD = IDD_DECLARE };
	CButton	m_Button;
	CEdit	m_Edit;
	CMSHFlexGrid	m_Owners;
	CMSHFlexGrid	m_Refusers;
	CMSMask	m_Date;
	//}}AFX_DATA
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FDeclare)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL
private:

	void EnterCellRefusers();
	void EnterCellOwners();
	void AddRow(CMSHFlexGrid * flx);
	void KillFocusDate();
	CMSHFlexGrid*	flxgrd;
	long			lDateRow;
	long			lDateCol;
	BOOL			m_bCellSelected;
// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(FDeclare)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnOwnerAdd();
	afx_msg void OnOwnerRemove();
	afx_msg void OnRefuserAdd();
	afx_msg void OnRefuserRemove();
	afx_msg void OnKillfocusTmpedit();
	afx_msg void OnTmpdateB();
	afx_msg void OnRowColChangeOwners();
	afx_msg void OnClickOwners();
	afx_msg void OnKeyDownOwners(short FAR* KeyCode, short Shift);
	afx_msg void OnDblClickOwners();
	afx_msg void OnDblClickRefusers();
	afx_msg void OnKeyDownRefusers(short FAR* KeyCode, short Shift);
	afx_msg void OnRowColChangeRefusers();
	afx_msg void OnClickRefusers();
	virtual BOOL OnInitDialog();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FDECLARE_H__3AFD4CFC_CE60_41A7_AEEF_11C012C680C1__INCLUDED_)
