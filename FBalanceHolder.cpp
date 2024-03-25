// FBalanceHolder.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FBalanceHolder.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FBalanceHolder dialog


FBalanceHolder::FBalanceHolder(CWnd* pParent /*=NULL*/)
	: CDialog(FBalanceHolder::IDD, pParent)
{
	//{{AFX_DATA_INIT(FBalanceHolder)
	m_csAddress = _T("");
	m_csChief = _T("");
	m_csGround = _T("");
	m_csName = _T("");
	m_csSign = _T("");
	//}}AFX_DATA_INIT
	m_ToolTip =new CToolTipCtrl();
	if (!m_ToolTip->Create(this))
	{
		TRACE("Unable To create ToolTip\n");           
		return;
	}

	m_ToolTip->SetMaxTipWidth(10000000);
	m_ToolTip->SetDelayTime(TTDT_AUTOPOP ,10000);
	m_ToolTip->SetDelayTime(TTDT_INITIAL ,750);
	m_ToolTip->SetDelayTime(TTDT_RESHOW ,10000);
	m_ToolTip->SetTipBkColor(0xEFE0DAL);
	m_ToolTip->SetTipTextColor(0xA00000L);
	m_pImageListTree=NULL;
}


void FBalanceHolder::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FBalanceHolder)
	DDX_Control(pDX, IDC_TREE, m_Tree);
	DDX_Text(pDX, IDC_ADDRESS, m_csAddress);
	DDX_Text(pDX, IDC_CHIEF, m_csChief);
	DDX_Text(pDX, IDC_GROUND, m_csGround);
	DDX_Text(pDX, IDC_NAME, m_csName);
	DDX_Text(pDX, IDC_SIGN, m_csSign);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FBalanceHolder, CDialog)
	//{{AFX_MSG_MAP(FBalanceHolder)
	ON_WM_SHOWWINDOW()
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE, OnSelchangedTree)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_REMOVE, OnRemove)
	ON_BN_CLICKED(IDC_SAVE, OnSave)
	ON_EN_CHANGE(IDC_NAME, OnChangeName)
	ON_EN_CHANGE(IDC_CHIEF, OnChangeChief)
	ON_EN_CHANGE(IDC_GROUND, OnChangeGround)
	ON_EN_CHANGE(IDC_SIGN, OnChangeSign)
	ON_EN_CHANGE(IDC_ADDRESS, OnChangeAddress)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FBalanceHolder message handlers

void FBalanceHolder::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	/// иконки
	CButton* but=(CButton*) GetDlgItem(IDC_ADD);
	HICON hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_ADD),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon ); 
	but=(CButton*) GetDlgItem(IDC_REMOVE);
	hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_SAVE);
	hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_SAVE),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon );
	m_hIcon = AfxGetApp()->LoadIcon(IDI_FIND);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_ADD),"Добавить балансодержателя");
	m_ToolTip->AddTool(GetDlgItem(IDC_REMOVE),"Удалить балансодержателя");
	m_ToolTip->AddTool(GetDlgItem(IDC_SAVE),"Сохранить данные");
	Show();
}

BOOL FBalanceHolder::PreTranslateMessage(MSG* pMsg) 
{
	if (NULL != m_ToolTip)            
      m_ToolTip->RelayEvent(pMsg);
	if(WM_KEYDOWN == pMsg->message)
	{
		switch(pMsg->wParam)
		{
			/*case VK_F1:
			case VK_F2:
			case VK_F3:
			case VK_F4:
			case VK_F5:
			//case VK_F10:
				AfxGetApp()->GetMainWnd()->PostMessage(pMsg->message,pMsg->wParam,pMsg->lParam);
				break;*/
			case VK_RETURN:
					OnOK() ;
				return TRUE;
			/*case VK_SPACE:
				prt = GetFocus()->GetRuntimeClass();
				if(!strcmp( prt->m_lpszClassName, "CMSMask" ))
					((CMSMask*) GetFocus())->SetText(COleDateTime::GetCurrentTime().Format("%d-%m-%Y"));
				break;*/
			default:
				break;
		}
	}
	return CDialog::PreTranslateMessage(pMsg);
}

