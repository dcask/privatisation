// StrArray.h: interface for the StrArray class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRARRAY_H__07427567_B885_4520_A94A_BB2325D81E3F__INCLUDED_)
#define AFX_STRARRAY_H__07427567_B885_4520_A94A_BB2325D81E3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DocData.h"
#include "stdafx.h"
class Owner:public CObject
{
public:
	void Trim();
	int				m_iStat;

	long			m_lID;

	CString			m_csFamily;
	CString			m_csName;
	CString			m_csSurname;
	CString			m_csPart;
	CString			m_csPass;

	COleDateTime	m_Birthday;

	Owner();
	virtual ~Owner();

};

class Refuser:public CObject
{
public:
	void Trim();
	int				m_iStat;

	long			m_lID;

	CString			m_csFamily;
	CString			m_csName;
	CString			m_csSurname;
	CString			m_csComments;

	COleDateTime	m_Birthday;

	Refuser();
	virtual ~Refuser();
};
class Warrant;

class FlatRights:public CObject
{
public:
	int			m_iChildQuantity; // ���������� �����
	int			m_iVerb;	// ���� "�����������/��"
	int			m_iAgreed;	// ���� "c ��������"
	int			m_iPersonStatus;	// 0-�����, 1-���������, 2- ���, 3-����, 4 - ���������
	int			m_iStat;		// 0-������, 1- �����, 2-��������
	//int			m_iWarrantStat;		// 0-������, 1- �����, 2-��������

	long		m_lID; // ������������� �������
	long		m_lParentID; // ������������� �������� ��� ����� ��������
	long		m_lOwnerID; // ������������� ���������
	Owner*		m_Owner;
	long		m_lWarrantID; // ������������� ���������
	Warrant*	m_Warrant;

	CString		m_csFamily; // �������
	CString		m_csName; //���
	CString		m_csSurname; // ��������
	//CString		m_csWarrantText; // ����� ���������
	CString		m_csVerb; // ����� ���������
	
	int			m_iInTheName;	// ��������� ��� ��� "�� �����"
	HTREEITEM	m_hItem;
	FlatRights* m_ParentInternal;	// �������� � ������� ��������
	BOOL		m_bHasChildren;
	FlatRights();
	virtual ~FlatRights();
};

class ContractReplica:public CObject
{
public:
	int		m_iStat;		// 0-������, 1- �����, 2-��������
	long	m_lID;

	COleDateTime m_Date;

	CString m_csComments;

	ContractReplica();
	virtual ~ContractReplica();
};

class Warrant:public CObject
{
public:
	long	m_lID;
	int		m_iStat;		// 0-������, 1- �����, 2-��������
	CObArray m_aFlatRights; 
	//FlatRights*	m_FlatRights;
	int		m_iDocType;
	CString m_csText;
	Warrant();
	virtual ~Warrant();
};
void TrimNames(CString *f, CString *n, CString *s);
CString Trace(FlatRights* parent, DocData* docdata,BOOL bWord, CADOBaseTool *bt, BOOL bDates=FALSE);
CString Preview(DocData* docdata, BOOL bWord,CADOBaseTool *bt, BOOL bDates=FALSE);
#endif // !defined(AFX_STRARRAY_H__07427567_B885_4520_A94A_BB2325D81E3F__INCLUDED_)
