// FReplica.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FReplica.h"
#include "StrArray.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FReplica dialog


FReplica::FReplica(CWnd* pParent /*=NULL*/)
	: FChildDialog(FReplica::IDD, pParent)
{
	//{{AFX_DATA_INIT(FReplica)
	m_csComments = _T("");
	//}}AFX_DATA_INIT
	m_bCellSelected=FALSE;
	m_iRowSel=0;
}


void FReplica::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FReplica)
	DDX_Control(pDX, IDC_TMPDATE_B, m_Button);
	DDX_Control(pDX, IDC_DATA, m_Dates);
	DDX_Text(pDX, IDC_COMMENTS, m_csComments);
	DDX_Control(pDX, IDC_TMPDATE, m_Date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FReplica, CDialog)
	//{{AFX_MSG_MAP(FReplica)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_REMOVE, OnRemove)
	ON_BN_CLICKED(IDC_TMPDATE_B, OnTmpdateB)
	ON_EN_KILLFOCUS(IDC_COMMENTS, OnKillfocusComments)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FReplica message handlers

void FReplica::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	BOOL bSaved=m_DocData->m_bSaved;
	/////////////////////
	long size=m_DocData->m_Replica.GetSize();
	m_Dates.Clear();
	m_Dates.SetCols(0,1);
	//m_Dates.SetRows(size);
	if(size==0) m_Dates.SetRows(1);
	m_Dates.SetRowData(0,long(NULL)); // начальные значения данных...пусты
	
	m_Dates.SetColWidth(0,0,3850); m_Dates.SetColAlignment(0,0);
	
	ContractReplica* oReplica;
	int pos=0;
	CString csVal;
	for(int i=0; i<size; i++)
	{
		oReplica=(ContractReplica*)m_DocData->m_Replica.GetAt(i);
		if(oReplica->m_iStat<2)
		{
			csVal=oReplica->m_Date.Format("%d-%m-%Y");
			csVal+="   '";
			csVal+=oReplica->m_csComments.Left(30);
			if(m_csComments.GetLength()>30) csVal+="...";
			csVal+="'";
			m_Dates.SetRows(pos+1);
			m_Dates.SetTextMatrix(pos,0, csVal);
			m_Dates.SetRowData(pos,long(oReplica));
			pos++;
		}
	}
	m_Dates.SetRow(0);
	OnRowColChangeData();
	m_Dates.SetFocus();
	m_DocData->m_bSaved=bSaved;
}

BOOL FReplica::PreTranslateMessage(MSG* pMsg) 
{
	CString csVal;
	COleDateTime date_tmp;

	int focus=0;
		
	if(GetFocus()) 
			focus=GetFocus()->GetDlgCtrlID();
	else
		return FChildDialog::PreTranslateMessage(pMsg);
	
	//клавиша ВНИЗ
	if(WM_KEYDOWN == pMsg->message && VK_DOWN==pMsg->wParam)
	{
		switch (focus)
		{
			case IDC_DATA:
				if(m_Dates.GetRow()==m_Dates.GetRows()-1)
					OnAdd() ;
				break;
			case IDC_TMPDATE:
				KillFocusDate();
				if(m_Dates.GetRow()==m_Dates.GetRows()-1)
					OnAdd();
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
				m_Dates.SetText( m_Dates.GetTextMatrix(m_Dates.GetRow(),m_Dates.GetCol() ) );
				KillFocusDate();
				m_Dates.SetFocus();
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
			case IDC_DATA:
				EnterCell();
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
			case IDC_COMMENTS:
				this->GetParent()->GetParent()->GetDlgItem(IDC_COMMENTS)->SetFocus();
				break;
			case IDC_TMPDATE:
				col=m_Dates.GetCol();
				KillFocusDate();
				m_Dates.SetCol(col+2<m_Dates.GetCols(0)?col+1:col);
				GetDlgItem(IDC_COMMENTS)->SetFocus();
				break;
			default:
				return FChildDialog::PreTranslateMessage(pMsg);
				break;
		}
		return TRUE;
    }/**/
	return FChildDialog::PreTranslateMessage(pMsg);
}

