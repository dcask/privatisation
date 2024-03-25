// privatisationDoc.cpp : implementation of the CPrivatisationDoc class
//

#include "stdafx.h"
#include "privatisation.h"

#include "privatisationDoc.h"
#include "privatisationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationDoc

IMPLEMENT_DYNCREATE(CPrivatisationDoc, CDocument)

BEGIN_MESSAGE_MAP(CPrivatisationDoc, CDocument)
	//{{AFX_MSG_MAP(CPrivatisationDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationDoc construction/destruction

CPrivatisationDoc::CPrivatisationDoc()
{
	m_pTabDialog=NULL;
	m_pImageList=NULL;
}

CPrivatisationDoc::~CPrivatisationDoc()
{
	/*if(m_pTabDialog)
	{
		m_pTabDialog->DestroyWindow();
		delete m_pTabDialog;
	}
	
	if(m_pImageList)
		delete m_pImageList;*/
}

BOOL CPrivatisationDoc::OnNewDocument()
{
	try
	{
		if (!CDocument::OnNewDocument())
			return FALSE;
		m_pTabDialog=NULL;
		m_pImageList=NULL;
		m_iCurSelectedTab=0;
		CString csIni=((CPrivatisationApp*) AfxGetApp())->m_csIni;
		long id=GetPrivateProfileInt("JobData","Find",-1,csIni);
		m_DocData.m_lContractID=((CPrivatisationApp*) AfxGetApp())->m_lContractID;
		if(!((CPrivatisationApp*) AfxGetApp())->m_bSearch) m_DocData.m_lContractID=id;
		//GetPrivateProfileString("JobData","Address","Новый",m_csAddress.GetBuffer(100),99,csIni);
		//SetPathName(m_csWindowName,FALSE);
		

		if(m_DocData.m_lContractID==-1)
		{	
			m_DocData.m_lAdresID1=((CPrivatisationApp*)AfxGetApp())->m_lAdresID1;
			m_DocData.m_lAdresID2=((CPrivatisationApp*)AfxGetApp())->m_lAdresID2;
			m_DocData.m_csStreet=((CPrivatisationApp*)AfxGetApp())->m_csStreet;
			m_DocData.m_csFullStreet=((CPrivatisationApp*)AfxGetApp())->m_csFullStreet;
			m_DocData.m_lStreet=((CPrivatisationApp*)AfxGetApp())->m_iStreet;
			m_DocData.m_csDistrict=((CPrivatisationApp*)AfxGetApp())->m_csDistrict;;
			m_DocData.m_iBuilding=((CPrivatisationApp*)AfxGetApp())->m_iBuilding;
			m_DocData.m_csBuildingPart=((CPrivatisationApp*)AfxGetApp())->m_csBuildingPart;
			m_DocData.m_iFlat=((CPrivatisationApp*)AfxGetApp())->m_iFlat;
		}
		if(!m_DocData.FillData(m_DocData.m_lContractID)) return FALSE;
		CString csVal=m_DocData.m_csStreet;
		if(((CPrivatisationApp*) AfxGetApp())->m_StreetDate	<m_DocData.m_LotDate)
			csVal=m_DocData.m_csFullStreet;
		m_csAddress.Format("%s, д. %d %s, кв. %d",csVal,m_DocData.m_iBuilding,
				m_DocData.m_csBuildingPart, m_DocData.m_iFlat/*,m_DocData.m_csFlatPart*/);
		((CPrivatisationApp*) AfxGetApp())->m_bSearch=FALSE;
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","OnNewDoc");
	}

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPrivatisationDoc serialization

void CPrivatisationDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationDoc diagnostics

#ifdef _DEBUG
void CPrivatisationDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPrivatisationDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPrivatisationDoc commands



void CPrivatisationDoc::OnCloseDocument() 
{
	int res=0;
	if(!m_DocData.m_bSaved)
	{
		res=AfxMessageBox("Данные не сохранены. Сохранить?",MB_YESNOCANCEL);
		if (res==IDYES)
		{
			POSITION pos = GetFirstViewPosition();
			CView* pFirstView = GetNextView( pos );
			
			if(!((CPrivatisationView*)pFirstView)->Migrate()) return;
			
			if(!m_DocData.SaveContract())
				AfxMessageBox("Данные не сохранены\nили сохранены частично", MB_ICONERROR);
		}
	}
	if(res!=IDCANCEL)CDocument::OnCloseDocument();
}
