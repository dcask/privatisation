// FDeclare.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FDeclare.h"
#include "StrArray.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FDeclare dialog


FDeclare::FDeclare(CWnd* pParent /*=NULL*/)
	: FChildDialog(FDeclare::IDD, pParent)
{
	//{{AFX_DATA_INIT(FDeclare)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	flxgrd=NULL;
	m_bCellSelected=FALSE;
}


void FDeclare::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FDeclare)
	DDX_Control(pDX, IDC_TMPDATE_B, m_Button);
	DDX_Control(pDX, IDC_TMPEDIT, m_Edit);
	DDX_Control(pDX, IDC_OWNERS, m_Owners);
	DDX_Control(pDX, IDC_REFUSERS, m_Refusers);
	DDX_Control(pDX, IDC_TMPDATE, m_Date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FDeclare, CDialog)
	//{{AFX_MSG_MAP(FDeclare)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_OWNER_ADD, OnOwnerAdd)
	ON_BN_CLICKED(IDC_OWNER_REMOVE, OnOwnerRemove)
	ON_BN_CLICKED(IDC_REFUSER_ADD, OnRefuserAdd)
	ON_BN_CLICKED(IDC_REFUSER_REMOVE, OnRefuserRemove)
	ON_EN_KILLFOCUS(IDC_TMPEDIT, OnKillfocusTmpedit)
	ON_BN_CLICKED(IDC_TMPDATE_B, OnTmpdateB)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FDeclare message handlers

void FDeclare::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow)	return;
	BOOL bSaved=m_DocData->m_bSaved;
	long Orows=m_DocData->m_Owners.GetSize();
	long Ocols=7;
	long Rrows=m_DocData->m_Refusers.GetSize();
	long Rcols=6;
	
	CString tmp;

	m_Owners.Clear();
	m_Refusers.Clear();
	m_Owners.SetCols(0,Ocols);
	m_Refusers.SetCols(0,Rcols);
	m_Owners.SetRowData(1,long(NULL)); // начальные значения данных...пусты
	m_Refusers.SetRowData(1,long(NULL)); // чтоб не перепутать

	m_Owners.SetColWidth(0,0,0); m_Owners.SetColAlignment(0,0);
	m_Owners.SetColWidth(1,0,1900); m_Owners.SetColAlignment(1,0);
	m_Owners.SetColWidth(2,0,1600); m_Owners.SetColAlignment(2,0);
	m_Owners.SetColWidth(3,0,1900); m_Owners.SetColAlignment(3,0);
	m_Owners.SetColWidth(4,0,500); m_Owners.SetColAlignment(4,0);
	m_Owners.SetColWidth(5,0,1300); m_Owners.SetColAlignment(5,0);
	m_Owners.SetColWidth(6,0,900); m_Owners.SetColAlignment(6,0);
	
	
	m_Owners.SetTextMatrix(0,1,"Фамилия");
	m_Owners.SetTextMatrix(0,2,"Имя");
	m_Owners.SetTextMatrix(0,3,"Отчество");
	m_Owners.SetTextMatrix(0,4,"Доля");
	m_Owners.SetTextMatrix(0,5,"Дата рожд.");
	m_Owners.SetTextMatrix(0,6,"Паспорт");

	m_Refusers.SetColWidth(0,0,0); m_Refusers.SetColAlignment(0,0);
	m_Refusers.SetColWidth(1,0,1900); m_Refusers.SetColAlignment(1,0);
	m_Refusers.SetColWidth(2,0,1600); m_Refusers.SetColAlignment(2,0);
	m_Refusers.SetColWidth(3,0,1900); m_Refusers.SetColAlignment(3,0);
	m_Refusers.SetColWidth(4,0,1300); m_Refusers.SetColAlignment(4,0);
	m_Refusers.SetColWidth(5,0,1400); m_Refusers.SetColAlignment(5,0);
	
	
	m_Refusers.SetTextMatrix(0,1,"Фамилия");
	m_Refusers.SetTextMatrix(0,2,"Имя");
	m_Refusers.SetTextMatrix(0,3,"Отчество");
	m_Refusers.SetTextMatrix(0,4,"Дата рожд.");
	m_Refusers.SetTextMatrix(0,5,"Подпись");

	if(Rrows>0) m_Refusers.SetRows(Rrows+1);	
	if(Orows>0) m_Owners.SetRows(Orows+1);
	int count=0;long i;
	/*заполнение таблицы владельцев*/
	Owner* oOwner;
	
	for(i=0; i<Orows; ++i)
	{
		oOwner=(Owner*)(m_DocData->m_Owners.GetAt(i));
		if(oOwner->m_iStat!=2)
		{
			//m_Owners.SetTextMatrix(count+1,0,oOwner->m_lID);
			m_Owners.SetRowData(count+1,long(oOwner));
			m_Owners.SetTextMatrix(count+1,1,oOwner->m_csFamily);
			m_Owners.SetTextMatrix(count+1,2,oOwner->m_csName);
			m_Owners.SetTextMatrix(count+1,3,oOwner->m_csSurname);
			m_Owners.SetTextMatrix(count+1,4,oOwner->m_csPart);
			if(oOwner->m_Birthday.m_dt!=0.0)
				m_Owners.SetTextMatrix(count+1,5,oOwner->m_Birthday.Format("%d-%m-%Y"));
			m_Owners.SetTextMatrix(count+1,6,oOwner->m_csPass);
			count++;
		}
	}
	if(count==0) count++;
	m_Owners.SetRows(count+1);
	if(count>0) m_Owners.SetRowSel(1);
	/*заполнение таблицы отказников*/
	count=0;
	Refuser* oRefuser;
	for(i=0; i<Rrows; ++i)
	{
		oRefuser=(Refuser*)(m_DocData->m_Refusers.GetAt(i));
		if(oRefuser->m_iStat!=2)
		{
			//m_Refusers.SetTextMatrix(count+1,5,tmp);
			m_Refusers.SetRowData(count+1,long(oRefuser));
			m_Refusers.SetTextMatrix(count+1,1,oRefuser->m_csFamily);
			m_Refusers.SetTextMatrix(count+1,2,oRefuser->m_csName);
			m_Refusers.SetTextMatrix(count+1,3,oRefuser->m_csSurname);
			if(oRefuser->m_Birthday.m_dt!=0.0)
				m_Refusers.SetTextMatrix(count+1,4,oRefuser->m_Birthday.Format("%d-%m-%Y"));
			m_Refusers.SetTextMatrix(count+1,5,oRefuser->m_csComments);
			
			count++;
		}
	}
	
	if(count==0) count++;
	m_Refusers.SetRows(count+1);	
	if(count>0) m_Refusers.SetRowSel(1);/**/

	m_Owners.SetRow(1);
	m_Owners.SetCol(1);
	m_Owners.SetFocus();
	m_DocData->m_bSaved=bSaved;
}

