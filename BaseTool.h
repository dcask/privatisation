// BaseTool.h: interface for the CBaseTool class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BASETOOL_H__9C41DDAD_BAFB_4426_AF30_06338C884120__INCLUDED_)
#define AFX_BASETOOL_H__9C41DDAD_BAFB_4426_AF30_06338C884120__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ado2.h"

class CADOBaseTool
{
private:
	CADODatabase*	m_DataBase;		// ������ ����
	CADORecordset*	m_RecordSet;	// ������ ������ �� ������
	BOOL			m_bError;		// ������� ������
	BOOL			m_bShowError;	// ������� ����������� ��������� � �������
	CString			m_csErrorString;// ����� ��������� ������
	CString			m_csDateFormat;	// ������ ���� ��� ����������� �������� ������
	CString			m_csProcNum;	// ���������� ������������� ������
	DWORD			m_dwRecords;	// ���������� ���������� �������
	long			m_lFields;		// ���������� ����� � ������
	long			m_lTime;		// ����� ���������� �������
	int				m_iErrorPoint;	// ����� � ������ ���  �������
	static int		m_iObjCount;	// ���������� �������� ������� ������
	CPtrArray		m_aRecordSet;

	CADOBaseTool();											// ����������� �� ���������
public:
	CString GetError();
	void Dump(CString filename);
	int LoadComboBox(CWnd* cb, CADOCommand &pCmd, int rs_num=0, long current=-1);
	BOOL AddRecordSet();
	UINT GetRecordsCount(int rs_num=0);
	CADORecordset* GetRS(int n=0);
	BOOL IsError();
	
	CADOBaseTool(LPCTSTR connection,\
		LPCTSTR userId=_T(""), LPCTSTR password=_T(""));	// �����������

	CADODatabase* GetDB() const {return m_DataBase;}		// ��������� �� ������ ����
	CADORecordset* operator->();							// ��������� �� ������ ������
	
	void ThrowError(CADOException* e);						// ���������� ������
	void ThrowError(LPCTSTR error);							// ���������� ������
	void ShowError(BOOL show);								// ����������/�������� ������
	void SetDateFormat(LPCTSTR format);						// ���������� ������ ����
	
	BOOL Execute(LPCTSTR query,int rs_num=0);				// ��������� ������
	BOOL Execute(CADOCommand *pCmd,int rs_num=0);			// ��������� ������
	BOOL Compact();											// ��������� ����
	
	int LoadComboBox(CWnd* cb, LPCTSTR query, int rs_num=0,
		long current=-1);									// ��������� ���������� ������

	static UINT GetObjCount(){return m_iObjCount;}			// �������� ���������� ��������
	
	CString GetStringValue(int index, int rs_num=0);		// �������� �������� ����
	CString GetStringValue(LPCTSTR fieldname, int rs_num=0);// �������� �������� ����
	
	long GetQueryTime() const {return m_lTime;}				// �������� ����� ����������
	
	virtual ~CADOBaseTool();								// ����������

};
#endif // !defined(AFX_BASETOOL_H__9C41DDAD_BAFB_4426_AF30_06338C884120__INCLUDED_)
