// FContract.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FContract.h"
#include "FBalanceHolder.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FContract dialog


FContract::FContract(CWnd* pParent /*=NULL*/)
	: FChildDialog(FContract::IDD, pParent)
{
	//{{AFX_DATA_INIT(FContract)
	m_csBH = _T("");
	m_iBookNum = 0;
	m_dBuildingCost = 0.0;
	m_dBuildingSqr = 0.0;
	m_dCoef = 0.0;
	m_dFlatCost = 0.0;
	m_dFullSqr = 0.0;
	m_dLiveSqr = 0.0;
	m_dLotCost = 0.0;
	m_iLotNum = 0;
	m_dNorm = 0.0;
	m_dPayment = 0.0;
	m_iRegNum = 0;
	m_iRoomQuantity = 0;
	m_dShareSqr = 0.0;
	//}}AFX_DATA_INIT
}


void FContract::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	CString csVal;
	GetDlgItemText(IDC_BUILDING_COST,csVal);
	if(csVal=="") SetDlgItemText(IDC_BUILDING_COST,"0");
	GetDlgItemText(IDC_BUILDING_SQR,csVal);
	if(csVal=="") SetDlgItemText(IDC_BUILDING_SQR,"0");
	GetDlgItemText(IDC_COEF,csVal);
	if(csVal=="") SetDlgItemText(IDC_COEF,"0");
	GetDlgItemText(IDC_FLAT_COST,csVal);
	if(csVal=="") SetDlgItemText(IDC_FLAT_COST,"0");
	GetDlgItemText(IDC_FULL_SQR,csVal);
	if(csVal=="") SetDlgItemText(IDC_FULL_SQR,"0");
	GetDlgItemText(IDC_LIVE_SQR,csVal);
	if(csVal=="") SetDlgItemText(IDC_LIVE_SQR,"0");
	GetDlgItemText(IDC_LOT_COST,csVal);
	if(csVal=="") SetDlgItemText(IDC_LOT_COST,"0");
	GetDlgItemText(IDC_NORM,csVal);
	if(csVal=="") SetDlgItemText(IDC_NORM,"0");
	GetDlgItemText(IDC_PAYMENT,csVal);
	if(csVal=="") SetDlgItemText(IDC_PAYMENT,"0");
	GetDlgItemText(IDC_SHARE_SQR,csVal);
	if(csVal=="") SetDlgItemText(IDC_SHARE_SQR,"0");
	GetDlgItemText(IDC_LOT_NUM,csVal);
	if(csVal=="") SetDlgItemText(IDC_LOT_NUM,"0");
	GetDlgItemText(IDC_BOOK_NUM,csVal);
	if(csVal=="") SetDlgItemText(IDC_BOOK_NUM,"0");
	GetDlgItemText(IDC_REG_NUM,csVal);
	if(csVal=="") SetDlgItemText(IDC_REG_NUM,"0");
	GetDlgItemText(IDC_ROOM_QUANT,csVal);
	if(csVal=="") SetDlgItemText(IDC_ROOM_QUANT,"0");
	
	//{{AFX_DATA_MAP(FContract)
	DDX_Control(pDX, IDC_TRANS, m_Trans);
	DDX_Control(pDX, IDC_DATE_ACT, m_DateAct);
	DDX_Control(pDX, IDC_DATE_BUILT, m_DateBuilt);
	DDX_Control(pDX, IDC_DATE_CANCEL, m_DateCancel);
	DDX_Control(pDX, IDC_DATE_LOT, m_DateLot);
	DDX_Control(pDX, IDC_DATE_RECORD, m_DateRecord);
	DDX_Control(pDX, IDC_DATE_REG, m_DateReg);
	DDX_Text(pDX, IDC_BH, m_csBH);
	DDX_Text(pDX, IDC_BOOK_NUM, m_iBookNum);
	DDX_Text(pDX, IDC_BUILDING_COST, m_dBuildingCost);
	DDX_Text(pDX, IDC_BUILDING_SQR, m_dBuildingSqr);
	DDX_Text(pDX, IDC_COEF, m_dCoef);
	DDX_Text(pDX, IDC_FLAT_COST, m_dFlatCost);
	DDX_Text(pDX, IDC_FULL_SQR, m_dFullSqr);
	DDX_Text(pDX, IDC_LIVE_SQR, m_dLiveSqr);
	DDX_Text(pDX, IDC_LOT_COST, m_dLotCost);
	DDX_Text(pDX, IDC_LOT_NUM, m_iLotNum);
	DDX_Text(pDX, IDC_NORM, m_dNorm);
	DDX_Text(pDX, IDC_PAYMENT, m_dPayment);
	DDX_Text(pDX, IDC_REG_NUM, m_iRegNum);
	DDX_Text(pDX, IDC_ROOM_QUANT, m_iRoomQuantity);
	DDX_Text(pDX, IDC_SHARE_SQR, m_dShareSqr);
	//}}AFX_DATA_MAP
	MyDDX_Text(pDX, IDC_BUILDING_COST, m_dBuildingCost);
	MyDDX_Text(pDX, IDC_BUILDING_SQR, m_dBuildingSqr);
	MyDDX_Text(pDX, IDC_COEF, m_dCoef);
	MyDDX_Text(pDX, IDC_FLAT_COST, m_dFlatCost);
	MyDDX_Text(pDX, IDC_FULL_SQR, m_dFullSqr);
	MyDDX_Text(pDX, IDC_LIVE_SQR, m_dLiveSqr);
	MyDDX_Text(pDX, IDC_LOT_COST, m_dLotCost);
	MyDDX_Text(pDX, IDC_NORM, m_dNorm);
	MyDDX_Text(pDX, IDC_PAYMENT, m_dPayment);
	MyDDX_Text(pDX, IDC_SHARE_SQR, m_dShareSqr);
	MyDDX_Date(pDX, IDC_DATE_ACT, m_DateAct);
	MyDDX_Date(pDX, IDC_DATE_BUILT, m_DateBuilt);
	MyDDX_Date(pDX, IDC_DATE_CANCEL, m_DateCancel);
	MyDDX_Date(pDX, IDC_DATE_LOT, m_DateLot);
	MyDDX_Date(pDX, IDC_DATE_RECORD, m_DateRecord);
	MyDDX_Date(pDX, IDC_DATE_REG, m_DateReg);
	MyDDX_Text(pDX, IDC_LOT_NUM, m_iLotNum);
	MyDDX_Text(pDX, IDC_BOOK_NUM, m_iBookNum);
	MyDDX_Text(pDX, IDC_REG_NUM, m_iRegNum);
	MyDDX_Text(pDX, IDC_ROOM_QUANT, m_iRoomQuantity);
}


