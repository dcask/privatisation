// DocData.cpp: implementation of the DocData class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "DocData.h"
#include "privatisation.h"
#include "StrArray.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

DocData::DocData()
{
	m_bSaved=FALSE;
	/*Раздел адрес*/
	m_lContractID=-1; // Улица
	m_iDistrict=-1;
	m_lStreet=-1; // Улица
	m_iBuilding=0; // Дом
	m_csBuildingPart=_T(""); // Корпус
	m_iFlat=0; // Квартира
	m_csFlatPart=_T(""); // Часть квартиры
	m_csFlatAdd=_T(""); // Дополнительные квартиры
	m_iPrivRooms=0; // Приватизированные комнаты
	m_dAddrPrivArea=0.0; // Приватизированная площадь
	m_iFlatType=-1; // Тип квартиры
	m_iPropertyType=-1; // Тип собственности
	/*Регистрация в депортаменте*/
	m_csDepRegNum=_T(""); // Номер регистрации
	m_DepRegDate.m_status=COleDateTime::null; // Дата регистрации
	/*Комментарии к договору*/
	m_csContractComments=_T("");
	/*Балансодержатель*/
	m_csBalanceHolder=_T(""); m_iBalanceHolder=-1;
	/*Дом*/
	m_dBFullArea=0.0; // Общая площадь
	m_dBCost=0.0; // Стоимость
	m_BBuiltDate.m_status=COleDateTime::null; // Дата постройки
	m_dBCoefG=0.0; // Коэффициент
	/*Квартира*/
	m_iFlatRooms=0; // Количество комнат
	m_dFlatFullArea=0.0; // Общая площадь
	m_dFlatLiveArea=0.0; // Общая жилая площадь
	m_dFlatCost=0.0; // Стоимость
	/*Участок*/
	m_iLot=0; // Участок
	m_dLotLivepart=0.0; // Доля жилой площади
	m_dLotCost=0.0; // Стоимость жилой площади
	m_LotDate.m_status=COleDateTime::null; // Дата заключения договора
	/*Регистрация*/
	m_RegDate.m_status=COleDateTime::null; // Дата регистрации договора
	m_RegRecordDate.m_status=COleDateTime::null; // Дата ввода договора
	m_iBookNum=0; // Номер книги
	m_iRegNum=0; // Номер регистрации
	/*Дата расторжения договора*/
	m_CancelDate.m_status=COleDateTime::null;
	/*Акт*/; 
	m_dNorm=0.0; // Норматив
	m_dPayment=0.0; // Оплата
	m_ActDate.m_status=COleDateTime::null; // Дата акта
	m_iTranferType=-1; // Условие передачи (Вид передачи)

	/*идентификатор из таблицы адресов для текущей записи*/
	m_lAdresID1=-1;
	m_lAdresID2=-1;
	
	m_csPreview=_T("");
}