BOOL FBalanceHolder::DestroyWindow() 
{
	BalanceHolder* oBh;
	for(int i=0; i<m_BH.GetSize(); ++i)
	{
		oBh=(BalanceHolder*) m_BH.GetAt(i);
		delete oBh;
	}
	m_BH.RemoveAll();
	delete m_pImageListTree;
	return CDialog::DestroyWindow();
}

void FBalanceHolder::OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_TREEVIEW* pNMTreeView = (NM_TREEVIEW*)pNMHDR;
	BalanceHolder* oBh=(BalanceHolder*)m_Tree.GetItemData(pNMTreeView->itemNew.hItem);
	if (pNMTreeView->itemOld.hItem)
		UploadCurItem((BalanceHolder*)m_Tree.GetItemData(pNMTreeView->itemOld.hItem));
	m_csAddress = oBh->m_csAddress;
	m_csChief = oBh->m_csChief;
	m_csGround = oBh->m_csGround;
	m_csName = oBh->m_csName;
	m_csSign = oBh->m_csSign;
	UpdateData(FALSE);
	if(oBh->m_lParentID==-1) BlockFields(TRUE);
	else BlockFields(FALSE);
	*pResult = 0;
}

void FBalanceHolder::BlockFields(BOOL b)
{
	CEdit* ed=(CEdit*) GetDlgItem(IDC_ADDRESS);
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	ed->SetReadOnly(b);
	ed=(CEdit*) GetDlgItem(IDC_CHIEF);
	ed->SetReadOnly(b);
	ed=(CEdit*) GetDlgItem(IDC_GROUND);
	ed->SetReadOnly(b);
	// отрывать только новый
	ed=(CEdit*) GetDlgItem(IDC_NAME);
	CString csVal;
	ed->GetWindowText(csVal);
	if(oBh->m_iStat==1) ed->SetReadOnly(FALSE);
	else ed->SetReadOnly(b);
	ed=(CEdit*) GetDlgItem(IDC_SIGN);
	ed->SetReadOnly(b);

}

void FBalanceHolder::OnOK() 
{
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	if(oBh->m_lParentID==-1)
	{
		m_Tree.Expand(m_Tree.GetSelectedItem(),TVE_EXPAND);
		return;
	}
	m_iBH_ID=oBh->m_lID;
	
	CDialog::OnOK();
}

void FBalanceHolder::OnAdd() 
{
	int img=0;
	BalanceHolder* oBh, *oParentBh, *oBrotherBh;
	CString csVal;
	HTREEITEM hItem=m_Tree.GetParentItem(m_Tree.GetSelectedItem());
	oBrotherBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	
	if(oBrotherBh->m_lParentID==-1) // если родитель-корень
	{
		csVal=_T("Новый балансодержатель");
		oBrotherBh=NULL;
	}
	else
	{
		csVal=_T("НОВОЕ");
		img=1;
	}
	hItem=m_Tree.InsertItem(csVal,hItem);
	m_Tree.SetItemImage(hItem,img,img);
	oBh=new BalanceHolder();
	oBh->m_csName=csVal;
	oBh->m_iStat=1;
	oBh->m_lID=-2; // новый ИД, неизвестен пока
	oBh->m_pParent=oBrotherBh->m_pParent;
	if(oBrotherBh) oBh->m_lParentID=oBrotherBh->m_lParentID; // родитель собрата
	else oBh->m_lParentID=-1;
	m_BH.Add(oBh);
	m_Tree.SetItemData(hItem,DWORD(oBh));
	m_Tree.SelectItem(hItem);
	////// создаём сразу подчинённый
	oParentBh=oBh;
	if(oParentBh->m_lParentID==-1) //если родитель родителя-корень
	{
		hItem=m_Tree.InsertItem("НОВОЕ",hItem);
		oBh=new BalanceHolder();
		oBh->m_csName=csVal;
		oBh->m_lID=-2; // новый ИД, неизвестен пока
		oBh->m_iStat=1;
		oBh->m_pParent=oParentBh;
		oBh->m_lParentID=oParentBh->m_lID;
		m_BH.Add(oBh);
		m_Tree.SetItemData(hItem,DWORD(oBh));
		m_Tree.SelectItem(hItem);
		m_Tree.SetItemImage(hItem,1,1);
	}
	
}

