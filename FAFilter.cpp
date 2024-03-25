// FAFilter.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FAFilter.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FAFilter dialog


FAFilter::FAFilter(CWnd* pParent /*=NULL*/)
	: CDialog(FAFilter::IDD, pParent)
{
	//{{AFX_DATA_INIT(FAFilter)
	m_csPart = _T("");
	m_csExtFlat = _T("");
	m_csBuilding = _T("");
	m_csFlatNum = _T("");
	//}}AFX_DATA_INIT
}


void FAFilter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FAFilter)
	DDX_Control(pDX, IDC_STREET, m_Street);
	DDX_Text(pDX, IDC_PART, m_csPart);
	DDX_Control(pDX, IDC_LIST, m_List);
	DDX_Text(pDX, IDC_EXTFLAT, m_csExtFlat);
	DDX_Text(pDX, IDC_BUILDING, m_csBuilding);
	DDX_Text(pDX, IDC_FLAT, m_csFlatNum);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FAFilter, CDialog)
	//{{AFX_MSG_MAP(FAFilter)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_REMOVE, OnRemove)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FAFilter message handlers

void FAFilter::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;

	CButton* but_add=(CButton*) GetDlgItem(IDC_ADD);
	CButton* but_remove=(CButton*) GetDlgItem(IDC_REMOVE);
		
	HICON hicon_add=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_ADD),IMAGE_ICON,16,16, LR_SHARED);
	HICON hicon_remove=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_REMOVE),IMAGE_ICON,16,16, LR_SHARED);
	
	but_add->SetIcon( hicon_add ); 
	but_remove->SetIcon( hicon_remove ); 
	
}

BOOL FAFilter::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CString csVal;
	/*подготовка таблицы*/
	m_List.SetFixedCols(0);
	m_List.SetFixedRows(1);
	m_List.SetCols(0,2);
	m_List.SetRows(2);
	m_List.SetColWidth(0,0,0);
	m_List.SetColWidth(1,0,3800); m_List.SetColAlignment(1,0);
	m_List.SetTextMatrix(0,1,"Адрес");
		
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_STREET),"[mComboStreet]");
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ADDRESS);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FAFilter::OnAdd() 
{
	if(!UpdateData()) return;
	if(m_List.GetTextMatrix(m_List.GetRows()-1,0)!="" ) m_List.SetRows(m_List.GetRows()+1);
	long pos=m_List.GetRows()-1;
	CString	csVal,csVal1,csVal2;
	m_List.SetRow(pos);
	//m_List.SetRowData(m_List.GetRows()-1,-1);
	m_List.SetCol(1);
	csVal=" (1=1";
	if(m_Street.GetCurSel()!=-1)
	{
		csVal1.Format(" AND @S=%d ",m_Street.GetItemData(m_Street.GetCurSel()));
		csVal+=csVal1;
		m_Street.GetLBText(m_Street.GetCurSel(),csVal2);
	}
	if(m_csBuilding != _T(""))
	{
		csVal1.Format(" AND @B=%d ",atoi(m_csBuilding));
		csVal+=csVal1;
		csVal2+=" д. "+m_csBuilding;
	}
	if(m_csPart != _T(""))
	{
		csVal1.Format(" AND @P='%s' ",m_csPart);
		csVal+=csVal1;
		csVal2+=" "+m_csPart;
	}
	if(m_csFlatNum != _T(""))
	{
		csVal1.Format(" AND @F=%d ",atoi(m_csFlatNum));
		csVal+=csVal1;
		csVal2+=" кв. "+m_csFlatNum;
	}
	if(m_csExtFlat != _T(""))
	{
		csVal1.Format(" AND @E='%s' ",m_csExtFlat);
		csVal+=csVal1;
		csVal2+=" "+m_csExtFlat;
	}
	csVal+=") ";
	m_List.SetFocus();
	m_List.SetTextMatrix(pos,0,csVal);
	m_List.SetTextMatrix( pos,1,csVal2);
	
}

void FAFilter::OnRemove() 
{
	long pos=m_List.GetRow();
	m_List.RemoveItem(pos);
	
}

void FAFilter::OnOK() 
{
	OnAdd();
	m_csFilter=" "+m_List.GetTextMatrix(1,0)+" ";
	for(long l=2; l<m_List.GetRows(); ++l)
			m_csFilter+="OR "+m_List.GetTextMatrix(l,0)+" ";
	CDialog::OnOK();
}