DocData::~DocData()
{
	CleanArrays();
}
//--------------------------------- Load -------------------------------------------///
BOOL DocData::FillData(long id)
{
	CString csVal,tmp;
	long nRecords;
	CleanArrays();
	if(id==-1) return TRUE;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mGetContract]");
	//CADOCommand pCmdOwners(bt->GetDB(), "[GetOwners]");
	pCmd.AddParameter("ContractID",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long), id );
	try
	{
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();
		if(nRecords<1) 
		{
			csVal.Format("FillData.Contract.nRecords<1,id=%d\nВозможно договор удалён",id);
			AfxMessageBox(csVal,MB_OK|MB_ICONERROR);
			return FALSE;
		}

		/*Раздел адрес*/
		bt->GetRS()->GetFieldValue("District_ID",m_iDistrict);
		m_csDistrict=bt->GetStringValue("tDistrict"); // Район
		m_csStreet=bt->GetStringValue("tStreet"); // Улица
		m_csFullStreet=bt->GetStringValue("FullStreet"); // Улица
		bt->GetRS()->GetFieldValue("Street_ID",m_lStreet);
		bt->GetRS()->GetFieldValue("BuildingNum",m_iBuilding);
		m_csBuildingPart=bt->GetStringValue("Part");
		bt->GetRS()->GetFieldValue("FlatNum",m_iFlat);
		m_csFlatPart=bt->GetStringValue("ExtFlat"); // Часть квартиры
		m_csFlatAdd=bt->GetStringValue("AddFlats"); // Дополнительные квартиры
		bt->GetRS()->GetFieldValue("PrivatRoomQuant",m_iPrivRooms);
		bt->GetRS()->GetFieldValue("PrivatSqr",m_dAddrPrivArea);
		m_dAddrPrivArea=DoubleRound(m_dAddrPrivArea,2);
		
		bt->GetRS()->GetFieldValue("FlatType_ID",m_iFlatType);
		m_csFlatType=bt->GetStringValue("tFlatType"); 
		bt->GetRS()->GetFieldValue("OwnershipType_ID",m_iPropertyType);
		m_csPropertyType=bt->GetStringValue("tOwnershipType"); 
		/*Регистрация в депортаменте*/
		m_csDepRegNum=bt->GetStringValue("DepRegNum"); // Номер регистрации
		bt->GetRS()->GetFieldValue("DepRegDate",m_DepRegDate);
		/*Комментарии к договору*/
		m_csContractComments=bt->GetStringValue("Comments");
		/*Балансодержатель*/
		m_csBalanceHolder=bt->GetStringValue("BHText"); 
		bt->GetRS()->GetFieldValue("BHAliase_ID",m_iBalanceHolder);
		m_csChief=bt->GetStringValue("Chief"); 
		m_csGround=bt->GetStringValue("Ground"); 
		m_csSign=bt->GetStringValue("Sign_"); 
		m_csBHAddress=bt->GetStringValue("BHAddress"); 
		
		/*Дом*/
		bt->GetRS()->GetFieldValue("BuildingFullSqr",m_dBFullArea);
		bt->GetRS()->GetFieldValue("BuildingCost",m_dBCost);
		bt->GetRS()->GetFieldValue("BuildingDate",m_BBuiltDate);
		bt->GetRS()->GetFieldValue("Coef",m_dBCoefG);
		/*Квартира*/
		bt->GetRS()->GetFieldValue("RoomQuant",m_iFlatRooms);
		bt->GetRS()->GetFieldValue("FlatFullSqr",m_dFlatFullArea);
		bt->GetRS()->GetFieldValue("FlatLiveSqr",m_dFlatLiveArea);
		bt->GetRS()->GetFieldValue("FlatCost",m_dFlatCost);
		/*Участок*/
		bt->GetRS()->GetFieldValue("Lot",m_iLot);
		bt->GetRS()->GetFieldValue("ShareLiveSqr",m_dLotLivepart);
		bt->GetRS()->GetFieldValue("LiveSqrCost",m_dLotCost);
		bt->GetRS()->GetFieldValue("ContractDate",m_LotDate);
		/*Регистрация*/

		bt->GetRS()->GetFieldValue("ContractRecordDate",m_RegRecordDate);
		bt->GetRS()->GetFieldValue("ContractRegDate",m_RegDate);
		bt->GetRS()->GetFieldValue("BookNum",m_iBookNum);
		bt->GetRS()->GetFieldValue("RegNum",m_iRegNum);
		/*Дата расторжения договора*/
		bt->GetRS()->GetFieldValue("ContractCancelDate",m_CancelDate);
		/*Акт*/; 
		bt->GetRS()->GetFieldValue("Norm",m_dNorm);
		bt->GetRS()->GetFieldValue("Payment",m_dPayment);
		bt->GetRS()->GetFieldValue("ActDate",m_ActDate);
		bt->GetRS()->GetFieldValue("PaymentType_ID",m_iTranferType);
		m_csTranferType=bt->GetStringValue("tPaymentType"); 

		/*идентификатор из таблицы адресов для текущей записи*/
		bt->GetRS()->GetFieldValue("Address_ID1",m_lAdresID1);
		bt->GetRS()->GetFieldValue("Address_ID2",m_lAdresID2);
		/*последние изменения*/
		bt->GetRS()->GetFieldValue("Modified",m_Modified);
		bt->GetRS()->GetFieldValue("UserModified",m_csUserModified);

		/*обнуление дат*/
		if(m_DepRegDate.m_dt==0.0) m_DepRegDate.m_status=COleDateTime::null;
		if(m_BBuiltDate.m_dt==0.0) m_BBuiltDate.m_status=COleDateTime::null;
		if(m_LotDate.m_dt==0.0) m_LotDate.m_status=COleDateTime::null;
		if(m_RegDate.m_dt==0.0) m_RegDate.m_status=COleDateTime::null;
		if(m_RegRecordDate.m_dt==0.0) m_RegRecordDate.m_status=COleDateTime::null;
		if(m_CancelDate.m_dt==0.0) m_CancelDate.m_status=COleDateTime::null;
		if(m_ActDate.m_dt==0.0) m_ActDate.m_status=COleDateTime::null;
		
		/*заполнение владельцев*/
		
		pCmd.SetText("[mGetOwners]");
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();

		Owner* newOwner;

		if(nRecords>0)
		{
			for(long i=0; i<nRecords; ++i)
			{
				newOwner=new Owner();
				bt->GetRS()->GetFieldValue("ID_",newOwner->m_lID);
				bt->GetRS()->GetFieldValue("BirthDate",newOwner->m_Birthday);
				newOwner->m_csFamily=bt->GetStringValue("FamilyName");
				newOwner->m_csName=bt->GetStringValue("FirstName");
				newOwner->m_csSurname=bt->GetStringValue("SurName");
				newOwner->m_csPart=bt->GetStringValue("FlatPart");
				newOwner->m_csPass=bt->GetStringValue("Passport");
				newOwner->m_iStat=0;
				m_Owners.Add(newOwner);
				bt->GetRS()->MoveNext();
			}
			bt->GetRS()->Close();
		}

		/*заполнение отказников*/
		pCmd.SetText("[mGetRefusers]");
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();

		Refuser* newRefuser;

		if(nRecords>0)
		{
			for(long i=0; i<nRecords; ++i)
			{
				newRefuser=new Refuser();
				bt->GetRS()->GetFieldValue("ID_",newRefuser->m_lID);
				bt->GetRS()->GetFieldValue("BirthDate",newRefuser->m_Birthday);
				newRefuser->m_csFamily=bt->GetStringValue("FamilyName");
				newRefuser->m_csName=bt->GetStringValue("FirstName");
				newRefuser->m_csSurname=bt->GetStringValue("SurName");
				newRefuser->m_csComments=bt->GetStringValue("Comments");
				newRefuser->m_iStat=0;
				m_Refusers.Add(newRefuser);
				bt->GetRS()->MoveNext();
			}
			bt->GetRS()->Close();
		}
		/*доверители*/
		FlatRights* object;
		pCmd.SetText("[mGetFlatRights]");
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();
		
		if(nRecords>0)
		{
			for(long i=0; i<nRecords; ++i)
			{
				object=new FlatRights();
				bt->GetRS()->GetFieldValue("ID_",object->m_lID);
				bt->GetRS()->GetFieldValue("Agreement",object->m_iAgreed);
				bt->GetRS()->GetFieldValue("ChildQuantity",object->m_iChildQuantity);
				bt->GetRS()->GetFieldValue("Status",object->m_iPersonStatus);
				bt->GetRS()->GetFieldValue("Verb_ID",object->m_iVerb);
				bt->GetRS()->GetFieldValue("Owner_ID",object->m_lOwnerID);
				bt->GetRS()->GetFieldValue("Parent_ID",object->m_lParentID);
				bt->GetRS()->GetFieldValue("Document_ID",object->m_lWarrantID);
				//object->m_csWarrantText=bt->GetStringValue("DocumentText");
				object->m_csVerb=bt->GetStringValue("tVerb");
				bt->GetRS()->GetFieldValue("InTheName",object->m_iInTheName);
				
				object->m_csFamily=bt->GetStringValue("FamilyName");
				object->m_csName=bt->GetStringValue("FirstName");
				object->m_csSurname=bt->GetStringValue("SurName");
				object->m_iStat=0;
				object->m_Warrant=NULL;
				m_FlatRights.Add(object);
				bt->GetRS()->MoveNext();
			}
			bt->GetRS()->Close();
		}

		/*создание зависимостей FlatRights*/
		FlatRights* jobject;
		for(long i=0; i<nRecords; ++i)
		{
			object=(FlatRights*)(m_FlatRights.GetAt(i));
			if(object->m_lParentID==-1) 
				object->m_ParentInternal=NULL;
			else
			{
				for(long j=0; j<nRecords,i!=j; ++j)
				{
					if(i==j) continue;
					jobject=(FlatRights*)(m_FlatRights.GetAt(j));
					if(object->m_lParentID==jobject->m_lID)
						object->m_ParentInternal=jobject;
				}
				if(object->m_ParentInternal) 
					object->m_ParentInternal->m_bHasChildren=TRUE;
			}
			if(object->m_lOwnerID==-1) 
				object->m_Owner=NULL;
			else
				for(long j=0; j<m_Owners.GetSize(); ++j)
				{
					newOwner=(Owner*)(m_Owners.GetAt(j));
					if(object->m_lOwnerID==newOwner->m_lID)
						object->m_Owner=newOwner;
				}
		}
		/*Заполнение массива доверенностей*/
		Warrant* war;
		pCmd.SetText("[mGetDocuments]");
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();
		
		if(nRecords>0)
		{
			for(long l=0; l<nRecords; ++l)
			{					
				war= new Warrant();
				war->m_iStat=0;
				bt->GetRS()->GetFieldValue("ID_",war->m_lID);
				war->m_csText=bt->GetStringValue("DocumentText");
				//bt->GetRS()->GetFieldValue("DocumentType_ID",war->m_iDocType);
				m_Warrants.Add(war);
				bt->GetRS()->MoveNext();
			}
			bt->GetRS()->Close();
		}
		/*создание зависимостей Documents*/
		for(i=0; i<m_Warrants.GetSize(); ++i)
		{
			war=(Warrant*) m_Warrants.GetAt(i);
			//war->m_FlatRights=NULL;
			for(long j=0; j<m_FlatRights.GetSize(); ++j)
			{
				jobject=(FlatRights*)(m_FlatRights.GetAt(j));
				if(jobject->m_lWarrantID==war->m_lID)
				{
					war->m_aFlatRights.Add(jobject);
					jobject->m_Warrant=war;
				}
			}
		}
		/*дубликаты*/
		ContractReplica* rep;
		pCmd.SetText("[mGetReplicas]");
		//
		if(!bt->Execute(&pCmd))
				throw(1);
		nRecords=bt->GetRecordsCount();
		if(nRecords>0)
		{
			for(long i=0; i<nRecords; ++i)
			{
					rep=new ContractReplica();
					bt->GetRS()->GetFieldValue("ID_",rep->m_lID);
					bt->GetRS()->GetFieldValue("Date_",rep->m_Date);
					rep->m_csComments=bt->GetStringValue("Comments");
					rep->m_iStat=0;
					m_Replica.Add(rep);
					bt->GetRS()->MoveNext();
			}
			bt->GetRS()->Close();
		}
		m_bSaved=TRUE;
	}catch(...)			
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка открытия договора");
		return FALSE;
	}
	((CPrivatisationApp*)AfxGetApp())->AddLog(1,id,2,m_iBookNum, m_iRegNum);
	return TRUE;
}
//------------------------------------------ Save ----------------------------------------------///
BOOL DocData::SaveContract(BOOL bDel)
{
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmd(bt->GetDB(), "[mSetContract]");
	if(!bDel)
		if(m_Owners.GetSize()==0)
		{
			AfxMessageBox("Укажите заявителей");
			return FALSE;
		}
	/*обнуление дат*/
	if(m_DepRegDate.m_status==COleDateTime::null) m_DepRegDate.m_dt=0.0;
	if(m_BBuiltDate.m_status==COleDateTime::null) m_BBuiltDate.m_dt=0.0;
	if(m_LotDate.m_status==COleDateTime::null) m_LotDate.m_dt=0.0;
	if(m_RegDate.m_status==COleDateTime::null) m_RegDate.m_dt=0.0;
	if(m_RegRecordDate.m_status==COleDateTime::null) m_RegRecordDate.m_dt=0.0;
	if(m_CancelDate.m_status==COleDateTime::null) m_CancelDate.m_dt=0.0;
	if(m_ActDate.m_status==COleDateTime::null) m_ActDate.m_dt=0.0;
	try
	{
		if(m_lContractID==-1) // новый добавить
		{
			bt->GetRS()->Open("SELECT * FROM mContracts WHERE 1=2",CADORecordset::openQuery);
			bt->GetRS()->AddNew();
			bt->GetRS()->SetFieldValue(1,0);
			bt->GetRS()->Update();
			bt->GetRS()->GetFieldValue("ID_",m_lContractID);
			bt->GetRS()->Close();
		}

		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		pCmd.AddParameter("DistrictID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iDistrict );
		pCmd.AddParameter("AddressID1",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long), m_lAdresID1);
		pCmd.AddParameter("AddressID2",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long), m_lAdresID2);
		pCmd.AddParameter("DRegDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime), m_DepRegDate);
		pCmd.AddParameter("DRegNum",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csDepRegNum.GetLength()!=0?m_csDepRegNum.GetLength():1,m_csDepRegNum);
		pCmd.AddParameter("FlatN",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int), m_iFlat);
		pCmd.AddParameter("EFlat",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csFlatPart.GetLength()!=0?m_csFlatPart.GetLength():1,m_csFlatPart);
		pCmd.AddParameter("AFlats",CADORecordset::typeChar,
			CADOParameter::paramInput,m_csFlatAdd.GetLength()!=0?m_csFlatAdd.GetLength():1,m_csFlatAdd);
		pCmd.AddParameter("PRoomCount",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iPrivRooms);
		pCmd.AddParameter("PS",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double), m_dAddrPrivArea);
		pCmd.AddParameter("FlatTypeID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iFlatType);
		pCmd.AddParameter("PropetyTypeID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iPropertyType);
		pCmd.AddParameter("BHAliaseID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iBalanceHolder);
		pCmd.AddParameter("BFullSqr",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dBFullArea);
		pCmd.AddParameter("BCost",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dBCost);
		pCmd.AddParameter("BDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_BBuiltDate);
		pCmd.AddParameter("C",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dBCoefG);
		pCmd.AddParameter("RCount",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iFlatRooms);
		pCmd.AddParameter("FFullSqr",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dFlatFullArea);
		pCmd.AddParameter("FLiveSqr",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dFlatLiveArea);
		pCmd.AddParameter("FCost",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dFlatCost);
		pCmd.AddParameter("L",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iLot);
		pCmd.AddParameter("SLiveSqr",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dLotLivepart);
		pCmd.AddParameter("LSqrCost",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dLotCost);
		pCmd.AddParameter("CDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_LotDate);
		pCmd.AddParameter("CRegDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_RegDate);
		pCmd.AddParameter("CCancelDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_CancelDate);
		pCmd.AddParameter("CRecordDate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_RegRecordDate);
		pCmd.AddParameter("BNum",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iBookNum);
		pCmd.AddParameter("RNum",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iRegNum);	
		pCmd.AddParameter("N",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dNorm);	
		pCmd.AddParameter("Pay",CADORecordset::typeCurrency,
			CADOParameter::paramInput,sizeof(double),m_dPayment);	
		pCmd.AddParameter("ADate",CADORecordset::typeDate,
			CADOParameter::paramInput,sizeof(COleDateTime),m_ActDate);	
		pCmd.AddParameter("TransTypeID",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),m_iTranferType);	
		pCmd.AddParameter("Com",CADORecordset::typeVarChar,
			CADOParameter::paramInput,m_csContractComments.GetLength()!=0?m_csContractComments.GetLength():1,
			m_csContractComments);	
		pCmd.AddParameter("User",CADORecordset::typeInteger,
			CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID);	
		pCmd.AddParameter("ID",CADORecordset::typeBigInt,
			CADOParameter::paramInput,sizeof(long), m_lContractID);	

		if(!bt->Execute(&pCmd))
			throw(1);
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();
		/*сохранение владельцев*/
	
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		Owner* oOwner;
		for(long i=0; i<m_Owners.GetSize(); ++i)
		{
			CADOCommand pCmdSetOwner(bt->GetDB(), "[mSetOwner]");		
			CADOCommand pCmdDelOwner(bt->GetDB(), "[mDeleteOwner]");
			oOwner=(Owner*)m_Owners.GetAt(i);
			switch(oOwner->m_iStat) 
			{
				case 1:// новый 
					bt->GetRS()->Open("SELECT * FROM mOwners WHERE 1=2",CADORecordset::openQuery);
					bt->GetRS()->AddNew();
					bt->GetRS()->SetFieldValue(1,m_lContractID);
					bt->GetRS()->Update();
					bt->GetRS()->GetFieldValue("ID_",oOwner->m_lID);
					bt->GetRS()->Close();
				case 0:// старый обновить
					
					pCmdSetOwner.AddParameter("ContractID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
					pCmdSetOwner.AddParameter("F",CADORecordset::typeChar,
						CADOParameter::paramInput,oOwner->m_csFamily.GetLength()!=0?oOwner->m_csFamily.GetLength():1,
						oOwner->m_csFamily);
					pCmdSetOwner.AddParameter("N",CADORecordset::typeChar,
						CADOParameter::paramInput,oOwner->m_csName.GetLength()!=0?oOwner->m_csName.GetLength():1,
						oOwner->m_csName);
					pCmdSetOwner.AddParameter("S",CADORecordset::typeChar,
						CADOParameter::paramInput,oOwner->m_csSurname.GetLength()!=0?oOwner->m_csSurname.GetLength():1,
						oOwner->m_csSurname);
					//if(oOwner->m_Birthday.m_status==COleDateTime::null) oOwner->m_Birthday.m_dt=0.0;
					pCmdSetOwner.AddParameter("Birth",CADORecordset::typeDate,
						CADOParameter::paramInput,sizeof(COleDateTime), oOwner->m_Birthday);
					pCmdSetOwner.AddParameter("Part",CADORecordset::typeChar,
						CADOParameter::paramInput,oOwner->m_csPart.GetLength()!=0?oOwner->m_csPart.GetLength():1,
						oOwner->m_csPart);
					pCmdSetOwner.AddParameter("Pass",CADORecordset::typeChar,
						CADOParameter::paramInput,oOwner->m_csPass.GetLength()!=0?oOwner->m_csPass.GetLength():1,
						oOwner->m_csPass);
					pCmdSetOwner.AddParameter("User",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID );
					pCmdSetOwner.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), oOwner->m_lID);
					if(!bt->Execute(&pCmdSetOwner))
						throw(1);
					oOwner->m_iStat=0;
					break;
				case 2:// удалённый
					pCmdDelOwner.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), oOwner->m_lID);
					if(!bt->Execute(&pCmdDelOwner))
						throw(1);
					//////удаляем из памяти
					delete oOwner;
					m_Owners.RemoveAt(i--);
					break;
				default:
					break;
			}
			
		}
		//m_Owners.RemoveAll();
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();

		/*сохранение отказников*/
	
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		Refuser* oRefuser;
		for(i=0; i<m_Refusers.GetSize(); ++i)
		{
			CADOCommand pCmdSetRefuser(bt->GetDB(), "[mSetRefuser]");		
			CADOCommand pCmdDelRefuser(bt->GetDB(), "[mDeleteRefuser]");
			oRefuser=(Refuser*)m_Refusers.GetAt(i);
			switch(oRefuser->m_iStat) 
			{
				case 1:// новый 
					bt->GetRS()->Open("SELECT * FROM mRefusers WHERE 1=2",CADORecordset::openQuery);
					bt->GetRS()->AddNew();
					bt->GetRS()->SetFieldValue(1,m_lContractID);
					bt->GetRS()->Update();
					bt->GetRS()->GetFieldValue("ID_",oRefuser->m_lID);
					bt->GetRS()->Close();
				case 0:// старый обновить
					pCmdSetRefuser.AddParameter("ContractID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
					pCmdSetRefuser.AddParameter("F",CADORecordset::typeChar,
						CADOParameter::paramInput,oRefuser->m_csFamily.GetLength()!=0?oRefuser->m_csFamily.GetLength():1,
						oRefuser->m_csFamily);
					pCmdSetRefuser.AddParameter("N",CADORecordset::typeChar,
						CADOParameter::paramInput,oRefuser->m_csName.GetLength()!=0?oRefuser->m_csName.GetLength():1,
						oRefuser->m_csName);
					pCmdSetRefuser.AddParameter("S",CADORecordset::typeChar,
						CADOParameter::paramInput,oRefuser->m_csSurname.GetLength()!=0?oRefuser->m_csSurname.GetLength():1,
						oRefuser->m_csSurname);
					if(oRefuser->m_Birthday.m_status==COleDateTime::null) oRefuser->m_Birthday.m_dt=0.0;
					pCmdSetRefuser.AddParameter("Birth",CADORecordset::typeDate,
						CADOParameter::paramInput,sizeof(COleDateTime), oRefuser->m_Birthday);
					pCmdSetRefuser.AddParameter("Com",CADORecordset::typeChar,
						CADOParameter::paramInput,oRefuser->m_csComments.GetLength()!=0?oRefuser->m_csComments.GetLength():1,
						oRefuser->m_csComments);
					pCmdSetRefuser.AddParameter("User",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID );
					pCmdSetRefuser.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), oRefuser->m_lID);
					if(!bt->Execute(&pCmdSetRefuser))
						throw(1);
					oRefuser->m_iStat=0;
					break;
				case 2:// удалённый
					pCmdDelRefuser.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), oRefuser->m_lID);
					if(!bt->Execute(&pCmdDelRefuser))
						throw(1);
					//////удаляем из памяти
					delete oRefuser;
					m_Refusers.RemoveAt(i--);
					break;
				default:
					break;
			}
			
		}
		//m_Refusers.RemoveAll();
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();

		/*Заполнение массива доверенностей*/
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		Warrant* war;
		for(long l=0; l<m_Warrants.GetSize(); ++l)
		{					
			war= (Warrant*) m_Warrants.GetAt(l);
			CADOCommand pCmdSetDoc(bt->GetDB(), "[mSetDoc]");		
			CADOCommand pCmdDelDoc(bt->GetDB(), "[mDeleteDoc]");
			switch(war->m_iStat) 
			{
				case 1:// новый 
					bt->GetRS()->Open("SELECT * FROM mDocuments WHERE 1=2",CADORecordset::openQuery);
					bt->GetRS()->AddNew();
					bt->GetRS()->SetFieldValue(1,m_lContractID);
					bt->GetRS()->Update();
					bt->GetRS()->GetFieldValue("ID_",war->m_lID);
					bt->GetRS()->Close();
				case 0:// старый обновить
					pCmdSetDoc.AddParameter("ContractID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
					pCmdSetDoc.AddParameter("DocText",CADORecordset::typeChar,
						CADOParameter::paramInput,war->m_csText.GetLength()!=0?war->m_csText.GetLength():1,
						war->m_csText);
					pCmdSetDoc.AddParameter("User",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID );
					pCmdSetDoc.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), war->m_lID);
					if(!bt->Execute(&pCmdSetDoc))
						throw(1);
					war->m_iStat=0;
					break;
				case 2:// удалённый
					pCmdDelDoc.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), war->m_lID);
					if(!bt->Execute(&pCmdDelDoc))
						throw(1);
					//////удаляем из памяти
					delete war;
					m_Warrants.RemoveAt(i--);
					break;
				default:
					break;
			}
		}
		//m_Warrants.RemoveAll();
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();

		/*дубликаты*/
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		ContractReplica* rep;
		for(i=0; i<m_Replica.GetSize(); ++i)
		{
			rep=(ContractReplica*) m_Replica.GetAt(i);
			CADOCommand pCmdSetRep(bt->GetDB(), "[mSetReplica]");		
			CADOCommand pCmdDelRep(bt->GetDB(), "[mDeleteReplica]");
			switch(rep->m_iStat) 
			{
				case 1:// новый 
					bt->GetRS()->Open("SELECT * FROM mReplicas WHERE 1=2",CADORecordset::openQuery);
					bt->GetRS()->AddNew();
					bt->GetRS()->SetFieldValue(1,m_lContractID);
					bt->GetRS()->Update();
					bt->GetRS()->GetFieldValue("ID_",rep->m_lID);
					bt->GetRS()->Close();
				case 0:// старый обновить
					pCmdSetRep.AddParameter("ContractID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
					pCmdSetRep.AddParameter("Date",CADORecordset::typeDate,
						CADOParameter::paramInput,sizeof(COleDateTime),	rep->m_Date);
					pCmdSetRep.AddParameter("Com",CADORecordset::typeBSTR,
						CADOParameter::paramInput,rep->m_csComments.GetLength()!=0?rep->m_csComments.GetLength():1,
						rep->m_csComments);
					pCmdSetRep.AddParameter("User",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID );
					pCmdSetRep.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), rep->m_lID);
					if(!bt->Execute(&pCmdSetRep))
						throw(1);
					rep->m_iStat=0;
					break;
				case 2:// удалённый
					pCmdDelRep.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), rep->m_lID);
					if(!bt->Execute(&pCmdDelRep))
						throw(1);
					//////удаляем из памяти
					delete rep;
					m_Replica.RemoveAt(i--);
					break;
				default:
					break;
			}
		
		
		}
		//m_Replica.RemoveAll();
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();

		/*доверители*/
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->BeginTransaction();
		FlatRights* object, *tmpobject;
		///// сортируем, ставим потомков в самый конец массива
		for(i=0; i<m_FlatRights.GetSize(); ++i)
		{
			object=(FlatRights*) m_FlatRights.GetAt(i);
			if(object->m_ParentInternal==NULL)
			{
				//m_FlatRights.Add(object);
				m_FlatRights.RemoveAt(i);
				m_FlatRights.InsertAt(0,object);
			}
		}
		///////считаем количество детей
		for(i=0; i<m_FlatRights.GetSize(); ++i)
		{
			object=(FlatRights*) m_FlatRights.GetAt(i);
			object->m_iChildQuantity=0;
			if(object->m_ParentInternal==NULL)
				for(long j=0; j<m_FlatRights.GetSize(); ++j)
				{
					tmpobject=(FlatRights*) m_FlatRights.GetAt(j);
					if(tmpobject->m_ParentInternal==object)
						if((tmpobject->m_iPersonStatus==2) || 
							(tmpobject->m_iPersonStatus==3)  )
								object->m_iChildQuantity++;
				}

		}
		for(i=0; i<m_FlatRights.GetSize(); ++i)
		{
			object=(FlatRights*) m_FlatRights.GetAt(i);
			
			CADOCommand pCmdSetFR(bt->GetDB(), "[mSetFlatRights]");		
			CADOCommand pCmdDelFR(bt->GetDB(), "[mDeleteFlatRights]");
			switch(object->m_iStat) 
			{
				case 1:// новый 
					bt->GetRS()->Open("SELECT * FROM mFlatRights WHERE 1=2",CADORecordset::openQuery);
					bt->GetRS()->AddNew();
					bt->GetRS()->SetFieldValue(1,m_lContractID);
					bt->GetRS()->Update();
					bt->GetRS()->GetFieldValue("ID_",object->m_lID);
					bt->GetRS()->Close();
				case 0:// старый обновить
					pCmdSetFR.AddParameter("ContractID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
					pCmdSetFR.AddParameter("ParentID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), 
						(object->m_ParentInternal!=NULL)?object->m_ParentInternal->m_lID:long(-1));
					pCmdSetFR.AddParameter("OwnerID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long),
						(object->m_Owner!=NULL)?object->m_Owner->m_lID:long(-1));
					pCmdSetFR.AddParameter("F",CADORecordset::typeChar,
						CADOParameter::paramInput,object->m_csFamily.GetLength()!=0?object->m_csFamily.GetLength():1,
						object->m_csFamily);
					pCmdSetFR.AddParameter("N",CADORecordset::typeChar,
						CADOParameter::paramInput,object->m_csName.GetLength()!=0?object->m_csName.GetLength():1,
						object->m_csName);
					pCmdSetFR.AddParameter("S",CADORecordset::typeChar,
						CADOParameter::paramInput,object->m_csSurname.GetLength()!=0?object->m_csSurname.GetLength():1,
						object->m_csSurname);
					pCmdSetFR.AddParameter("DocID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), 
						(object->m_Warrant!=NULL)?object->m_Warrant->m_lID:long(-1));
					pCmdSetFR.AddParameter("Child",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int), object->m_iChildQuantity);
					pCmdSetFR.AddParameter("Verb",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int), object->m_iVerb);
					pCmdSetFR.AddParameter("InName",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int), object->m_iInTheName);
					pCmdSetFR.AddParameter("Stat",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int), object->m_iPersonStatus);
					pCmdSetFR.AddParameter("Arg",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int), object->m_iAgreed);
					pCmdSetFR.AddParameter("User",CADORecordset::typeInteger,
						CADOParameter::paramInput,sizeof(int),((CPrivatisationApp*)AfxGetApp())->m_iUserID );
					pCmdSetFR.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), object->m_lID);
					if(!bt->Execute(&pCmdSetFR))
						throw(1);
					object->m_iStat=0;
					break;
				case 2:// удалённый
					pCmdDelFR.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), object->m_lID);
					if(!bt->Execute(&pCmdDelFR))
						throw(1);
					//////удаляем из памяти
					delete object;
					m_FlatRights.RemoveAt(i--);
					break;
				default:
					break;
			}
		}
		//m_FlatRights.RemoveAll();
		m_bSaved=TRUE;
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->CommitTransaction();
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка записи");
		//if(((CPrivatisationApp*)AfxGetApp())->m_bTransaction) bt->GetDB()->RollbackTransaction();
		return FALSE;
	}
	((CPrivatisationApp*)AfxGetApp())->AddLog(1,m_lContractID,3,m_iBookNum, m_iRegNum);
	return TRUE;
}

