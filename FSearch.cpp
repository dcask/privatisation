// FSearch.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FSearch.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FSearch dialog


FSearch::FSearch(CWnd* pParent /*=NULL*/)
	: CDialog(FSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(FSearch)
	m_csBookNum = _T("");
	m_csFamilyName = _T("");
	m_csFlatNum = _T("");
	m_csFirstName = _T("");
	m_csPart = _T("");
	m_csSurName = _T("");
	m_csRegNum = _T("");
	m_csBuildingNum = _T("");
	m_csInfo = _T("");
	//}}AFX_DATA_INIT
	m_bSortInc=FALSE;
	m_bExport=FALSE;
	m_bFilled=FALSE;
	m_bFlag=FALSE;
}


void FSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FSearch)
	DDX_Control(pDX, IDC_STREET, m_Street);
	DDX_Control(pDX, IDC_LIST, m_List);
	DDX_Text(pDX, IDC_BOOK, m_csBookNum);
	DDX_Text(pDX, IDC_FAMILY, m_csFamilyName);
	DDX_Text(pDX, IDC_FLATNUM, m_csFlatNum);
	DDX_Text(pDX, IDC_NAME, m_csFirstName);
	DDX_Text(pDX, IDC_PART, m_csPart);
	DDX_Text(pDX, IDC_SURNAME, m_csSurName);
	DDX_Text(pDX, IDC_NUM, m_csRegNum);
	DDX_Text(pDX, IDC_BUILDING, m_csBuildingNum);
	DDX_Text(pDX, IDC_INFO, m_csInfo);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FSearch, CDialog)
	//{{AFX_MSG_MAP(FSearch)
	ON_BN_CLICKED(IDC_EXPORT, OnExport)
	ON_WM_MOUSEWHEEL()
	ON_BN_CLICKED(IDC_CLEAN, OnClean)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_NEW, OnNew)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FSearch message handlers

BOOL FSearch::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CString csVal;
	PrepareList();
	
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_STREET),"[mComboStreet]");
	m_hIcon = AfxGetApp()->LoadIcon(IDI_FIND);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку

	CRect rect;
	GetClientRect(&rect);
	m_iCx=rect.right-rect.left;
	m_iCy=rect.bottom-rect.top;
	m_iCyBase=m_iCy;
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FSearch::OnOK() 
{
	if(!UpdateData()) return;
	if(m_csFlatNum==_T("") && m_csBuildingNum==_T("") &&
		m_csFamilyName==_T("") && m_csFirstName==_T("") &&
		m_csBookNum==_T("") && m_csPart==_T("") &&
		m_csSurName==_T("") && m_csRegNum==_T("") && m_Street.GetCurSel()==-1
		) return;

	m_csBookNum.TrimLeft();m_csBookNum.TrimRight();
	m_csFamilyName.TrimLeft();m_csFamilyName.TrimRight();
	m_csFlatNum.TrimLeft();m_csFlatNum.TrimRight();
	m_csFirstName.TrimLeft();m_csFirstName.TrimRight();
	m_csPart.TrimLeft();m_csPart.TrimRight();
	m_csSurName.TrimLeft();m_csSurName.TrimRight();
	m_csRegNum.TrimLeft();m_csRegNum.TrimRight();
	m_csBuildingNum.TrimLeft();m_csBuildingNum.TrimRight();

	long row=0, col=0/*, scol, sscol*/;
	CString csVal;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mGetList]");
	CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;

	int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;

	try{
		//
		long id_;
		if(m_Street.GetCurSel()!=-1)
			id_=long(m_Street.GetItemData(m_Street.GetCurSel()));
		else
			id_=-1;
		if(id_==-1) csVal=_T(""); else	csVal.Format("%d", id_ );
		//bt->SetDateFormat("%x");
		// ИД улицы
		pCmd.AddParameter("StreetID",CADORecordset::typeChar,
			CADOParameter::paramInput,csVal.GetLength()!=0 ? csVal.GetLength():1, csVal );
		// дом
		pCmd.AddParameter("BuildNum",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csBuildingNum.GetLength()!=0?m_csBuildingNum.GetLength():1,m_csBuildingNum);
		// корпус
		pCmd.AddParameter("NumPart",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csPart.GetLength()!=0?m_csPart.GetLength():1,m_csPart);
		// квартира
		pCmd.AddParameter("NumFlat",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csFlatNum.GetLength()!=0?m_csFlatNum.GetLength():1,m_csFlatNum);
		// фамилия
		pCmd.AddParameter("FmlName",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csFamilyName.GetLength()!=0?m_csFamilyName.GetLength():1,m_csFamilyName);
		// имя
		pCmd.AddParameter("FrsName",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csFirstName.GetLength()!=0?m_csFirstName.GetLength():1,m_csFirstName);
		// отчество
		pCmd.AddParameter("SName",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csSurName.GetLength()!=0?m_csSurName.GetLength():1,m_csSurName);
		// книга
		pCmd.AddParameter("NumBook",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csBookNum.GetLength()!=0?m_csBookNum.GetLength():1,m_csBookNum);
		// регистрация
		pCmd.AddParameter("NumReg",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csRegNum.GetLength()!=0?m_csRegNum.GetLength():1,m_csRegNum); /**/
				
		//m_List.BeginWaitCursor();

		if(!bt->Execute(&pCmd))
			throw(1);
		
		if(m_bExport) return; // если нажат экспорт
		/*убираем %*/
		m_csInfo.Format("Договоров: %d. Запрос выполнен за %.2f сек",bt->GetRecordsCount(), bt->GetQueryTime()/1000.0);
		UpdateData(FALSE);
		m_List.SetRedraw(FALSE);
		m_List.Clear();
		m_List.Refresh();
		if(bt->GetRecordsCount()>0)
		{
			m_List.SetRefDataSource(NULL);
			m_List.SetRefDataSource((LPUNKNOWN) bt->GetRS()->m_pRecordset);
			m_List.SetRefDataSource(NULL);
		}
		else
		{
			m_List.SetRows(2);
			m_List.SetTextMatrix(1,1,"Нет данных");
		}
		bt->GetRS()->Close();
		m_List.SetRedraw(TRUE);
		
		//m_List.SetFocus();
	////////Если что-то не так/////////////////////////////
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику");
		bt->GetRS()->Close();
		m_List.EndWaitCursor();
		m_List.SetRedraw(TRUE);
	}
	m_List.EndWaitCursor();
	m_List.SetFocus();
	if(m_List.GetRows()>1)
	{
		m_List.SetRow(1);
		m_List.SetCol(1);
		m_List.SetColSel(m_List.GetCols(0)-1);
		m_bFilled=TRUE;
	}

	
	((CPrivatisationApp*)AfxGetApp())->AddLog(1,0,1);
	//CDialog::OnOK();
}

