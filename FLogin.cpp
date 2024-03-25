// FLogin.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FLogin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FLogin dialog


FLogin::FLogin(CWnd* pParent /*=NULL*/)
	: CDialog(FLogin::IDD, pParent)
{
	//{{AFX_DATA_INIT(FLogin)
	m_csPassword = _T("");
	//}}AFX_DATA_INIT
}


void FLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FLogin)
	DDX_Control(pDX, IDC_LOGIN, m_Login);
	DDX_Text(pDX, IDC_PASSWORD, m_csPassword);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FLogin, CDialog)
	//{{AFX_MSG_MAP(FLogin)
	ON_WM_SHOWWINDOW()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FLogin message handlers

BOOL FLogin::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_hIcon=AfxGetApp()->LoadIcon(IDI_LOCK);
	SetIcon(m_hIcon, FALSE);        // Устанавливаем маленькую иконку
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void FLogin::OnShowWindow(BOOL bShow, UINT nStatus) 
{
	CDialog::OnShowWindow(bShow, nStatus);
	
	if(!bShow) return;

	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	bt->LoadComboBox(GetDlgItem(IDC_LOGIN),"[mComboUser]",0,((CPrivatisationApp*)AfxGetApp())->m_iUserID);
	GetDlgItem(IDC_PASSWORD)->SetFocus();
	
}

void FLogin::OnOK() 
{
	try
	{
		UpdateData();
		CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
		CADOCommand pCmd(bt->GetDB(), "[mCheckPassword]");
		pCmd.AddParameter("Login",CADORecordset::typeInteger,
				CADOParameter::paramInput,sizeof(int),int(m_Login.GetItemData(m_Login.GetCurSel())) ); 
		pCmd.AddParameter("Password",CADORecordset::typeChar,
				CADOParameter::paramInput,m_csPassword.GetLength()!=0?m_csPassword.GetLength():1,m_csPassword); 
					
		if(!bt->Execute(&pCmd))
				throw(1);
		if(bt->GetRecordsCount()==0)
		{
			AfxMessageBox("Неправильный пароль", MB_ICONERROR);
			m_csPassword="";
			UpdateData(FALSE);
			GetDlgItem(IDC_PASSWORD)->SetFocus();
			return;
		}
		else
		{
			bt->GetRS()->GetFieldValue("Rights",((CPrivatisationApp*)AfxGetApp())->m_iRights);
			bt->GetRS()->GetFieldValue("Sign1",((CPrivatisationApp*)AfxGetApp())->m_csUserSign1);
			bt->GetRS()->GetFieldValue("Sign2",((CPrivatisationApp*)AfxGetApp())->m_csUserSign2);
		}

	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка при авторизации");
		return;
	}
	CString csVal;
	((CPrivatisationApp*)AfxGetApp())->m_iUserID=m_Login.GetItemData(m_Login.GetCurSel());
	m_Login.GetLBText(m_Login.GetCurSel(),((CPrivatisationApp*)AfxGetApp())->m_csUser);
	csVal.Format("%d", ((CPrivatisationApp*)AfxGetApp())->m_iUserID);

	WritePrivateProfileString("Settings","User",csVal,((CPrivatisationApp*)AfxGetApp())->m_csIni);
	CDialog::OnOK();
}
