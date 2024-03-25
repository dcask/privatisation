// privatisation.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "privatisation.h"
#include "MainFrm.h"
#include "Splash.h"
#include "ChildFrm.h"
#include "privatisationDoc.h"
#include "FLogin.h"

#include "privatisationView.h"
//#include "eh.h"
#include <locale.h>
#include "Splash.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationApp

BEGIN_MESSAGE_MAP(CPrivatisationApp, CWinApp)
	//{{AFX_MSG_MAP(CPrivatisationApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationApp construction

CPrivatisationApp::CPrivatisationApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	m_iUserID=-1;
	m_bSearch=FALSE;
	m_lContractID=-1;
	m_Begin=COleDateTime::GetCurrentTime();
	m_End=COleDateTime::GetCurrentTime();
	m_bTransaction=FALSE;
	m_lBh=-1;
	m_pInfoDlg=NULL;
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CPrivatisationApp object

CPrivatisationApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationApp initialization

BOOL CPrivatisationApp::InitInstance()
{
	// CG: The following block was added by the Splash Screen component.
\
	{
\
		CCommandLineInfo cmdInfo;
\
		ParseCommandLine(cmdInfo);
\

\
		CSplashWnd::EnableSplashScreen(cmdInfo.m_bShowSplash);
\
	}
	AfxEnableControlContainer();
	//Init base
	CString path1,path2,basepath;
	GetModuleFileName(GetModuleHandle( NULL), path1.GetBuffer(256), 256);
	path1.ReleaseBuffer();
			
	LPTSTR pszFileName = NULL;
	
	GetFullPathName( path1, 250, path2.GetBuffer(256), &pszFileName);
	path2.ReleaseBuffer();
			
	path2=path1.Left(path1.Find(pszFileName)-1);
	m_csAppPath=path2;
	
	// netname
	DWORD len=100;
	GetUserName(m_csCurrentUserName.GetBuffer(100),&len);
	m_csCurrentUserName.ReleaseBuffer();
	m_csIni=m_csAppPath+"\\INI\\";
	m_csIni+=m_csCurrentUserName+".ini";

	CFile f;
	if( !f.Open(m_csIni,CFile::modeReadWrite))
	{
		CopyFile(m_csAppPath+"\\privat.ini",m_csIni, TRUE);
		if( !f.Open(m_csIni,CFile::modeReadWrite))
		{
			AfxMessageBox("Нет ini файла", MB_ICONERROR);
			return FALSE;
		}
		else f.Close();
	}
	else f.Close();

	AfxInitRichEdit();
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxOleGetMessageFilter()->SetMessagePendingDelay(30000);
	AfxOleGetMessageFilter()->EnableBusyDialog(FALSE);
	AfxEnableControlContainer();
	/* Making folder*/
	char specfolder[MAX_PATH];
	SHGetSpecialFolderPath(this->GetMainWnd()->GetSafeHwnd(), specfolder, 0x0005, false);
	m_csDocumentsFolder = specfolder;
	m_csDocumentsFolder+="\\Приватизация.Документы";
	if(!CreateDirectory(m_csDocumentsFolder,NULL))
		if(GetLastError()!=ERROR_ALREADY_EXISTS )
			AfxMessageBox("Создание папки для отчётов не удалось", MB_ICONERROR);

	/*  Connection String  */
	GetPrivateProfileString("Settings","Path","",
			basepath.GetBuffer(512),512,m_csIni);
	basepath.ReleaseBuffer();
	GetPrivateProfileString("Settings","Base","",
			path2.GetBuffer(512),512,m_csIni);
	path2.ReleaseBuffer();
	if (basepath=="") path2.Replace("[%pathname%]",m_csAppPath);
	else path2.Replace("[%pathname%]",basepath);
	
	/*    USER     */
	m_iUserID=GetPrivateProfileInt("Settings","User",0,m_csIni);
	/*    Transaction     */
	m_bTransaction=GetPrivateProfileInt("Settings","Transaction",0,m_csIni);
	/*    DepTempl     */
	GetPrivateProfileString("Settings","DepTemplate","",
			m_csDepTempl.GetBuffer(50),50,m_csIni);
	
	/*    Style    */
	m_iXPStyle=GetPrivateProfileInt("Settings","XPStyle",1,m_csIni);
	/*    ReplicaAD    */
	GetPrivateProfileString("Settings","ReplicaAD","",m_csReplicaAD.GetBuffer(512),512,m_csIni);
	m_csReplicaAD.ReleaseBuffer();
	/*    Sign    */
	GetPrivateProfileString("Settings","Sign","",m_csSign.GetBuffer(512),512,m_csIni);
	m_csSign.ReleaseBuffer();
	/*    SignComments    */
	GetPrivateProfileString("Settings","SignComments","",m_csSignComment.GetBuffer(512),512,m_csIni);
	m_csSignComment.ReleaseBuffer();
	/*    StreetDate    */
	GetPrivateProfileString("Settings","StreetDate","",m_csStreetDate.GetBuffer(512),512,m_csIni);
	m_csStreetDate.ReleaseBuffer();
	if(!m_StreetDate.ParseDateTime(m_csStreetDate))
	{
		AfxMessageBox("Некорректная дата переименования улиц", MB_ICONERROR);
		m_StreetDate.GetCurrentTime();
	}
	m_bt=NULL;
	m_bt=new CADOBaseTool(path2);
	
	if(!m_bt)
	{
		AfxMessageBox("Ошибка открытия базы.1", MB_ICONERROR);
		return FALSE;
	}
	
	if(m_bt->IsError())
	{
		AfxMessageBox("Ошибка открытия базы.2 "+m_bt->GetError(), MB_ICONERROR);
		return FALSE;
	}
	//m_bt->GetDB()->SetConnectionMode(CADODatabase::connectModeReadWrite);
	m_bt->ShowError(TRUE);
	/*региональные настройки*/
	HKEY Key;
	char buf[256];
	DWORD dws = 0x100;
	DWORD dwt = 0;
	LONG result = 0;

	result = RegOpenKeyEx(HKEY_CURRENT_USER, "Control Panel\\International", 0, KEY_ALL_ACCESS, &Key);
	
	RegQueryValueEx(Key, "sShortDate",0, 0, (LPBYTE)buf, &dws);
	m_csFormatDate=buf;

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	// Change the registry key under which our settings are stored.
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization.
	//SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	//LoadStdProfileSettings(0);  // Load standard INI file options (including MRU)

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views.

	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(
		IDR_PRIVATTYPE,
		RUNTIME_CLASS(CPrivatisationDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CPrivatisationView));
	AddDocTemplate(pDocTemplate);

	// create main MDI Frame window
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
		return FALSE;
	m_pMainWnd = pMainFrame;
	setlocale( LC_ALL, "Russian" );
	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);
	if (cmdInfo.m_nShellCommand == CCommandLineInfo::FileNew)
	cmdInfo.m_nShellCommand = CCommandLineInfo::FileNothing;
	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	// The main window has been initialized, so show and update it.
	pMainFrame->ShowWindow(SW_SHOWMAXIMIZED);
	//pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();
	FLogin dlg;
	if(dlg.DoModal()==IDCANCEL)
		PostQuitMessage(WM_QUIT);
	CSplashWnd::ShowSplashScreen(pMainFrame);
	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
		// No message handlers
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

