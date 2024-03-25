// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "privatisation.h"

#include "MainFrm.h"
#include "FPeriodDistrict.h"
#include "FPeriod.h"
#include "FPeriodBH.h"
#include "FAFilter.h"
#include "FNewAddress.h"
#include "FUserSetup.h"
#include "FBaseInfo.h"
#include "msword.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_RECORD_FIND, OnRecordFind)
	ON_WM_SETFOCUS()
	ON_COMMAND(ID_LIST_INFO, OnListInfo)
	ON_COMMAND(ID_LIST_REPORT, OnListReport)
	ON_COMMAND(ID_LIST_REPORT_DEP, OnListReportDep)
	ON_COMMAND(ID_LIST_INJURY, OnListInjury)
	ON_COMMAND(ID_LIST_CANCEL, OnListCancel)
	ON_COMMAND(ID_LIST_SIGNED, OnListSigned)
	ON_COMMAND(ID_LIST_SIGNED_DEP, OnListSignedDep)
	ON_WM_SHOWWINDOW()
	ON_COMMAND(ID_SETUP_USER, OnSetupUser)
	ON_COMMAND(ID_RECORD_ADDRESS, OnRecordAddress)
	ON_COMMAND(ID_LIST_FLATTYPE, OnListFlattype)
	ON_COMMAND(ID_LIST_INJURY_SQR, OnListInjurySqr)
	ON_COMMAND(ID_LIST_BASE, OnListBase)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	m_bSearchNotExist=TRUE;
	searchDlg=NULL;
	((CPrivatisationApp*)AfxGetApp())->calendarDlg=NULL;
	((CPrivatisationApp*)AfxGetApp())->calendarDlg=new FCalendar();
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Create(FCalendar::IDD,this);
}

CMainFrame::~CMainFrame()
{
	if( ((CPrivatisationApp*)AfxGetApp())->calendarDlg )
	{
		((CPrivatisationApp*)AfxGetApp())->calendarDlg->DestroyWindow();
		delete ((CPrivatisationApp*)AfxGetApp())->calendarDlg;
		((CPrivatisationApp*)AfxGetApp())->calendarDlg=NULL;
	}
	if(searchDlg)
	{
		searchDlg->DestroyWindow();
		delete searchDlg;
		searchDlg=NULL;
	}
	delete m_ToolbarIL;
	delete m_ToolbarIL_;
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	UINT buttons[9];
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT|TBSTYLE_TRANSPARENT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC))// ||
		//!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	
	m_ToolbarIL=new CImageList();
	m_ToolbarIL_=new CImageList();

	m_ToolbarIL->Create(32, 32, ILC_COLOR32, 4, 1);
	m_ToolbarIL->SetBkColor(GetSysColor(COLOR_3DFACE)); 
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_LAST));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_FIND));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_CLOSEALL));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_SAVE));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_DELETE));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_ADDRESS));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_CLOSE));

	m_ToolbarIL_->Create(32, 32, ILC_COLOR32, 4, 1);

	m_ToolbarIL_->SetBkColor(GetSysColor(COLOR_3DFACE)); 
	
	m_ToolbarIL_->Add(AfxGetApp()->LoadIcon(IDI_LAST));
	m_ToolbarIL_->Add(AfxGetApp()->LoadIcon(IDI_FIND));
	m_ToolbarIL_->Add(AfxGetApp()->LoadIcon(IDI_CLOSEALLD));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_SAVE));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_DELETE));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_ADDRESS));
	m_ToolbarIL->Add(AfxGetApp()->LoadIcon(IDI_CLOSE));
	
	
	m_wndToolBar.GetToolBarCtrl().SetButtonSize(CSize(38,38));
	m_wndToolBar.GetToolBarCtrl().SetBitmapSize(CSize(32,32));

	m_wndToolBar.GetToolBarCtrl().SetImageList(m_ToolbarIL);
	m_wndToolBar.GetToolBarCtrl().SetDisabledImageList(m_ToolbarIL_);

	buttons[0]=ID_FILE_NEW;
	buttons[1]=ID_RECORD_FIND;
	buttons[2]=ID_WINDOW_CLOSEALL;
	buttons[3]=ID_SEPARATOR;
	buttons[4]=ID_CONTRACT_SAVE;
	buttons[5]=ID_CONTRACT_DELETE;
	buttons[6]=ID_CONTRACT_ADDRESS;
	buttons[7]=ID_FILE_CLOSE;
	m_wndToolBar.SetButtons(buttons,9);
	
	

	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);
	this->m_bAutoMenuEnable=FALSE;
	//m_uiUserID=GetProfileInt("WorkData","USER",1);

	// CG: The following line was added by the Splash Screen component.
	//CSplashWnd::ShowSplashScreen(this);
	
	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnRecordFind() 
{
	/*Пункт меню "Найти данные"*/
	try
	{
		if(m_bSearchNotExist)
		{
			if(searchDlg) delete searchDlg;
			searchDlg=new FSearch(this);
			searchDlg->Create(FSearch::IDD,this);
			searchDlg->ShowWindow(SW_SHOW);
			//searchDlg->GetDlgItem(IDC_STREET)->SetFocus();
			m_bSearchNotExist=FALSE;
		}else
		{
			if(!searchDlg) return;
			searchDlg->SendMessage(WM_SYSCOMMAND,SC_RESTORE,NULL);
			//searchDlg->GetDlgItem(IDC_LIST)->SetFocus();
		}
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","OnRecordFind");
	}
	
}