BEGIN_EVENTSINK_MAP(FReplica, CDialog)
    //{{AFX_EVENTSINK_MAP(FReplica)
	ON_EVENT(FReplica, IDC_DATA, 70 /* RowColChange */, OnRowColChangeData, VTS_NONE)
	ON_EVENT(FReplica, IDC_DATA, -600 /* Click */, OnClickData, VTS_NONE)
	ON_EVENT(FReplica, IDC_DATA, -601 /* DblClick */, OnDblClickData, VTS_NONE)
	ON_EVENT(FReplica, IDC_DATA, -602 /* KeyDown */, OnKeyDownData, VTS_PI2 VTS_I2)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void FReplica::OnRowColChangeData() 
{
	ContractReplica* oReplica;
	int row=m_Dates.GetRow();
	m_iRowSel=row;
	//int pos=m_Dates.GetRowData(row);
	if(m_Dates.GetRowData(row)!=long(NULL))
	{
		oReplica=(ContractReplica*)m_Dates.GetRowData(row);
		m_csComments=oReplica->m_csComments;
		SetDlgItemText(IDC_INFO,"Комментарии к дубликату от "+oReplica->m_Date.Format("%d-%m-%Y"));
		CEdit* ed=(CEdit*) GetDlgItem(IDC_COMMENTS);
		ed->SetReadOnly(FALSE);
	}
	else
	{
		SetDlgItemText(IDC_INFO,"Комментарии к дубликату");
		m_csComments=_T("");
		CEdit* ed=(CEdit*) GetDlgItem(IDC_COMMENTS);
		ed->SetReadOnly(TRUE);
	}
	UpdateData(FALSE);
	m_bCellSelected=TRUE;
}

void FReplica::OnClickData() 
{
	if(!m_bCellSelected)
		EnterCell();
	m_bCellSelected=FALSE;
	
}

void FReplica::OnDblClickData() 
{
	EnterCell();
	
}

void FReplica::OnKeyDownData(short FAR* KeyCode, short Shift) 
{
	if(*KeyCode==VK_SUBTRACT)
		OnRemove();
	if(*KeyCode==VK_ADD)
		OnAdd();
	/*if( ((*KeyCode>=0x41)&&(*KeyCode<=0x5A)) || ((*KeyCode>=0x30)&&(*KeyCode<=0x39))
		|| (*KeyCode>=0x60)&&(*KeyCode<=0x69))
	{
		EnterCell();
		if(this->GetDlgItem(IDC_TMPEDIT)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPEDIT)->PostMessage(WM_KEYDOWN,*KeyCode,0l);
		if(this->GetDlgItem(IDC_TMPDATE)->IsWindowVisible())
			this->GetDlgItem(IDC_TMPDATE)->PostMessage(WM_KEYDOWN,*KeyCode,0l);

	}*/
	if( *KeyCode==VK_DELETE  )
	{
		EnterCell();
		this->SetDlgItemText(IDC_TMPEDIT,"");
		m_Date.SetText("");
	}
	
}

void FReplica::OnAdd() 
{
	m_Dates.SetRows(m_Dates.GetRows()+1);
	m_Dates.SetRow(m_Dates.GetRows()-1);
	m_Dates.SetRowData(m_Dates.GetRows()-1,long(NULL));
	m_Dates.SetCol(0);
	m_Dates.SetFocus();
	OnRowColChangeData();
	OnClickData();
	m_Dates.SetFocus();
	m_DocData->m_bSaved=FALSE;
}

void FReplica::OnRemove() 
{
	int pos=m_Dates.GetRow();
	if(pos<0) return;
	if(m_Dates.GetRowData(pos)==long(NULL))
	{
		if(pos==0) return;
		m_Dates.RemoveItem(pos);
		m_iRowSel=m_Dates.GetRow();
		return;
	}
	ContractReplica* oReplica=(ContractReplica*) m_Dates.GetRowData(pos);
	if(m_Dates.GetRows()==1)
	{
		m_Dates.SetTextMatrix(0,0,"");
		m_Dates.SetRowData(0,long(NULL));
		m_Dates.SetRowSel(0);
		OnRowColChangeData();
	}
	else
	{
		m_Dates.RemoveItem(pos);
		m_Dates.SetRowSel(pos-1);
		OnRowColChangeData();
	}
	
	//если старый, то помечаем на удаление, иначе удаляем из массива
	if(oReplica->m_iStat==1)
	{

		for(int i=0; i< m_DocData->m_Replica.GetSize() ;++i)
			if((ContractReplica*) (m_DocData->m_Replica.GetAt(i))==oReplica)
			{
				m_DocData->m_Replica.RemoveAt(i);
				delete oReplica;
				break;
			}

	}
	else
		oReplica->m_iStat=2;
	// если последняя строка, добавляем пустую в конец
	m_DocData->m_bSaved=FALSE;
	m_Dates.SetFocus();
	
}

