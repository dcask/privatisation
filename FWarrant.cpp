// FWarrant.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FWarrant.h"
#include "FWarrantPeople.h"
#include "FWarrantSetup.h"
#include "FWarrantWrnt.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FWarrant dialog


FWarrant::FWarrant(CWnd* pParent /*=NULL*/)
	: FChildDialog(FWarrant::IDD, pParent)
{
	//{{AFX_DATA_INIT(FWarrant)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_pTabDialog=NULL;
	m_iCurSelectedTab=1;
	CurrentSelected=NULL;
}


void FWarrant::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FWarrant)
	DDX_Control(pDX, IDC_TREE, m_Tree);
	DDX_Control(pDX, IDC_TAB, m_Tab);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FWarrant, CDialog)
	//{{AFX_MSG_MAP(FWarrant)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, OnSelchangeTab)
	ON_WM_SHOWWINDOW()
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE, OnSelchangedTree)
	ON_BN_CLICKED(IDC_PERSON_REMOVE, OnPersonRemove)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FWarrant message handlers

BOOL FWarrant::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CButton* but_remove=(CButton*) GetDlgItem(IDC_PERSON_REMOVE);
	HICON hicon_remove=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_P_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	but_remove->SetIcon( hicon_remove ); 
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_PERSON_REMOVE),"Удалить строку");
	m_ToolTip->Activate(TRUE);

	/*список для дерева*/
	m_pImageListTree = new CImageList();

	ASSERT(m_pImageListTree != NULL);    // serious allocation failure checking
	m_pImageListTree->Create(16, 16, ILC_COLOR32, 1, 1);
	m_pImageListTree->SetBkColor(GetSysColor(COLOR_WINDOW));

	m_pImageListTree->Add(AfxGetApp()->LoadIcon(IDI_OWNER));
	m_pImageListTree->Add(AfxGetApp()->LoadIcon(IDI_PERSONS));
	m_pImageListTree->Add(AfxGetApp()->LoadIcon(IDI_NOTOWNER));

	m_Tree.SetImageList(m_pImageListTree,TVSIL_NORMAL);
	// оформление табов
	m_pImageList = new CImageList();
	ASSERT(m_pImageList != NULL);    // serious allocation failure checking
	m_pImageList->Create(16, 16, ILC_COLOR32, 1, 1);
	//doc->m_pImageList->SetBkColor(GetSysColor(COLOR_3DFACE));

	m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_PERSONS));
	m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_W_WRNT));
	m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_W_SETUP));
	m_Tab.SetImageList(m_pImageList);

	TCITEM tcItem;
	tcItem.iImage=0;
	tcItem.mask = TCIF_TEXT | TCIF_IMAGE;
	tcItem.pszText = _T("Люди");
	m_Tab.InsertItem(0, &tcItem);
	tcItem.iImage=1;
	tcItem.pszText = _T("Документ");
	m_Tab.InsertItem(1, &tcItem);
	tcItem.iImage=2;
	tcItem.pszText = _T("Текстовка");
	m_Tab.InsertItem(2, &tcItem);

	NMHDR hdr;
	hdr.code = TCN_SELCHANGE;
	hdr.hwndFrom = m_Tab.m_hWnd;
	if(m_DocData->m_lContractID<0) m_Tab.SetCurSel(0);
	else m_Tab.SetCurSel(2);
	//ResizeParentToFit();
	
	SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FWarrant::OnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult) 
{
	int id; // ID диалога
	int iCurSelectedTab=m_Tab.GetCurSel()+1;// +1 для того, чтобы порядковые номера закладок
											// и диалогов совпадали с номерами в case
	if (m_pTabDialog)
	{
		if(!m_pTabDialog->Migrate() ) return;
		if(!m_pTabDialog->DestroyWindow()) 
		{
			m_Tab.SetCurSel(m_iCurSelectedTab);
			return;
		}
		delete m_pTabDialog;
		m_pTabDialog=NULL;
	}

	switch( iCurSelectedTab) 

	{
		case 1 :
			id = IDD_WRNT_PEOPLE;
			m_pTabDialog = new FWarrantPeople;
			//((FContract*) doc->m_pTabDialog)->m_csSeparator=
			//	((CMainFrame*) AfxGetApp()->GetMainWnd())->m_csSeparator;
			//((FContract*) GetDocument()->m_pTabDialog)->m_csFormatDate=
			//	((CMainFrame*) AfxGetApp()->GetMainWnd())->m_csFormatDate;
			break;
		case 2 :
			id = IDD_WRNT_WRNT;
			m_pTabDialog = new FWarrantWrnt;
			break;
		case 3 :
			id = IDD_WRNT_SETUP;
			m_pTabDialog = new FWarrantSetup;
			break;
		default:
			m_pTabDialog = new FChildDialog(); // новый пустой диалог
			return;

	} // end switch
	
	m_pTabDialog->m_DocData=m_DocData;
	// создаем диалог
	
	m_pTabDialog->Create (id, (CWnd*)&m_Tab); //параметры: ресурс диалога и родитель

	CRect rc; 
	m_iCurSelectedTab=iCurSelectedTab;

	m_Tab.GetWindowRect (&rc); // получаем "рабочую область"
	m_Tab.ScreenToClient (&rc); // преобразуем в относительные координаты

	// исключаем область, где отображаются названия закладок:
	m_Tab.AdjustRect (FALSE, &rc); 

	// помещаем диалог на место..
	m_pTabDialog->MoveWindow (&rc);

	// и показываем:
	m_pTabDialog->ShowWindow ( SW_SHOWNORMAL );
	m_pTabDialog->UpdateWindow();
	*pResult = 0;
}