BEGIN_MESSAGE_MAP(FContract, CDialog)
	//{{AFX_MSG_MAP(FContract)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_DATE_BUILT_B, OnDateBuiltB)
	ON_BN_CLICKED(IDC_DATE_LOT_B, OnDateLotB)
	ON_BN_CLICKED(IDC_DATE_REG_B, OnDateRegB)
	ON_BN_CLICKED(IDC_DATE_RECORD_B, OnDateRecordB)
	ON_BN_CLICKED(IDC_DATE_ACT_B, OnDateActB)
	ON_BN_CLICKED(IDC_BH_B, OnBhB)
	ON_BN_CLICKED(IDC_DATE_CANCEL_B, OnDateCancelB)
	ON_EN_KILLFOCUS(IDC_FLAT_COST, OnKillfocusFlatCost)
	ON_EN_KILLFOCUS(IDC_LIVE_SQR, OnKillfocusLiveSqr)
	ON_EN_CHANGE(IDC_ROOM_QUANT, OnChangeRoomQuant)
	ON_EN_CHANGE(IDC_FULL_SQR, OnChangeFullSqr)
	ON_EN_CHANGE(IDC_LIVE_SQR, OnChangeLiveSqr)
	ON_EN_CHANGE(IDC_FLAT_COST, OnChangeFlatCost)
	ON_EN_CHANGE(IDC_BUILDING_SQR, OnChangeBuildingSqr)
	ON_EN_CHANGE(IDC_BUILDING_COST, OnChangeBuildingCost)
	ON_EN_CHANGE(IDC_COEF, OnChangeCoef)
	ON_EN_CHANGE(IDC_LOT_NUM, OnChangeLotNum)
	ON_EN_CHANGE(IDC_REG_NUM, OnChangeRegNum)
	ON_EN_CHANGE(IDC_BOOK_NUM, OnChangeBookNum)
	ON_EN_CHANGE(IDC_NORM, OnChangeNorm)
	ON_EN_CHANGE(IDC_PAYMENT, OnChangePayment)
	ON_CBN_SELCHANGE(IDC_TRANS, OnSelchangeTrans)
	ON_EN_CHANGE(IDC_BH, OnChangeBh)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FContract message handlers

