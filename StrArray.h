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
	int			m_iChildQuantity; // количество детей
	int			m_iVerb;	// поле "действующий/ая"
	int			m_iAgreed;	// поле "c согласия"
	int			m_iPersonStatus;	// 0-никто, 1-гражданин, 2- сын, 3-дочь, 4 - опекаемый
	int			m_iStat;		// 0-старый, 1- новый, 2-удалённый
	//int			m_iWarrantStat;		// 0-старый, 1- новый, 2-удалённый

	long		m_lID; // идентификатор таблицы
	long		m_lParentID; // идентификатор родителя для этого элемента
	long		m_lOwnerID; // идентификатор владельца
	Owner*		m_Owner;
	long		m_lWarrantID; // идентификатор документа
	Warrant*	m_Warrant;

	CString		m_csFamily; // фамилия
	CString		m_csName; //имя
	CString		m_csSurname; // отчество
	//CString		m_csWarrantText; // текст документа
	CString		m_csVerb; // текст документа
	
	int			m_iInTheName;	// вставлять или нет "от имени"
	HTREEITEM	m_hItem;
	FlatRights* m_ParentInternal;	// родитель в массиве локально
	BOOL		m_bHasChildren;
	FlatRights();
	virtual ~FlatRights();
};

class ContractReplica:public CObject
{
public:
	int		m_iStat;		// 0-старый, 1- новый, 2-удалённый
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
	int		m_iStat;		// 0-старый, 1- новый, 2-удалённый
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
