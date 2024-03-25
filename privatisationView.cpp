// privatisationView.cpp : implementation of the CPrivatisationView class
//

#include "stdafx.h"
#include "privatisation.h"

#include "privatisationDoc.h"
#include "privatisationView.h"
#include "FContract.h"
#include "FWarrant.h"
#include "FReplica.h"
#include "FDeclare.h"
#include "FAddress.h"
#include "FContractInfo.h"
#include "FRepList.h"
#include "StrArray.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationView

IMPLEMENT_DYNCREATE(CPrivatisationView, CFormView)

BEGIN_MESSAGE_MAP(CPrivatisationView, CFormView)
	//{{AFX_MSG_MAP(CPrivatisationView)
	ON_WM_SHOWWINDOW()
	ON_COMMAND(ID_CONTRACT_SAVE, OnContractSave)
	ON_BN_CLICKED(IDC_CAL, OnCal)
	ON_COMMAND(ID_CONTRACT_DELETE, OnContractDelete)
	ON_COMMAND(ID_CONTRACT_CLOSE, OnContractClose)
	ON_COMMAND(ID_CONTRACT_ADDRESS, OnContractAddress)
	ON_WM_SIZE()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, OnSelchangeTab)
	ON_COMMAND(ID_PRIV_CONTRACT, OnPrivContract)
	ON_COMMAND(ID_PRIV_DECLARE, OnPrivDeclare)
	ON_COMMAND(ID_PRIV_REPLICA, OnPrivReplica)
	ON_COMMAND(ID_PRIV_WARRANT, OnPrivWarrant)
	ON_COMMAND(ID_RECORD_EXPORT, OnRecordExport)
	ON_COMMAND(ID_MAKE_DECLARATION, OnMakeDeclaration)
	ON_COMMAND(ID_MAKE_DECLARATION_DEP, OnMakeDeclarationDep)
	ON_COMMAND(ID_MAKE_DECLARATION_REG, OnMakeDeclarationReg)
	ON_COMMAND(ID_MAKE_INJUIRY, OnMakeInjuiry)
	ON_COMMAND(ID_MAKE_REPLICA, OnMakeReplica)
	ON_COMMAND(ID_MAKE_CONTRACT, OnMakeContract)
	ON_EN_KILLFOCUS(IDC_PRIVSQR, OnKillfocusPrivsqr)
	ON_EN_CHANGE(IDC_COMMENTS, OnChangeComments)
	ON_EN_CHANGE(IDC_FLAT_PART, OnChangeFlatPart)
	ON_EN_CHANGE(IDC_ADDFLAT, OnChangeAddflat)
	ON_EN_CHANGE(IDC_PRIVROOMS, OnChangePrivrooms)
	ON_EN_CHANGE(IDC_PRIVSQR, OnChangePrivsqr)
	ON_CBN_SELCHANGE(IDC_FLATTYPE, OnSelchangeFlattype)
	ON_CBN_SELCHANGE(IDC_PROPERTYTYPE, OnSelchangePropertytype)
	ON_COMMAND(ID_WINDOW_CLOSEALL, OnWindowCloseall)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationView construction/destruction

CPrivatisationView::CPrivatisationView()
	: CFormView(CPrivatisationView::IDD)
{
	//{{AFX_DATA_INIT(CPrivatisationView)
	m_csComments = _T("");
	m_csAddFlats = _T("");
	m_csFlatPart = _T("");
	m_iPrivRooms = 0;
	m_dPrivSqr = 0.0;
	//}}AFX_DATA_INIT
	iii=0;
	// TODO: add construction code here
	
}

CPrivatisationView::~CPrivatisationView()
{
	
}

void CPrivatisationView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	CString csVal;
	if(GetDlgItem(IDC_PRIVSQR)) 
	{
		GetDlgItemText(IDC_PRIVSQR,csVal);
		if(csVal=="") SetDlgItemText(IDC_PRIVSQR,"0");
	}
	if(GetDlgItem(IDC_PRIVROOMS))
	{
		GetDlgItemText(IDC_PRIVROOMS,csVal);
		if(csVal=="") SetDlgItemText(IDC_PRIVROOMS,"0");
	}
	//{{AFX_DATA_MAP(CPrivatisationView)
	DDX_Control(pDX, IDC_PROPERTYTYPE, m_PropertyType);
	DDX_Control(pDX, IDC_FLATTYPE, m_FlatType);
	DDX_Control(pDX, IDC_TAB, m_Tab);
	DDX_Text(pDX, IDC_COMMENTS, m_csComments);
	DDV_MaxChars(pDX, m_csComments, 2000);
	DDX_Text(pDX, IDC_ADDFLAT, m_csAddFlats);
	DDX_Text(pDX, IDC_FLAT_PART, m_csFlatPart);
	DDX_Text(pDX, IDC_PRIVROOMS, m_iPrivRooms);
	DDX_Text(pDX, IDC_PRIVSQR, m_dPrivSqr);
	DDX_Control(pDX, IDC_REGDEP, m_RegDep);
	DDX_Control(pDX, IDC_DEPDATE, m_DateDep);
	//}}AFX_DATA_MAP
	MyDDX_Text(pDX, IDC_PRIVSQR, m_dPrivSqr);
	MyDDX_Text(pDX, IDC_PRIVROOMS, m_iPrivRooms);
}

