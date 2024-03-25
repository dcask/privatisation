#if !defined(AFX_FCONTRACTINFO_H__F8336AFF_3DF6_4788_9F2F_A705473F18BB__INCLUDED_)
#define AFX_FCONTRACTINFO_H__F8336AFF_3DF6_4788_9F2F_A705473F18BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FContractInfo.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// FContractInfo dialog

class FContractInfo : public CDialog
{
// Construction
public:
	FContractInfo(CWnd* pParent = NULL);   // standard constructor
// Dialog Data
	//{{AFX_DATA(FContractInfo)
	enum { IDD = IDD_INFO };
	CString	m_csInfo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(FContractInfo)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(FContractInfo)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FCONTRACTINFO_H__F8336AFF_3DF6_4788_9F2F_A705473F18BB__INCLUDED_)
