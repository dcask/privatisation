// FWarrantWrnt.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FWarrantWrnt.h"
#include "FWarrant.h"
#include "StrArray.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FWarrantWrnt dialog


FWarrantWrnt::FWarrantWrnt(CWnd* pParent /*=NULL*/)
	: FChildDialog(FWarrantWrnt::IDD, pParent)
{
	//{{AFX_DATA_INIT(FWarrantWrnt)
	m_csText = _T("");
	//}}AFX_DATA_INIT
}


void FWarrantWrnt::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FWarrantWrnt)
	DDX_Control(pDX, IDC_LIST, m_List);
	DDX_Text(pDX, IDC_TEXT, m_csText);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FWarrantWrnt, CDialog)
	//{{AFX_MSG_MAP(FWarrantWrnt)
	ON_WM_SHOWWINDOW()
	ON_LBN_SELCHANGE(IDC_LIST, OnSelchangeList)
	ON_EN_KILLFOCUS(IDC_TEXT, OnKillfocusText)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_REMOVE, OnRemove)
	ON_BN_CLICKED(IDC_BIND, OnBind)
	ON_BN_CLICKED(IDC_UNBIND, OnUnbind)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FWarrantWrnt message handlers

void FWarrantWrnt::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	BOOL bSaved=m_DocData->m_bSaved;
	Show();
	m_DocData->m_bSaved=bSaved;
		//m_List.SetItemData(pos,DWORD(i));
	
}