BOOL FDeclare::PreTranslateMessage(MSG* pMsg) 
{
	CString csVal;
	COleDateTime date_tmp;
	try
	{
		int focus=0;
			
		if(GetFocus()) 
				focus=GetFocus()->GetDlgCtrlID();
		else
			return CDialog::PreTranslateMessage(pMsg);
		
		//клавиша ВНИЗ
		if(WM_KEYDOWN == pMsg->message && VK_DOWN==pMsg->wParam)
		{
			switch (focus)
			{
				case IDC_REFUSERS:
					if(m_Refusers.GetRow()==m_Refusers.GetRows()-1)
						OnRefuserAdd() ;
					break;
				case IDC_OWNERS:
					if(m_Owners.GetRow()==m_Owners.GetRows()-1)
						OnOwnerAdd();
					break;
				case IDC_TMPDATE:
					KillFocusDate();
					if(flxgrd->GetRow()==flxgrd->GetRows()-1)
						AddRow(flxgrd);
					break;
				case IDC_TMPEDIT:
					OnKillfocusTmpedit();
					if(flxgrd->GetRow()==flxgrd->GetRows()-1)
						AddRow(flxgrd);
					break;
				default:break;
				
			}
		}
		//клавиша ESC
		if(WM_KEYDOWN == pMsg->message && VK_ESCAPE==pMsg->wParam)
		{
			switch(focus)
			{
				case IDC_TMPDATE:
					m_Date.SetText( flxgrd->GetTextMatrix(flxgrd->GetRow(),flxgrd->GetCol() ) );
					KillFocusDate();
					flxgrd->SetFocus();
					break;
				case IDC_TMPEDIT:
					SetDlgItemText(IDC_TMPEDIT,flxgrd->GetTextMatrix(flxgrd->GetRow(),flxgrd->GetCol()));
					OnKillfocusTmpedit();
					flxgrd->SetFocus();
					break;
				default:
					break;
					//AfxGetApp()->GetMainWnd()->PostMessage(pMsg->message,
					//		pMsg->wParam,pMsg->lParam);
			}
		
			return TRUE;
		}

		//клавиша Enter
		if( WM_KEYDOWN == pMsg->message && VK_RETURN==pMsg->wParam )
		{
			switch(focus)
			{
				case IDC_TMPDATE:
					KillFocusDate();
					break;
				case IDC_TMPEDIT:
					OnKillfocusTmpedit();
					break;
				case IDC_REFUSERS:
					EnterCellRefusers();
					break;
				case IDC_OWNERS:
					EnterCellOwners();
					break;
				default: break;
			}
			
			return TRUE;
		
		}
		//клавиша TAB
		if(WM_KEYDOWN == pMsg->message && pMsg->wParam==VK_TAB)
		{
			long col;
			switch(focus)
			{
				case IDC_REFUSERS:
					this->GetParent()->GetParent()->GetDlgItem(IDC_COMMENTS)->SetFocus();
					break;
				case IDC_OWNERS:
					this->GetDlgItem(IDC_REFUSERS)->SetFocus();
					break;
				case IDC_TMPEDIT:
					col=flxgrd->GetCol();
					OnKillfocusTmpedit();
					flxgrd->SetCol(col+2<flxgrd->GetCols(0)?col+1:col);
					flxgrd->SetFocus();
					break;
				case IDC_TMPDATE:
					col=flxgrd->GetCol();
					KillFocusDate();
					flxgrd->SetCol(col+2<flxgrd->GetCols(0)?col+1:col);
					flxgrd->SetFocus();
					break;
				default:break;
			}
			return TRUE;
		}/**/
	}
	catch(...)
	{
		AfxMessageBox("PreTranslate.Declare");
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

void FDeclare::OnOwnerAdd() 
{
	AddRow(&m_Owners);
}

void FDeclare::OnOwnerRemove() 
{
	int pos=m_Owners.GetRow();
	//int i=m_Owners.GetRowData(pos);
	m_DocData->m_bSaved=FALSE;
	if(m_Owners.GetRows()<3)
		AddRow(&m_Owners);
	Owner* oOwner=(Owner*) m_Owners.GetRowData(pos);
	m_Owners.RemoveItem(pos);
	if(!oOwner) return;
	//Owner* oOwner=(Owner*)(m_DocData->m_Owners.GetAt(i));
	//если старый, то помечаем на удаление, иначе удаляем из массива
	if(oOwner->m_iStat!=1) oOwner->m_iStat=2;
	else 
		for(int i=0; i<m_DocData->m_Owners.GetSize(); ++i )
		{
			if(((Owner*) m_DocData->m_Owners.GetAt(i))==oOwner)
				m_DocData->m_Owners.RemoveAt(i);
			delete oOwner;
		}
}

void FDeclare::OnRefuserAdd() 
{
	AddRow(&m_Refusers);
}

void FDeclare::OnRefuserRemove() 
{
	m_DocData->m_bSaved=FALSE;
	int pos=m_Refusers.GetRow();
	//int i=m_Refusers.GetRowData(pos);
	if(m_Refusers.GetRows()<3)
		AddRow(&m_Refusers);
	Refuser* oRefuser=(Refuser*)m_Refusers.GetRowData(pos);
	m_Refusers.RemoveItem(pos);
	if(!oRefuser) return;
	//Refuser* oRefuser=(Refuser*)(m_DocData->m_Refusers.GetAt(i));
	if(oRefuser->m_iStat!=1) oRefuser->m_iStat=2;
	else 
		for(int i=0; i<m_DocData->m_Refusers.GetSize(); ++i )
		{
			if(((Refuser*) m_DocData->m_Refusers.GetAt(i))==oRefuser)
				m_DocData->m_Refusers.RemoveAt(i);
			delete oRefuser;
		}

}

BEGIN_EVENTSINK_MAP(FDeclare, CDialog)
    //{{AFX_EVENTSINK_MAP(FDeclare)
	ON_EVENT(FDeclare, IDC_OWNERS, 70 /* RowColChange */, OnRowColChangeOwners, VTS_NONE)
	ON_EVENT(FDeclare, IDC_OWNERS, -600 /* Click */, OnClickOwners, VTS_NONE)
	ON_EVENT(FDeclare, IDC_OWNERS, -602 /* KeyDown */, OnKeyDownOwners, VTS_PI2 VTS_I2)
	ON_EVENT(FDeclare, IDC_OWNERS, -601 /* DblClick */, OnDblClickOwners, VTS_NONE)
	ON_EVENT(FDeclare, IDC_REFUSERS, -601 /* DblClick */, OnDblClickRefusers, VTS_NONE)
	ON_EVENT(FDeclare, IDC_REFUSERS, -602 /* KeyDown */, OnKeyDownRefusers, VTS_PI2 VTS_I2)
	ON_EVENT(FDeclare, IDC_REFUSERS, 70 /* RowColChange */, OnRowColChangeRefusers, VTS_NONE)
	ON_EVENT(FDeclare, IDC_REFUSERS, -600 /* Click */, OnClickRefusers, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void FDeclare::KillFocusDate()
{
	UpdateData();
	COleDateTime date;
	try
	{

		CString csVal=m_Date.GetFormattedText();
		if(!m_Date.IsWindowVisible()) return;
		m_Date.ShowWindow(SW_HIDE);
		m_Button.ShowWindow(SW_HIDE);
		if(csVal=="**-**-****")
			flxgrd->SetTextMatrix(lDateRow,lDateCol,"");
		if(date.ParseDateTime(csVal))
			flxgrd->SetTextMatrix(lDateRow,lDateCol,csVal);
		m_Date.SetText("");
		flxgrd->SetFocus();
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Decl.KillFocusDate");
	}
	//m_Edit.EnableWindow(FALSE);
}

void FDeclare::OnKillfocusTmpedit() 
{
	CString csVal, csEmpty="";
	try
	{
		if((!m_Edit)||(!flxgrd)) return;
		m_Edit.GetWindowText(csVal.GetBuffer(100),100);
		csVal.ReleaseBuffer();
		switch(flxgrd->GetCol())
		{
			case 1:
				TrimNames(&csVal,&csEmpty,&csEmpty);
				break;
			case 2:
				TrimNames(&csEmpty,&csVal,&csEmpty);
				break;
			case 3:
				TrimNames(&csEmpty,&csEmpty,&csVal);
				break;
			default:
				break;
		}
		if(!m_Edit.IsWindowVisible()) return;
 		m_Edit.ShowWindow(SW_HIDE);
		flxgrd->SetTextMatrix(flxgrd->GetRow(),flxgrd->GetCol(),csVal);
		m_Edit.SetWindowText("");
		flxgrd->SetFocus();
		m_DocData->m_bSaved=FALSE;
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Decl.onkilltmpedit");
	}
	//m_docdata->m_bChangedDeclare=TRUE;
	
}

BOOL FDeclare::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	UINT notificationCode = (UINT) HIWORD(wParam);
	if((notificationCode == EN_KILLFOCUS) ||
	(notificationCode == LBN_KILLFOCUS) ||
	(notificationCode == CBN_KILLFOCUS) ||
	(notificationCode == NM_KILLFOCUS) ||
	(notificationCode == WM_KILLFOCUS))
	{
		CWnd *pFocus = CWnd::GetFocus(); // call to a static function	
		//прячем маскэдит, если только не календарь забрал фокус
		if(pFocus)
			if(LPARAM(GetDlgItem(IDC_TMPDATE)->GetSafeHwnd())==lParam &&
				pFocus->GetDlgCtrlID()!=0 && 
				pFocus->GetDlgCtrlID()!=IDC_TMPDATE_B     ) 
					KillFocusDate();
	}
	return CDialog::OnCommand(wParam, lParam);
}

void FDeclare::OnTmpdateB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_TMPDATE_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_TMPDATE);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	m_DocData->m_bSaved=FALSE;
}