void CMainFrame::OnSetFocus(CWnd* pOldWnd) 
{
	CMDIFrameWnd::OnSetFocus(pOldWnd);
	try
	{
		if(searchDlg) 
			if(searchDlg->IsWindowVisible())
				searchDlg->SendMessage(WM_SYSCOMMAND,SC_CLOSE,NULL);
	
		if(((CPrivatisationApp*)AfxGetApp())->calendarDlg) 
			if(((CPrivatisationApp*)AfxGetApp())->calendarDlg->IsWindowVisible())
				((CPrivatisationApp*)AfxGetApp())->calendarDlg->SendMessage(WM_SYSCOMMAND,SC_CLOSE,NULL);
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","OnSetFocus");
	}
}



void CMainFrame::OnListInfo() 
{
	FPeriodDistrict dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetInfoByDistrict]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("DistrictID",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int), dlg.m_iDistrict );
			pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			
			if(!bt->Execute(&pCmd))
				throw(1);
			csVal=dlg.m_BeginPeriod.Format("%d/%m/%Y");
			csVal+="-";
			csVal+=dlg.m_EndPeriod.Format("%d/%m/%Y");
			csVal+=" Округ: ";
			csVal+=dlg.m_csDistrict;
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\info.tpx",
				csVal);
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
}

void CMainFrame::OnListReport() 
{
	FPeriod dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetReport]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("Begin",CADORecordset::typeDate,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDate,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			
			if(!bt->Execute(&pCmd))
				throw(1);
			csVal=dlg.m_BeginPeriod.Format("%d/%m/%Y");
			csVal+="-";
			csVal+=dlg.m_EndPeriod.Format("%d/%m/%Y");
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\report.tpx",
				"report.doc",csVal);
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}

void CMainFrame::OnListReportDep() 
{
	FPeriod dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetReportDep]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			
			if(!bt->Execute(&pCmd))
				throw(1);
			csVal=dlg.m_BeginPeriod.Format("%d/%m/%Y");
			csVal+="-";
			csVal+=dlg.m_EndPeriod.Format("%d/%m/%Y");
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\report.tpx",
				csVal);
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}

