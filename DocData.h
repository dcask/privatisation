// DocData.h: interface for the DocData class.
// Данные для основной формы документа
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
	int m_iDistrict; // Округ
	int m_iBuilding; // Дом
	int m_iFlat; // Квартира
	int m_iPrivRooms; // Приватизированные комнаты
	int m_iFlatRooms; // Количество комнат
	int m_iFlatType; // Тип квартиры
	int m_iPropertyType; // Тип собственности
	int m_iLot; // Участок
	int m_iBookNum; // Номер книги
	int m_iRegNum; // Номер регистрации
	int m_iTranferType; // Условие передачи (Вид передачи)
	int m_iBalanceHolder; //Балансодержатель

	COleDateTime m_BBuiltDate; // Дата постройки
	COleDateTime m_DepRegDate; // Дата регистрации
	COleDateTime m_LotDate; // Дата заключения договора
	COleDateTime m_RegDate; // Дата регистрации договора
	COleDateTime m_RegRecordDate; // Дата ввода договора
	COleDateTime m_CancelDate; //Дата расторжения договора
	COleDateTime m_ActDate; // Дата акта

	CString m_csDepRegNum; // Номер регистрации
	CString m_csFlatPart; // Часть квартиры
	CString m_csFlatAdd; // Дополнительные квартиры
	CString m_csContractComments; //Комментарии к договору
	CString m_csBalanceHolder; //Балансодержатель
	CString m_csPreview;
	CString m_csBuildingPart; // Корпус
	CString m_csTranferType; // Вид передачи
	CString m_csFlatType; //вид квартиры
	CString m_csPropertyType; // вид собственности
	CString m_csDistrict;
	CString m_csStreet;
	CString m_csFullStreet;
	CString m_csChief;
	CString m_csGround;
	CString m_csSign;
	CString m_csBHAddress;

	double m_dAddrPrivArea; // Приватизированная площадь
	double m_dBFullArea; // Общая площадь
	double m_dBCost; // Стоимость
	double m_dBCoefG; // Коэффициент
	double m_dFlatFullArea; // Общая площадь
	double m_dFlatLiveArea; // Общая жилая площадь
	double m_dFlatCost; // Стоимость
	double m_dLotLivepart; // Доля жилой площади
	double m_dLotCost; // Стоимость жилой площади
	double m_dNorm; // Норматив
	double m_dPayment; // Оплата
	
	long m_lContractID; // Код договора
	/*идентификатор из таблицы адресов для текущей записи*/
	long m_lAdresID1;
	long m_lAdresID2;
	long m_lStreet; // Улица

	/*Массивы для списков владельцев и отказников*/
	CObArray	m_Owners;
	CObArray	m_Refusers;
	
	/*Массив для выборки из таблицы FlatRights*/
	CObArray m_FlatRights; 
	
	/*Массив дубликатов*/
	CObArray m_Replica; 

	/*Массив доверенностей*/
	CObArray m_Warrants; 
	//// дата модификации
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