BOOL FDeclare::Migrate()
{
	long rows_owner=m_Owners.GetRows();
	long rows_refusers=m_Refusers.GetRows();
	KillFocusDate();
	GetDlgItem(IDC_OWNERS)->SetFocus();
	OnKillfocusTmpedit();
	Owner* oOwner;
	Refuser* oRefuser;
	for(long l=1; l<rows_owner; ++l)
		if(m_Owners.GetRowData(l)) // старый
		{
			oOwner=(Owner*)m_Owners.GetRowData(l);
			oOwner->m_csFamily=m_Owners.GetTextMatrix(l,1);
			oOwner->m_csName=m_Owners.GetTextMatrix(l,2);
			oOwner->m_csSurname=m_Owners.GetTextMatrix(l,3);
			oOwner->m_csPart=m_Owners.GetTextMatrix(l,4);
			
			if(m_Owners.GetTextMatrix(l,5)!="")
				oOwner->m_Birthday.ParseDateTime(m_Owners.GetTextMatrix(l,5));
			else
				oOwner->m_Birthday.m_status=COleDateTime::null;
			oOwner->m_csPass=m_Owners.GetTextMatrix(l,6);
			//oOwner->m_iStat=0; 
			oOwner->Trim();
		}
		else // новый
			if(!(m_Owners.GetTextMatrix(l,0)==""&&
				m_Owners.GetTextMatrix(l,1)==""&&
				m_Owners.GetTextMatrix(l,2)=="")) // не пустая строка без ФИО
			{
				oOwner=new Owner();
				m_Owners.SetRowData(l,long(oOwner));
				oOwner->m_csFamily=m_Owners.GetTextMatrix(l,1);
				oOwner->m_csName=m_Owners.GetTextMatrix(l,2);
				oOwner->m_csSurname=m_Owners.GetTextMatrix(l,3);
				oOwner->m_csPart=m_Owners.GetTextMatrix(l,4);
				if(m_Owners.GetTextMatrix(l,5)!="")
					oOwner->m_Birthday.ParseDateTime(m_Owners.GetTextMatrix(l,5));
				else
					oOwner->m_Birthday.m_status=COleDateTime::null;
				oOwner->m_csPass=m_Owners.GetTextMatrix(l,6);
				oOwner->m_iStat=1;	// новый
				oOwner->m_lID=-1;	// не забыть удалять из базы с проверкой ID на -1
				oOwner->Trim();
				m_DocData->m_Owners.Add(oOwner);
			}

	for(l=1; l<rows_refusers; ++l)
		if(m_Refusers.GetRowData(l)) // старый
		{
			oRefuser=(Refuser*)m_Refusers.GetRowData(l);
			oRefuser->m_csFamily=m_Refusers.GetTextMatrix(l,1);
			oRefuser->m_csName=m_Refusers.GetTextMatrix(l,2);
			oRefuser->m_csSurname=m_Refusers.GetTextMatrix(l,3);
			if(m_Refusers.GetTextMatrix(l,4)!="")
				oRefuser->m_Birthday.ParseDateTime(m_Refusers.GetTextMatrix(l,4));
			else
				oRefuser->m_Birthday.m_status=COleDateTime::null;
			oRefuser->m_csComments=m_Refusers.GetTextMatrix(l,5);
			oRefuser->Trim();
			//oRefuser->m_iStat=0; // редактировать
		}
		else // новый
			if(!(m_Refusers.GetTextMatrix(l,0)==""&&
				m_Refusers.GetTextMatrix(l,1)==""&&
				m_Refusers.GetTextMatrix(l,2)=="")) // не пустая строка без ФИО
			{
				oRefuser=new Refuser();
				m_Refusers.SetRowData(l,long(oRefuser));
				oRefuser->m_csFamily=m_Refusers.GetTextMatrix(l,1);
				oRefuser->m_csName=m_Refusers.GetTextMatrix(l,2);
				oRefuser->m_csSurname=m_Refusers.GetTextMatrix(l,3);
				if(m_Refusers.GetTextMatrix(l,4)!="")
					oRefuser->m_Birthday.ParseDateTime(m_Refusers.GetTextMatrix(l,4));
				else
					oRefuser->m_Birthday.m_status=COleDateTime::null;
				oRefuser->m_csComments=m_Refusers.GetTextMatrix(l,5);
				oRefuser->m_iStat=1;	// новый
				oRefuser->m_lID=-1;		// не забыть удалять из базы с проверкой ID на -1
				oRefuser->Trim();
				m_DocData->m_Refusers.Add(oRefuser);
			}
	return TRUE;
}

