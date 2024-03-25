// FChildDialog.cpp : implementation file
//

#include "stdafx.h"
#include "privatisation.h"
#include "FChildDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FChildDialog dialog

FChildDialog::FChildDialog():CDialog(),m_ToolTip(NULL)
{
}

FChildDialog::FChildDialog(UINT nIDTemplate, CWnd* pParentWnd /*= NULL*/)
	: CDialog(nIDTemplate, pParentWnd),m_ToolTip(NULL)
{
	//{{AFX_DATA_INIT(FChildDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	/////// ïîäñêàçêè
	m_ToolTip =new CToolTipCtrl();
	if (!m_ToolTip->Create(this))
	{
		TRACE("Unable To create ToolTip\n");           
		return;
	}

	m_ToolTip->SetMaxTipWidth(10000000);
	m_ToolTip->SetDelayTime(TTDT_AUTOPOP ,10000);
	m_ToolTip->SetDelayTime(TTDT_INITIAL ,750);
	m_ToolTip->SetDelayTime(TTDT_RESHOW ,10000);
	m_ToolTip->SetTipBkColor(0xEFE0DAL);
	m_ToolTip->SetTipTextColor(0xA00000L);
}


void FChildDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FChildDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FChildDialog, CDialog)
	//{{AFX_MSG_MAP(FChildDialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FChildDialog message handlers

BOOL FChildDialog::Migrate()
{
	return TRUE;
}

FChildDialog::~FChildDialog()
{
	m_ToolTip->DestroyWindow();
	delete m_ToolTip;
}

BOOL FChildDialog::PreTranslateMessage(MSG* pMsg) 
{
	
	try
	{
		CWnd* focus=GetFocus();
		if (NULL != m_ToolTip)            
		  m_ToolTip->RelayEvent(pMsg);
		CRuntimeClass* prt;
		
		if(WM_KEYDOWN == pMsg->message)
		{
			switch(pMsg->wParam)
			{
				case VK_F1:
				case VK_F2:
				case VK_F3:
				case VK_F4:
				case VK_F5:
				//case VK_F10:
					AfxGetApp()->GetMainWnd()->PostMessage(pMsg->message,pMsg->wParam,pMsg->lParam);
					break;
				case VK_ESCAPE:
				case VK_RETURN:
					return TRUE;
				case VK_SPACE:
					prt = GetFocus()->GetRuntimeClass();
					if(!strcmp( prt->m_lpszClassName, "CMSMask" ))
						((CMSMask*) GetFocus())->SetText(COleDateTime::GetCurrentTime().Format("%d-%m-%Y"));
					break;
					case VK_F12:
				if(((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg)
				{
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->DestroyWindow();
					delete ((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg;
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg=NULL;
				}
				else
				{
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg=new FContractInfo();
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->m_csInfo.Format("ID: %d\nÈÇÌÅÍ¨Í: %s %s\nAddress1: %d\nAddress2: %d",
						m_DocData->m_lContractID,m_DocData->m_csUserModified,
						m_DocData->m_Modified.Format("%d/%m/%y"),
						m_DocData->m_lAdresID1,m_DocData->m_lAdresID2);
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->Create(FContractInfo::IDD);
					((CPrivatisationApp*)AfxGetApp())->m_pInfoDlg->ShowWindow(SW_SHOWNORMAL);
					focus->SetFocus();
				}
				break;
				default:
					break;
			}
		}
	}catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","ChildDialog.PreTrans.Exception");
	}
	return CDialog::PreTranslateMessage(pMsg);
}
