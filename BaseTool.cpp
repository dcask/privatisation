// BaseTool.cpp: implementation of the CBaseTool class.
//
// This class can be used in any MFC-application
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "BaseTool.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
int CADOBaseTool::m_iObjCount=0;

CADOBaseTool::CADOBaseTool()
{
	// ����������� ������ �� ���������
	m_DataBase=NULL;
	m_RecordSet=NULL;
	m_iErrorPoint=1;
	m_csProcNum="constructor";
	m_bError=FALSE;
	m_bShowError=FALSE;
	m_iObjCount++;

}
CADOBaseTool::CADOBaseTool(LPCTSTR connection,LPCTSTR userId, LPCTSTR password)
{
	// ����������� ������
	m_iErrorPoint=1;
	m_csProcNum="constructor";
	m_bError=FALSE;
	m_bShowError=FALSE;
	m_DataBase=NULL;
	m_RecordSet=NULL;
	m_DataBase=new CADODatabase();
	if(!m_DataBase) this->ThrowError("");
	try
	{
		if(m_DataBase->Open(connection, userId,password))
		{
			m_RecordSet=new CADORecordset(m_DataBase);
			m_aRecordSet.Add(m_RecordSet);
			m_iObjCount++;
		}
		else this->ThrowError("Unable to open the database");
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
	}
}
CADOBaseTool::~CADOBaseTool()
{
	// ���������� ������
	m_iErrorPoint=1;
	m_csProcNum="destructor";
	m_RecordSet->Close();
	m_DataBase->Close();
	m_iObjCount--;
	for(int i=0; i<m_aRecordSet.GetSize(); ++i) delete (CADORecordset*)(m_aRecordSet.GetAt(i));
	delete m_DataBase;
}