// App command to run the dialog
void CPrivatisationApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationApp message handlers


BOOL CPrivatisationApp::PreTranslateMessage(MSG* pMsg)
{
	// CG: The following lines were added by the Splash Screen component.
	if (CSplashWnd::PreTranslateAppMessage(pMsg))
		return TRUE;

	return CWinApp::PreTranslateMessage(pMsg);
}

int CPrivatisationApp::ExitInstance() 
{
	if(m_bt)
	{
		if(m_bt->GetRS())
				if(m_bt->GetRS()->IsOpen()) m_bt->GetRS()->Close();
		if(m_bt->GetDB())
			if(m_bt->GetDB()->IsOpen()) m_bt->GetDB()->Close();
		delete m_bt;
		m_bt=NULL;
	}
	return CWinApp::ExitInstance();
}

BOOL CPrivatisationApp::ExportXLS(BOOL bDesign, CString filename, CString newfilename, CString csinfo)
{
	if(!(m_iRights & 0x1L)) 	return FALSE;
	this->BeginWaitCursor();
	_EApplication oApp;
	Workbooks oBooks; //объявляем коллекцию "рабочих книг"
	_Workbook oBook; //объявляем конкретный экземпляр (класс _Workbook)
	Worksheets oSheets; //объявляем коллекцию "рабочих листов"
	_Worksheet oSheet; //объявляем конкретный экземпляр (класс _Worksheet)
	Range oRange,oRangePrev,oRangeTable; //объявляем экземпляр класса Range, отвечающего за заполнение ячеек
	PageSetup oPageSetup;
	Interior oInterior;
	CString col,num;
	BOOL	bMerge=FALSE,bFirstEqual=TRUE;
	COleVariant x,y,z,res, res1;
	CString query;
	CString formula,resformula;
	CString name;
	unsigned short firstLetter,secondLetter;
	unsigned long nFields;
	long	rows;

	COleVariant  covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	COleVariant  covTrue(short(1), VT_BOOL);
	COleVariant  covFalse(short(0), VT_BOOL);
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	//oApp.SetDisplayAlerts(TRUE);
	try{
		if(!oApp.CreateDispatch("Excel.Application")) //запустить сервер
		{
			AfxMessageBox("Невозможно запустить Excel.", MB_ICONERROR);
			return FALSE;
		}
	oApp.SetDisplayAlerts(TRUE);
		oBooks = oApp.GetWorkbooks(); // и получаем список книг
		if(filename=="")
			oBook = oBooks.Add(covOptional);
		else
			oBook=oBooks.Open(filename,
			covOptional,covOptional,covOptional,covOptional,covOptional,covOptional,
			covOptional,covOptional,covOptional,covOptional,covOptional,covOptional,covOptional,covOptional);
		oSheets = oBook.GetWorksheets(); //и получаем список листов
		oSheet =oSheets.GetItem(COleVariant(long(1)));
		oPageSetup=oSheet.GetPageSetup();
		CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		
		if(bt->GetRS()->IsOpen())
		{
			rows=bt->GetRS()->GetRecordCount();
			nFields=bt->GetRS()->GetFieldCount();
			/*проверяем количество записей результате*/
			if(rows<1) rows=0;		
			else bt->GetRS()->MoveFirst();
			if(bDesign)
				oRange = oSheet.GetRange(COleVariant("A1"),COleVariant("A1"));
			else
				oRange=oSheet.GetCells();
			oRange.Replace(COleVariant("[@Info@]"),COleVariant(csinfo),COleVariant(short(2)), COleVariant(short(1)), covFalse, covOptional, covFalse, covFalse);
			// поиск места, где будет стоять таблица
			if(filename!=_T(""))
			{
				
				oRange=oRange.Find(COleVariant("[@Table@]"),covOptional,covOptional, COleVariant(long(1)), COleVariant(long(1)),
					1, covFalse, covOptional, covOptional);
				oRangeTable=oRange;
			}
			oRange.CopyFromRecordset(LPUNKNOWN(bt->GetRS()->m_pRecordset),covOptional, covOptional);
			CADOFieldInfo info;
			//список полей в шапку
			if(filename==_T(""))
				for(unsigned long i=0; i<nFields; ++i)
				{
					firstLetter=unsigned short ((i+1)/26);
					secondLetter=unsigned short((i+1)-firstLetter*26);
					if(firstLetter<1) col.Format("%c1",secondLetter+'A');
					else col.Format("%c%c1",firstLetter+'A'-1,secondLetter+'A');
					y=COleVariant(col);
					oRange = oSheet.GetRange(y,y); //например
					bt->GetRS()->GetFieldInfo(i,&info);
					oRange.SetValue(covOptional,COleVariant(info.m_strName));
					oRange.SetHorizontalAlignment(COleVariant(short(-4108)));
					oRange.BorderAround(COleVariant(short(2)),1,-4105,COleVariant(long(-4105)));
				}

			if(bDesign)
				for(unsigned long j=2; j<unsigned long(rows+2); ++j)
				{
						col.Format("A%d",j);
						y=COleVariant(col);
						oRange = oSheet.GetRange(y,y); //например
						col.Format("%d",j-1);
						oRange.SetValue(covOptional,COleVariant(col));
						oInterior=oRange.GetInterior();
						oInterior.SetColorIndex(COleVariant(long(15)));
				}
	
			long row_=0;
			long col_=0;

			if(filename!=_T(""))
			{
				row_=oRangeTable.GetRow();
				col_=oRangeTable.GetColumn();
				firstLetter=unsigned short ((col_)/26.0);
				secondLetter=unsigned short((col_)-firstLetter*26);
				if(firstLetter<1) col.Format("%c%d",secondLetter+'A'-1,row_);
				else col.Format("%c%c%d",firstLetter+'A'-1,secondLetter+'A',row_);
				x=COleVariant(col);
			}
			else
				x=COleVariant("A1");
			firstLetter=unsigned short ((nFields)/26.0+col_-1);
			secondLetter=unsigned short((nFields)-firstLetter*26+col_-1);
			if(bDesign) rows++;
			if(firstLetter<1) col.Format("%c%d",secondLetter+'A'-1,rows+row_-1);
			else col.Format("%c%c%d",firstLetter+'A'-1,secondLetter+'A'-1,rows+row_-1);
			y=COleVariant(col);
			oRange = oSheet.GetRange(x,y);
			oRange.BorderAround(COleVariant(short(1)),2,-4105,COleVariant(long(-4105)));
			oRange.SetWrapText(covTrue);
			oRange.SetVerticalAlignment(COleVariant(short(-4108)));
			//oRange.SetHorizontalAlignment(COleVariant(short(-4108)));
			///////////// выравнивание по первоой
			Borders oBorders=oRange.GetBorders();
			oBorders.SetValue(COleVariant(short(10)));
			oBorders.SetLineStyle(COleVariant(short(1)));
			oBorders.SetWeight(COleVariant(short(2)));
			for(unsigned long i=0; i<nFields; ++i)
				{
					firstLetter=unsigned short ((col_+i)/26.0);
					secondLetter=unsigned short((col_+i)-firstLetter*26);
					if(firstLetter<1) col.Format("%c%d",secondLetter+'A'-1,row_);
					else col.Format("%c%c%d",firstLetter+'A'-1,secondLetter+'A',row_);
					z=COleVariant(col);

					firstLetter=unsigned short ((col_+i)/26);
					secondLetter=unsigned short((col_+i)-firstLetter*26);
					if(firstLetter<1) col.Format("%c%d",secondLetter+'A'-1,rows+row_-1);
					else col.Format("%c%c%d",firstLetter+'A'-1,secondLetter+'A'-1,rows+row_-1);
					y=COleVariant(col);
					oRange = oSheet.GetRange(z,z); //например
					COleVariant alig=oRange.GetHorizontalAlignment();
					oRange = oSheet.GetRange(z,y); //например
					oRange.SetHorizontalAlignment(alig);
				}

			oRangePrev=oRange.GetEntireRow();
			oRangePrev.AutoFit();
			if(filename==_T(""))
			{
				oRangePrev=oRange.GetEntireRow();
				oRangePrev.AutoFit();
				if(firstLetter<1) col.Format("%c1",secondLetter+'A');
				else col.Format("%c%c1",firstLetter+'A'-1,secondLetter+'A');
				y=COleVariant(col);
				oRange = oSheet.GetRange(x,y);
				oInterior=oRange.GetInterior();
				oInterior.SetColorIndex(COleVariant(long(15)));
			}
			else oRange.SetWrapText(covTrue);
			oBook.SetSaved(TRUE);
			//oSheet.Activate();
		}
		else throw(1);
		oApp.SetVisible(TRUE);
	}//end try
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка формирования отчёта");
		oBook.Close(covFalse,covOptional,covOptional);
		//oBook.ReleaseDispatch(); 
		oBooks.Close(); 
		//oBooks.ReleaseDispatch();
		oApp.Quit();
		//oApp.ReleaseDispatch();

		
	}
	//((CPrivatisationApp*)AfxGetApp())->m_csExcelFilename=_T("");
	//m_csReportTitle=_T("");
	this->EndWaitCursor();
	if(bt->GetRS()->IsOpen()) bt->GetRS()->Close();
	/*try
	{
		/*oSheet.ReleaseDispatch();

		oSheets.ReleaseDispatch();

		//oBook.Close(covFalse, covOptional, covOptional);
		oBook.ReleaseDispatch();

		//oBooks.Close();
		oBooks.ReleaseDispatch();*/
		
		//oApp.SetUserControl(TRUE);
		
		//oBook.ReleaseDispatch(); 
		//oApp.ReleaseDispatch();
		//oApp = NULL;
	/*}
	catch(...)
	{
	}*/
	return TRUE;
}