BEGIN_EVENTSINK_MAP(FSearch, CDialog)
    //{{AFX_EVENTSINK_MAP(FSearch)
	ON_EVENT(FSearch, IDC_LIST, -600 /* Click */, OnClickList, VTS_NONE)
	ON_EVENT(FSearch, IDC_LIST, -601 /* DblClick */, OnDblClickList, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void FSearch::OnClickList() 
{
	long mode=m_List.GetSelectionMode();
	m_bFlag=TRUE;
	try
	{
		m_rows=m_List.GetRows();
		//m_List.GetBand
		//if(m_rows<3) return;
		m_col=m_List.GetMouseCol();
		m_mrow=m_List.GetMouseRow();
				
		if(m_mrow==0)
		{
			m_List.SetSelectionMode(0);
			m_List.BeginWaitCursor();
			m_List.SetCol(m_col);
			m_bSortInc=!m_bSortInc;
			//if(m_LetterList.GetColData(col)==2||m_LetterList.GetColData(col)==3) m_LetterList.SetSort(9);
			if(m_List.GetColData(m_col)==1) 
				if(m_bSortInc) m_List.SetSort(2); else m_List.SetSort(1);
			m_List.SetCol(1);
			m_List.SetColSel(4);
			m_List.EndWaitCursor();
			m_List.SetSelectionMode(mode);
		}
		
	}
	catch(...)
	{
		m_List.EndWaitCursor();
		m_List.SetSelectionMode(mode);
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","FSearch::OnClickList");
	}
	
}

void FSearch::OnExport() 
{
	m_bExport=TRUE;
	OnOK();
	m_bExport=FALSE;
	((CPrivatisationApp*)AfxGetApp())->ExportXLS();
	//::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),WM_COMMAND,ID_RECORD_EXPORT,NULL);
}

BOOL FSearch::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt) 
{
	long row=m_List.GetTopRow();
	if(zDelta<0&&row<m_List.GetRows()-1)
		m_List.SetTopRow(row+1);
	if(zDelta>0&&row>1)
		m_List.SetTopRow(row-1);
	
	return CDialog::OnMouseWheel(nFlags, zDelta, pt);
	
}