void CPrivatisationView::OnInitialUpdate()
{
	int error=0;
	try
	{
		
		CFormView::OnInitialUpdate();
		CPrivatisationDoc* doc=GetDocument();
		BOOL bSaved=doc->m_DocData.m_bSaved;
		SIZE sizeTotal; 
		sizeTotal.cx=620;// размеры области для прокрутки внутри дочернего окна
		sizeTotal.cy=430;//
		error=1;
		SetScrollSizes(MM_TEXT,sizeTotal);
		ResizeParentToFit();
		///Оформление табов
		error=2;
		doc->m_pImageList = new CImageList();
		ASSERT(doc->m_pImageList != NULL);    // serious allocation failure checking
		doc->m_pImageList->Create(16, 16, ILC_COLOR32, 1, 1);
		//doc->m_pImageList->SetBkColor(GetSysColor(COLOR_3DFACE));
		error=3;
		doc->m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_CONTRACT));
		doc->m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_DECLARE));
		doc->m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_WARRANT));
		doc->m_pImageList->Add(AfxGetApp()->LoadIcon(IDI_REPLICA));
		error=4;	
		m_Tab.SetImageList(doc->m_pImageList);
		TCITEM tcItem;
		tcItem.mask = TCIF_TEXT | TCIF_IMAGE   ;
		tcItem.pszText = _T("Договор");tcItem.iImage=0;m_Tab.InsertItem(0, &tcItem);
		tcItem.pszText = _T("Заявление");tcItem.iImage=1;m_Tab.InsertItem(1, &tcItem);
		tcItem.pszText = _T("Документы");tcItem.iImage=2;m_Tab.InsertItem(2, &tcItem);
		tcItem.pszText = _T("Дубликаты");tcItem.iImage=3;m_Tab.InsertItem(3, &tcItem);
		//tcItem.pszText = _T("Комментарии");tcItem.iImage=4;tab->InsertItem(4, &tcItem);
		CRect rect;
		error=6;
		GetClientRect(&rect);
		m_iCx=rect.right-rect.left;
		m_iCy=rect.bottom-rect.top;
		m_iCyBase=m_iCy;
		NMHDR hdr;
		hdr.code = TCN_SELCHANGE;
		hdr.hwndFrom = m_Tab.m_hWnd;
		if(doc->m_DocData.m_lContractID==-1) m_Tab.SetCurSel(1);
		else m_Tab.SetCurSel(0);
		SetScrollSizes(MM_TEXT,sizeTotal);
		error=5;
		if(m_Tab.GetSafeHwnd()) SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
		
		// начальные значения
		m_csComments=doc->m_DocData.m_csContractComments;
		m_csAddFlats=doc->m_DocData.m_csFlatAdd;
		m_csFlatPart=doc->m_DocData.m_csFlatPart;
		m_iPrivRooms=doc->m_DocData.m_iPrivRooms;
		m_dPrivSqr=doc->m_DocData.m_dAddrPrivArea;
		UpdateData(FALSE);
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		if(doc->m_DocData.m_lContractID==-1)
		{
			//m_RegDep.SetFormat(((CPrivatisationApp*)AfxGetApp())->m_csDepTempl);
			m_RegDep.SetText(((CPrivatisationApp*)AfxGetApp())->m_csDepTempl);
		}
		else
			m_RegDep.SetText(doc->m_DocData.m_csDepRegNum);
		if(doc->m_DocData.m_DepRegDate.m_status!=COleDateTime::null)
			m_DateDep.SetText(doc->m_DocData.m_DepRegDate.Format("%d-%m-%Y"));
		if(GetDlgItem(IDC_FLATTYPE) && GetDlgItem(IDC_PROPERTYTYPE))
		{
			bt->LoadComboBox(GetDlgItem(IDC_FLATTYPE),"[mComboFlatType]",0,DWORD(doc->m_DocData.m_iFlatType));
			bt->LoadComboBox(GetDlgItem(IDC_PROPERTYTYPE),"[mComboPropertyType]",0,DWORD(doc->m_DocData.m_iPropertyType));
		}
		///////////
		CButton* but_calendar=(CButton*) GetDlgItem(IDC_CAL);
		HICON hicon_calendar=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CALENDAR),IMAGE_ICON,16,16, LR_SHARED);
		but_calendar->SetIcon( hicon_calendar ); 
		SetWindowName();
		doc->m_DocData.m_bSaved=bSaved;
		
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","InitUpdate.PrView "+IntToStr(error));
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationView diagnostics

#ifdef _DEBUG
void CPrivatisationView::AssertValid() const
{
	CFormView::AssertValid();
}

void CPrivatisationView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CPrivatisationDoc* CPrivatisationView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPrivatisationDoc)));
	return (CPrivatisationDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationView message handlers

void CPrivatisationView::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CFormView::OnShowWindow(bShow, nStatus);
	/*if(!bShow) return;
	try
	{
		
		//doc->m_DocData.m_bSaved=bSaved;
		
	}catch(...)
	{
		AfxMessageBox("OnShow.PrivView.Exception");
	}*/
	
}


void CPrivatisationView::OnContractSave() 
{
	if(!Migrate()) return;
	CPrivatisationDoc* doc=GetDocument();
	if(!doc->m_DocData.SaveContract())
		AfxMessageBox("Данные не сохранены\nили сохранены частично", MB_ICONERROR);
	else
		AfxMessageBox("Данные сохранены");
	CString csVal=doc->m_DocData.m_csStreet;
	if(((CPrivatisationApp*) AfxGetApp())->m_StreetDate	<doc->m_DocData.m_LotDate)
			csVal=doc->m_DocData.m_csFullStreet;
	doc->m_csAddress.Format("%s, д. %d %s, кв. %d",csVal,doc->m_DocData.m_iBuilding,
				doc->m_DocData.m_csBuildingPart, doc->m_DocData.m_iFlat);
	SetWindowName();
}

