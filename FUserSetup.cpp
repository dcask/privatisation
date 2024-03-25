// FUserSetup.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FUserSetup.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FUserSetup dialog


FUserSetup::FUserSetup(CWnd* pParent /*=NULL*/)
	: CDialog(FUserSetup::IDD, pParent)
{
	//{{AFX_DATA_INIT(FUserSetup)
	m_csSign1 = _T("");
	m_csSign2 = _T("");
	m_csUser = _T("");
	//}}AFX_DATA_INIT
}


void FUserSetup::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FUserSetup)
	DDX_Text(pDX, IDC_SIGN1, m_csSign1);
	DDX_Text(pDX, IDC_SIGN2, m_csSign2);
	DDX_Text(pDX, IDC_USER, m_csUser);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FUserSetup, CDialog)
	//{{AFX_MSG_MAP(FUserSetup)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FUserSetup message handlers

void FUserSetup::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	
	m_hIcon = AfxGetApp()->LoadIcon(IDI_OWNER);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку

	m_csUser=((CPrivatisationApp*)AfxGetApp())->m_csUser;
	m_csSign1=((CPrivatisationApp*)AfxGetApp())->m_csUserSign1;
	m_csSign2=((CPrivatisationApp*)AfxGetApp())->m_csUserSign2;
	UpdateData(FALSE);
}


void FUserSetup::OnOK() 
{
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mSetUserData]");
	//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
	UpdateData();
	((CPrivatisationApp*)AfxGetApp())->m_csUserSign1=m_csSign1;
	((CPrivatisationApp*)AfxGetApp())->m_csUserSign2=m_csSign2;
	
	try{
		//
		pCmd.AddParameter("S1",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csSign1.GetLength()!=0 ? m_csSign1.GetLength():1, m_csSign1 );
		pCmd.AddParameter("S2",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csSign2.GetLength()!=0 ? m_csSign2.GetLength():1, m_csSign2 );
		pCmd.AddParameter("ID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int), ((CPrivatisationApp*)AfxGetApp())->m_iUserID);
		
		if(!bt->Execute(&pCmd))
			throw(1);
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка записи");
	}
	
	CDialog::OnOK();
}
