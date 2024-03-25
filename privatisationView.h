// privatisationView.h : interface of the CPrivatisationView class
//
/////////////////////////////////////////////////////////////////////////////
//{{AFX_INCLUDES()
#include "msmask.h"
//}}AFX_INCLUDES

#if !defined(AFX_PRIVATISATIONVIEW_H__652377B1_FCDF_4B98_A43F_7D1F397B8FF0__INCLUDED_)
#define AFX_PRIVATISATIONVIEW_H__652377B1_FCDF_4B98_A43F_7D1F397B8FF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPrivatisationView : public CFormView
{
protected: // create from serialization only
	CPrivatisationView();
	DECLARE_DYNCREATE(CPrivatisationView)

public:
	//{{AFX_DATA(CPrivatisationView)
	enum { IDD = IDD_PRIVATISATION_FORM };
	CComboBox	m_PropertyType;
	CComboBox	m_FlatType;
	CTabCtrl	m_Tab;
	CString	m_csComments;
	CString	m_csAddFlats;
	CString	m_csFlatPart;
	int		m_iPrivRooms;
	double	m_dPrivSqr;
	CMSMask	m_RegDep;
	CMSMask	m_DateDep;
	//}}AFX_DATA

// Attributes
public:
	CPrivatisationDoc* GetDocument();
	WINDOWPLACEMENT m_pm;
	WINDOWPLACEMENT m_pmT;
	int m_iCx;
	int m_iCy;
	int m_iCyBase;
	int iii;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrivatisationView)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL Migrate();
	void SetWindowName();
	virtual ~CPrivatisationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
// Generated message map functions
protected:
	//{{AFX_MSG(CPrivatisationView)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnContractSave();
	afx_msg void OnCal();
	afx_msg void OnContractDelete();
	afx_msg void OnContractClose();
	afx_msg void OnContractAddress();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPrivContract();
	afx_msg void OnPrivDeclare();
	afx_msg void OnPrivReplica();
	afx_msg void OnPrivWarrant();
	afx_msg void OnRecordExport();
	afx_msg void OnMakeDeclaration();
	afx_msg void OnMakeDeclarationDep();
	afx_msg void OnMakeDeclarationReg();
	afx_msg void OnMakeInjuiry();
	afx_msg void OnMakeReplica();
	afx_msg void OnMakeContract();
	afx_msg void OnKillfocusPrivsqr();
	afx_msg void OnChangeComments();
	afx_msg void OnChangeFlatPart();
	afx_msg void OnChangeAddflat();
	afx_msg void OnChangePrivrooms();
	afx_msg void OnChangePrivsqr();
	afx_msg void OnSelchangeFlattype();
	afx_msg void OnSelchangePropertytype();
	afx_msg void OnChangeRegdep();
	afx_msg void OnChangeDepdate();
	afx_msg void OnWindowCloseall();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void MakeDeclaration(BOOL bRight);
	void MakeContract(BOOL bReplica, int ReplicaNum=0);
	void AddTemplParam(CString name, int value, CObArray *oArray);
	void AddTemplParam(CString name, COleDateTime value, CObArray *oArray);
	void AddTemplParam(CString name,double value,CObArray *oArray);
	void AddTemplParam(CString name,CString value,CObArray* oArray);
};

#ifndef _DEBUG  // debug version in privatisationView.cpp
inline CPrivatisationDoc* CPrivatisationView::GetDocument()
   { return (CPrivatisationDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRIVATISATIONVIEW_H__652377B1_FCDF_4B98_A43F_7D1F397B8FF0__INCLUDED_)