CString CADOBaseTool::GetStringValue(LPCTSTR fieldname,int rs_num)
{
	// ��������� �������� ���� �� ����� � ���� ������
	CADOFieldInfo info;
	CString csVal;
	m_iErrorPoint=1;
	m_csProcNum.Format("GetStringValue(%s)",fieldname);
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	try{
		if(!m_RecordSet->IsOpen()) // ������ 
		{
			this->ThrowError("RecordSet is closed");
			return _T("");
		}
		if(!m_RecordSet->GetFieldInfo(fieldname,&info)) // ������ 
		{
			this->ThrowError("Cant get the field info");
			return _T("");
		}
		long lValue;
		//bool bValue;
		double dValue;
		switch(info.m_nType)
		{
			case CADORecordset::typeEmpty : break;
			case CADORecordset::typeTinyInt :
			case CADORecordset::typeSmallInt :
			case CADORecordset::typeInteger :
				m_RecordSet->GetFieldValue(fieldname,lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeBigInt :
				m_RecordSet->GetFieldValue(fieldname,lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeUnsignedSmallInt :
			case CADORecordset::typeUnsignedTinyInt :
			case CADORecordset::typeUnsignedInt :
			case CADORecordset::typeUnsignedBigInt :
				m_RecordSet->GetFieldValue(fieldname, lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeSingle :
			case CADORecordset::typeDouble :
				m_RecordSet->GetFieldValue(fieldname, dValue);
				csVal.Format("%.5f",dValue);
				break;
			case CADORecordset::typeCurrency :break;
			case CADORecordset::typeDecimal :
			case CADORecordset::typeNumeric :
				m_RecordSet->GetFieldValue(fieldname, lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeBoolean :break;
			case CADORecordset::typeError :break;
			case CADORecordset::typeUserDefined :break;
			case CADORecordset::typeVariant :break;
			case CADORecordset::typeIDispatch :break;
			case CADORecordset::typeIUnknown :break;
			case CADORecordset::typeGUID :break;
			case CADORecordset::typeDate :
			case CADORecordset::typeDBDate :
			case CADORecordset::typeDBTime :
			case CADORecordset::typeDBTimeStamp :
				m_RecordSet->GetFieldValue(fieldname,csVal,m_csDateFormat);
				break;
			case CADORecordset::typeBSTR :
			case CADORecordset::typeChar :
			case CADORecordset::typeVarChar :
			case CADORecordset::typeLongVarChar :
			case CADORecordset::typeWChar :
			case CADORecordset::typeVarWChar :
			case CADORecordset::typeLongVarWChar :
				m_RecordSet->GetFieldValue(fieldname, csVal);
				break;
			case CADORecordset::typeBinary :break;
			case CADORecordset::typeVarBinary :break;
			case CADORecordset::typeLongVarBinary :break;
			case CADORecordset::typeChapter :break;
			case CADORecordset::typeFileTime :break;
			case CADORecordset::typePropVariant :break;
			case CADORecordset::typeVarNumeric :break;
			//case CADORecordset::typeArray :break;
		}
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
		csVal=_T("");
	}
	return csVal;
}

CString CADOBaseTool::GetStringValue(int index, int rs_num)
{
	// ��������� �������� ���� �� ������ � ���� ������
	CADOFieldInfo info;
	CString csVal;
	m_iErrorPoint=1;
	m_csProcNum.Format("GetStringValue(%d)",index);
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	try{
		if(!m_RecordSet->IsOpen()) // ������ 
		{
			this->ThrowError("RecordSet is closed");
			return _T("");
		}
		m_RecordSet->GetFieldInfo(index,&info);
		long lValue;
		double dValue;
		switch(info.m_nType)
		{
			case CADORecordset::typeEmpty : break;
			case CADORecordset::typeTinyInt :
			case CADORecordset::typeSmallInt :
			case CADORecordset::typeInteger :
				m_RecordSet->GetFieldValue(index,lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeBigInt :
				m_RecordSet->GetFieldValue(index,lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeUnsignedSmallInt :
			case CADORecordset::typeUnsignedTinyInt :
			case CADORecordset::typeUnsignedInt :
			case CADORecordset::typeUnsignedBigInt :
				m_RecordSet->GetFieldValue(index, lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeSingle :
			case CADORecordset::typeDouble :
				m_RecordSet->GetFieldValue(index, dValue);
				csVal.Format("%.5f",dValue);
				break;
			case CADORecordset::typeCurrency :break;
			case CADORecordset::typeDecimal :
			case CADORecordset::typeNumeric :
				m_RecordSet->GetFieldValue(index, lValue);
				csVal.Format("%d",lValue);
				break;
			case CADORecordset::typeBoolean :break;
			case CADORecordset::typeError :break;
			case CADORecordset::typeUserDefined :break;
			case CADORecordset::typeVariant :break;
			case CADORecordset::typeIDispatch :break;
			case CADORecordset::typeIUnknown :break;
			case CADORecordset::typeGUID :break;
			case CADORecordset::typeDate :
			case CADORecordset::typeDBDate :
			case CADORecordset::typeDBTime :
			case CADORecordset::typeDBTimeStamp :
				m_RecordSet->GetFieldValue(index,csVal,m_csDateFormat);
				break;
			case CADORecordset::typeBSTR :
			case CADORecordset::typeChar :
			case CADORecordset::typeVarChar :
			case CADORecordset::typeLongVarChar :
			case CADORecordset::typeWChar :
			case CADORecordset::typeVarWChar :
			case CADORecordset::typeLongVarWChar :
				m_RecordSet->GetFieldValue(index, csVal);
				break;
			case CADORecordset::typeBinary :break;
			case CADORecordset::typeVarBinary :break;
			case CADORecordset::typeLongVarBinary :break;
			case CADORecordset::typeChapter :break;
			case CADORecordset::typeFileTime :break;
			case CADORecordset::typePropVariant :break;
			case CADORecordset::typeVarNumeric :break;
			//case CADORecordset::typeArray :break;
		}
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
		csVal=_T("");
	}

	return csVal;

}

void CADOBaseTool::SetDateFormat(LPCTSTR format)
{
	//��������� ������� ������������ ���� ��� ������� ������
	m_csProcNum="SetDateFormat";
	m_iErrorPoint=1;
	m_csDateFormat=format;
}

int CADOBaseTool::LoadComboBox(CWnd* cb, LPCTSTR query, int rs_num, long current)
{
	// �������� �������� � ComboBox
	CString csVal=query;
	m_csProcNum.Format("LoadComboBox(%s)",query);
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	unsigned long nRecords=0;
	CComboBox* lb=(CComboBox*) cb;
	lb->ResetContent();
	long	value,pos;
	long	cur_pos=-1;
	BOOL	mDefault=FALSE;
	try
	{
		m_iErrorPoint=1;
		if(!m_DataBase->IsOpen()) // ������ 
		{
			this->ThrowError("Database is closed");
			return 0;
		}
		m_iErrorPoint=2;
		if(m_RecordSet->IsOpen()) m_RecordSet->Close();
		csVal.MakeLower();
		m_iErrorPoint=3;
		if(csVal.Find("select")==0)
			m_RecordSet->Open(query,CADORecordset::openUnknown);
		else
		{
			CADOCommand pCmd(m_DataBase,query);
			m_RecordSet->Execute(&pCmd);
		}
		m_iErrorPoint=4;
		if(m_RecordSet->GetFieldCount()!=3)
		{
			this->ThrowError("Must have 3 values");
			return 0;
		}
		m_iErrorPoint=5;
		if(m_RecordSet->IsOpen())
		{
			m_iErrorPoint=6;
			nRecords=m_RecordSet->GetRecordCount();
			if(nRecords<1) return 0;
			m_iErrorPoint=7;
			m_RecordSet->MoveFirst();
			for(unsigned long i=0; i<nRecords; ++i)
			{
				m_iErrorPoint=8;
				if(!m_RecordSet->IsEof())
				{
					m_iErrorPoint=9;
					m_RecordSet->GetFieldValue(0,csVal);
					m_iErrorPoint=10;
					m_RecordSet->GetFieldValue(1,value);
					m_RecordSet->GetFieldValue(2, mDefault);
					m_iErrorPoint=11;
					if(csVal!="") 
					{
						pos=lb->AddString(csVal);
						m_iErrorPoint=12;
						lb->SetItemData(pos,DWORD(value));
						if(current==-1 && mDefault) lb->SetCurSel(pos);//cur_pos=pos;
						if(value==current) lb->SetCurSel(pos);//cur_pos=pos;
					}
					m_iErrorPoint=13;
					m_RecordSet->MoveNext();
				}
			}
			m_iErrorPoint=14;
			m_RecordSet->Close();
			//lb->SetCurSel(cur_pos);
		}
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
		return 0;
	}
	return nRecords;
}

BOOL CADOBaseTool::Execute(CADOCommand *pCmd,int rs_num)
{
	AfxGetApp()->DoWaitCursor(1);
	m_csProcNum.Format("Execute(%s)",pCmd->GetText());
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	if(m_RecordSet->IsOpen()) m_RecordSet->Close();
	try
	{
		m_iErrorPoint=1;
		if(m_DataBase->IsOpen())
		{
			int start=GetTickCount();
			m_iErrorPoint=2;
			m_RecordSet->Execute(pCmd);
			m_lFields=m_RecordSet->GetFieldCount();
			m_iErrorPoint=3;
			if(m_RecordSet->IsOpen())
				m_dwRecords=m_RecordSet->GetRecordCount();
			else m_dwRecords=0;
			m_lTime=GetTickCount()-start;
		}
	}
	catch(CADOException* e)
	{
		this->ThrowError(e);
		AfxGetApp()->DoWaitCursor(-1);
		return FALSE;
	}
	catch(...)
	{
		this->ThrowError("������ �������");
		AfxGetApp()->DoWaitCursor(-1);
		return FALSE;
	}
	AfxGetApp()->DoWaitCursor(-1);
	return TRUE;
}

BOOL CADOBaseTool::Execute(LPCTSTR query,int rs_num)
{
	// ���������� ������� �������� ������ CADODataBase
	// ��� �������� ������ CADORecordSet, � ������, ���� ������������ ������ ���� SELECT
	CString tmp=query;
	AfxGetApp()->DoWaitCursor(1);
	m_csProcNum.Format("Execute(%s)",query);
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	if(m_RecordSet->IsOpen()) m_RecordSet->Close();
	try
	{
		m_iErrorPoint=1;
		if(m_DataBase->IsOpen())
		{
			int start=GetTickCount();
			tmp.MakeUpper();
			tmp.TrimLeft();
			if(tmp.Find("SELECT")==0)
			{
				
				m_iErrorPoint=2;
				if(!m_RecordSet->Open(tmp,CADORecordset::openUnknown))
				{
					this->ThrowError("Can't execute the query");
					AfxGetApp()->DoWaitCursor(-1);
					return FALSE;
				}
				
				m_iErrorPoint=3;
				m_lFields=m_RecordSet->GetFieldCount();
				m_iErrorPoint=4;
				m_dwRecords=m_RecordSet->GetRecordCount();
			}
			else {m_iErrorPoint=5;return m_DataBase->Execute(query);}
			m_lTime=GetTickCount()-start;
		}
	}
	catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
		AfxGetApp()->DoWaitCursor(-1);
		return FALSE;
	}
	AfxGetApp()->DoWaitCursor(-1);
	return TRUE;
}

void CADOBaseTool::ShowError(BOOL show)
{
	// ��������� ����� ��� �����������/������� ��������� �� ������
	m_csProcNum="ShowError";
	m_bShowError=show;
}

void CADOBaseTool::ThrowError(LPCTSTR error)
{
	// ������� ������ ��������� ������
	CString str;
	//m_csProcNum="ThrowError(lpctstr)";
	//m_iErrorPoint=1;
	m_bError=TRUE;
	m_csErrorString=error;
	m_csErrorString+="\n";
	m_csErrorString+=m_DataBase->GetLastErrorString();
	str.Format("%s\nProcName=%s, PointId=%d", m_csErrorString, m_csProcNum, m_iErrorPoint);
	if(m_bShowError) AfxMessageBox(str,MB_ICONERROR);
}

void CADOBaseTool::ThrowError(CADOException *e)
{
	// ������� ������ ��������� ������
	CString str;
	//m_csProcNum="ThrowError(CADOException)";
	m_bError=TRUE;
	m_csErrorString=e->GetErrorMessage();
	str.Format("%s\nProcName=%s,PointId=%d", m_csErrorString, m_csProcNum, m_iErrorPoint);
	if(m_bShowError) AfxMessageBox(str,MB_ICONERROR);
}

CADORecordset* CADOBaseTool::operator->()
{
	m_csProcNum="operator ->";
	m_iErrorPoint=1;
	if( m_RecordSet ) 
	{
		m_RecordSet=new CADORecordset(m_DataBase);
	}
	return m_RecordSet;
}



BOOL CADOBaseTool::Compact()
{
	// �������� ����
	m_iErrorPoint=1;

	CString strConnection=m_DataBase->GetConnectionString();
	CString strCompactedDBConnection=strConnection;
		
	m_csProcNum="Compact";
				
	int start=strConnection.Find("Source");
	int end=strConnection.Find(";",start);
	if(end==-1) end=strConnection.GetLength();
	CString strDatabasePath=strConnection.Mid(start+7,end-(start+7));
	CString strCompactedDBPath=strDatabasePath;
	strCompactedDBPath.SetAt(strCompactedDBPath.GetLength()-1,'_');
	strCompactedDBConnection.Replace(strDatabasePath,strCompactedDBPath);
	try{
		

		m_iErrorPoint=2;
		if(m_RecordSet->IsOpen()) {m_iErrorPoint=3;m_RecordSet->Close();}
		m_iErrorPoint=4;
		m_DataBase->Close();
		
		if(CJetEngine::CompactDatabase(strConnection, strCompactedDBConnection))
			if(::CopyFile(strCompactedDBPath.GetBuffer(0), strDatabasePath.GetBuffer(0), FALSE))
			{
				if(m_bShowError) AfxMessageBox("���������");
				m_iErrorPoint=5;
				m_DataBase->Open(strConnection);
				return TRUE;
			}
		this->ThrowError("Can't compact the base");
		m_iErrorPoint=6;
		m_DataBase->Open(strConnection);
		
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
	}
	if(!m_DataBase->IsOpen()) m_DataBase->Open(strConnection);
	return FALSE;
}

BOOL CADOBaseTool::IsError()
{
	return m_bError;
}

CADORecordset* CADOBaseTool::GetRS(int n)
{
	return (CADORecordset*)(m_aRecordSet.GetAt(n));
}

UINT CADOBaseTool::GetRecordsCount(int rs_num)
{
	return ((CADORecordset*)(m_aRecordSet.GetAt(rs_num)))->GetRecordCount();
}

BOOL CADOBaseTool::AddRecordSet()
{
	m_RecordSet=new CADORecordset(m_DataBase);
	if (!m_RecordSet) return FALSE;
	m_aRecordSet.Add(m_RecordSet);
	return TRUE;
}

int CADOBaseTool::LoadComboBox(CWnd *cb, CADOCommand &pCmd, int rs_num, long current )
{
	// �������� �������� � ComboBox
	CString csVal;
	m_csProcNum.Format("LoadComboBox(%s)",pCmd.GetText());
	m_RecordSet=(CADORecordset*)(m_aRecordSet.GetAt(rs_num));
	unsigned long nRecords=0;
	BOOL	mDefault=FALSE;
	CComboBox* lb=(CComboBox*) cb;
	lb->ResetContent();
	long	value,pos;
	long	cur_pos=-1;
	try
	{
		m_iErrorPoint=1;
		if(!m_DataBase->IsOpen()) // ������ 
		{
			this->ThrowError("Database is closed");
			return 0;
		}
		if(m_RecordSet->IsOpen()) m_RecordSet->Close();
		m_iErrorPoint=2;
		m_RecordSet->Execute(&pCmd);
		if(m_RecordSet->GetFieldCount()!=2)
		{
			this->ThrowError("Need only 2 values");
			return 0;
		}
		m_iErrorPoint=3;
		if(m_RecordSet->IsOpen())
		{
			m_iErrorPoint=4;
			nRecords=m_RecordSet->GetRecordCount();
			if(nRecords<1) return 0;
			m_iErrorPoint=5;
			m_RecordSet->MoveFirst();
			for(unsigned long i=0; i<nRecords; ++i)
			{
				m_iErrorPoint=6;
				if(!m_RecordSet->IsEof())
				{
					m_iErrorPoint=7;
					m_RecordSet->GetFieldValue(0,csVal);
					m_iErrorPoint=8;
					m_RecordSet->GetFieldValue(1,value);
					m_iErrorPoint=9;
					m_RecordSet->GetFieldValue(2, mDefault);
					m_iErrorPoint=9;
					if(csVal!="") 
					{
						pos=lb->AddString(csVal);
						m_iErrorPoint=10;
						lb->SetItemData(pos,DWORD(value));
						if(current==-1 && mDefault) lb->SetCurSel(pos);//cur_pos=pos;
						if(value==current) lb->SetCurSel(pos);//cur_pos=pos;
					}
					m_iErrorPoint=10;
					m_RecordSet->MoveNext();
				}
			}
			m_iErrorPoint=11;
			m_RecordSet->Close();
			//lb->SetCurSel(cur_pos);
		}
	}catch(...)
	{
		this->ThrowError(m_DataBase->GetErrorDescription());
		return 0;
	}
	return nRecords;
}

void CADOBaseTool::Dump(CString filename)
{
	CStdioFile f;
	CString csVal;
	f.Open(filename,CFile::modeCreate | CFile:: modeWrite);
	csVal.Format("------- Report string. Failure detected at %s",COleDateTime::GetCurrentTime().Format("%d.%m.%Y %H:%M:%S"));
	f.WriteString(csVal);
	csVal.Format("Procedure name: %s at the point number %d",m_csProcNum,m_iErrorPoint);
	f.WriteString(csVal);
	csVal.Format("CADOException description: %s\n",m_csErrorString);
	f.WriteString(csVal);
	f.Close();
}

CString CADOBaseTool::GetError()
{
	return m_csErrorString;
}