void FWarrant::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	BOOL bSaved=m_DocData->m_bSaved;
	m_Tree.DeleteAllItems();
	HTREEITEM hItem=NULL;
	/*заполнение иерархии*/
	int size=m_DocData->m_FlatRights.GetSize();
	FlatRights* iobject,*jobject;
	//int tmpcount=0; // проверка целостности структуры записей
	for(int i=0; i<size; ++i)
	{
		iobject=(FlatRights*)(m_DocData->m_FlatRights.GetAt(i));
			if(!iobject->m_ParentInternal) 
			{
				if(iobject->m_iStat!=2) 
				{
					iobject->m_hItem=m_Tree.InsertItem(iobject->m_csFamily+" "+iobject->m_csName+" "+
					iobject->m_csSurname);
					m_Tree.SetItemData(iobject->m_hItem,DWORD(iobject));
				}	
				//if(!root) root=iobject->m_Item;
				//tmpcount++;
				if(iobject->m_Owner) 
				{
					if(iobject->m_Warrant)
						m_Tree.SetItemImage(iobject->m_hItem,1,1);
					else
						m_Tree.SetItemImage(iobject->m_hItem,0,0);
				}
				else m_Tree.SetItemImage(iobject->m_hItem,2,2);


			}
			else
				for(int j=0; j<size,i!=j; ++j)
				{
					if(i==j) continue;
					jobject=(FlatRights*)(m_DocData->m_FlatRights.GetAt(j));
					if(iobject->m_ParentInternal==jobject)
					{
						if(iobject->m_iStat!=2) 
						{
							iobject->m_hItem=m_Tree.InsertItem(iobject->m_csFamily+" "+iobject->m_csName
								+" "+iobject->m_csSurname, jobject->m_hItem);
							m_Tree.SetItemData(iobject->m_hItem,DWORD(iobject));
							m_Tree.Expand(jobject->m_hItem,TVE_EXPAND);
							ChangeImage(iobject);
						}
						//tmpcount++;
					}
				}
	}
	//if(tmpcount!=size) AfxMessageBox("Нарушена структура\nзаписей таблицы OtLic\nCDog="+m_docdata->m_csContractID);
	m_Tree.SelectItem(m_Tree.GetRootItem());

	m_DocData->m_bSaved=bSaved;
	
}