void FDeclare::AddRow(CMSHFlexGrid *flx)
{
	try
	{
		flx->SetRows(flx->GetRows()+1);
		flx->SetRow(flx->GetRows()-1);
		flx->SetRowData(flx->GetRows()-1,long(NULL));
		flx->SetCol(1);
		flx->SetFocus();
		m_DocData->m_bSaved=FALSE;
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Decl.AddRow");
	}
}

void FDeclare::EnterCellOwners()
{
	try
	{
		int row = m_Owners.GetRow();
		int col = m_Owners.GetCol();
		lDateRow=row;
		lDateCol=col;

		if(row<1) return;
		flxgrd=&m_Owners;

		CString csVal=m_Owners.GetTextMatrix(row,col);
		CDC* pDC = GetDC();
		int lx = pDC->GetDeviceCaps(LOGPIXELSX);
		int ly = pDC->GetDeviceCaps(LOGPIXELSY);
		ReleaseDC(pDC);

		int h = (m_Owners.GetRowHeight(row) * ly) / 1440-2;
		int w = (m_Owners.GetColWidth(col,0) * lx) / 1440-2;

		CRect r;
		m_Owners.GetWindowRect(&r);
		ScreenToClient(&r);
		int t1 = m_Owners.GetCellLeft();
		int t2 = m_Owners.GetCellTop();
		int sx = (t1 * ly) / 1440 + r.left;
		int sy = (t2 * lx) / 1440 + r.top;

		if (col==5) //date
		{
			
			if(csVal!="") m_Date.SetText(csVal);
			m_Date.SetWindowPos(NULL, sx+2, sy, w, h, SWP_SHOWWINDOW | SWP_NOSIZE);
			m_Date.ShowWindow(SW_SHOW);
			m_Button.SetWindowPos(NULL, sx-1+w-18, sy-1, 18, h, SWP_SHOWWINDOW );
			m_Button.ShowWindow(SW_SHOW);
			m_Date.SetFocus();
		}
		else 
		{
			m_Edit.SetWindowText(csVal);
			m_Edit.SetSel(0,-1);
			m_Edit.SetWindowPos(NULL, sx+2, sy, w-2, h, SWP_SHOWWINDOW );
			m_Edit.ShowWindow(SW_SHOW);
			m_Edit.SetFocus();
		}
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Decl.OnEnterOwner");
	}
}

