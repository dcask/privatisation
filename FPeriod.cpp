// FPeriod.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FPeriod.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FPeriod dialog


FPeriod::FPeriod(CWnd* pParent /*=NULL*/)
	: CDialog(FPeriod::IDD, pParent)
{
	//{{AFX_DATA_INIT(FPeriod)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT

	m_BeginPeriod=((CPrivatisationApp*)AfxGetApp())->m_Begin;
	m_EndPeriod=((CPrivatisationApp*)AfxGetApp())->m_End;
}


void FPeriod::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FPeriod)
	DDX_Control(pDX, IDC_BEGIN, m_Begin);
	DDX_Control(pDX, IDC_END, m_End);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FPeriod, CDialog)
	//{{AFX_MSG_MAP(FPeriod)
	ON_BN_CLICKED(IDC_BEGIN_B, OnBeginB)
	ON_BN_CLICKED(IDC_END_B, OnEndB)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FPeriod message handlers

void FPeriod::OnBeginB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_BEGIN_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_BEGIN);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FPeriod::OnEndB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_END_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_END);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FPeriod::OnShowWindow(BOOL bShow, UINT nStatus) 
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

void FPeriod::OnOK() 
{
	CString csVal;
	csVal=m_Begin.GetText();
	if( !m_BeginPeriod.ParseDateTime(csVal)) return;
	csVal=m_End.GetText();
	if( !m_EndPeriod.ParseDateTime(csVal) ) return ;
	((CPrivatisationApp*)AfxGetApp())->m_Begin=m_BeginPeriod;
	((CPrivatisationApp*)AfxGetApp())->m_End=m_EndPeriod;
	CDialog::OnOK();
}

BOOL FPeriod::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
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