void DocData::CleanArrays()
{
	try
	{
		//очистить всё
		for(int l=0; l<m_FlatRights.GetSize(); delete (FlatRights*)(m_FlatRights.GetAt(l++)));	
		m_FlatRights.RemoveAll();
		
		for(l=0; l<m_Replica.GetSize(); delete (ContractReplica*)(m_Replica.GetAt(l++)));
		m_Replica.RemoveAll();
		
		for(l=0; l<m_Owners.GetSize(); delete (Owner*)(m_Owners.GetAt(l++)));
		m_Owners.RemoveAll();
		
		for(l=0; l<m_Refusers.GetSize(); delete (Refuser*)(m_Refusers.GetAt(l++)));
		m_Refusers.RemoveAll();

		for(l=0; l<m_Warrants.GetSize(); delete (Warrant*)(m_Warrants.GetAt(l++)));
		m_Warrants.RemoveAll();
	}
	catch(...)
	{
		MyDump(((CPrivatisationApp*)AfxGetApp())->m_csAppPath+"\\errors.dmp","Ошибка");
	}


}

BOOL DocData::DeleteContract()
{
	for(int l=0; l<m_FlatRights.GetSize(); ++l)
		((FlatRights*)(m_FlatRights.GetAt(l)))->m_iStat=2;
	for(l=0; l<m_Replica.GetSize(); ++l)
		((ContractReplica*)(m_Replica.GetAt(l)))->m_iStat=2;
	for(l=0; l<m_Owners.GetSize(); ++l)
		((Owner*)(m_Owners.GetAt(l)))->m_iStat=2;
	for(l=0; l<m_Refusers.GetSize(); ++l)
		((Refuser*)(m_Refusers.GetAt(l)))->m_iStat=2;
	for(l=0; l<m_Warrants.GetSize(); ++l)
		((Warrant*)(m_Warrants.GetAt(l)))->m_iStat=2;

	if( !SaveContract(TRUE)) return FALSE;
	CADOBaseTool* bt=((CPrivatisationApp*)AfxGetApp())->m_bt;
	CADOCommand pCmdDel(bt->GetDB(), "[mDeleteContract]");
	pCmdDel.AddParameter("ID",CADORecordset::typeBigInt,
						CADOParameter::paramInput,sizeof(long), m_lContractID);
	if(!bt->Execute(&pCmdDel)) return FALSE;
	((CPrivatisationApp*)AfxGetApp())->AddLog(1,m_lContractID,4,m_iBookNum, m_iRegNum);
	return TRUE;
}