BOOL FContract::PreTranslateMessage(MSG* pMsg) 
{
	try
	{

		CWnd* focus=GetFocus();
		if(WM_KEYDOWN == pMsg->message && focus)
		{
			switch(pMsg->wParam)
			{
			case VK_TAB:
					ASSERT(focus!=NULL);
					ASSERT(focus->GetParent()!=NULL);
					if(focus->GetDlgCtrlID()==IDC_TRANS)
					{
						ASSERT(GetParent()!=NULL);
						ASSERT(GetParent()->GetParent()!=NULL);
						ASSERT(GetParent()->GetParent()->GetDlgItem(IDC_COMMENTS)!=NULL);
						GetParent()->GetParent()->GetDlgItem(IDC_COMMENTS)->SetFocus();
						return TRUE;
					}
					//else return FChildDialog::PreTranslateMessage(pMsg);
					break;
			default:
				break;
			}
		}
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","FContract.Exception.PreTrans");
	}
	return FChildDialog::PreTranslateMessage(pMsg);
}

void FContract::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	if(!bShow) return;
	//значения
	BOOL bSaved=m_DocData->m_bSaved;
	ASSERT(m_DocData!=NULL);
	m_csBH=m_DocData->m_csBalanceHolder;
	m_iBookNum=m_DocData->m_iBookNum;
	m_dBuildingCost=m_DocData->m_dBCost;
	m_dBuildingSqr=m_DocData->m_dBFullArea;
	m_dCoef=m_DocData->m_dBCoefG;
	m_dFlatCost=m_DocData->m_dFlatCost;
	m_dFullSqr=m_DocData->m_dFlatFullArea;
	m_dLiveSqr=m_DocData->m_dFlatLiveArea;
	m_dLotCost=m_DocData->m_dLotCost;
	m_iLotNum=m_DocData->m_iLot;
	m_dNorm=m_DocData->m_dNorm;
	m_dPayment=m_DocData->m_dPayment;
	m_iRegNum=m_DocData->m_iRegNum;
	m_iRoomQuantity=m_DocData->m_iFlatRooms;
	m_dShareSqr=m_DocData->m_dLotLivepart;
	
	UpdateData(FALSE);
	CalcLot();
	
	if(m_DocData->m_ActDate.m_status!=COleDateTime::null)
		m_DateAct.SetText(m_DocData->m_ActDate.Format("%d-%m-%Y"));
	if(m_DocData->m_BBuiltDate.m_status!=COleDateTime::null)
		m_DateBuilt.SetText(m_DocData->m_BBuiltDate.Format("%d-%m-%Y"));
	if(m_DocData->m_CancelDate.m_status!=COleDateTime::null)
		m_DateCancel.SetText(m_DocData->m_CancelDate.Format("%d-%m-%Y"));
	if(m_DocData->m_LotDate.m_status!=COleDateTime::null)
		m_DateLot.SetText(m_DocData->m_LotDate.Format("%d-%m-%Y"));
	if(m_DocData->m_RegRecordDate.m_status!=COleDateTime::null)
		m_DateRecord.SetText(m_DocData->m_RegRecordDate.Format("%d-%m-%Y"));
	if(m_DocData->m_RegDate.m_status!=COleDateTime::null)
		m_DateReg.SetText(m_DocData->m_RegDate.Format("%d-%m-%Y"));
	m_DocData->m_bSaved=bSaved;
}

void FContract::OnDateBuiltB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_BUILT_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_BUILT);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);	
	
}

void FContract::OnDateLotB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_LOT_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_LOT);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FContract::OnDateRegB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_REG_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_REG);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FContract::OnDateRecordB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_RECORD_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_RECORD);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FContract::OnDateActB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_ACT_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_ACT);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

void FContract::OnBhB() 
{
	FBalanceHolder dlg;
	if(!UpdateData()) return;
	if(m_DocData->m_lContractID==-1)
		dlg.m_iBH_ID=((CPrivatisationApp*)AfxGetApp())->m_lBh;
	else
		dlg.m_iBH_ID=m_DocData->m_iBalanceHolder;
	if(dlg.DoModal()==IDOK)
	{
		m_csBH=dlg.m_csName;
		m_DocData->m_csBalanceHolder=dlg.m_csName;
		m_DocData->m_iBalanceHolder=dlg.m_iBH_ID;
		((CPrivatisationApp*)AfxGetApp())->m_lBh=dlg.m_iBH_ID;
		m_DocData->m_csChief=dlg.m_csChief;
		m_DocData->m_csGround=dlg.m_csGround;
		m_DocData->m_csSign=dlg.m_csSign;
		m_DocData->m_csBHAddress=dlg.m_csAddress;
		UpdateData(FALSE);
	}
	
}

