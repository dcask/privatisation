//{{AFX_INCLUDES()
#include "msmask.h"
//}}AFX_INCLUDES
#if !defined(AFX_FCONTRACT_H__20FB0D4C_4A16_4B77_818F_9DCABC39E1BA__INCLUDED_)
#define AFX_FCONTRACT_H__20FB0D4C_4A16_4B77_818F_9DCABC39E1BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FContract.h : header file
//
#include "FChildDialog.h"
/////////////////////////////////////////////////////////////////////////////
// FContract dialog

class FContract : public FChildDialog
{
// Construction
public:
	void CalcLot();
	BOOL Migrate();
	FContract(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(FContract)
	enum { IDD = IDD_CONTRACT };
	CComboBox	m_Trans;
	CMSMask	m_DateAct;
	CMSMask	m_DateBuilt;
	CMSMask	m_DateCancel;
	CMSMask	m_DateLot;
	CMSMask	m_DateRecord;
	CMSMask	m_DateReg;
	CString	m_csBH;
	int		m_iBookNum;
	double	m_dBuildingCost;
	double	m_dBuildingSqr;
	double	m_dCoef;
	double	m_dFlatCost;
	double	m_dFullSqr;
	double	m_dLiveSqr;
	double	m_dLotCost;
	int		m_iLotNum;
	double	m_dNorm;
	double	m_dPayment;
	int		m_iRegNum;
	int		m_iRoomQuantity;
	double	m_dShareSqr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FContract)
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
	//{{AFX_MSG(FContract)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnDateBuiltB();
	afx_msg void OnDateLotB();
	afx_msg void OnDateRegB();
	afx_msg void OnDateRecordB();
	afx_msg void OnDateActB();
	afx_msg void OnBhB();
	afx_msg void OnDateCancelB();
	afx_msg void OnKillfocusFlatCost();
	afx_msg void OnKillfocusLiveSqr();
	virtual BOOL OnInitDialog();
	afx_msg void OnChangeRoomQuant();
	afx_msg void OnChangeFullSqr();
	afx_msg void OnChangeLiveSqr();
	afx_msg void OnChangeFlatCost();
	afx_msg void OnChangeDateCancel();
	afx_msg void OnChangeBuildingSqr();
	afx_msg void OnChangeDateBuilt();
	afx_msg void OnChangeBuildingCost();
	afx_msg void OnChangeCoef();
	afx_msg void OnChangeLotNum();
	afx_msg void OnChangeDateLot();
	afx_msg void OnChangeDateReg();
	afx_msg void OnChangeDateRecord();
	afx_msg void OnChangeRegNum();
	afx_msg void OnChangeBookNum();
	afx_msg void OnChangeNorm();
	afx_msg void OnChangePayment();
	afx_msg void OnChangeDateAct();
	afx_msg void OnSelchangeTrans();
	afx_msg void OnChangeBh();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FCONTRACT_H__20FB0D4C_4A16_4B77_818F_9DCABC39E1BA__INCLUDED_)