void CMainFrame::OnListInjury() 
{
	CString csVal;
	FAFilter dlg;
	if(dlg.DoModal()==IDOK && dlg.m_csFilter!="")
	{
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetInjuiry]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
			
		try{
			//
			csVal=" AND ("+dlg.m_csFilter+")";
			pCmd.AddParameter("strng",CADORecordset::typeChar,
				CADOParameter::paramInput,csVal.GetLength(),csVal);
					
			if(!bt->Execute(&pCmd))
				throw(1);
			/*csVal=dlg.m_BeginPeriod.Format("%d/%m/%Y");
			csVal+="-";
			csVal+=dlg.m_EndPeriod.Format("%d/%m/%Y");*/
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\injuiry.tpx",
				"Сведения по квартирам");
			
			}
			catch(...)
			{
				MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
				bt->GetRS()->Close();
			}
	}
	
}



void CMainFrame::OnListCancel() 
{
	FPeriodBH dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetCanceled]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			pCmd.AddParameter("BH",CADORecordset::typeBigInt,
				CADOParameter::paramInput,sizeof(long),dlg.m_lBH);
			if(!bt->Execute(&pCmd))
				throw(1);
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\cancel.tpx",
				"");
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}


void CMainFrame::OnListSigned() 
{
	FPeriodBH dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetSigned]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			pCmd.AddParameter("BH",CADORecordset::typeBigInt,
				CADOParameter::paramInput,sizeof(long),dlg.m_lBH);
			if(!bt->Execute(&pCmd))
				throw(1);
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\signed.tpx",
				"");
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}

void CMainFrame::OnListSignedDep() 
{
	FPeriodBH dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString csVal;
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetSignedDep]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
		
		try{
			//
			pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
			pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
			pCmd.AddParameter("BH",CADORecordset::typeBigInt,
				CADOParameter::paramInput,sizeof(long),dlg.m_lBH);
			if(!bt->Execute(&pCmd))
				throw(1);
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\signed.tpx",
				"");
			
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
			bt->GetRS()->Close();
		}
	}
	
}



void CMainFrame::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CMDIFrameWnd::OnShowWindow(bShow, nStatus);
	
	// TODO: Add your message handler code here
	
}


void CMainFrame::OnSetupUser() 
{
	FUserSetup dlg;
	if(dlg.DoModal()==IDOK)
	{
	}
}

void CMainFrame::OnRecordAddress() 
{
	FNewAddress dlg;
	if(dlg.DoModal()==IDOK)
	{
		AfxMessageBox("Добавлен");
	}
}

