// FAddress.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FAddress.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FAddress dialog


FAddress::FAddress(CWnd* pParent /*=NULL*/)
	: CDialog(FAddress::IDD, pParent)
{
	//{{AFX_DATA_INIT(FAddress)
	m_csPart = _T("");
	m_iBuilding = 0;
	m_iFlatNum = 0;
	//}}AFX_DATA_INIT
}


void FAddress::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FAddress)
	DDX_Control(pDX, IDC_STREET, m_Street);
	DDX_Text(pDX, IDC_PART, m_csPart);
	DDX_Text(pDX, IDC_BUILDING, m_iBuilding);
	DDV_MinMaxInt(pDX, m_iBuilding, 1, 1000);
	DDX_Text(pDX, IDC_FLAT, m_iFlatNum);
	DDV_MinMaxInt(pDX, m_iFlatNum, 1, 1000);
	//}}AFX_DATA_MAP
	MyDDX_Text(pDX, IDC_BUILDING, m_iBuilding);
	MyDDX_Text(pDX, IDC_FLAT, m_iFlatNum);
}


BEGIN_MESSAGE_MAP(FAddress, CDialog)
	//{{AFX_MSG_MAP(FAddress)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FAddress message handlers

void FAddress::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ADDRESS);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку
	m_iBuilding=m_DocData->m_iBuilding;
	m_csPart=m_DocData->m_csBuildingPart;
	m_iFlatNum=m_DocData->m_iFlat;
	
	UpdateData(FALSE);
}

BOOL FAddress::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_STREET),"[mComboStreet]",0,DWORD(m_DocData->m_lStreet));
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FAddress::OnOK() 
{
	m_lStreet=m_Street.GetItemData(m_Street.GetCurSel());
	m_Street.GetLBText(m_Street.GetCurSel(),m_csStreet);
	UpdateData();
	m_DocData->m_lStreet=m_lStreet;
	m_DocData->m_iBuilding=m_iBuilding;
	m_DocData->m_csBuildingPart=m_csPart;
	m_DocData->m_iFlat=m_iFlatNum;
	CDialog::OnOK();
}


