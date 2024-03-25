// FPeriodBH.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FPeriodBH.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FPeriodBH dialog


FPeriodBH::FPeriodBH(CWnd* pParent /*=NULL*/)
	: CDialog(FPeriodBH::IDD, pParent)
{
	//{{AFX_DATA_INIT(FPeriodBH)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_BeginPeriod=((CPrivatisationApp*)AfxGetApp())->m_Begin;
	m_EndPeriod=((CPrivatisationApp*)AfxGetApp())->m_End;
}


void FPeriodBH::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FPeriodBH)
	DDX_Control(pDX, IDC_BH, m_BH);
	DDX_Control(pDX, IDC_BEGIN, m_Begin);
	DDX_Control(pDX, IDC_END, m_End);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FPeriodBH, CDialog)
	//{{AFX_MSG_MAP(FPeriodBH)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_BEGIN_B, OnBeginB)
	ON_BN_CLICKED(IDC_END_B, OnEndB)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FPeriodBH message handlers

void FPeriodBH::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	
	m_Begin.SetText(m_BeginPeriod.Format("%d-%m-%Y"));
	m_End.SetText(m_EndPeriod.Format("%d-%m-%Y"));
	m_Begin.SetSelStart(0);
	m_Begin.SetSelLength(m_Begin.GetText().GetLength());
	m_End.SetSelStart(0);
	m_End.SetSelLength(m_Begin.GetText().GetLength());
	GetDlgItem(IDC_BEGIN)->SetFocus();	
}

void FPeriodBH::OnBeginB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_BEGIN_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_BEGIN);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FPeriodBH::OnEndB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_END_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_END);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FPeriodBH::OnOK() 
{
	CString csVal;
	csVal=m_Begin.GetText();
	if( !m_BeginPeriod.ParseDateTime(csVal)) return;
	csVal=m_End.GetText();
	if( !m_EndPeriod.ParseDateTime(csVal) ) return ;
	m_lBH=m_BH.GetItemData(m_BH.GetCurSel());
	m_BH.GetLBText(m_BH.GetCurSel(),m_csBH);
	if(m_lBH==-1) return;
	((CPrivatisationApp*)AfxGetApp())->m_Begin=m_BeginPeriod;
	((CPrivatisationApp*)AfxGetApp())->m_End=m_EndPeriod;
	CDialog::OnOK();
}

BOOL FPeriodBH::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_BH),"[mComboBH]");
	m_hIcon = AfxGetApp()->LoadIcon(IDI_CALENDAR);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку
	CButton* but=(CButton*) GetDlgItem(IDC_BEGIN_B);
	HICON hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CALENDAR),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon ); 
	but=(CButton*) GetDlgItem(IDC_END_B);
	but->SetIcon( hicon ); 
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