void FSearch::OnClean() 
{
	m_Street.SetCurSel(-1);
	m_csBookNum = _T("");
	m_csFamilyName = _T("");
	m_csFlatNum = _T("");
	m_csFirstName = _T("");
	m_csPart = _T("");
	m_csSurName = _T("");
	m_csRegNum = _T("");
	m_csBuildingNum = _T("");

	m_csInfo=_T("");
	UpdateData(FALSE);
	m_List.Clear();
	PrepareList();
	//m_List.SetRows(2);
	m_bFilled=FALSE;
	if(GetDlgItem(IDC_STREET)) GetDlgItem(IDC_STREET)->SetFocus();
	
}

void FSearch::OnDblClickList() 
{
	int error=1;
	try
	{
		m_row=m_List.GetRow();
		/*long row=m_List.GetRow();
		long rows=m_List.GetRows();
		long mrow=m_List.GetMouseRow();*/
		
		if(m_mrow==0 ) return;
		CString csIni=((CPrivatisationApp*)AfxGetApp())->m_csIni;
		CString csVal=m_List.GetTextMatrix(m_row,0);
		if(csVal=="") return;
		
		WritePrivateProfileString("JobData","Find",csVal,csIni);
		((CPrivatisationApp*)AfxGetApp())->m_lContractID=atol(csVal);
		((CPrivatisationApp*)AfxGetApp())->m_bSearch=TRUE;
		error=2;
		/*Свернуть окно и открыть новый документ */	
		PostMessage(WM_SYSCOMMAND,SC_CLOSE,NULL);
		error=3;
		AfxGetMainWnd()->SendMessage(WM_COMMAND, ID_FILE_NEW, 0);
		m_bFlag=FALSE;
		
		
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","FSearch::OnDblClickList "+IntToStr(error));
	}
	
}

BOOL FSearch::PreTranslateMessage(MSG* pMsg) 
{
	try
	{
		if(WM_KEYDOWN == pMsg->message)
		{
			switch(pMsg->wParam)
			{
				case VK_TAB:
					if(this->GetFocus()->GetParent()->GetDlgCtrlID()==IDC_STREET)
					{
						CString csVal;
						CComboBox* c=(CComboBox*)GetDlgItem(IDC_STREET);
						c->GetWindowText(csVal.GetBuffer(50),50);
						if(csVal!="")
						{
							int pos=c->FindString(c->GetCurSel(),csVal);
							if( pos==-1) return TRUE;
							else c->SetCurSel(pos);
						}
					}
					break;
		
				case VK_RETURN:
		
					if(this->GetFocus()->GetDlgCtrlID()==IDC_LIST)
					{
						OnDblClickList();
						return TRUE;
					}
					break;
				case VK_F2:
					m_Street.SetCurSel(-1);
					m_csFlatNum = _T("");
					m_csPart = _T("");
					m_csBuildingNum = _T("");
					UpdateData(false);
					break;
				case VK_F3:
	
					m_csFamilyName = _T("");
					m_csFirstName = _T("");
					m_csSurName = _T("");
					UpdateData(false);
					break;
				case VK_F4:
					m_csBookNum = _T("");
					m_csRegNum = _T("");
					UpdateData(false);
					break;

				default:
					break;
			}
		}
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","PreTranslateMessage");
	}
	return CDialog::PreTranslateMessage(pMsg);
}

void FSearch::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	
	//if(!m_bFilled)
	//{
		if(GetDlgItem(IDC_STREET)) GetDlgItem(IDC_STREET)->SetFocus();
	//}
	//else 
	//	if(m_List) m_List.SetFocus();
	
}