void CMainFrame::OnListFlattype() 
{
	//Отчёт по количеству комнат
	FPeriod	dlg;
	

	if(dlg.DoModal()!=IDOK) return;

	_Application word;
	Documents oDocs;
	_Document oDoc;
	Options	oOptions;
	Paragraphs oPars;
	Paragraph oPar;
	//_ParagraphFormat oParFormat;
	Selection oSel;
	Tables	oTabs;
	Table	oTab;
	Rows	oRows;
	Row		oRow;
	Cell	oCell;

	double** data=NULL;
	double dVal;
	double POS=0.0,PKS=0.0;

	int count=0;
	unsigned long nRecords;
	
	long room_max=0l;
	long POC=0,PKC=0;
	long lVal=0,position;
	
	CString csVal,query,privOld;
	CString filename=((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\byflat.tpw";
	CString newfilename="ОтчётПоКвартирам.doc";


	COleVariant  covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	COleVariant  covTrue(short(1), VT_BOOL);
	COleVariant  covFalse(short(0), VT_BOOL);
	
	if(!word.CreateDispatch("Word.Application")) //запустить сервер
	{
		AfxMessageBox("OnConListShort.Ошибка при старте Word!");
		return;
	}

	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mGetByFlat]");
	
	
	pCmd.AddParameter("Begin",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_BeginPeriod);
	pCmd.AddParameter("End",CADORecordset::typeDBTimeStamp,
				CADOParameter::paramInput,sizeof(COleDateTime),dlg.m_EndPeriod);
	
	try
	{

		oDocs = word.GetDocuments();
		//открыть шаблон документа
		
		oDocs.Open97(COleVariant(filename), covTrue, covTrue, 
			covFalse, COleVariant(""), COleVariant(""),
			covFalse, COleVariant(""), COleVariant(""), 
			COleVariant(short(0)));

		//первый документ
		oDoc = oDocs.Item(COleVariant(long(1)));
		//активизировать документ
				
		oOptions=word.GetOptions();
		//oOptions.SetCheckSpellingAsYouType(FALSE);
		//oOptions.SetCheckGrammarAsYouType(FALSE);
		//if(m_dVersion>=11.0) oOptions.SetTypeNReplace(TRUE);

		oSel = word.GetSelection();	
		
		oTabs=oDoc.GetTables();
		oTab=oTabs.Item(1);
		oRows=oTab.GetRows();
		
		try
		{
				bt->GetRS()->Execute(&pCmd);
				if(bt->GetRS()->IsOpen())
				{
					nRecords=bt->GetRecordsCount();
					//определяем максимальное количество комнат
					for(unsigned long i=0; i<nRecords; ++i)
					{
						//if(!bt->GetRS()->IsEof())
						//{
							bt->GetRS()->GetFieldValue("Rooms",lVal);
							if(lVal>room_max) room_max=lVal;
						//}
						bt->GetRS()->MoveNext();
					}
					data=new double*[room_max] ;
					oCell=oTab.Cell(4,2);
					oCell.Split(COleVariant(long(1)),COleVariant(long(room_max)));
					oCell=oTab.Cell(5,2);
					oCell.Split(COleVariant(long(1)),COleVariant(long(room_max*2)));
					oCell=oTab.Cell(6,2);
					oCell.Split(COleVariant(long(1)),COleVariant(long(room_max*2)));
					//Шапка
					for(i=0; i<unsigned long(room_max); ++i)
					{
						data[i]=new double[2];  data[i][0]=0.0;data[i][1]=0.0;
						oCell=oTab.Cell(4,i+2);
						csVal.Format("%d",i+1);
						oCell.Select();oSel.TypeText(csVal);
						oCell=oTab.Cell(5,i*2+2);
						oCell.Select();oSel.TypeText("Кол-во");
						oCell=oTab.Cell(5,i*2+3);
						oCell.Select();oSel.TypeText("Пл-дь (кв.м.)");
					}
					if(nRecords>0) bt->GetRS()->MoveFirst();
					for(i=0; i<nRecords; ++i)
					{
						
						//if(!bt->GetRS()->IsEof())
						{
							bt->GetRS()->GetFieldValue("Name_",csVal);
							if(privOld!=csVal)
							{
								privOld=csVal;
								if(i!=0) { oRows.Add(covOptional);count++;}
								oCell=oTab.Cell(6+count,1);
								oCell.Select();oSel.TypeText(csVal);
								
								bt->GetRS()->GetFieldValue("ComQuant",dVal);
								PKC+=long(dVal);
								csVal.Format("%d",long(dVal));
								oCell=oTab.Cell(6+count,room_max*2+2);
								oCell.Select();
								if(dVal!=0.0) oSel.TypeText(csVal);
								bt->GetRS()->GetFieldValue("ComSqr",dVal);
								PKS+=dVal;
								oCell=oTab.Cell(6+count,room_max*2+3);
								csVal.Format("%.2f",dVal);
								oCell.Select();
								if(dVal!=0.0) oSel.TypeText(csVal);
							}
							bt->GetRS()->GetFieldValue("Rooms",position);
							bt->GetRS()->GetFieldValue("SeparSqr",dVal);
							if(position>0) 
							{
								data[position-1][1]+=dVal;
								oCell=oTab.Cell(6+count,position*2);
								bt->GetRS()->GetFieldValue("SeparQuant",lVal);
								data[position-1][0]+=double(lVal);
								csVal.Format("%d",lVal);
								oCell.Select();oSel.TypeText(csVal);
								oCell=oTab.Cell(6+count,1+position*2);
								csVal.Format("%.2f",dVal);
								oCell.Select();oSel.TypeText(csVal);
							}
							bt->GetRS()->MoveNext();
						}
			
					}
						
					bt->GetRS()->Close();
				}
			
				oRows.Add(covOptional); count++;
				oCell=oTab.Cell(6+count,1);
				oCell.Select();oSel.TypeText("Итого");
				//удаляем временное хранилище итогов и ввод итогов
				for(int i=0; i<room_max; i++)
				{
					oCell=oTab.Cell(6+count,i*2+2);
					csVal.Format("%d",long(data[i][0]));
					oCell.Select();
					if(data[i][0]!=0.0) oSel.TypeText(csVal);
					oCell=oTab.Cell(6+count,i*2+3);
					csVal.Format("%.2f",data[i][1]);
					oCell.Select();
					if(data[i][1]!=0.0) oSel.TypeText(csVal);
				}
				oCell=oTab.Cell(6+count,room_max*2+2);
				csVal.Format("%d",PKC);
				oCell.Select();
				if(PKC!=0) oSel.TypeText(csVal);
				oCell=oTab.Cell(6+count,room_max*2+3);
				csVal.Format("%.2f",PKS);
				oCell.Select();
				if(PKS!=0.0) oSel.TypeText(csVal);
		}
		catch(...)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","OnListFlatType1");
		}
		
		Find oFind=oSel.GetFind();
		oFind.ClearFormatting();
		//if(m_dVersion>=11.0) oFind.ClearAllFuzzyOptions();
		csVal.Format("с %s по %s", dlg.m_BeginPeriod.Format("%d.%m.%Y"), dlg.m_EndPeriod.Format("%d.%m.%Y"));
		//поиск метастроки
		oFind.Execute97(COleVariant("[@Info@]"),
			covTrue,				// учитывать регистр (нет)
			covTrue,				// слово целиком (да)
			covFalse,				// использовать подстановочные знаки ? (нет)
			covFalse,				// произносится как ? (нет, надо точно)
			covFalse,				// все словоформы ? (нет)
			covFalse, 				// поиск вперед по тексту ? (нет)
			COleVariant(short(1)),	// как искать	(найти и продолжить поиск)
			covFalse,				// поиск по формату? (нет)
			COleVariant(csVal),			// на что заменять (ни на что)
			covTrue);
		
		
		//сохранить шаблон с новым именем
		csVal=((CPrivatisationApp*)AfxGetApp())->m_csDocumentsFolder+"\\"+newfilename;
		oDoc.SaveAs(COleVariant(csVal),COleVariant(long(0)),covFalse,
			COleVariant(""),covFalse,COleVariant(""),covFalse,
			covFalse,covFalse,covFalse,covFalse,
			covOptional,covOptional,covOptional,covOptional,covOptional);
		oDoc.Activate();
		word.SetVisible(TRUE); //и сделать его видимым	
		

	}//endtryblock
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка при создании документа!");
		word.Quit(covFalse,covOptional, covOptional);
	}
	//Закрытие окна ожидания запроса
	if(data)
	{
		for(int i=0; i<room_max; i++) delete[] data[i];
		delete[] data;
	}
}

void CMainFrame::OnListInjurySqr() 
{
	CString csVal;
	FAFilter dlg;
	if(dlg.DoModal()==IDOK && dlg.m_csFilter!="")
	{
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mGetInjuiryBySqr]");
		//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
			
		try{
			//
			csVal=" AND ("+dlg.m_csFilter+")";
			pCmd.AddParameter("strng",CADORecordset::typeChar,
				CADOParameter::paramInput,csVal.GetLength(),csVal);
					
			if(!bt->Execute(&pCmd))
				throw(1);
			/*csVal=dlg.m_BeginPeriod.Format("%d/%m/%Y");
			csVal+="-";
			csVal+=dlg.m_EndPeriod.Format("%d/%m/%Y");*/
			if(bt->GetRS()->IsOpen())
				((CPrivatisationApp*)AfxGetApp())->ExportXLS(FALSE,
				((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\Templates\\injuiry.tpx",
				"Сведения по квартирам");
			
			}
			catch(...)
			{
				MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
				bt->GetRS()->Close();
			}
	}
	
}

void CMainFrame::OnListBase() 
{
	FBaseInfo dlg;
	dlg.DoModal();
}



