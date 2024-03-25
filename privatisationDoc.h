// privatisationDoc.h : interface of the CPrivatisationDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PRIVATISATIONDOC_H__A1CFDD87_C452_45CD_B890_6193A89DD6CC__INCLUDED_)
#define AFX_PRIVATISATIONDOC_H__A1CFDD87_C452_45CD_B890_6193A89DD6CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DocData.h"
#include "FChildDialog.h"

class CPrivatisationDoc : public CDocument
{
protected: // create from serialization only
	CPrivatisationDoc();
	DECLARE_DYNCREATE(CPrivatisationDoc)

// Attributes
public:

	CImageList* m_pImageList;
	//CString m_csWindowName;
	DocData m_DocData;
	CString m_csAddress;
	FChildDialog* m_pTabDialog;
	int m_iCurSelectedTab;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrivatisationDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void OnCloseDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPrivatisationDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPrivatisationDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRIVATISATIONDOC_H__A1CFDD87_C452_45CD_B890_6193A89DD6CC__INCLUDED_)
