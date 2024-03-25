// DocData.h: interface for the DocData class.
// ������ ��� �������� ����� ���������
//////////////////////////////////////////////////////////////////////
//{{AFX_INCLUDES()

//}}AFX_INCLUDES

#if !defined(AFX_DOCDATA_H__E35AB7FB_B6AF_4018_9BC0_A2517F00F13F__INCLUDED_)
#define AFX_DOCDATA_H__E35AB7FB_B6AF_4018_9BC0_A2517F00F13F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "ado2.h"
//#include "FChildDialog.h"

class DocData  
{
public:
	int m_iDistrict; // �����
	int m_iBuilding; // ���
	int m_iFlat; // ��������
	int m_iPrivRooms; // ����������������� �������
	int m_iFlatRooms; // ���������� ������
	int m_iFlatType; // ��� ��������
	int m_iPropertyType; // ��� �������������
	int m_iLot; // �������
	int m_iBookNum; // ����� �����
	int m_iRegNum; // ����� �����������
	int m_iTranferType; // ������� �������� (��� ��������)
	int m_iBalanceHolder; //����������������

	COleDateTime m_BBuiltDate; // ���� ���������
	COleDateTime m_DepRegDate; // ���� �����������
	COleDateTime m_LotDate; // ���� ���������� ��������
	COleDateTime m_RegDate; // ���� ����������� ��������
	COleDateTime m_RegRecordDate; // ���� ����� ��������
	COleDateTime m_CancelDate; //���� ����������� ��������
	COleDateTime m_ActDate; // ���� ����

	CString m_csDepRegNum; // ����� �����������
	CString m_csFlatPart; // ����� ��������
	CString m_csFlatAdd; // �������������� ��������
	CString m_csContractComments; //����������� � ��������
	CString m_csBalanceHolder; //����������������
	CString m_csPreview;
	CString m_csBuildingPart; // ������
	CString m_csTranferType; // ��� ��������
	CString m_csFlatType; //��� ��������
	CString m_csPropertyType; // ��� �������������
	CString m_csDistrict;
	CString m_csStreet;
	CString m_csFullStreet;
	CString m_csChief;
	CString m_csGround;
	CString m_csSign;
	CString m_csBHAddress;

	double m_dAddrPrivArea; // ����������������� �������
	double m_dBFullArea; // ����� �������
	double m_dBCost; // ���������
	double m_dBCoefG; // �����������
	double m_dFlatFullArea; // ����� �������
	double m_dFlatLiveArea; // ����� ����� �������
	double m_dFlatCost; // ���������
	double m_dLotLivepart; // ���� ����� �������
	double m_dLotCost; // ��������� ����� �������
	double m_dNorm; // ��������
	double m_dPayment; // ������
	
	long m_lContractID; // ��� ��������
	/*������������� �� ������� ������� ��� ������� ������*/
	long m_lAdresID1;
	long m_lAdresID2;
	long m_lStreet; // �����

	/*������� ��� ������� ���������� � ����������*/
	CObArray	m_Owners;
	CObArray	m_Refusers;
	
	/*������ ��� ������� �� ������� FlatRights*/
	CObArray m_FlatRights; 
	
	/*������ ����������*/
	CObArray m_Replica; 

	/*������ �������������*/
	CObArray m_Warrants; 
	//// ���� �����������
	COleDateTime m_Modified;
	///
	CString	m_csUserModified;
	BOOL	m_bSaved;
public:
	BOOL DeleteContract();
	BOOL SaveContract(BOOL bDel=FALSE);
	DocData();
	BOOL FillData(long id);
	virtual ~DocData();
private:
	void CleanArrays();
};

#endif // !defined(AFX_DOCDATA_H__E35AB7FB_B6AF_4018_9BC0_A2517F00F13F__INCLUDED_)