void FDeclare::EnterCellRefusers()
{
	try
	{
		flxgrd=&m_Refusers;
		int row = m_Refusers.GetRow();
		int col = m_Refusers.GetCol();
		lDateRow=row;
		lDateCol=col;
		if(row<1) return;
		
		CString csVal=m_Refusers.GetTextMatrix(row,col);
		CDC* pDC = GetDC();
		int lx = pDC->GetDeviceCaps(LOGPIXELSX);
		int ly = pDC->GetDeviceCaps(LOGPIXELSY);
		ReleaseDC(pDC);

		int h = (m_Refusers.GetRowHeight(row) * ly) / 1440-2;
		int w = (m_Refusers.GetColWidth(col,0) * lx) / 1440-2;

		CRect r;
		m_Refusers.GetWindowRect(&r);
		ScreenToClient(&r);
		int t1 = m_Refusers.GetCellLeft();
		int t2 = m_Refusers.GetCellTop();
		int sx = (t1 * ly) / 1440 + r.left;
		int sy = (t2 * lx) / 1440 + r.top;

		if (col==4) //date
		{
			
			if(csVal!="") m_Date.SetText(csVal);
			m_Date.SetWindowPos(NULL, sx+2, sy, w, h, SWP_SHOWWINDOW | SWP_NOSIZE);
			m_Date.ShowWindow(SW_SHOW);
			m_Button.SetWindowPos(NULL, sx-1+w-18, sy-1, 18, h, SWP_SHOWWINDOW );
			m_Button.ShowWindow(SW_SHOW);
			m_Date.SetFocus();
		}
		else 
		{
			m_Edit.SetWindowText(csVal);
			m_Edit.SetSel(0,-1);
			m_Edit.SetWindowPos(NULL, sx+2, sy, w-2, h, SWP_SHOWWINDOW );
			m_Edit.ShowWindow(SW_SHOW);
			m_Edit.SetFocus();
		}
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Decl.onEnterRefuser");
	}
}