void FSearch::OnNew() 
{
	
	((CPrivatisationApp*)AfxGetApp())->m_lContractID=-1;
	((CPrivatisationApp*)AfxGetApp())->m_bSearch=TRUE;
	////////////проверка адреса
	UpdateData();
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mFindAddress]");
	CString csVal;
	//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
	//int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;
	if(m_Street.GetCurSel()==-1 || m_csBuildingNum=="" || m_csFlatNum=="") return;
	try{
		// ИД улицы
		pCmd.AddParameter("StreetID",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long),(long)m_Street.GetItemData(m_Street.GetCurSel()) );
		// дом
		pCmd.AddParameter("Building",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),atoi(m_csBuildingNum));
		
		pCmd.AddParameter("BuildingPart",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csPart.GetLength()!=0?m_csPart.GetLength():1,m_csPart);
		if(!bt->Execute(&pCmd))
			throw(1);
		if(bt->GetRecordsCount()==0)
			AfxMessageBox("В базе нет такого дома", MB_ICONERROR);
		else
		{
			bt->GetRS()->GetFieldValue("ID1",((CPrivatisationApp*)AfxGetApp())->m_lAdresID1);
			bt->GetRS()->GetFieldValue("ID2",((CPrivatisationApp*)AfxGetApp())->m_lAdresID2);
			bt->GetRS()->GetFieldValue("Prefix",((CPrivatisationApp*)AfxGetApp())->m_csPrefix);
			bt->GetRS()->GetFieldValue("District",((CPrivatisationApp*)AfxGetApp())->m_csDistrict);
			csVal=((CPrivatisationApp*)AfxGetApp())->m_csPrefix;
			m_Street.GetLBText(m_Street.GetCurSel(),((CPrivatisationApp*)AfxGetApp())->m_csStreet);
			csVal+=((CPrivatisationApp*)AfxGetApp())->m_csStreet;
			((CPrivatisationApp*)AfxGetApp())->m_csStreet=csVal;
			((CPrivatisationApp*)AfxGetApp())->m_csFullStreet=bt->GetStringValue("FullName");
			((CPrivatisationApp*)AfxGetApp())->m_iStreet=m_Street.GetItemData(m_Street.GetCurSel());
			((CPrivatisationApp*)AfxGetApp())->m_iBuilding=atoi(m_csBuildingNum);
			((CPrivatisationApp*)AfxGetApp())->m_csBuildingPart=m_csPart;
			
			((CPrivatisationApp*)AfxGetApp())->m_iFlat=atoi(m_csFlatNum);
			//doc->m_DocData.m_iFlat=dlg.m_iFlatNum;
			SendMessage(WM_COMMAND, MAKEWPARAM(ID_FILE_NEW, CN_COMMAND), NULL);
			SendMessage(WM_SYSCOMMAND,SC_CLOSE,NULL);
		}
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Произошла внутренняя ошибка\nОбратитесь к разработчику. OnNew");
		bt->GetRS()->Close();
	}




	
	
}

void FSearch::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	try
	{
		if((cy>m_iCyBase&&m_iCyBase>0))
		{
			WINDOWPLACEMENT pm;
			if(!GetDlgItem(IDC_LIST)||!(IDC_INFO)||!GetDlgItem(IDC_EXPORT)) return;
			GetDlgItem(IDC_LIST)->GetWindowPlacement(&pm);
			pm.rcNormalPosition.bottom+=cy-m_iCy;
			GetDlgItem(IDC_LIST)->SetWindowPlacement(&pm);
			GetDlgItem(IDC_INFO)->GetWindowPlacement(&pm);
			pm.rcNormalPosition.bottom+=cy-m_iCy;
			pm.rcNormalPosition.top+=cy-m_iCy;
			GetDlgItem(IDC_INFO)->SetWindowPlacement(&pm);
			GetDlgItem(IDC_EXPORT)->GetWindowPlacement(&pm);
			pm.rcNormalPosition.bottom+=cy-m_iCy;
			pm.rcNormalPosition.top+=cy-m_iCy;
			GetDlgItem(IDC_EXPORT)->SetWindowPlacement(&pm);
			m_iCx=cx;	m_iCy=cy;
		}
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","FSearch::OnSize");
	}
	
	
}

void FSearch::PrepareList()
{
	/*подготовка таблицы*/
	m_List.SetCols(0,5);
	m_List.SetRows(2);
	m_List.SetFixedCols(0);
	m_List.SetFixedRows(1);
		
	m_List.SetColWidth(0,0,0);
	m_List.SetColWidth(1,0,3900); m_List.SetColAlignment(1,0);
	m_List.SetColWidth(2,0,3000); m_List.SetColAlignment(2,0);
	m_List.SetColWidth(3,0,800); m_List.SetColAlignment(3,0);
	m_List.SetColWidth(4,0,1000); m_List.SetColAlignment(4,0);
	m_List.SetColData(1,1);
	m_List.SetColData(2,1);
	m_List.SetColData(3,1);
	/*m_List.SetTextMatrix(0,1,"Владелец");
	m_List.SetTextMatrix(0,2,"Адрес");
	m_List.SetTextMatrix(0,3,"Договор");
	m_List.SetTextMatrix(0,4,"Расторгнут");*/
}