void FContract::OnDateCancelB() 
{
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_CANCEL_B);
	CMSMask* mask=(CMSMask*) GetDlgItem(IDC_DATE_CANCEL);
	((CPrivatisationApp*)AfxGetApp())->calendarDlg->Assign(but,mask);
	
}

BOOL FContract::Migrate()
{
	if(!UpdateData()) return FALSE;
	CalcLot();
	m_DocData->m_iTranferType=m_Trans.GetItemData(m_Trans.GetCurSel());
	CString csVal=m_DateAct.GetText();
	if(csVal=="**-**-****") m_DocData->m_ActDate.m_status=COleDateTime::null;
	else m_DocData->m_ActDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	csVal=m_DateBuilt.GetText();
	if(csVal=="**-**-****") m_DocData->m_BBuiltDate.m_status=COleDateTime::null;
	else m_DocData->m_BBuiltDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	csVal=m_DateCancel.GetText();
	if(csVal=="**-**-****") m_DocData->m_CancelDate.m_status=COleDateTime::null;
	else m_DocData->m_CancelDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	csVal=m_DateLot.GetText();
	if(csVal=="**-**-****") m_DocData->m_LotDate.m_status=COleDateTime::null;
	else m_DocData->m_LotDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	csVal=m_DateRecord.GetText();
	if(csVal=="**-**-****") m_DocData->m_RegRecordDate.m_status=COleDateTime::null;
	else m_DocData->m_RegRecordDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	csVal=m_DateReg.GetText();
	if(csVal=="**-**-****") m_DocData->m_RegDate.m_status=COleDateTime::null;
	else m_DocData->m_RegDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	//CString	m_csBH;
	m_DocData->m_iBookNum=m_iBookNum;
	m_DocData->m_dBCost=m_dBuildingCost;
	m_DocData->m_dFlatCost=m_dFlatCost;
	m_DocData->m_dBFullArea=m_dBuildingSqr;
	m_DocData->m_dBCoefG=m_dCoef;
	m_DocData->m_dFlatFullArea=m_dFullSqr;
	m_DocData->m_dFlatLiveArea=m_dLiveSqr;
	m_DocData->m_dLotCost=m_dLotCost;
	m_DocData->m_iLot=m_iLotNum;
	m_DocData->m_dNorm=m_dNorm;
	m_DocData->m_dPayment=m_dPayment;
	m_DocData->m_iRegNum=m_iRegNum;
	m_DocData->m_iFlatRooms=m_iRoomQuantity;
	m_DocData->m_dLotLivepart=m_dShareSqr;
	
	return TRUE;
}

BOOL FContract::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	UINT notificationCode = (UINT) HIWORD(wParam);
	if((notificationCode == EN_SETFOCUS) ||
	(notificationCode == LBN_SETFOCUS) ||
	(notificationCode == CBN_SETFOCUS) ||
	(notificationCode == NM_SETFOCUS) ||
	(notificationCode == WM_SETFOCUS))
	{
		CWnd *pFocus = CWnd::GetFocus(); // call to a static function
		//прячем маскэдит, если только не календарь забрал фокус
		if(pFocus)
		{
			CRuntimeClass* prt= pFocus->GetRuntimeClass();	
			if(!strcmp( prt->m_lpszClassName, "CMSMask" ) && pFocus->GetDlgCtrlID()!=0) 
			{
				((CMSMask*) GetFocus())->SetSelStart(0);
				((CMSMask*) GetFocus())->SetSelLength(((CMSMask*) GetFocus())->GetText().GetLength());
			}
		}
					
	}
	
	return FChildDialog::OnCommand(wParam, lParam);
}


void FContract::CalcLot()
{
	CString csVal;
	if(m_DocData->m_dFlatLiveArea!=0.0)
	{
		if(m_DocData->m_dFlatLiveArea==0.0)
			m_DocData->m_dLotLivepart=1.0;
		else
			m_DocData->m_dLotLivepart=DoubleRound(m_DocData->m_dAddrPrivArea/m_DocData->m_dFlatLiveArea,2);
	}
	else
		m_DocData->m_dLotLivepart=0.0;
	m_DocData->m_dLotCost=m_DocData->m_dLotLivepart*m_DocData->m_dFlatCost;
	
	m_dShareSqr = m_DocData->m_dLotLivepart;
	m_dLotCost =  m_DocData->m_dLotCost;
	csVal.Format("%.2f",m_dLotCost);
	if(GetDlgItem(IDC_LOT_COST)) GetDlgItem(IDC_LOT_COST)->SetWindowText(csVal);
	csVal.Format("%.2f",m_dShareSqr);
	if(GetDlgItem(IDC_SHARE_SQR)) GetDlgItem(IDC_SHARE_SQR)->SetWindowText(csVal);
}