void FDeclare::OnRowColChangeOwners() 
{
	m_bCellSelected=TRUE;
	
}

void FDeclare::OnClickOwners() 
{
	if(!m_bCellSelected)
		EnterCellOwners();
	m_bCellSelected=FALSE;
	
}

void FDeclare::OnKeyDownOwners(short FAR* KeyCode, short Shift) 
{
	if(*KeyCode==VK_SUBTRACT)
		OnOwnerRemove();
	if( ((*KeyCode>=0x41)&&(*KeyCode<=0x5A)) || ((*KeyCode>=0x30)&&(*KeyCode<=0x39))
		|| (*KeyCode>=0x60)&&(*KeyCode<=0x69))
	{
		EnterCellOwners();
		if(this->GetDlgItem(IDC_TMPEDIT)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPEDIT)->PostMessage(WM_KEYDOWN,*KeyCode,0l);
		if(this->GetDlgItem(IDC_TMPDATE)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPDATE)->PostMessage(WM_KEYDOWN,*KeyCode,0l);

	}
	if( *KeyCode==VK_DELETE  )
	{
		EnterCellOwners();
		this->SetDlgItemText(IDC_TMPEDIT,"");
		m_Date.SetText("");
	}
	
}

void FDeclare::OnDblClickOwners() 
{
	EnterCellOwners();
	
}

