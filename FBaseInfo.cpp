// FBaseInfo.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FBaseInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FBaseInfo dialog


FBaseInfo::FBaseInfo(CWnd* pParent /*=NULL*/)
	: CDialog(FBaseInfo::IDD, pParent)
{
	//{{AFX_DATA_INIT(FBaseInfo)
	m_Date = COleDateTime::GetCurrentTime();
	m_csInfo = _T("");
	//}}AFX_DATA_INIT
}


void FBaseInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FBaseInfo)
	DDX_DateTimeCtrl(pDX, IDC_DATE, m_Date);
	DDX_Control(pDX, IDC_LIST, m_List);
	DDX_Text(pDX, IDC_INFO, m_csInfo);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FBaseInfo, CDialog)
	//{{AFX_MSG_MAP(FBaseInfo)
	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_DATE, OnDatetimechangeDate)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FBaseInfo message handlers

void FBaseInfo::OnDatetimechangeDate(NMHDR* pNMHDR, LRESULT* pResult) 
{
	Show();
	
	*pResult = 0;
}

void FBaseInfo::Show()
{
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	//CADOFieldInfo info;
	CADOCommand pCmd(bt->GetDB(), "mGetBaseInfo");
	CString csVal;
	long row=0;
	long lSum=0;
	m_List.BeginWaitCursor();
	UpdateData();
	pCmd.AddParameter("Date_",CADORecordset::typeDate,
				CADOParameter::paramInput,12,m_Date.Format(VAR_DATEVALUEONLY));
	if(!bt->GetRS()->Execute(&pCmd)) return;
	m_List.SetRedraw(FALSE);
	m_List.Clear();
	// оформление грида
	csVal.Format("Количество договоров: %d", bt->GetRecordsCount());
	SetDlgItemText(IDC_INFO,csVal);
	m_List.SetRefDataSource(NULL);
	m_List.SetRefDataSource((LPUNKNOWN) bt->GetRS()->m_pRecordset);
	m_List.SetRefDataSource(NULL);
	m_List.SetColWidth(0,0,100);
	for(int i=0; i<bt->GetRS()->GetFieldCount(); i++)
	{
		//bt->GetRS()->GetFieldInfo(i,&info);
		//m_Data.SetTextMatrix(0,i+1,info.m_strName);
		if(i!=0) m_List.SetColWidth(i+1,0,3100);
		else m_List.SetColWidth(i+1,0,1200);
	}
	/*//данные
	while(!bt->GetRS()->IsEof())
	{
		for(long l=0; l<bt->GetRS()->GetFieldCount(); ++l)
		{
			csVal=bt->GetStringValue(l);
			csVal.TrimLeft(); csVal.TrimRight();
			if(csVal=="") csVal="Не определено";
			m_Data.SetTextMatrix((row)+1,l+1,csVal);
			//if(info.m_nType==)
			lSum+=atol(csVal);
		}
		row++;
		bt->GetRS()->MoveNext();
	}
	if(lSum!=0)
	{
		m_Data.SetRows(bt->GetRecordsCount()+2);
		m_Data.SetTextMatrix(row+1,1,"Итого");
		m_Data.SetRow(row+1);
		m_Data.SetCol(1);
		m_Data.SetCellFontBold(TRUE);
		m_Data.SetCellFontItalic(TRUE);
		csVal.Format("%d",lSum);
		m_Data.SetTextMatrix((row)+1,bt->GetRS()->GetFieldCount(),csVal);
		m_Data.SetCol(bt->GetRS()->GetFieldCount());
		m_Data.SetCellFontBold(TRUE);
		m_Data.SetCellFontUnderline(TRUE);
	}*/
	m_List.SetRedraw(TRUE);
	m_List.Refresh();
	m_List.EndWaitCursor();
}

void FBaseInfo::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	Show();
	
}