void CPrivatisationView::OnCal() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_CAL);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DEPDATE);
	if(((CPrivatisationApp*)AfxGetApp())->calendarDlg)
		((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void CPrivatisationView::OnContractDelete() 
{
	CPrivatisationDoc* doc=GetDocument();
	if(AfxMessageBox("Вы уверены, что хотите\nудалить этот договор?",MB_YESNO)==IDYES)
	{
		if(!doc->m_DocData.DeleteContract())
			AfxMessageBox("Договор не удалён");
		else
		{
			AfxMessageBox("Договор удалён");
			
			((CPrivatisationApp*)AfxGetApp())->GetMainWnd()->SendMessage(WM_COMMAND, MAKEWPARAM(ID_FILE_CLOSE, CN_COMMAND), NULL);
		}
	}
	
}

void CPrivatisationView::OnContractClose() 
{
	// TODO: Add your command handler code here
	
}

void CPrivatisationView::OnContractAddress() 
{
	FAddress dlg;
	CPrivatisationDoc* doc=GetDocument();
	dlg.m_DocData=&(doc->m_DocData);
	if(!Migrate()) 
	{
		m_Tab.SetCurSel(doc->m_iCurSelectedTab-1);
		return;
	}
	
	if(dlg.DoModal()==IDOK)
	{
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mFindAddress]");
		CString csVal;
		try{
			// ИД улицы
			pCmd.AddParameter("StreetID",CADORecordset::typeBigInt,
				CADOParameter::paramInput,sizeof(long),dlg.m_lStreet);
			// дом
			pCmd.AddParameter("Building",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),dlg.m_iBuilding);
			
			pCmd.AddParameter("BuildingPart",CADORecordset::typeChar,
				CADOParameter::paramInput,dlg.m_csPart.GetLength()!=0?dlg.m_csPart.GetLength():1,dlg.m_csPart);
			if(!bt->Execute(&pCmd))
				throw(1);
			if(bt->GetRecordsCount()==0)
				AfxMessageBox("В базе нет такого дома", MB_ICONERROR);
			else
			{
				doc->m_DocData.m_lStreet=dlg.m_lStreet;
				doc->m_DocData.m_csStreet=dlg.m_csStreet;
				doc->m_DocData.m_iBuilding=dlg.m_iBuilding;
				doc->m_DocData.m_csFlatPart=dlg.m_csPart;
				doc->m_DocData.m_csFullStreet=bt->GetStringValue("FullName");
				bt->GetRS()->GetFieldValue("ID1",doc->m_DocData.m_lAdresID1);
				bt->GetRS()->GetFieldValue("ID2",doc->m_DocData.m_lAdresID2);
				doc->m_DocData.m_iFlat=dlg.m_iFlatNum;
				if(((CPrivatisationApp*) AfxGetApp())->m_StreetDate	<doc->m_DocData.m_LotDate)
					doc->m_csAddress=doc->m_DocData.m_csFullStreet;
				else
					doc->m_csAddress=dlg.m_csStreet;
				doc->m_csAddress+=" д. ";
				csVal.Format("%d",dlg.m_iBuilding);
				doc->m_csAddress+=csVal;
				doc->m_csAddress+=" ";
				doc->m_csAddress+=dlg.m_csPart;
				doc->m_csAddress+=" кв. ";
				csVal.Format("%d",dlg.m_iFlatNum);
				doc->m_csAddress+=csVal;
				doc->m_csAddress+=" ";
				doc->m_csAddress+=m_csFlatPart;
				SetWindowName();				
			}
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}


void CPrivatisationView::OnSize(UINT nType, int cx, int cy) 
{
	CFormView::OnSize(nType,cx,cy);
	try
	{
		if((cy>m_iCyBase&&m_iCyBase>0))
		{
			WINDOWPLACEMENT pm;
			if(!GetDlgItem(IDC_COMMENTS)||!GetDlgItem(IDC_COMMENTS_TEXT)) return;
			GetDlgItem(IDC_COMMENTS)->GetWindowPlacement(&pm);
			pm.rcNormalPosition.bottom+=cy-m_iCy;
			GetDlgItem(IDC_COMMENTS)->SetWindowPlacement(&pm);

			GetDlgItem(IDC_COMMENTS_TEXT)->GetWindowPlacement(&pm);
			pm.rcNormalPosition.bottom+=cy-m_iCy;
			GetDlgItem(IDC_COMMENTS_TEXT)->SetWindowPlacement(&pm);
			
			m_iCx=cx;	m_iCy=cy;
		}
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","view.onsize");
	}
}

void CPrivatisationView::OnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult) 
{
	int id; // ID диалога
	int iCurSelectedTab=m_Tab.GetCurSel()+1;// +1 для того, чтобы порядковые номера закладок
											// и диалогов совпадали с номерами в case
	CPrivatisationDoc* doc=GetDocument();
	if (doc->m_pTabDialog)
	{
		if(!doc->m_pTabDialog->Migrate()||
			!doc->m_pTabDialog->DestroyWindow()) 
		{
			m_Tab.SetCurSel(doc->m_iCurSelectedTab-1);
			return;
		}
		delete doc->m_pTabDialog;
		doc->m_pTabDialog=NULL;
	}

	switch( iCurSelectedTab) 

	{
		case 1 :
			id = IDD_CONTRACT;
			doc->m_pTabDialog = new FContract;
			break;
		case 2 :
			id = IDD_DECLARE;
			doc->m_pTabDialog = new FDeclare;
			break;
		case 3 :
			id = IDD_WARRANT;
			doc->m_pTabDialog = new FWarrant;
			break;
		case 4 :
			id = IDD_REPLICA;
			doc->m_pTabDialog = new FReplica;
			break;
		default:
			doc->m_pTabDialog = new FChildDialog(); // новый пустой диалог
			return;

	} // end switch
	
	doc->m_pTabDialog->m_DocData=&(doc->m_DocData);
	// создаем диалог
	
	doc->m_pTabDialog->Create (id, (CWnd*)&m_Tab); //параметры: ресурс диалога и родитель

	CRect rc; 
	doc->m_iCurSelectedTab=iCurSelectedTab;

	m_Tab.GetWindowRect (&rc); // получаем "рабочую область"
	m_Tab.ScreenToClient (&rc); // преобразуем в относительные координаты

	// исключаем область, где отображаются названия закладок:
	m_Tab.AdjustRect (FALSE, &rc); 

	// помещаем диалог на место..
	doc->m_pTabDialog->MoveWindow (&rc);

	// и показываем:
	doc->m_pTabDialog->ShowWindow ( SW_SHOWNORMAL );
	doc->m_pTabDialog->UpdateWindow();
	*pResult = 0;
}

void CPrivatisationView::OnPrivContract() 
{
	NMHDR hdr;
	if (m_Tab.GetCurSel()==0) return;
	hdr.code = TCN_SELCHANGE;
	hdr.hwndFrom = m_Tab.m_hWnd;
	m_Tab.SetCurSel(0);
	SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
}

void CPrivatisationView::OnPrivDeclare() 
{
	NMHDR hdr;
	if (m_Tab.GetCurSel()==1) return;
	hdr.code = TCN_SELCHANGE;
	hdr.hwndFrom = m_Tab.m_hWnd;
	m_Tab.SetCurSel(1);
	SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
	
}

void CPrivatisationView::OnPrivReplica() 
{
	NMHDR hdr;
	if (m_Tab.GetCurSel()==3) return;
	hdr.code = TCN_SELCHANGE;
	hdr.hwndFrom = m_Tab.m_hWnd;
	m_Tab.SetCurSel(3);
	SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
	
}

void CPrivatisationView::OnPrivWarrant() 
{
	NMHDR hdr;
	if (m_Tab.GetCurSel()==2) return;
	hdr.code = TCN_SELCHANGE;
	hdr.hwndFrom = m_Tab.m_hWnd;
	m_Tab.SetCurSel(2);
	SendMessage ( WM_NOTIFY, m_Tab.GetDlgCtrlID(), (LPARAM)&hdr );
	
}

void CPrivatisationView::SetWindowName()
{
	try
	{
			CPrivatisationDoc* doc=GetDocument();
			CString csVal,csWindowName;
			csWindowName="Договор: ";
			csVal.Format("%d",doc->m_DocData.m_iRegNum);
			csWindowName+=csVal;
			csWindowName+="-";
			csVal.Format("%d",doc->m_DocData.m_iBookNum);
			csWindowName+=csVal;
			csWindowName+="   ";
			//csWindowName+=doc->m_csAddress;
			csWindowName.Insert(csWindowName.GetLength(),doc->m_csAddress);
			csWindowName.Replace("/","|");
			csWindowName+=". "+doc->m_DocData.m_csDistrict;
			csWindowName+=" округ";
			doc->SetPathName(csWindowName,FALSE);
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","SetWindowName");
	}
}

void CPrivatisationView::OnRecordExport() 
{
	TemplParam* tp;
	CObArray param;
	CString csVal;
	CPrivatisationDoc* doc=GetDocument();
	if(!Migrate()) return;
	AddTemplParam("[@CurrentDate@]",COleDateTime::GetCurrentTime().Format("%d-%m-%Y"),&param);

	tp=new TemplParam();
	tp->name="[@ContractNum@]"; tp->value.Format("%d-%d",doc->m_DocData.m_iBookNum,doc->m_DocData.m_iRegNum);
	param.Add(tp);
	tp=new TemplParam();
	csVal=doc->m_csAddress+" ";
	csVal+=doc->m_DocData.m_csFlatPart+" ";
	csVal+=doc->m_DocData.m_csFlatAdd;
	tp->name="[@Address@]"; tp->value=csVal;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@District@]"; tp->value=doc->m_DocData.m_csDistrict;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatPart@]"; tp->value=doc->m_DocData.m_csFlatPart;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatAdd@]"; tp->value=doc->m_DocData.m_csFlatAdd;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@PrivRooms@]"; tp->value.Format("%d",doc->m_DocData.m_iPrivRooms);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@AddrPrivArea@]"; tp->value.Format("%.2f",doc->m_DocData.m_dAddrPrivArea);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatType@]"; tp->value=doc->m_DocData.m_csFlatType;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@PropertyType@]"; tp->value=doc->m_DocData.m_csPropertyType;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@DepRegNum@]"; tp->value=doc->m_DocData.m_csDepRegNum;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@DepRegDate@]"; tp->value=doc->m_DocData.m_DepRegDate.Format("%d-%m-%Y");;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@ContractComments@]"; tp->value=doc->m_DocData.m_csContractComments;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@BalanceHolder@]"; tp->value=doc->m_DocData.m_csBalanceHolder;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@BfullArea@]"; tp->value.Format("%.2f",doc->m_DocData.m_dBFullArea);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@Bcost@]"; tp->value.Format("%.2f",doc->m_DocData.m_dBCost);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@BuiltDate@]"; tp->value=doc->m_DocData.m_BBuiltDate.Format("%d-%m-%Y");
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@BcoefG@]"; tp->value.Format("%.2f",doc->m_DocData.m_dBCoefG);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatRooms@]"; tp->value.Format("%d",doc->m_DocData.m_iFlatRooms);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatFullArea@]"; tp->value.Format("%.2f",doc->m_DocData.m_dFlatFullArea);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatLiveArea@]"; tp->value.Format("%.2f",doc->m_DocData.m_dFlatLiveArea);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@FlatCost@]"; tp->value.Format("%.2f",doc->m_DocData.m_dFlatCost);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@Lot@]"; tp->value.Format("%d",doc->m_DocData.m_iLot);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@LotLivepart@]"; tp->value.Format("%.2f",doc->m_DocData.m_dLotLivepart);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@LotCost@]"; tp->value.Format("%.2f",doc->m_DocData.m_dLotCost);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@LotDate@]"; tp->value=doc->m_DocData.m_LotDate.Format("%d-%m-%Y");
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@RegDate@]"; tp->value=doc->m_DocData.m_RegDate.Format("%d-%m-%Y");
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@RegRecordDate@]"; tp->value=doc->m_DocData.m_RegRecordDate.Format("%d-%m-%Y");
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@CancelDate@]"; tp->value=doc->m_DocData.m_CancelDate.Format("%d-%m-%Y");;
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@Norm@]"; tp->value.Format("%.2f",doc->m_DocData.m_dNorm);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@Payment@]"; tp->value.Format("%.2f",doc->m_DocData.m_dPayment);
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@ActDate@]"; tp->value=doc->m_DocData.m_ActDate.Format("%d-%m-%Y");
	param.Add(tp);
	tp=new TemplParam();
	tp->name="[@TranferType@]"; tp->value=doc->m_DocData.m_csTranferType;
	param.Add(tp);
	csVal="Сведения-"+doc->m_csAddress;
	csVal+=".doc";
	CString filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\contract.tpw";
	((CPrivatisationApp*)AfxGetApp())->ExportWord(filename,csVal,&param);
	
}