BOOL FWarrant::PreTranslateMessage(MSG* pMsg) 
{
	CWnd* focus=GetFocus();
	if(WM_KEYDOWN == pMsg->message && focus)
	{
		switch(pMsg->wParam)
		{
		case VK_TAB:
				if(focus->GetDlgCtrlID()==IDC_TREE)
				{
					m_pTabDialog->SetFocus();
					return TRUE;
				}
				break;
		case VK_DELETE:
				if(focus->GetDlgCtrlID()==IDC_TREE)
				{
					OnPersonRemove();
					return TRUE;
				}
				break;
		default:
			break;
		}
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

BOOL FWarrant::DestroyWindow() 
{
	delete m_pImageListTree;
	delete m_pImageList;
	
	return CDialog::DestroyWindow();
}

void FWarrant::OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_TREEVIEW* pNMTreeView = (NM_TREEVIEW*)pNMHDR;

	if(m_iCurSelectedTab==3)
		m_pTabDialog->Migrate();
	CurrentSelected=NULL;
	CurrentSelected=(FlatRights*) m_Tree.GetItemData(pNMTreeView->itemNew.hItem);
	if(m_iCurSelectedTab==3)
		m_pTabDialog->SendMessage(WM_SHOWWINDOW,TRUE,0);
	*pResult = 0;
}

BOOL FWarrant::Migrate()
{
	return m_pTabDialog->Migrate();
}

void FWarrant::Add(HTREEITEM hItem, FlatRights *fr)
{
	fr->m_hItem=m_Tree.InsertItem(fr->m_csFamily+" "+fr->m_csName+" "+fr->m_csSurname,hItem);
	m_Tree.SetItemData(fr->m_hItem,DWORD(fr));
	if(fr->m_Owner) 
	{
		if(fr->m_Warrant)
			m_Tree.SetItemImage(fr->m_hItem,1,1);
		else
		m_Tree.SetItemImage(fr->m_hItem,0,0);
	}
	else m_Tree.SetItemImage(fr->m_hItem,2,2);
	m_Tree.Expand(hItem,TVE_EXPAND);
	m_DocData->m_FlatRights.Add(fr);
	m_Tree.SelectItem(fr->m_hItem);
}

void FWarrant::OnPersonRemove() 
{
	HTREEITEM hItem=m_Tree.GetSelectedItem();
	FlatRights* fr=(FlatRights*) m_Tree.GetItemData(hItem);
	if(m_Tree.ItemHasChildren(hItem)) return;
	m_DocData->m_bSaved=FALSE;
	FlatRights* parentfr=fr->m_ParentInternal;
	fr->m_iStat=2;
	if(fr->m_Warrant)
	{
		Warrant *oWarrant=fr->m_Warrant;
		for(int i=0; i<oWarrant->m_aFlatRights.GetSize(); ++i)
			if(((FlatRights*)oWarrant->m_aFlatRights.GetAt(i))==fr)
				oWarrant->m_aFlatRights.RemoveAt(i);
	}

	m_Tree.DeleteItem(hItem);
	if (parentfr)
		if(m_Tree.GetChildItem(parentfr->m_hItem)==NULL)
			parentfr->m_bHasChildren=FALSE;
	if(m_Tab.GetCurSel()==1) ((FWarrantWrnt*)m_pTabDialog)->Show();
	m_pTabDialog->ShowWindow(SW_SHOW);
}


void FWarrant::ChangeImage(FlatRights *fr)
{
	if(fr->m_Owner)
	{
		if(fr->m_Warrant)
			m_Tree.SetItemImage(fr->m_hItem,1,1);
		else
			m_Tree.SetItemImage(fr->m_hItem,0,0);
	}
	else m_Tree.SetItemImage(fr->m_hItem,2,2);
}