BOOL CPrivatisationApp::ExportWord(CString filename,CString newfilename, CObArray *param, BOOL bReplica)
{
	int ii=0;
	char hh='й';
	unsigned int iu;
	unsigned short su;
	ii|=hh;
	iu=hh;
	su=hh;
	if(!(m_iRights & 0x1L)) 	return FALSE;
	BOOL done=TRUE;
	_Application m_word;
	Documents m_oDocs;
	_Document oDoc;
	Selection oSel;
	Tables	oTabs;
	Table	oTab;
	Rows	oRows;
	Cell	oCell;
	_Font oFont;
	WParagraphFormat oParagraphFormat;
	TemplParam* tp;
	int	pos;
	int error=0;
	CString csVal;
	COleVariant  covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	COleVariant  covTrue(short(TRUE), VT_BOOL);
	COleVariant  covFalse(short(FALSE), VT_BOOL);
	if(!m_word.CreateDispatch("Word.Application")) //запустить сервер
	{
		AfxMessageBox("Ошибка при старте Word!", MB_ICONERROR);
		return FALSE;
	}
	m_word.SetDisplayAlerts((long)-1);
	try
	{

		//наша коллекция документов
		m_oDocs = m_word.GetDocuments();
		error=20;
		oDoc.AttachDispatch(
			m_oDocs.Open97(COleVariant(filename),
			covFalse,
			covFalse,
			covFalse,
			covOptional,
			covOptional,
			covFalse,
			covOptional, 
			covOptional, 
			covOptional));//,
			//covOptional, 
			//covTrue, 
			//covOptional, 
			//covOptional, 
			//covOptional));//, 
			//covOptional));
		/*первый документ*/
		oDoc.Activate();
		error=30;
		//oDoc = m_oDocs.Item(COleVariant(long(1)));
		error=40;
		oSel = m_word.GetSelection();
		error=50;
		Find oFind=oSel.GetFind();
		error=60;
		oFont=oFind.GetFont();
		oTabs=oDoc.GetTables();
		//поиск метастроки
		for(int i=0; i<param->GetSize(); ++i)
		{
			error=75;
			oSel = m_word.GetSelection();
			if(i>0) oSel.MoveUp(COleVariant(short(4)),COleVariant(long(1073741823)),COleVariant(short(0)));
					//oSel.HomeKey(COleVariant(short(6)), covOptional);
			error=70;
			//В начало
			tp=(TemplParam*)param->GetAt(i);
			if(!tp) throw(4);
			///// помещаем в буфер
			error=80;
			if(OpenClipboard(GetMainWnd()->GetSafeHwnd()))
			{
				HGLOBAL clipbuffer;
				HGLOBAL hglbLocale;
				LCID* pLocId;
				char * buffer;
				try
				{
					EmptyClipboard();
					clipbuffer = GlobalAlloc(GMEM_DDESHARE, tp->value.GetLength()+1);
					if(!clipbuffer) throw(1);
					buffer = (char*)GlobalLock(clipbuffer);
					strcpy(buffer, LPCSTR(tp->value));
					GlobalUnlock(clipbuffer);
					SetClipboardData(CF_TEXT,clipbuffer);
					//Добавляем локаль
					hglbLocale = GlobalAlloc(GMEM_DDESHARE | GMEM_MOVEABLE,sizeof(LCID));
					if (!hglbLocale) throw(2);
					//
					
					pLocId= (LCID*)GlobalLock(hglbLocale);
					if (!pLocId)
					{
						GlobalFree(hglbLocale);
						throw(3);
					}

					*pLocId =0x419;// GetThreadLocale();//1049
					GlobalUnlock(hglbLocale);
					SetClipboardData(CF_LOCALE, hglbLocale);
				}catch(...)
				{
					MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка буфера обмена");
					GlobalFree(clipbuffer);
					GlobalFree(hglbLocale);
					CloseClipboard();
					continue;	
				}
				GlobalFree(clipbuffer);
				GlobalFree(hglbLocale);
				CloseClipboard();
				error=90;
				oFind.Execute(COleVariant(tp->name),
					covFalse,				// учитывать регистр (нет)
					covFalse,				// слово целиком (да)
					covFalse, 				// использовать подстановочные знаки ? (нет)
					covFalse,				// произносится как ? (нет, надо точно)
					covFalse,				// все словоформы ? (нет)
					covTrue, 				// поиск вперед по тексту ? (да)
					COleVariant((long)2),	// как искать	(найти и продолжить поиск)
					covFalse,				// поиск по формату? (нет)
					COleVariant(/*tp->value*/"^c"),			// на что заменять 
					COleVariant((short)2),
					covFalse,
					covFalse,
					covFalse,
					covFalse);
				EmptyClipboard();
			}
			else
			{
				AfxMessageBox("OpenClipboard(GetMainWnd()->GetSafeHwnd()");
				throw(4);
			}
			error=100;
			if(tp->name.Find("[@Table")>=0)
			{
				error=110;
				pos=atoi(tp->name.Mid(7,1));
				error=130;
				oTab=oTabs.Item(pos);
				error=140;
				oRows=oTab.GetRows();
				error=160;
				for(int i=0; i<tp->rows; ++i)
				{
					error=170;
					if(i!=0) oRows.Add(covOptional);
					error=180;
					for(int j=0; j<tp->tab[i].GetSize(); ++j)
					{
						error=190;
						oCell=oTab.Cell(i+2,j+1);
						oCell.Select();
						error=200;
						csVal=tp->tab[i].GetAt(j);
						
						error=210;	
						if(csVal!="") 
						{
							if(csVal=="подпись") 
								oSel.ClearFormatting();
							error=220;
							oSel.TypeText(csVal);
							error=230;
							if(csVal=="подпись") 
							{
								error=240;
								oCell.Select();
								error=250;
								oSel.ItalicRun();
								
							}
							error=260;
						}
						
					}
				}
			}


		}
		error=270;
		if(bReplica)
		{
			//oSel.MoveUp(COleVariant(short(4)),COleVariant(long(1073741823)),COleVariant(short(0)));
			oSel.HomeKey(COleVariant(short(6)), covOptional);
			oSel.CopyFormat();
			oSel.BoldRun();
			oFont=oSel.GetFont();
			float size=oFont.GetSize();
			oFont.SetSize(12.0);
			oSel.TypeText("ДУБЛИКАТ");
			oParagraphFormat=oSel.GetParagraphFormat();
			oParagraphFormat.SetAlignment(2);
			oSel.TypeParagraph();
			oFont.SetSize(size);
			oSel.PasteFormat();
			
		}

		m_word.SetVisible(TRUE); //и сделать его видимым
		newfilename.Replace(".","");
		newfilename.Replace(" ","");
		newfilename.Replace("/","+");
		csVal=m_csDocumentsFolder+"\\"+newfilename;
		if(newfilename.Find("Регистрация")!=-1)
			oDoc.Protect(2,covTrue,covOptional,covOptional,covOptional);
		error=280;
		
		csVal+=".doc";
		oDoc.SaveAs(COleVariant(csVal),COleVariant(long(0)),covFalse,
			COleVariant(""),covFalse,covOptional,covFalse,
			covFalse,covFalse,covFalse,covFalse,
			covOptional,covOptional,covOptional,covOptional,covOptional);
		
	}//endtryblock
	catch(...)
	{
		if(error!=280)
		{
			MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp",
				"Ошибка при создании документа! "+IntToStr(error)+filename);
			oDoc.Close(covFalse,covOptional,covOptional);
			m_word.Quit(covFalse,covOptional, covOptional);
			done=FALSE;
		}
		else
			AfxMessageBox("Ошибка при сохранении!",MB_ICONERROR);
	}
	m_word.Activate();
	try
	{
		//// уничтожаем параметры
		for(int i=0; i<param->GetSize(); ++i)
		{
			tp=(TemplParam*)param->GetAt(i);
			if(tp->tab)
				for(int j=1; j<tp->rows; tp->tab[j++].RemoveAll());
			delete tp;
		}
		param->RemoveAll();
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка обнуления параметров!");
	}
	if(done) m_word.SetVisible(TRUE); //и сделать его видимым
	return TRUE;
}

TemplParam::TemplParam()
{
	name=_T("");
	value=_T("");
	rows=0;
	tab=NULL;
}

TemplParam::~TemplParam()
{
	if(tab) delete[] tab;
}


BOOL CPrivatisationApp::AddLog(long lStorage, long lRecord, long lAction, long lBook, long lNum)
{
		CADOCommand pCmd(m_bt->GetDB(), "[mAddLog]");
		pCmd.AddParameter("Storage",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),lStorage);
		pCmd.AddParameter("Record",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),lRecord);
		pCmd.AddParameter("Book",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),lBook);
		pCmd.AddParameter("Num",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),lNum);
		pCmd.AddParameter("Action",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),lAction);
		pCmd.AddParameter("UserID",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),m_iUserID);
		pCmd.AddParameter("UserName",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csUser.GetLength()!=0?m_csUser.GetLength():1,m_csCurrentUserName);
		if(!m_bt->Execute(&pCmd)) return FALSE;
		return TRUE;
}