void FContract::OnKillfocusFlatCost() 
{
	if(!UpdateData(TRUE)) return;
	m_DocData->m_dFlatCost=m_dFlatCost;
	CalcLot();	
	
}

void FContract::OnKillfocusLiveSqr() 
{
	if(!UpdateData(TRUE)) return;
	m_DocData->m_dFlatLiveArea=m_dLiveSqr;
	CalcLot();	
	
}


BOOL FContract::DestroyWindow() 
{
	m_Trans.SetFocus(); // сбить фокус
	return FChildDialog::DestroyWindow();
}

BOOL FContract::OnInitDialog() 
{
	CDialog::OnInitDialog();
	/// иконки
	CButton* but=(CButton*) GetDlgItem(IDC_DATE_BUILT_B);
	HICON hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_CALENDAR),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon ); 
	but=(CButton*) GetDlgItem(IDC_DATE_LOT_B);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_DATE_REG_B);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_DATE_RECORD_B);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_DATE_ACT_B);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_DATE_CANCEL_B);
	but->SetIcon( hicon );
	but=(CButton*) GetDlgItem(IDC_BH_B);
	hicon=(HICON)::LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_SEARCH),IMAGE_ICON,16,16, LR_SHARED);
	but->SetIcon( hicon );
	/////// подсказки
	m_ToolTip->AddTool(GetDlgItem(IDC_BH_B),"Найти балансодержателя");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_LOT_B),"Выбрать дату");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_BUILT_B),"Выбрать дату");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_REG_B),"Выбрать дату");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_RECORD_B),"Выбрать дату");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_ACT_B),"Выбрать дату");
	m_ToolTip->AddTool(GetDlgItem(IDC_DATE_CANCEL_B),"Выбрать дату");
	m_ToolTip->Activate(TRUE);
	// TODO: Add extra initialization here
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_TRANS),"[mComboPaymentType]",0,DWORD(m_DocData->m_iTranferType));
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FContract::OnChangeRoomQuant() 
{
	m_DocData->m_bSaved=FALSE;
}

void FContract::OnChangeFullSqr() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeLiveSqr() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeFlatCost() 
{
	m_DocData->m_bSaved=FALSE;
	
}

BEGIN_EVENTSINK_MAP(FContract, CDialog)
    //{{AFX_EVENTSINK_MAP(FContract)
	ON_EVENT(FContract, IDC_DATE_CANCEL, 1 /* Change */, OnChangeDateCancel, VTS_NONE)
	ON_EVENT(FContract, IDC_DATE_BUILT, 1 /* Change */, OnChangeDateBuilt, VTS_NONE)
	ON_EVENT(FContract, IDC_DATE_LOT, 1 /* Change */, OnChangeDateLot, VTS_NONE)
	ON_EVENT(FContract, IDC_DATE_REG, 1 /* Change */, OnChangeDateReg, VTS_NONE)
	ON_EVENT(FContract, IDC_DATE_RECORD, 1 /* Change */, OnChangeDateRecord, VTS_NONE)
	ON_EVENT(FContract, IDC_DATE_ACT, 1 /* Change */, OnChangeDateAct, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void FContract::OnChangeDateCancel() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeBuildingSqr() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeDateBuilt() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeBuildingCost() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeCoef() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeLotNum() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeDateLot() 
{
	m_DocData->m_bSaved=FALSE;
	CString csVal=m_DateLot.GetText();
	if(csVal=="**-**-****") m_DocData->m_LotDate.m_status=COleDateTime::null;
	else m_DocData->m_LotDate.ParseDateTime(csVal,VAR_DATEVALUEONLY);
	//if(((CPrivatisationApp*) AfxGetApp())->m_StreetDate	<m_DocData->m_LotDate)
	//		csVal=m_DocData.m_csFullStreet;
	//m_csAddress.Format("%s, д. %d %s, кв. %d",csVal,m_DocData->m_iBuilding,
	//			m_DocData->m_csBuildingPart, m_DocData->m_iFlat);
	
}

void FContract::OnChangeDateReg() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeDateRecord() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeRegNum() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeBookNum() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeNorm() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangePayment() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeDateAct() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnSelchangeTrans() 
{
	m_DocData->m_bSaved=FALSE;
	
}

void FContract::OnChangeBh() 
{
	m_DocData->m_bSaved=FALSE;
	
}
