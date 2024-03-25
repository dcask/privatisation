// FCalendar.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FCalendar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FCalendar dialog


FCalendar::FCalendar(CWnd* pParent /*=NULL*/)
	: CDialog(FCalendar::IDD, pParent)
{
	//{{AFX_DATA_INIT(FCalendar)
	//}}AFX_DATA_INIT
	m_bSelected=FALSE;
}


void FCalendar::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FCalendar)
	DDX_Control(pDX, IDC_CALENDAR, m_Date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FCalendar, CDialog)
	//{{AFX_MSG_MAP(FCalendar)
	ON_NOTIFY(MCN_SELECT, IDC_CALENDAR, OnSelectCalendar)
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FCalendar message handlers

void FCalendar::OnSelectCalendar(NMHDR* pNMHDR, LRESULT* pResult) 
{
	*pResult = 0;
	m_bSelected=TRUE;
	m_mask->SetFocus();
	OnClose();
	EndDialog(IDOK);
	
	
}


void FCalendar::Assign(CButton * butt, CMSMask *mask)
{
	try
	{
		m_butt=butt;
		m_mask=mask;
		m_mask->SetFocus();
		COleDateTime date;
		if(date.ParseDateTime(m_mask->GetText()))
			m_Date.SetCurSel(date);
		else
			m_Date.SetCurSel(COleDateTime::GetCurrentTime());
		CRect r1;
		m_butt->GetWindowRect(&r1);
		int sx = r1.left;//(r.right-r.left);
		int sy = r1.top+20;//(r.bottom-r.top);
		SetWindowPos(NULL, sx-1, sy-1, 0, 0, SWP_SHOWWINDOW | SWP_NOSIZE);
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Assign error");
	}
}

void FCalendar::OnClose() 
{
	try
	{
		if(m_bSelected)
		{
			UpdateData();
			SYSTEMTIME cdate;
			m_Date.GetCurSel(&cdate);
			CString csVal;
			csVal.Format("%2d-%2d-%4d", cdate.wDay, cdate.wMonth, cdate.wYear);
			csVal.Replace(" ","0");
			m_mask->SetText(csVal);
		}
		m_bSelected=FALSE;
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","OnClose Calendar");
	}
	CDialog::OnClose();
}

