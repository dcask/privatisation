// FNewAddress.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FNewAddress.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FNewAddress dialog


FNewAddress::FNewAddress(CWnd* pParent /*=NULL*/)
	: CDialog(FNewAddress::IDD, pParent)
{
	//{{AFX_DATA_INIT(FNewAddress)
	m_iBuilding = 0;
	m_csPart = _T("");
	//}}AFX_DATA_INIT
}


void FNewAddress::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FNewAddress)
	DDX_Control(pDX, IDC_STREET, m_Street);
	DDX_Control(pDX, IDC_DISTRICT, m_District);
	DDX_Text(pDX, IDC_BUILDING, m_iBuilding);
	DDX_Text(pDX, IDC_PART, m_csPart);
	//}}AFX_DATA_MAP
	MyDDX_Text(pDX, IDC_BUILDING, m_iBuilding);
}


BEGIN_MESSAGE_MAP(FNewAddress, CDialog)
	//{{AFX_MSG_MAP(FNewAddress)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FNewAddress message handlers

void FNewAddress::OnOK() 
{
	if(!UpdateData()) return;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mSetAddress]");
	//CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;

	int user=((CPrivatisationApp*) AfxGetApp())->m_iUserID;

	try{
		//
		
		pCmd.AddParameter("DistrictID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int), (int) m_District.GetItemData(m_District.GetCurSel())  );
		// ИД улицы
		pCmd.AddParameter("StreetID",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long), (long) m_Street.GetItemData(m_Street.GetCurSel()) );
		// дом
		pCmd.AddParameter("BuildNum",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iBuilding);
		// корпус
		pCmd.AddParameter("NumPart",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csPart.GetLength()!=0?m_csPart.GetLength():1,m_csPart);
		
		pCmd.AddParameter("User",CADORecordset::typeInteger,
			CADOParameter::paramInput, sizeof(int),((CPrivatisationApp*) AfxGetApp())->m_iUserID);

		if(!bt->Execute(&pCmd))
			throw(1);
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка внесения");
	}
	
	CDialog::OnOK();
}

void FNewAddress::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_STREET),"[mComboStreet]");
	bt->LoadComboBox(GetDlgItem(IDC_DISTRICT),"[mComboDistrict]");
	
}
