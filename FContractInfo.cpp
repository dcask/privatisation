// FContractInfo.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FContractInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FContractInfo dialog


FContractInfo::FContractInfo(CWnd* pParent /*=NULL*/)
	: CDialog(FContractInfo::IDD, pParent)
{
	//{{AFX_DATA_INIT(FContractInfo)
	m_csInfo = _T("");
	//}}AFX_DATA_INIT
}


void FContractInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FContractInfo)
	DDX_Text(pDX, IDC_INFO, m_csInfo);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FContractInfo, CDialog)
	//{{AFX_MSG_MAP(FContractInfo)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FContractInfo message handlers