BOOL FWarrantWrnt::PreTranslateMessage(MSG* pMsg) 
{
	CWnd* focus=GetFocus();
	if(WM_KEYDOWN == pMsg->message && focus)
	{
		switch(pMsg->wParam)
		{
		case VK_TAB:
				if(focus->GetDlgCtrlID()==IDC_TEXT)
				{
					CWnd* wnd=GetParent()->GetParent()->GetParent()->GetParent();
					wnd->GetDlgItem(IDC_COMMENTS)->SetFocus();
					return TRUE;
				}
				//else return FChildDialog::PreTranslateMessage(pMsg);
				break;
		case VK_ADD:
				if(focus->GetDlgCtrlID()!=IDC_TEXT)
					OnAdd();
				break;
		case VK_SUBTRACT:
				if(focus->GetDlgCtrlID()!=IDC_TEXT)
					OnRemove();
				break;
		default:
			break;
		}
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

void FWarrantWrnt::OnSelchangeList() 
{
	int pos=m_List.GetCurSel();
	CEdit* wnd=((CEdit*) GetDlgItem(IDC_TEXT));

	if(pos==-1) 
	{
		m_csText="";
		wnd->SetReadOnly();
	}
	else
	{
		Warrant* oWarrant=(Warrant*) m_List.GetItemDataPtr(pos);
		m_csText=oWarrant->m_csText;
		
		wnd->SetReadOnly(FALSE);
		GetDlgItem(IDC_TEXT)->SetFocus();	
	}
	UpdateData(FALSE);
	
}

void FWarrantWrnt::OnKillfocusText() 
{
	try{
		if(!m_List) return;
		int pos=m_List.GetCurSel();
		if(pos==-1) return;
		CString csVal,csVal1;
		Warrant* oWarrant=(Warrant*) m_List.GetItemDataPtr(pos);
		GetDlgItemText(IDC_TEXT,oWarrant->m_csText);
		m_List.GetText(pos,csVal);
		m_List.DeleteString(pos);
		pos=m_List.InsertString(pos,csVal);
		m_List.SetItemDataPtr(pos,oWarrant);
		m_List.SetCurSel(pos);
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","warwar.KillFocusText");
	}
	
}



void FWarrantWrnt::OnAdd() 
{
	Warrant* oWarrant;
	int pos;
	CString csVal;
	oWarrant=new Warrant();
	oWarrant->m_iStat=1;
	//oWarrant->m_FlatRights=NULL;
	m_DocData->m_Warrants.Add(oWarrant);
	csVal.Format("Документ :");// выдан %s",i+1,oWarrant->m_csText);
	OnKillfocusText();
	pos=m_List.AddString(csVal);
	m_List.SetItemDataPtr(pos,oWarrant);
	m_List.SetCurSel(pos);
	OnSelchangeList();
	m_DocData->m_bSaved=FALSE;
		
}

void FWarrantWrnt::OnRemove() 
{
	int pos=m_List.GetCurSel();
	if(pos==-1) return;
	CString csVal,csVal1;
	Warrant* oWarrant=(Warrant*) m_List.GetItemDataPtr(pos);
	if(oWarrant->m_iStat==0) oWarrant->m_iStat=2;
	else
	{
		for(int j=0; j<m_DocData->m_Warrants.GetSize(); ++j)
			if(m_DocData->m_Warrants.GetAt(j)==oWarrant) m_DocData->m_Warrants.RemoveAt(j);
	}
	FlatRights* fr;
	for(int i=0; i<oWarrant->m_aFlatRights.GetSize(); ++i)
	{
		fr=(FlatRights*)oWarrant->m_aFlatRights.GetAt(i);
		if(fr)
		{
			fr->m_Warrant=NULL;
			oWarrant->m_aFlatRights.RemoveAt(i);
			((FWarrant*)GetParent()->GetParent())->ChangeImage(fr);
		}
	}
	m_List.DeleteString(pos);
	m_List.SetCurSel(-1);
	OnSelchangeList();
	m_DocData->m_bSaved=FALSE;
}

void FWarrantWrnt::OnBind() 
{
	Warrant* oWarrant;
	int pos=m_List.GetCurSel();
	CString csVal, csVal1;
	FlatRights* fr=((FWarrant*)GetParent()->GetParent())->CurrentSelected;
	if(!fr) return;
	if(pos==-1) return;
	oWarrant=(Warrant*) m_List.GetItemDataPtr(pos);
	if(fr->m_Warrant)
		for(int i=0; i<oWarrant->m_aFlatRights.GetSize(); ++i)
			if(((FlatRights*)oWarrant->m_aFlatRights.GetAt(i))==fr)
				oWarrant->m_aFlatRights.RemoveAt(i);
	fr->m_Warrant=oWarrant;
	oWarrant->m_aFlatRights.Add(fr);
	Show();
	
	((FWarrant*)GetParent()->GetParent())->ChangeImage(fr);
	m_DocData->m_bSaved=FALSE;
}

BOOL FWarrantWrnt::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CButton* but_add=(CButton*) GetDlgItem(IDC_ADD);
	CButton* but_remove=(CButton*) GetDlgItem(IDC_REMOVE);
	CButton* but_bind=(CButton*) GetDlgItem(IDC_BIND);
	CButton* but_unbind=(CButton*) GetDlgItem(IDC_UNBIND);
		
	HICON hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_ADD),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_remove=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_bind=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_BIND),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_unbind=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_UNBIND),IMAGE_ICON,16,16, LR_SHARED);
	
	but_add->SetIcon( hicon_add ); 
	but_remove->SetIcon( hicon_remove ); 
	but_bind->SetIcon( hicon_bind ); 
	but_unbind->SetIcon( hicon_unbind ); 
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_ADD),"Добавить документ");
	m_ToolTip->AddTool(GetDlgItem(IDC_REMOVE),"Удалить документ");
	m_ToolTip->AddTool(GetDlgItem(IDC_BIND),"Привязать");
	m_ToolTip->AddTool(GetDlgItem(IDC_UNBIND),"Разорвать связь");
	m_ToolTip->Activate(TRUE);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FWarrantWrnt::Show()
{
	//////////// данные
	Warrant* oWarrant;
	int pos;
	CString csVal, csVal1, docname;
	m_List.ResetContent();
	for(int i=0; i<m_DocData->m_Warrants.GetSize(); ++ i)
	{
		oWarrant=(Warrant*) m_DocData->m_Warrants.GetAt(i);
		if(oWarrant->m_iStat==2) continue;
		docname="Документ";
		csVal1=""; /////// ищем всех, к кому привязана доверенность
		FlatRights* fr;
		for(int j=0; j<oWarrant->m_aFlatRights.GetSize(); ++j)
		{
			fr=(FlatRights*)oWarrant->m_aFlatRights.GetAt(j);
			/*if(oWarrant->m_aFlatRights)
			{*/
				if(j>0) csVal1+="+";
				csVal1+=fr->m_csFamily+" ";
				csVal1+=fr->m_csName.Left(1)+". ";
				csVal1+=fr->m_csSurname.Left(1)+".";
				if(fr->m_iPersonStatus==4)
					docname="Опек.удостоверение->";
				else docname="Доверенность->";
			//}
		}	
		csVal.Format("%s %s",docname,  csVal1);// выдан %s",i+1,oWarrant->m_csText);
		pos=m_List.AddString(csVal);
		m_List.SetItemDataPtr(pos,oWarrant);
	}
		
		
}

void FWarrantWrnt::OnUnbind() 
{
	Warrant* oWarrant;
	int pos=m_List.GetCurSel();
	FlatRights* fr=((FWarrant*)GetParent()->GetParent())->CurrentSelected;
	if(!fr) return;
	if(pos==-1) return;
	oWarrant=(Warrant*) (Warrant*) m_List.GetItemDataPtr(pos);
	if(fr->m_Warrant)
	{
		for(int i=0; i<oWarrant->m_aFlatRights.GetSize(); ++i)
			if(((FlatRights*)oWarrant->m_aFlatRights.GetAt(i))==fr)
				oWarrant->m_aFlatRights.RemoveAt(i);
		fr->m_Warrant=NULL;
		((FWarrant*)GetParent()->GetParent())->ChangeImage(fr);
		Show();
		m_DocData->m_bSaved=FALSE;
	}

}