void FReplica::EnterCell()
{
	try
	{
		int row = m_Dates.GetRow();

		CString csVal=m_Dates.GetTextMatrix(row,0);
		CDC* pDC = GetDC();
		int lx = pDC->GetDeviceCaps(LOGPIXELSX);
		int ly = pDC->GetDeviceCaps(LOGPIXELSY);
		ReleaseDC(pDC);

		int h = (m_Dates.GetRowHeight(row) * ly) / 1440-2;
		int w = (m_Dates.GetColWidth(0,0) * lx) / 1440-2;

		CRect r;
		m_Dates.GetWindowRect(&r);
		ScreenToClient(&r);
		int t1 = m_Dates.GetCellLeft();
		int t2 = m_Dates.GetCellTop();
		int sx = (t1 * ly) / 1440 + r.left;
		int sy = (t2 * lx) / 1440 + r.top;

		if(csVal!="") m_Date.SetText(csVal.Left(10));
		else m_Date.SetText(COleDateTime::GetCurrentTime().Format("%d-%m-%Y"));
		m_Date.SetWindowPos(NULL, sx+2, sy, w, h, SWP_SHOWWINDOW | SWP_NOSIZE);
		m_Date.ShowWindow(SW_SHOW);
		m_Button.SetWindowPos(NULL, sx-1+w-18, sy-1, 18, h, SWP_SHOWWINDOW );
		m_Button.ShowWindow(SW_SHOW);
		m_Date.SetFocus();
	}
	catch(...)
	{
		AfxMessageBox("Ошибка");
	}
}

void FReplica::KillFocusDate()
{
	UpdateData();
	COleDateTime date;
	ContractReplica* oReplica;
	CString csVal=m_Date.GetFormattedText();
	if(!m_Date.IsWindowVisible()) return;
	m_Date.ShowWindow(SW_HIDE);
	m_Button.ShowWindow(SW_HIDE);
	if(date.ParseDateTime(csVal))
	{
		//если ещё нет элемента в массиве
		if(m_Dates.GetRowData(m_iRowSel)==long(NULL))
		{
			oReplica=new ContractReplica();
			oReplica->m_lID=-1;
			oReplica->m_iStat=1;
			m_DocData->m_Replica.Add(oReplica);
			m_Dates.SetRowData(m_iRowSel,/*m_DocData->m_Replica.GetSize()-1*/long(oReplica));
			
		}
		else
			oReplica=(ContractReplica* )m_Dates.GetRowData(m_iRowSel);
		oReplica->m_Date=date;
		csVal+="   '";
		csVal+=oReplica->m_csComments.Left(30); 
		if(m_csComments.GetLength()>30) csVal+="...";
		csVal+="'";
		m_Dates.SetTextMatrix(m_iRowSel,0,csVal);
		SetDlgItemText(IDC_INFO,"Комментарии к дубликату от "+oReplica->m_Date.Format("%d-%m-%Y"));
		CEdit* ed=(CEdit*) GetDlgItem(IDC_COMMENTS);
		ed->SetReadOnly(FALSE);
	}
	m_Date.SetText("");
	//m_Dates.SetFocus();
	m_DocData->m_bSaved=FALSE;
}


BOOL FReplica::OnCommand(WPARAM wParam, LPARAM lParam) 
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
	
	return FChildDialog::OnCommand(wParam, lParam);
}

void FReplica::OnTmpdateB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_TMPDATE_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_TMPDATE);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FReplica::OnKillfocusComments() 
{
	ContractReplica* oReplica;
	CString csVal;
	try
	{
		if(m_iRowSel<0 || ! m_Dates) return;
		///int pos=m_Dates.GetRowData(m_iRowSel);
		if(m_Dates.GetRowData(m_iRowSel)==long(NULL)) return;
		UpdateData();
		
		oReplica=(ContractReplica*) m_Dates.GetRowData(m_iRowSel);
		oReplica->m_csComments=m_csComments;
		csVal=oReplica->m_Date.Format("%d-%m-%Y");
		csVal+="   '";
		csVal+=m_csComments.Left(30);
		if(m_csComments.GetLength()>30) csVal+="...";
		csVal+="'";
		m_Dates.SetTextMatrix(m_iRowSel,0,csVal);
		m_DocData->m_bSaved=FALSE;
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","frepl.onkillfocuscomm");
	}
	
}

BOOL FReplica::Migrate()
{
	m_Dates.SetFocus(); //заставить сбить фокус до уничтожения m_Dates
						//и вызвать OnKillfocusComments() 
	KillFocusDate();
	OnKillfocusComments();
	return TRUE;
}

BOOL FReplica::DestroyWindow() 
{
	m_iRowSel=-1;
	
	return FChildDialog::DestroyWindow();
}

BOOL FReplica::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CButton* but_add=(CButton*) GetDlgItem(IDC_ADD);
	CButton* but_remove=(CButton*) GetDlgItem(IDC_REMOVE);
		
	HICON hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_ADD),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_remove=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	
	but_add->SetIcon( hicon_add ); 
	but_remove->SetIcon( hicon_remove ); 

	hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CALENDAR),IMAGE_ICON,16,16, LR_SHARED);
	m_Button.SetIcon( hicon_add ); 
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_ADD),"Добавить дубликат");
	m_ToolTip->AddTool(GetDlgItem(IDC_REMOVE),"Удалить дубликат");
	m_ToolTip->Activate(TRUE);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