void FBalanceHolder::OnRemove() 
{
	BalanceHolder* oParentBh, *oBh;
	oParentBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	if(oParentBh->m_iStat!=1) 
	{
		oParentBh->m_iStat=2;
		if(oParentBh->m_lParentID==-1)
			for(int i=0; i<m_BH.GetSize(); ++i)
			{
				oBh=(BalanceHolder*) m_BH.GetAt(i);
				if(oBh->m_lParentID==oParentBh->m_lID)
					oBh->m_iStat=2;
			}
	}
	else delete oParentBh;
	m_Tree.DeleteItem(m_Tree.GetSelectedItem());
	
}

void FBalanceHolder::OnSave() 
{
	BalanceHolder* oBh;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	UploadCurItem((BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem()));
	/////////// записать сначала родителей
	for(int i=0; i<m_BH.GetSize(); ++i)
	{
		oBh=(BalanceHolder*) m_BH.GetAt(i);
		if(oBh->m_iStat==2 && !oBh->m_pParent) // удаляем
		{
			CADOCommand pCmdDel(bt->GetDB(),"[mDeleteBH]");
			pCmdDel.AddParameter("[ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),oBh->m_lID);
			if(!(bt->GetRS()->Execute(&pCmdDel))) 
			{
				AfxMessageBox("Ошибка удаления", MB_ICONERROR);
				return;
			}
			delete oBh;
			//m_BH.RemoveAt(i);
		}
		if(oBh->m_iStat==1 && !oBh->m_pParent) // новый
		{
			/*Добавляем новый*/
			bt->GetDB()->BeginTransaction();
			bt->GetRS()->Open("mCLBalanceHolder",CADORecordset::openTable);
			bt->GetRS()->AddNew();
			bt->GetRS()->SetFieldValue(1,oBh->m_csName);
			bt->GetRS()->Update();
			bt->GetRS()->GetFieldValue("ID_",oBh->m_lID);
			bt->GetRS()->Close();
			bt->GetDB()->CommitTransaction();
			oBh->m_iStat=0;
		}
		/*if(oBh->m_iStat==3 && !oBh->m_pParent) // новый
		{
			
			AfxMessageBox("");///////// а нада ли?
		}*/
	}
	/////////// записать потомков
	for(i=0; i<m_BH.GetSize(); ++i)
	{
		oBh=(BalanceHolder*) m_BH.GetAt(i);
		if(oBh->m_iStat==2 && oBh->m_pParent) // удаляем
		{
			CADOCommand pCmdDel(bt->GetDB(),"[mDeleteBHAliase]");
			pCmdDel.AddParameter("[ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),oBh->m_lID);
			if(!(bt->GetRS()->Execute(&pCmdDel))) 
			{
				AfxMessageBox("Ошибка удаления", MB_ICONERROR);
				return;
			}
			delete oBh;
			//m_BH.RemoveAt(i);
		}
		if(oBh->m_iStat==1 && oBh->m_pParent)
		{
			
			/*Добавляем новый*/
			CADOCommand pCmdIn(bt->GetDB(),"[mSetBHAliase]");
			bt->GetDB()->BeginTransaction();
			bt->GetRS()->Open("mBHAliase",CADORecordset::openTable);
			bt->GetRS()->AddNew();
			bt->GetRS()->SetFieldValue(1,0);
			bt->GetRS()->Update();
			bt->GetRS()->GetFieldValue("ID_",oBh->m_lID);
			bt->GetRS()->Close();
			bt->GetDB()->CommitTransaction();
			pCmdIn.AddParameter("[BH_ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(long),oBh->m_lParentID);

			pCmdIn.AddParameter("[Name]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csName==_T("")?1:oBh->m_csName.GetLength(),oBh->m_csName);

			pCmdIn.AddParameter("[Descr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csChief==_T("")?1:oBh->m_csChief.GetLength(),oBh->m_csChief);

			pCmdIn.AddParameter("[Gr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csGround==_T("")?1:oBh->m_csGround.GetLength(),oBh->m_csGround);

			pCmdIn.AddParameter("[Sign]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csSign==_T("")?1:oBh->m_csSign.GetLength(),oBh->m_csSign);

			pCmdIn.AddParameter("[Adr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csAddress==_T("")?1:m_csAddress.GetLength(),oBh->m_csAddress);

			pCmdIn.AddParameter("[User]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID);

			pCmdIn.AddParameter("[ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),oBh->m_lID);

	
			if(!(bt->GetRS()->Execute(&pCmdIn))) 
			{
				AfxMessageBox("Ошибка записи", MB_ICONERROR);
				return;
			}
			oBh->m_iStat=0;
		}
		///////////// обновить
		if(oBh->m_iStat==3 && oBh->m_pParent)
		{
			CADOCommand pCmdIn(bt->GetDB(),"[mSetBHAliase]");	
			pCmdIn.AddParameter("[BH_ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(long),oBh->m_pParent->m_lID);

			pCmdIn.AddParameter("[Name]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csName==_T("")?1:oBh->m_csName.GetLength(),oBh->m_csName);

			pCmdIn.AddParameter("[Descr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csChief==_T("")?1:oBh->m_csChief.GetLength(),oBh->m_csChief);

			pCmdIn.AddParameter("[Gr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csGround==_T("")?1:oBh->m_csGround.GetLength(),oBh->m_csGround);

			pCmdIn.AddParameter("[Sign]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csSign==_T("")?1:oBh->m_csSign.GetLength(),oBh->m_csSign);

			pCmdIn.AddParameter("[Adr]",CADORecordset::typeChar,
				CADOParameter::paramInput,oBh->m_csAddress==_T("")?1:m_csAddress.GetLength(),oBh->m_csAddress);

			pCmdIn.AddParameter("[User]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID);

			pCmdIn.AddParameter("[ID]",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),oBh->m_lID);

	
			if(!(bt->GetRS()->Execute(&pCmdIn))) 
			{
				AfxMessageBox("Ошибка записи", MB_ICONERROR);
				return;
			}
			oBh->m_iStat=0;
		}
	}
	AfxMessageBox("Данные успешно сохранены");
	Show();
}

BOOL FBalanceHolder::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	/*список для дерева*/
	m_pImageListTree = new CImageList();

	ASSERT(m_pImageListTree != NULL);    // serious allocation failure checking
	m_pImageListTree->Create(16, 16, ILC_COLOR32, 1, 1);
	m_pImageListTree->SetBkColor(GetSysColor(COLOR_WINDOW));

	m_pImageListTree->Add(AfxGetApp()->LoadIcon(IDI_FOLDER));
	m_pImageListTree->Add(AfxGetApp()->LoadIcon(IDI_POST));

	m_Tree.SetImageList(m_pImageListTree,TVSIL_NORMAL);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FBalanceHolder::UploadCurItem(BalanceHolder *bh)
{
	UpdateData();
	bh->m_csAddress=m_csAddress;
	bh->m_csChief=m_csChief;
	bh->m_csGround=m_csGround;
	bh->m_csName=m_csName;
	bh->m_csSign=m_csSign;
}

void FBalanceHolder::OnChangeName() 
{
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	CString csVal;
	//////если это рут
	if(!m_Tree.GetParentItem(m_Tree.GetSelectedItem()))
	{
		GetDlgItem(IDC_NAME)->GetWindowText(csVal);
		m_Tree.SetItemText(m_Tree.GetSelectedItem(),csVal);
	}
	if(oBh->m_iStat==0) oBh->m_iStat=3;
	
}

void FBalanceHolder::OnChangeChief() 
{
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	CString csVal;
	////если это потомок
	if(m_Tree.GetParentItem(m_Tree.GetSelectedItem()))
	{
		GetDlgItem(IDC_CHIEF)->GetWindowText(csVal);
		m_Tree.SetItemText(m_Tree.GetSelectedItem(),csVal);
	}
	if(oBh->m_iStat==0) oBh->m_iStat=3;
}

void FBalanceHolder::OnChangeGround() 
{
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	if(oBh->m_iStat==0) oBh->m_iStat=3;
	
}

void FBalanceHolder::OnChangeSign() 
{
	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	if(oBh->m_iStat==0) oBh->m_iStat=3;
	
}

void FBalanceHolder::OnChangeAddress() 
{

	BalanceHolder* oBh=(BalanceHolder*) m_Tree.GetItemData(m_Tree.GetSelectedItem());
	if(oBh->m_iStat==0) oBh->m_iStat=3;
}

void FBalanceHolder::Show()
{
	///////////////загружаем список и формируем дерево
	m_Tree.DeleteAllItems();
	m_Tree.SetRedraw(FALSE);
	m_BH.RemoveAll();
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mGetBHs]");
	if(!bt->Execute(&pCmd))
		throw(1);
	BalanceHolder* oBh,*oParentBh;
	HTREEITEM hTreeItem=m_Tree.GetChildItem(m_Tree.GetRootItem());
	int parentsCount=bt->GetRecordsCount();
	bool bDefault;
	for(int i=0; i<parentsCount; ++i)
	{
		oBh=new BalanceHolder();
		oBh->m_csName=bt->GetStringValue("Name_");
		bDefault=FALSE;
		bt->GetRS()->GetFieldValue("DefaultValue",bDefault);
		bt->GetRS()->GetFieldValue("ID_",oBh->m_lID);
		m_BH.Add(oBh);
		oBh->m_lParentID=-1;
		oBh->m_pParent=NULL;
		oBh->m_iStat=0;
		oBh->m_hTreeItem=m_Tree.InsertItem(oBh->m_csName);
		if(bDefault) hTreeItem=oBh->m_hTreeItem; // default
		m_Tree.SetItemData(oBh->m_hTreeItem,DWORD(oBh));
		m_Tree.SetItemImage(oBh->m_hTreeItem,0,0);
		bt->GetRS()->MoveNext();
	}
	/////////////// Алиасы
	

	pCmd.SetText("[mGetAliases]");
	if(!bt->Execute(&pCmd))
		throw(1);
	int size=bt->GetRecordsCount();
	for(i=0; i<size; ++i)
	{
		oBh=new BalanceHolder();
		oBh->m_csName=bt->GetStringValue("AliaseName");
		oBh->m_csChief=bt->GetStringValue("PersonDescription");
		oBh->m_csGround=bt->GetStringValue("Ground");
		oBh->m_csSign=bt->GetStringValue("Sign_");
		oBh->m_csAddress=bt->GetStringValue("Address");
		oBh->m_csUpper=bt->GetStringValue("Head");
		oBh->m_csLower=bt->GetStringValue("Tail");
		bt->GetRS()->GetFieldValue("ID_",oBh->m_lID);
		bt->GetRS()->GetFieldValue("BalanceHolder_ID",oBh->m_lParentID);
		m_BH.Add(oBh);
		///////////////////////поиск родителя в списке и расположение в ветке
		for(int j=0; j<parentsCount; ++j)
		{
			oParentBh=(BalanceHolder*) m_BH.GetAt(j);
			if(oParentBh->m_lID==oBh->m_lParentID)
			{
				oBh->m_hTreeItem=m_Tree.InsertItem("в лице "+oBh->m_csChief,oParentBh->m_hTreeItem);
				m_Tree.SetItemImage(oBh->m_hTreeItem,1,1);
				if(oBh->m_lID==m_iBH_ID) hTreeItem=oBh->m_hTreeItem;
				oBh->m_pParent=oParentBh;
				oBh->m_iStat=0;
				m_Tree.SetItemData(oBh->m_hTreeItem,DWORD(oBh));
				//break;
			}
		}
		bt->GetRS()->MoveNext();
	}
	m_Tree.SetRedraw(TRUE);
	m_Tree.SetFocus();
	m_Tree.SelectItem(hTreeItem);
	m_Tree.Expand(hTreeItem,TVE_EXPAND);
	
}