void CPrivatisationView::OnMakeDeclaration() 
{
	TemplParam* tp;
	//CStringArray* tab1,*tab2;
	CObArray param;
	CPrivatisationDoc* doc=GetDocument();
	if(!Migrate()) return;
	CString csVal, csVal1;
	//////////////////////////Documents
	csVal=Preview(&doc->m_DocData, TRUE, ((CPrivatisationApp*)AfxGetApp())->m_bt, TRUE);
	for(int j=0; j<doc->m_DocData.m_Refusers.GetSize(); ++j)
	{
		csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csFamily+" ";
		csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csName+" ";
		csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csSurname+" ";
		csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_Birthday.Format(" (%d.%m.%Y г.р.),\r");
	}
	
	AddTemplParam("[@Preview@]",csVal,&param);
	/////////////////////////Address
	csVal.Format("%s д. %d %s кв. %d %s",doc->m_DocData.m_csStreet,
		doc->m_DocData.m_iBuilding,doc->m_DocData.m_csBuildingPart,doc->m_DocData.m_iFlat,
		doc->m_DocData.m_csFlatPart);
	//csVal+=doc->m_DocData.m_csFlatPart+" ";
	csVal+=doc->m_DocData.m_csFlatAdd;

	AddTemplParam("[@Address@]",csVal,&param);
	/////////// коммуналка или нет
	if(doc->m_DocData.m_iFlatType==2)
		csVal="прошу(сим)  передать в [@PropertyType@] собственность [@Rooms@] комнат(ы) площадью [@Sqr@] кв.м в вышеуказанной [@FlatType@] квартире и даю(ём) согласие на её приватизацию на имя:";
	else
		csVal="прошу(сим) передать в [@PropertyType@] собственность вышеуказанную [@FlatType@] квартиру и даю(ём) cогласие на её приватизацию на имя:";
	/////////////////////////PropertyType
	if(doc->m_DocData.m_csPropertyType=="")
		csVal.Replace("[@PropertyType@]",doc->m_DocData.m_csPropertyType);
	else
		csVal.Replace("[@PropertyType@]",
		doc->m_DocData.m_csPropertyType.Left(doc->m_DocData.m_csPropertyType.GetLength()-2) + "ую");
	if(doc->m_DocData.m_csFlatType=="")
		csVal.Replace("[@FlatType@]",doc->m_DocData.m_csFlatType);
	else
		if(doc->m_DocData.m_iFlatType==2)
			csVal.Replace("[@FlatType@]",
			doc->m_DocData.m_csFlatType.Left(doc->m_DocData.m_csFlatType.GetLength()-2) + "ой");
		else
			csVal.Replace("[@FlatType@]",
			doc->m_DocData.m_csFlatType.Left(doc->m_DocData.m_csFlatType.GetLength()-2) + "ую");
	csVal.Replace("[@Rooms@]",IntToStr(doc->m_DocData.m_iPrivRooms));
	csVal1.Format("%.2f",doc->m_DocData.m_dAddrPrivArea);
	csVal.Replace("[@Sqr@]",csVal1);
	AddTemplParam("[@Header@]",csVal,&param);
	
	//////////////////////////// recordDate
	AddTemplParam("[@RecordDate@]",doc->m_DocData.m_RegRecordDate.Format("%d-%m-%Y"),&param);
	//////////////////////////Tab1
	int size=doc->m_DocData.m_Owners.GetSize();
	if(size!=0)
	{
		tp=new TemplParam();
		tp->name="[@Table1@]"; tp->value="";
		tp->tab=new CStringArray[size];
		//tab1=tp->tab;
		tp->rows=size;
			for(int j=0; j<size; ++j)
			{
				csVal=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csFamily+" ";
				csVal+=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csName+" ";
				csVal+=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csSurname;
				tp->tab[j].Add(csVal);
				tp->tab[j].Add(((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csPart);
				tp->tab[j].Add("");
			}
		param.Add(tp);
		//////////////////////////Tab23
		tp=new TemplParam();
		if((Refuser*)doc->m_DocData.m_Refusers.GetSize()>0) tp->name="[@Table3@]";
		else tp->name="[@Table2@]";
		tp->value="";
		tp->tab=new CStringArray[size];
		tp->rows=size;
			for(j=0; j<size; ++j)
			{
				csVal=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csFamily+" ";
				csVal+=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csName+" ";
				csVal+=((Owner*)doc->m_DocData.m_Owners.GetAt(j))->m_csSurname;
				tp->tab[j].Add(csVal);
				tp->tab[j].Add("");
			}
		param.Add(tp);
	}
	//////////////////////////Tab2
	size=doc->m_DocData.m_Refusers.GetSize();
	if(size>0)
	{
		tp=new TemplParam();
		tp->name="[@Table2@]";
		tp->value="";
		tp->tab=new CStringArray[size];
		//tab2=tp->tab;
		tp->rows=size;
			for(int j=0; j<size; ++j)
			{
				csVal=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csFamily+" ";
				csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csName+" ";
				csVal+=((Refuser*)doc->m_DocData.m_Refusers.GetAt(j))->m_csSurname;
				tp->tab[j].Add(csVal);
				tp->tab[j].Add("");
			}
		param.Add(tp);
	}
	
	csVal="Заявление-"+doc->m_csAddress;
	CString filename;
	if(size>0)
		filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\declref.tpw";
	else
		filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\declaration.tpw";
	((CPrivatisationApp*)AfxGetApp())->ExportWord(filename,csVal,&param);
}

void CPrivatisationView::OnMakeDeclarationDep() ///// регистрация собственника
{
	if(!Migrate()) return;
	MakeDeclaration(TRUE);
	
}

void CPrivatisationView::OnMakeDeclarationReg() ///// регистрация перехода права
{
	if(!Migrate()) return;
	MakeDeclaration(FALSE);
	
}

void CPrivatisationView::OnMakeInjuiry() 
{
	TemplParam* tp;
	CObArray param;
	CPrivatisationDoc* doc=GetDocument();
	if(!Migrate()) return;
	CString csVal,csVal2,csVal3,csVal1;
	//////////////////////////// ContractDate
	tp=new TemplParam();
	tp->name="[@ContractDate@]"; tp->value=doc->m_DocData.m_LotDate.Format("%d.%m.%Y г.");
	param.Add(tp);
	/////////////////////////Owners
	tp=new TemplParam();
	tp->name="[@Owners@]"; 
	tp->value="";
	for(int i=0; i<doc->m_DocData.m_Owners.GetSize(); ++i)
	{
		csVal+=", ";
		csVal1=((Owner*)doc->m_DocData.m_Owners.GetAt(i))->m_csFamily;
		csVal2=((Owner*)doc->m_DocData.m_Owners.GetAt(i))->m_csName;
		csVal3=((Owner*)doc->m_DocData.m_Owners.GetAt(i))->m_csSurname;
		TransformFIO(&csVal1,&csVal2,&csVal3,1,((CPrivatisationApp*)AfxGetApp())->m_bt);
		tp->value+=csVal1+" ";
		tp->value+=csVal2+" ";
		tp->value+=csVal3+" ";
		tp->value+=((Owner*)doc->m_DocData.m_Owners.GetAt(i))->m_Birthday.Format(" (%d.%m.%Y г.р.)");
		tp->value+=", ";
	}
	param.Add(tp);
	AddTemplParam("[@SignComments@]",((CPrivatisationApp*)AfxGetApp())->m_csSignComment,&param);
	AddTemplParam("[@Sign@]",((CPrivatisationApp*)AfxGetApp())->m_csSign,&param);
	CString filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\injuirypart.tpw";
	csVal="Справка-"+doc->m_csAddress;
	((CPrivatisationApp*)AfxGetApp())->ExportWord(filename,csVal,&param);
	
}

void CPrivatisationView::OnMakeReplica() 
{
	CPrivatisationDoc* doc=GetDocument();
	if(!Migrate()) return;
	FRepList dlg;
	dlg.m_DocData=&(doc->m_DocData);
	if(doc->m_DocData.m_Replica.GetSize()==0)
	{
		AfxMessageBox("Нет дубликатов", MB_ICONERROR);
		return;
	}
	if(doc->m_DocData.m_Replica.GetSize()==1)
		MakeContract(TRUE, 0);
	else
		if(dlg.DoModal()==IDOK)
			MakeContract(TRUE, dlg.m_iReplicaNum);
}

void CPrivatisationView::OnMakeContract() 
{
	if(!Migrate()) return;
	MakeContract(FALSE);
}

void CPrivatisationView::AddTemplParam(CString name, CString value, CObArray *oArray)
{
	TemplParam* tp;
	tp=new TemplParam();
	tp->name=name; tp->value=value;
	oArray->Add(tp);
}

void CPrivatisationView::AddTemplParam(CString name, double value, CObArray *oArray)
{
	TemplParam* tp;
	tp=new TemplParam();
	tp->name=name; tp->value.Format("%.2f",value);
	oArray->Add(tp);
}

void CPrivatisationView::AddTemplParam(CString name, COleDateTime value, CObArray *oArray)
{
	TemplParam* tp;
	tp=new TemplParam();
	tp->name=name; tp->value=value.Format("%d/%m/%Y");
	oArray->Add(tp);
}

void CPrivatisationView::AddTemplParam(CString name, int value, CObArray *oArray)
{
	TemplParam* tp;
	tp=new TemplParam();
	tp->name=name; tp->value.Format("%d",value);
	oArray->Add(tp);
}



void CPrivatisationView::OnKillfocusPrivsqr() 
{
	if(!m_Tab) return;
	if(m_Tab.GetCurSel()==0)
	{
		UpdateData();
		GetDocument()->m_DocData.m_dAddrPrivArea=m_dPrivSqr; // Приватизированная площадь

		if(GetDocument()->m_pTabDialog) ((FContract*) GetDocument()->m_pTabDialog)->CalcLot();
	}
	
}

void CPrivatisationView::MakeContract(BOOL bReplica, int ReplicaNum)
{
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mGetTemplates]");
	CPrivatisationDoc* doc=GetDocument();
	if(doc->m_DocData.m_LotDate.m_status==COleDateTime::null) 
	{
		AfxMessageBox("Нет даты договора");
		return;
	}
	try{
		pCmd.AddParameter("Date",CADORecordset::typeDate,
				CADOParameter::paramInput,sizeof(COleDateTime), doc->m_DocData.m_LotDate );
		
		CObArray param;
		CString csVal, name;
		
		CString filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\";
		
		AddTemplParam("[@DateByWords@]",ConvertDate2String(doc->m_DocData.m_LotDate),&param);
		AddTemplParam("[@BH@]",doc->m_DocData.m_csBalanceHolder,&param);
		AddTemplParam("[@Chief@]",doc->m_DocData.m_csChief,&param);
		AddTemplParam("[@Ground@]",doc->m_DocData.m_csGround,&param);
		AddTemplParam("[@Preview@]",Preview(&doc->m_DocData, TRUE, ((CPrivatisationApp*)AfxGetApp())->m_bt),&param);
		AddTemplParam("[@PropertyType@]",doc->m_DocData.m_csPropertyType,&param);
		AddTemplParam("[@PrivRoomQuant@]",doc->m_DocData.m_iPrivRooms,&param);
		AddTemplParam("[@FlatType@]",doc->m_DocData.m_csFlatType,&param);
		AddTemplParam("[@Part@]",doc->m_DocData.m_dLotLivepart,&param);
		AddTemplParam("[@PrivSqr@]",doc->m_DocData.m_dAddrPrivArea,&param);
		AddTemplParam("[@RoomQuant@]",doc->m_DocData.m_iFlatRooms,&param);
		AddTemplParam("[@FullSqr@]",doc->m_DocData.m_dFlatFullArea,&param);
		AddTemplParam("[@LiveSqr@]",doc->m_DocData.m_dFlatLiveArea,&param);
		AddTemplParam("[@BHAddress@]",doc->m_DocData.m_csBHAddress,&param);
		csVal=doc->m_csAddress+" ";
		csVal+=doc->m_DocData.m_csFlatPart+" ";
		csVal+=doc->m_DocData.m_csFlatAdd;
		AddTemplParam("[@Address@]",csVal,&param);
		AddTemplParam("[@PeopleCount@]",doc->m_DocData.m_Owners.GetSize(),&param);
		AddTemplParam("[@FlatCost@]",doc->m_DocData.m_dLotCost,&param);
		AddTemplParam("[@FlatCostByWords@]",ConvertSum2String(doc->m_DocData.m_dLotCost),&param);
		AddTemplParam("[@Norm@]",doc->m_DocData.m_dNorm,&param);
		AddTemplParam("[@NormByWords@]",ConvertSum2String(doc->m_DocData.m_dNorm),&param);
		AddTemplParam("[@Lot@]",double(doc->m_DocData.m_iLot*doc->m_DocData.m_dLotLivepart),&param);
		AddTemplParam("[@Replica@]","Дубликат",&param);
		AddTemplParam("[@ActDate@]",doc->m_DocData.m_ActDate,&param);
		AddTemplParam("[@Sign@]",doc->m_DocData.m_csSign,&param);
		csVal="";
		if(doc->m_DocData.m_iTranferType==1)
		{
			csVal.Format("%.2f",doc->m_DocData.m_dPayment);
			csVal+="руб. ("+ConvertSum2String(doc->m_DocData.m_dPayment)+")";
		}
		AddTemplParam("[@Trans@]",doc->m_DocData.m_csTranferType+csVal,&param);
		AddTemplParam("[@ContactDate@]",doc->m_DocData.m_LotDate,&param);
		AddTemplParam("[@PCost@]",doc->m_DocData.m_dBCoefG*doc->m_DocData.m_dBCost/doc->m_DocData.m_dBFullArea,&param);
		AddTemplParam("[@BuildingSqr@]",doc->m_DocData.m_dBFullArea,&param);
		AddTemplParam("[@BuildingCost@]",doc->m_DocData.m_dBCost,&param);
		AddTemplParam("[@Coef@]",doc->m_DocData.m_dBCoefG,&param);
		AddTemplParam("[@LotCost@]",doc->m_DocData.m_dLotCost,&param);
		
		
		ContractReplica* oReplica=NULL;
		if(bReplica)
		{
			if(doc->m_DocData.m_Replica.GetSize()>0)
				oReplica=(ContractReplica*) doc->m_DocData.m_Replica.GetAt(ReplicaNum);
			else
			{
				AfxMessageBox("Не задан дубликат", MB_ICONERROR);
				return;
			}
			AddTemplParam("[@ReplicaDate@]",oReplica->m_Date.Format("%d-%m-%Y"),&param);
			AddTemplParam("[@ReplicaComments@]",oReplica->m_csComments+"\n"+((CPrivatisationApp*)AfxGetApp())->m_csReplicaAD,&param);
			AddTemplParam("[@RegNum@]",doc->m_DocData.m_iRegNum,&param);
			AddTemplParam("[@Book@]",doc->m_DocData.m_iBookNum,&param);
			AddTemplParam("[@Day@]",doc->m_DocData.m_RegDate.GetDay(),&param);
			AddTemplParam("[@Month@]",MonthByWords(doc->m_DocData.m_RegDate.GetMonth()),&param);
			AddTemplParam("[@Year@]",doc->m_DocData.m_RegDate.GetYear(),&param);
			AddTemplParam("[@Signature@]","  подпись  ",&param);
			AddTemplParam("[@ReplicaFooter1@]",((CPrivatisationApp*)AfxGetApp())->m_csUserSign1,&param);
			if(((CPrivatisationApp*)AfxGetApp())->m_csSign!="")
			{
				AddTemplParam("[@User@]",((CPrivatisationApp*)AfxGetApp())->m_csSign,&param);
				AddTemplParam("[@ReplicaFooter2@]",((CPrivatisationApp*)AfxGetApp())->m_csSignComment,&param);
			}
			else
			{
				AddTemplParam("[@User@]",((CPrivatisationApp*)AfxGetApp())->m_csUser,&param);
				AddTemplParam("[@ReplicaFooter2@]",((CPrivatisationApp*)AfxGetApp())->m_csUserSign2,&param);
			}

		}
		else
		{
			AddTemplParam("[@ReplicaDate@]","",&param);
			AddTemplParam("[@ReplicaComments@]","",&param);
			AddTemplParam("[@RegNum@]","___________",&param);
			AddTemplParam("[@Book@]","_______",&param);
			AddTemplParam("[@Day@]","___",&param);
			AddTemplParam("[@Month@]","___________________",&param);
			
			if(doc->m_DocData.m_RegDate.m_status!=COleDateTime::null) 
				csVal.Format("%d",doc->m_DocData.m_RegDate.GetYear());
			else
				csVal.Format("%d",COleDateTime::GetCurrentTime().GetYear());
			AddTemplParam("[@Year@]",csVal.Left(2)+"____",&param);
			AddTemplParam("[@Signature@]","_____________",&param);
			AddTemplParam("[@ReplicaFooter1@]","",&param);
			AddTemplParam("[@ReplicaFooter2@]","",&param);
			AddTemplParam("[@User@]","",&param);
		}
		
		//////////////////////////Sharing
		csVal="";
		for(int j=0; j<doc->m_DocData.m_Owners.GetSize(); ++j)
		{
			if(j>0) csVal+=", ";
			Owner* oOwner=((Owner*)doc->m_DocData.m_Owners.GetAt(j));
			name=oOwner->m_csFamily+" ";
			name+=oOwner->m_csName.Left(1)+".";
			name+=oOwner->m_csSurname.Left(1)+".";
			name.MakeUpper();
			csVal+=name+" -";
			csVal+=oOwner->m_csPart;
			csVal+=" доли";
		}
		AddTemplParam("[@Sharing@]",csVal,&param);
		//////////////////////////Tab2
		TemplParam* tp=new TemplParam();
		tp->name="[@Table2@]";
		FlatRights* fr;
		int size=0;
		Owner* oOwner;
		BOOL f;
		////// подсчёт размера
		for(int i=0; i<doc->m_DocData.m_Owners.GetSize(); ++i)
		{
			f=FALSE;
			oOwner=(Owner*) doc->m_DocData.m_Owners.GetAt(i);
			for(int j=0; j<doc->m_DocData.m_FlatRights.GetSize(); ++j)
			{
				fr=(FlatRights*) doc->m_DocData.m_FlatRights.GetAt(j);
				if(fr->m_Owner==oOwner) f=TRUE;
			}
			if(!f) size++;
		}
		for(i=0; i<doc->m_DocData.m_FlatRights.GetSize(); ++i)
		{
			fr=(FlatRights*) doc->m_DocData.m_FlatRights.GetAt(i);
			if(!fr->m_ParentInternal) size++;
			
		}
		tp->tab=new CStringArray[size];
		tp->rows=size;
		int counter=0;
		////// те , кого нет в иерархии
		for(i=0; i<doc->m_DocData.m_Owners.GetSize(); ++i)
		{
			f=FALSE;
			oOwner=(Owner*) doc->m_DocData.m_Owners.GetAt(i);
			for(int j=0; j<doc->m_DocData.m_FlatRights.GetSize(); ++j)
			{
				fr=(FlatRights*) doc->m_DocData.m_FlatRights.GetAt(j);
				if(fr->m_Owner==oOwner) f=TRUE;
			}
			if(!f)
			{
				csVal=oOwner->m_csFamily+" ";
				csVal+=oOwner->m_csName.Left(1)+".";
				csVal+=oOwner->m_csSurname.Left(1)+".";
				csVal.MakeUpper();
				tp->tab[counter].Add("");
				tp->tab[counter].Add(csVal);
				if(bReplica) 
					tp->tab[counter].Add("подпись");
				else
					tp->tab[counter].Add("______________");
				counter++;
			}
		}
		////// те, кто в корне иерархии
		for(i=0; i<doc->m_DocData.m_FlatRights.GetSize(); ++i)
		{
			fr=(FlatRights*) doc->m_DocData.m_FlatRights.GetAt(i);
			if(!fr->m_ParentInternal)
			{
				csVal=fr->m_csFamily+" ";
				csVal+=fr->m_csName.Left(1)+".";
				csVal+=fr->m_csSurname.Left(1)+".";
				if(fr->m_Owner) csVal.MakeUpper();
				tp->tab[counter].Add("");
				tp->tab[counter].Add(csVal);
				if(bReplica) 
					tp->tab[counter].Add("подпись");
				else
					tp->tab[counter].Add("______________");
				counter++;
			}
		}
		param.Add(tp);

		/////////////////////////////
		if(doc->m_DocData.m_dNorm!=0) // если по акту
		{
			if(doc->m_DocData.m_iPropertyType==3)
					filename+="scontract0.tpw";
				else
					filename+="fcontract0.tpw";
			
			
		}
		else // если по датам
		{
			if(!bt->Execute(&pCmd))
				throw(1);
			if(bt->GetRecordsCount()>0)
			{
				if(doc->m_DocData.m_iFlatType==2) // коммуналка
				{
					if(doc->m_DocData.m_iPropertyType==3)
						filename+=bt->GetStringValue("TemplateNameComShare");
					else
						filename+=bt->GetStringValue("TemplateNameCom");
					
				}
				else
					if(doc->m_DocData.m_iPropertyType==3)
						filename+=bt->GetStringValue("TemplateNameShare");
					else
						filename+=bt->GetStringValue("TemplateNameFull");
				
			}
		}
		csVal="Договор-"+doc->m_csAddress;
		if(bReplica) csVal+="_Дубликат";
		((CPrivatisationApp*)AfxGetApp())->ExportWord(filename,csVal,&param, bReplica);
		
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка");
	}
	//if(tab1) delete[] tab1;
}

BOOL CPrivatisationView::PreTranslateMessage(MSG* pMsg) 
{
	try
	{
		CWnd* focus=GetFocus();
		CString s;
		if(WM_KEYDOWN == pMsg->message && focus)
		{
			switch(pMsg->wParam)
			{
			case VK_TAB:
					if(focus->GetDlgCtrlID()==IDC_PROPERTYTYPE)
					{
						CPrivatisationDoc* doc=GetDocument();
						doc->m_pTabDialog->SetFocus();
						return TRUE;
					}
					//else return FChildDialog::PreTranslateMessage(pMsg);
					break;
			case VK_F12:
				if(((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg)
				{
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->DestroyWindow();
					delete ((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg;
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg=NULL;
				}
				else
				{
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg=new FContractInfo();
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->m_csInfo.Format("ID: %d\nИЗМЕНЁН: %s %s\nAddress1: %d\nAddrress2: %d",
						GetDocument()->m_DocData.m_lContractID,
						GetDocument()->m_DocData.m_csUserModified,
						GetDocument()->m_DocData.m_Modified.Format("%d/%m/%y"),
						GetDocument()->m_DocData.m_lAdresID1,
						GetDocument()->m_DocData.m_lAdresID2);
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->Create(FContractInfo::IDD);
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->ShowWindow(SW_SHOWNORMAL);
					focus->SetFocus();
				}
				break;
			default:
				break;
			}
		}
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","PriView.PreTrans.Exception");
	}
	
	return CFormView::PreTranslateMessage(pMsg);
}

void CPrivatisationView::MakeDeclaration(BOOL bRight)
{
	//CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CPrivatisationDoc* doc=GetDocument();
	
	CObArray param;
	CString csVal;
	
	CString filename;
	filename.Format("%s%d.tpw",((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\decl",
		((CPrivatisationApp*)AfxGetApp())->m_iUserID);
	for(int j=0; j<doc->m_DocData.m_Owners.GetSize(); ++j)
	{
		if(j>0) csVal+=", ";
		Owner* oOwner=((Owner*)doc->m_DocData.m_Owners.GetAt(j));
		CString f,n,s;
		f=oOwner->m_csFamily;
		n=oOwner->m_csName;
		s=oOwner->m_csSurname;
		TransformFIO(&f,&n,&s,1,((CPrivatisationApp*)AfxGetApp())->m_bt, 2);
		csVal+=f+" "+n+" "+s;
	}
	if(!bRight)
		AddTemplParam("[@Owners@]",csVal,&param);
	else
		AddTemplParam("[@Owners@]","",&param);
	AddTemplParam("[@FullSqr@]",doc->m_DocData.m_dFlatFullArea,&param);
	AddTemplParam("[@LiveSqr@]",doc->m_DocData.m_dFlatLiveArea,&param);
	AddTemplParam("[@Street@]",doc->m_DocData.m_csStreet,&param);
	AddTemplParam("[@Building@]",doc->m_DocData.m_iBuilding,&param);
	AddTemplParam("[@FlatNum@]",doc->m_DocData.m_iFlat,&param);
	csVal="Договор приватизации от "+doc->m_DocData.m_LotDate.Format("%d-%m-%Y");
	if(!bRight)
		AddTemplParam("[@ContractDate@]",csVal,&param);
	else
		AddTemplParam("[@ContractDate@]","",&param);
	csVal="Договор-"+doc->m_csAddress;
	csVal+="_Регистрация";
	if(!bRight)
		csVal+="_собст";
	else
		csVal+="_права";
	((CPrivatisationApp*)AfxGetApp())->ExportWord(filename,csVal,&param, FALSE);
}

BOOL CPrivatisationView::Migrate()
{
	CPrivatisationDoc* doc=GetDocument();
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	if(!UpdateData()) return FALSE;

	// начальные значения
	doc->m_DocData.m_csContractComments=m_csComments;
	doc->m_DocData.m_csFlatAdd=m_csAddFlats;
	doc->m_DocData.m_csFlatPart=m_csFlatPart;
	if(m_iPrivRooms==0) m_iPrivRooms=doc->m_DocData.m_iFlatRooms;
	if(m_dPrivSqr==0.0) m_dPrivSqr=doc->m_DocData.m_dFlatLiveArea;
	doc->m_DocData.m_iPrivRooms=m_iPrivRooms;
	doc->m_DocData.m_dAddrPrivArea=m_dPrivSqr;
	doc->m_DocData.m_csDepRegNum=m_RegDep.GetText();
	CString csVal=m_DateDep.GetText();
	if(csVal=="**-**-****") doc->m_DocData.m_DepRegDate.m_status=COleDateTime::null;
	else doc->m_DocData.m_DepRegDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	if(m_FlatType.GetCurSel()==-1)
	{
		AfxMessageBox("Укажите вид квартиры", MB_ICONERROR);
		return FALSE;
	}
	if(m_PropertyType.GetCurSel()==-1)
	{
		AfxMessageBox("Укажите вид собственности", MB_ICONERROR);
		return FALSE;
	}
	doc->m_DocData.m_iFlatType=m_FlatType.GetItemData(m_FlatType.GetCurSel());
	doc->m_DocData.m_iPropertyType=m_PropertyType.GetItemData(m_PropertyType.GetCurSel());

	CADOCommand pCmd(bt->GetDB(), "[mGetDocText]");
	try{
		pCmd.AddParameter("FlatTypeID",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int), doc->m_DocData.m_iFlatType );
		pCmd.AddParameter("PropertyTypeID",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int), doc->m_DocData.m_iPropertyType );
		if(!bt->Execute(&pCmd)) return FALSE;
		doc->m_DocData.m_csFlatType=bt->GetStringValue("Flat");
		doc->m_DocData.m_csPropertyType=bt->GetStringValue("Property");
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","PrView.Migrate.Exception");
		return FALSE;
	}

	return doc->m_pTabDialog->Migrate();
}




void CPrivatisationView::OnChangeComments() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnChangeFlatPart() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnChangeAddflat() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnChangePrivrooms() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnChangePrivsqr() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnSelchangeFlattype() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnSelchangePropertytype() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

BEGIN_EVENTSINK_MAP(CPrivatisationView, CFormView)
    //{{AFX_EVENTSINK_MAP(CPrivatisationView)
	ON_EVENT(CPrivatisationView, IDC_REGDEP, 1 /* Change */, OnChangeRegdep, VTS_NONE)
	ON_EVENT(CPrivatisationView, IDC_DEPDATE, 1 /* Change */, OnChangeDepdate, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CPrivatisationView::OnChangeRegdep() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnChangeDepdate() 
{
	CPrivatisationDoc* doc=GetDocument();
	doc->m_DocData.m_bSaved=FALSE;
	
}

void CPrivatisationView::OnWindowCloseall() 
{
	AfxGetApp()->CloseAllDocuments(FALSE);
}
