// FWarrantPeople.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FWarrantPeople.h"
#include "FWarrant.h"
#include "StrArray.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FWarrantPeople dialog


FWarrantPeople::FWarrantPeople(CWnd* pParent /*=NULL*/)
	: FChildDialog(FWarrantPeople::IDD, pParent)
{
	//{{AFX_DATA_INIT(FWarrantPeople)
	m_csFamily = _T("");
	m_csName = _T("");
	m_csSurname = _T("");
	//}}AFX_DATA_INIT
}


void FWarrantPeople::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FWarrantPeople)
	DDX_Control(pDX, IDC_OWNERS, m_Owners);
	DDX_Text(pDX, IDC_FAMILY, m_csFamily);
	DDX_Text(pDX, IDC_NAME, m_csName);
	DDX_Text(pDX, IDC_SURNAME, m_csSurname);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FWarrantPeople, CDialog)
	//{{AFX_MSG_MAP(FWarrantPeople)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_FREE_ROOT, OnFreeRoot)
	ON_BN_CLICKED(IDC_FREE_CURRENT, OnFreeCurrent)
	ON_BN_CLICKED(IDC_OWNER_ROOT, OnOwnerRoot)
	ON_BN_CLICKED(IDC_OWNER_CURRENT, OnOwnerCurrent)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FWarrantPeople message handlers

void FWarrantPeople::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	BOOL bSaved=m_DocData->m_bSaved;
	////////////////////////////////////////
	int size=m_DocData->m_Owners.GetSize();
	Owner* oOwner;
	int pos;
	for(int i=0; i<size; ++i)
	{
		oOwner=(Owner*)(m_DocData->m_Owners.GetAt(i));
		if(oOwner->m_iStat!=2)
		{
			pos=m_Owners.AddString(oOwner->m_csFamily+" "+oOwner->m_csName+" "+oOwner->m_csSurname);
			m_Owners.SetItemDataPtr(pos,oOwner);
		}
	}
	m_DocData->m_bSaved=bSaved;
	
}

BOOL FWarrantPeople::PreTranslateMessage(MSG* pMsg) 
{
	CWnd* focus=GetFocus();
	if(WM_KEYDOWN == pMsg->message && focus)
	{
		switch(pMsg->wParam)
		{
		case VK_TAB:
				if(focus->GetDlgCtrlID()==IDC_REFUSERS)
				{
					CWnd* wnd=GetParent()->GetParent()->GetParent()->GetParent();
					wnd->GetDlgItem(IDC_COMMENTS)->SetFocus();
					return TRUE;
				}
				break;
		default:
			break;
		}
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

void FWarrantPeople::OnFreeRoot() 
{
	UpdateData();
	//FlatRights* fr=((FWarrant*) GetParent()->GetParent())->CurrentSelected;
	FlatRights* newfr=new FlatRights();
	TrimNames(&m_csFamily,&m_csName,&m_csSurname);
	newfr->m_csFamily=m_csFamily;
	newfr->m_csName=m_csName;
	newfr->m_csSurname=m_csSurname;
	newfr->m_iStat=1;
	newfr->m_iInTheName=1;
	newfr->m_iPersonStatus=0;
	newfr->m_iVerb=5;
	((FWarrant*) GetParent()->GetParent())->Add(TVI_ROOT,newfr);

	m_DocData->m_bSaved=FALSE;
}


void FWarrantPeople::OnFreeCurrent() 
{
	UpdateData();
	FlatRights* fr=((FWarrant*) GetParent()->GetParent())->CurrentSelected;
	if(!fr) return;
	fr->m_bHasChildren=TRUE;
	FlatRights* newfr=new FlatRights();
	TrimNames(&m_csFamily,&m_csName,&m_csSurname);
	newfr->m_csFamily=m_csFamily;
	newfr->m_csName=m_csName;
	newfr->m_csSurname=m_csSurname;
	newfr->m_iStat=1;
	newfr->m_ParentInternal=fr;
	newfr->m_lParentID=fr->m_lID;
	newfr->m_iInTheName=0;
	newfr->m_iVerb=0;
	((FWarrant*) GetParent()->GetParent())->Add(fr->m_hItem,newfr);
	m_DocData->m_bSaved=FALSE;
}

void FWarrantPeople::OnOwnerRoot() 
{
	if(m_Owners.GetCurSel()<0) return;
	UpdateData();
	Owner* oOwner=(Owner*) m_Owners.GetItemDataPtr(m_Owners.GetCurSel());
	FlatRights* newfr=new FlatRights();
	newfr->m_csFamily=oOwner->m_csFamily;
	newfr->m_csName=oOwner->m_csName;
	newfr->m_csSurname=oOwner->m_csSurname;
	newfr->m_Owner=oOwner;
	newfr->m_lOwnerID=oOwner->m_lID;
	newfr->m_iStat=1;
	newfr->m_iInTheName=1;
	newfr->m_iPersonStatus=0;
	newfr->m_iVerb=5;
	((FWarrant*) GetParent()->GetParent())->Add(TVI_ROOT,newfr);
	m_DocData->m_bSaved=FALSE;
	
}

void FWarrantPeople::OnOwnerCurrent() 
{
	if(m_Owners.GetCurSel()<0) return;
	UpdateData();
	FlatRights* fr=((FWarrant*) GetParent()->GetParent())->CurrentSelected;
	if(!fr) return;
	fr->m_bHasChildren=TRUE;
	Owner* oOwner=(Owner*)m_Owners.GetItemDataPtr(m_Owners.GetCurSel());
	FlatRights* newfr=new FlatRights();
	newfr->m_csFamily=oOwner->m_csFamily;
	newfr->m_csName=oOwner->m_csName;
	newfr->m_csSurname=oOwner->m_csSurname;
	newfr->m_Owner=oOwner;
	newfr->m_ParentInternal=fr;
	newfr->m_lParentID=fr->m_lID;
	newfr->m_iStat=1;
	newfr->m_iInTheName=0;
	newfr->m_iVerb=0;
	((FWarrant*) GetParent()->GetParent())->Add(fr->m_hItem,newfr);
	m_DocData->m_bSaved=FALSE;
}





BOOL FWarrantPeople::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CButton* but_root=(CButton*) GetDlgItem(IDC_FREE_ROOT);
	CButton* but_current=(CButton*) GetDlgItem(IDC_FREE_CURRENT);
		
	HICON hicon_root=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CURRENT),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_current=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_P_ADD),IMAGE_ICON,16,16, LR_SHARED);
	
	but_root->SetIcon( hicon_root ); 
	but_current->SetIcon( hicon_current ); 
	
	but_root=(CButton*) GetDlgItem(IDC_OWNER_ROOT);
	but_current=(CButton*) GetDlgItem(IDC_OWNER_CURRENT);
		
	but_root->SetIcon( hicon_root ); 
	but_current->SetIcon( hicon_current ); 

	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_FREE_ROOT),"Добавить ФИО\n     в корень");
	m_ToolTip->AddTool(GetDlgItem(IDC_FREE_CURRENT),"Добавить ФИО\n     к текущему");
	m_ToolTip->AddTool(GetDlgItem(IDC_OWNER_ROOT),"Добавить владельца\n         в корень");
	m_ToolTip->AddTool(GetDlgItem(IDC_OWNER_CURRENT),"Добавить владельца\n         к текущему");
	m_ToolTip->Activate(TRUE);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
