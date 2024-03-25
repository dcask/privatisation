#if !defined(AFX_FBALANCEHOLDER_H__B49E4AD9_D494_45B5_AF32_8104EE43AEC9__INCLUDED_)
#define AFX_FBALANCEHOLDER_H__B49E4AD9_D494_45B5_AF32_8104EE43AEC9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FBalanceHolder.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FBalanceHolder dialog
class BalanceHolder:public CObject
{
public:
	long			m_lID;
	CString			m_csName;
	CString			m_csChief;
	CString			m_csGround;
	CString			m_csSign;
	CString			m_csAddress;
	CString			m_csUpper;
	CString			m_csLower;
	long			m_lParentID;
	HTREEITEM		m_hTreeItem;
	BalanceHolder*	m_pParent;
	int				m_iStat; //0 без, 1 новый, 2 удалён, 3 обновить
	//BalanceHolder();
	//virtual ~BalanceHolder();
};

class FBalanceHolder : public CDialog
{
// Construction
public:
	void Show();
	void UploadCurItem(BalanceHolder* bh);
	FBalanceHolder(CWnd* pParent = NULL);   // standard constructor
	int	m_iBH_ID;
// Dialog Data
	//{{AFX_DATA(FBalanceHolder)
	enum { IDD = IDD_BH };
	CTreeCtrl	m_Tree;
	CString	m_csAddress;
	CString	m_csChief;
	CString	m_csGround;
	CString	m_csName;
	CString	m_csSign;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FBalanceHolder)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CImageList* m_pImageListTree;
	// Generated message map functions
	//{{AFX_MSG(FBalanceHolder)
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult);
	virtual void OnOK();
	afx_msg void OnAdd();
	afx_msg void OnRemove();
	afx_msg void OnSave();
	virtual BOOL OnInitDialog();
	afx_msg void OnChangeName();
	afx_msg void OnChangeChief();
	afx_msg void OnChangeGround();
	afx_msg void OnChangeSign();
	afx_msg void OnChangeAddress();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void BlockFields(BOOL b);
	HICON			m_hIcon;
	CToolTipCtrl*	m_ToolTip;
	CObArray		m_BH;
};


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FBALANCEHOLDER_H__B49E4AD9_D494_45B5_AF32_8104EE43AEC9__INCLUDED_)