void FDeclare::OnDblClickRefusers() 
{
	EnterCellRefusers();
	
}

void FDeclare::OnKeyDownRefusers(short FAR* KeyCode, short Shift) 
{
	if(*KeyCode==VK_SUBTRACT)
		OnRefuserRemove();
	if( ((*KeyCode>=0x41)&&(*KeyCode<=0x5A)) || ((*KeyCode>=0x30)&&(*KeyCode<=0x39))
		|| (*KeyCode>=0x60)&&(*KeyCode<=0x69))
	{
		EnterCellRefusers();
		if(this->GetDlgItem(IDC_TMPEDIT)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPEDIT)->PostMessage(WM_KEYDOWN,*KeyCode,0l);
		if(this->GetDlgItem(IDC_TMPDATE)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPDATE)->PostMessage(WM_KEYDOWN,*KeyCode,0l);

	}
	if( *KeyCode==VK_DELETE  )
	{
		EnterCellRefusers();
		this->SetDlgItemText(IDC_TMPEDIT,"");
		m_Date.SetText("");
	}
	
}

void FDeclare::OnRowColChangeRefusers() 
{
	m_bCellSelected=TRUE;
	
}

void FDeclare::OnClickRefusers() 
{
	if(!m_bCellSelected)
		EnterCellRefusers();
	m_bCellSelected=FALSE;
	
}

BOOL FDeclare::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	/// иконки
	CButton* but_add=(CButton*) GetDlgItem(IDC_OWNER_ADD);
	CButton* but_remove=(CButton*) GetDlgItem(IDC_OWNER_REMOVE);
		
	HICON hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_P_ADD),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_remove=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_P_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	
	but_add->SetIcon( hicon_add ); 
	but_remove->SetIcon( hicon_remove ); 
	

	but_add=(CButton*) GetDlgItem(IDC_REFUSER_ADD);
	but_remove=(CButton*) GetDlgItem(IDC_REFUSER_REMOVE);
		
	but_add->SetIcon( hicon_add ); 
	but_remove->SetIcon( hicon_remove );
	
	hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CALENDAR),IMAGE_ICON,16,16, LR_SHARED);
	m_Button.SetIcon( hicon_add ); 
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_OWNER_ADD),"Добавить владельца");
	m_ToolTip->AddTool(GetDlgItem(IDC_OWNER_REMOVE),"Удалить владельца");
	m_ToolTip->AddTool(GetDlgItem(IDC_REFUSER_ADD),"Добавить отказника");
	m_ToolTip->AddTool(GetDlgItem(IDC_REFUSER_REMOVE),"Удалить отказника");
	m_ToolTip->Activate(TRUE);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

BOOL FDeclare::DestroyWindow() 
{
	
	flxgrd=NULL;
	return CDialog::DestroyWindow();
}
