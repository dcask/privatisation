// FRepList.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FRepList.h"
#include "StrArray.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FRepList dialog


FRepList::FRepList(CWnd* pParent /*=NULL*/)
	: CDialog(FRepList::IDD, pParent)
{
	//{{AFX_DATA_INIT(FRepList)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_iReplicaNum=0;
}


void FRepList::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FRepList)
	DDX_Control(pDX, IDC_LIST, m_List);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FRepList, CDialog)
	//{{AFX_MSG_MAP(FRepList)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FRepList message handlers

void FRepList::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	ContractReplica* rep;
	int pos;
	for(int i=0; i<m_DocData->m_Replica.GetSize(); ++i)
	{
		rep=(ContractReplica*) m_DocData->m_Replica.GetAt(i);
		pos=m_List.AddString(rep->m_Date.Format("От %d-%m-%Y"));
		m_List.SetItemData(pos,i);
	}
}

void FRepList::OnOK() 
{
	m_iReplicaNum=(int)m_List.GetItemData(m_List.GetCurSel());
	
	CDialog::OnOK();
}
