// FWarrantSetup.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FWarrantSetup.h"
#include "FWarrant.h"
#include "StrArray.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FWarrantSetup dialog


FWarrantSetup::FWarrantSetup(CWnd* pParent /*=NULL*/)
	: FChildDialog(FWarrantSetup::IDD, pParent)
{
	//{{AFX_DATA_INIT(FWarrantSetup)
	m_bInTheName = FALSE;
	m_csPreview = _T("");
	//}}AFX_DATA_INIT
}


void FWarrantSetup::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FWarrantSetup)
	DDX_Control(pDX, IDC_VERB, m_Verb);
	DDX_Control(pDX, IDC_STATUS, m_Status);
	DDX_Control(pDX, IDC_AGREEMENT, m_Agreement);
	DDX_Check(pDX, IDC_INTHENAME, m_bInTheName);
	DDX_Text(pDX, IDC_PREVIEW, m_csPreview);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FWarrantSetup, CDialog)
	//{{AFX_MSG_MAP(FWarrantSetup)
	ON_WM_SHOWWINDOW()
	ON_CBN_SELCHANGE(IDC_STATUS, OnSelchangeStatus)
	ON_CBN_SELCHANGE(IDC_VERB, OnSelchangeVerb)
	ON_CBN_SELCHANGE(IDC_AGREEMENT, OnSelchangeAgreement)
	ON_BN_CLICKED(IDC_INTHENAME, OnInthename)
	ON_CBN_EDITCHANGE(IDC_AGREEMENT, OnEditchangeAgreement)
	ON_CBN_EDITCHANGE(IDC_STATUS, OnEditchangeStatus)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FWarrantSetup message handlers

BOOL FWarrantSetup::PreTranslateMessage(MSG* pMsg) 
{
	CWnd* focus=GetFocus();
	if(WM_KEYDOWN == pMsg->message && focus)
	{
		switch(pMsg->wParam)
		{
		case VK_TAB:
				if(focus->GetParent()->GetDlgCtrlID()==IDC_AGREEMENT)
				{
					CWnd* wnd=GetParent()->GetParent()->GetParent()->GetParent();
					wnd->GetDlgItem(IDC_COMMENTS)->SetFocus();
					return TRUE;
				}
				//else return FChildDialog::PreTranslateMessage(pMsg);
				break;
		default:
			break;
		}
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

void FWarrantSetup::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	BOOL bSaved=m_DocData->m_bSaved;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	FlatRights* fr=((FWarrant*) GetParent()->GetParent())->CurrentSelected;
	if(fr)
	{	
		bt->LoadComboBox(GetDlgItem(IDC_STATUS),"[mComboStatus]",0,fr->m_iPersonStatus);
		bt->LoadComboBox(GetDlgItem(IDC_VERB),"[mComboVerb]",0,fr->m_iVerb);
		bt->LoadComboBox(GetDlgItem(IDC_AGREEMENT),"[mComboAgreement]",0,fr->m_iAgreed);
		m_bInTheName=fr->m_iInTheName;
		if(!fr->m_ParentInternal)
			GetDlgItem(IDC_STATUS)->EnableWindow(FALSE);
		else
			GetDlgItem(IDC_STATUS)->EnableWindow(TRUE);
		if(!fr->m_bHasChildren)
		{
			GetDlgItem(IDC_VERB)->EnableWindow(FALSE);
			GetDlgItem(IDC_AGREEMENT)->EnableWindow(FALSE);
			GetDlgItem(IDC_INTHENAME)->EnableWindow(FALSE);
			m_bInTheName=FALSE;
		}
		else
		{
			GetDlgItem(IDC_VERB)->EnableWindow(TRUE);
			GetDlgItem(IDC_AGREEMENT)->EnableWindow(TRUE);
			GetDlgItem(IDC_INTHENAME)->EnableWindow(TRUE);
		}
		m_csPreview=Preview(m_DocData, FALSE, bt );	
	}
	
	/*else
	{
		bt->LoadComboBox(GetDlgItem(IDC_STATUS),"[mComboStatus]");
		bt->LoadComboBox(GetDlgItem(IDC_VERB),"[mComboVerb]");
		bt->LoadComboBox(GetDlgItem(IDC_AGREEMENT),"[mComboAgreement]");
	}*/
	
	UpdateData(FALSE);
	m_DocData->m_bSaved=bSaved;
	//GetDlgItem(IDC_PREVIEW)->SetFocus();
}

BOOL FWarrantSetup::Migrate()
{
	int pos;
	UpdateData();
	FlatRights* fr=((FWarrant*) GetParent()->GetParent())->CurrentSelected;
	if(!fr) return TRUE;
	pos=m_Verb.GetCurSel();
	if(pos!=-1)
	{
		fr->m_iVerb=m_Verb.GetItemData(pos);
		m_Verb.GetLBText(pos,fr->m_csVerb);
	}
	else
		fr->m_iVerb=0;
	pos=m_Agreement.GetCurSel();
	if(pos!=-1)
			fr->m_iAgreed=m_Agreement.GetItemData(pos);
	else
		fr->m_iAgreed=0;
	pos=m_Status.GetCurSel();
	if(pos!=-1)
		fr->m_iPersonStatus=m_Status.GetItemData(pos);
	else
		fr->m_iPersonStatus=0;
	fr->m_iInTheName=m_bInTheName;
	//((FWarrant* )GetParent()->GetParent())->CurrentSelected->m_b=m_bInTheName;

	return TRUE;
}

void FWarrantSetup::OnSelchangeStatus() 
{
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	m_DocData->m_bSaved=FALSE;
}

void FWarrantSetup::OnSelchangeVerb() 
{
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	m_DocData->m_bSaved=FALSE;
}

void FWarrantSetup::OnSelchangeAgreement() 
{
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	m_DocData->m_bSaved=FALSE;
}

void FWarrantSetup::OnInthename() 
{
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	m_DocData->m_bSaved=FALSE;
}

void FWarrantSetup::OnEditchangeAgreement() 
{
	m_Agreement.SetCurSel(-1);
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	
}

void FWarrantSetup::OnEditchangeStatus() 
{
	m_Status.SetCurSel(-1);
	Migrate();
	m_csPreview=Preview(m_DocData, FALSE, ((CPrivatisationApp*)AfxGetApp())->m_bt);
	SetDlgItemText(IDC_PREVIEW,m_csPreview);
	
}

BOOL FWarrantSetup::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
