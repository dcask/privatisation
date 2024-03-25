// StrArray.cpp: implementation of the StrArray class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
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

Owner::Owner()
{
	m_iStat=-1;
	m_lID=-1;
	m_csFamily="";
	m_csName="";
	m_csSurname="";
	m_csPart="";
	m_csPass="";
	m_Birthday.m_status=COleDateTime::null;
}

Owner::~Owner()
{
}


Refuser::Refuser()
{
	m_iStat=-1;
	m_lID=-1;
	m_csFamily="";
	m_csName="";
	m_csSurname="";
	m_csComments="";
	m_Birthday.m_status=COleDateTime::null;
}

Refuser::~Refuser()
{
}

FlatRights::FlatRights()
{
	m_iChildQuantity=0; // ���������� �����
	m_iVerb=-1;	// ���� "�����������/��"
	m_iAgreed=0;	// ���� "c ��������"
	m_iPersonStatus=1;	// 0-�����, 1-���������, 2- ���, 3-����, 4 - ���������
	m_iStat=-1;		// 0-������, 1- �����, 2-��������
	//m_iWarrantStat;		// 0-������, 1- �����, 2-��������

	m_lID=-1; // ������������� �������
	m_lParentID=-1; // ������������� �������� ��� ����� ��������
	m_lOwnerID=-1; // ������������� ���������
	m_Owner=NULL;
	m_lWarrantID=-1; // ������������� ���������
	m_Warrant=NULL;

	m_csFamily=""; // �������
	m_csName=""; //���
	m_csSurname=""; // ��������
	m_csVerb=""; // ����� ���������
	m_bHasChildren=FALSE;
	m_iInTheName=0;	// ��������� ��� ��� "�� �����"
	m_hItem=NULL;
	m_ParentInternal=NULL;	// �������� � ������� ��������
}
FlatRights::~FlatRights()
{

}
ContractReplica::ContractReplica()
{
	m_iStat=-1;		// 0-������, 1- �����, 2-��������
	m_lID=-1;
	m_Date.m_status=COleDateTime::null;
	m_csComments="";

}
ContractReplica::~ContractReplica()
{
}
Warrant::Warrant()
{
	m_lID=-1;
	m_iStat=-1;		// 0-������, 1- �����, 2-��������
	//m_FlatRights=NULL;
	//m_iDocType=-1;
	m_csText="";
}
Warrant::~Warrant()
{
	m_aFlatRights.RemoveAll();
}
CString Trace(FlatRights* parent, DocData* docdata,BOOL bWord, CADOBaseTool* bt, BOOL bDates)
{
	FlatRights* data;
	CString end="\r\n";
	if(bWord) end="\r";
	int size=docdata->m_FlatRights.GetSize();
	if(size==0) return _T("");
	CString csVal;
	CString family=_T("");
	CString name=_T("");
	CString surname=_T("");
	CString result=_T("");
	BOOL alone=TRUE;
	int child=0;
	int babies=0;
	//������� ����� � ����������� � ��������
	for(int i=0; i<size; ++i)
	{
		data=((FlatRights*) docdata->m_FlatRights.GetAt(i));
		if(data->m_iStat!=2)
		{
			if(data->m_ParentInternal==parent) child++;
			if(data->m_ParentInternal==parent && (data->m_iPersonStatus==2 || data->m_iPersonStatus==3) ) babies++;
		}
	}

	/*if(parent) 
		parent->m_iChildQuantity=babies;*/

	if(babies>1 ) result+="�� ����� ����� ������������������ �����:"+end;
	Warrant* oWar=NULL;
	for(i=0; i<size; ++i)
	{
		data=((FlatRights*) docdata->m_FlatRights.GetAt(i));

		if(data->m_iStat==2) continue;

		if(data->m_ParentInternal==parent)
		{/*������ ��� �������*/
			if((!alone && babies<2 && data->m_Warrant!=oWar) ||
				(!data->m_ParentInternal && i>0))result+="� ����� "+end;
			alone=FALSE;
			if(data->m_Warrant && data->m_Warrant!=oWar)
			{
				if(data->m_iPersonStatus==4)
					result+="�� ��������� ����������� �������������, ��������� ";
				else 
					result+="�� ��������� ������������, �������������� ";
				result+=data->m_Warrant->m_csText;
				result+=","+end;
			}
			if(data->m_ParentInternal)
				if(data->m_ParentInternal->m_iAgreed==0)
				switch(data->m_iPersonStatus)
				{
					case 1:if(data->m_Warrant!=oWar || !oWar) result+="�� ����� �������(���),"+end;
						break;
					case 2:
						if(babies==1) result+="�� ����� ������ ������������������� ����,"+end;
						break;
					case 3:
						if(babies==1) result+="�� ����� ����� ������������������ ������,"+end;
						break;
					case 4:if(data->m_Warrant!=oWar || !oWar) result+="�� ����� ����������,"+end;
						break;
					case 5:if(data->m_Warrant!=oWar || !oWar) result+="�� ����� ���������,"+end;
						break;
					case 6:if(data->m_Warrant!=oWar || !oWar) result+="�� ����� ���������,"+end;
						break;
				}
			oWar=data->m_Warrant;
			//�� ����� ����� ������������������ �����
			family=data->m_csFamily;
			name=data->m_csName;
			surname=data->m_csSurname;
			TransformFIO(&family,&name,&surname,data->m_iPersonStatus, bt);
			if(data->m_Owner)
			{
				family.MakeUpper();
				name.MakeUpper();
				surname.MakeUpper();
			}
			//result+="\b{";
			result+=family;result+=" ";
			result+=name;result+=" ";
			result+=surname;
			if(bDates && data->m_Owner) result+=data->m_Owner->m_Birthday.Format(" (%d.%m.%Y �.�.)");
			result+=","+end;
			

			if(data->m_iVerb>0) 
			{
				result+=data->m_csVerb;
				result+=" ";
			}
			
			/*� ��������*/
			switch(data->m_iAgreed)
			{
				case 1:result+="� �������� ����"+end;
					break;
				case 2:result+="� �������� ������"+end;
					break;
				case 3:result+="� �������� �������"+end;
					break;
				case 4:result+="� �������� ���������"+end;
					break;
			}
			if((data->m_iInTheName==1) && data->m_iAgreed==0 /*&& data->m_ParentInternal*/) result+="�� ������ ����� � ";

			result+=Trace(data,docdata,bWord, bt, bDates);
		}
	}
	return result;
}

CString Preview(DocData* docdata, BOOL bWord, CADOBaseTool* bt,BOOL bDates)
{
	int size=docdata->m_FlatRights.GetSize();
	int ownSize=docdata->m_Owners.GetSize();
	CString csFamily,csName,csSurname,csVal;
	BOOL alone=TRUE;
	CString csPreview="";
	CString end="\r\n";
	if(bWord) end="\r";
	BOOL bExists;
		for(int i=0; i<ownSize; ++i)
		{
			bExists=FALSE;
			for(int j=0; j<docdata->m_FlatRights.GetSize(); ++j)
			{
				FlatRights* tmp=((FlatRights*)(docdata->m_FlatRights.GetAt(j)));
				if(tmp->m_Owner==(Owner*)(docdata->m_Owners.GetAt(i)) )
					bExists=TRUE;
			}
			
			if(!bExists)
			{
				Owner* oOwner=(Owner*)docdata->m_Owners.GetAt(i);
				CString f,n,s;
				if(csPreview!="") csPreview+=end;
				f=oOwner->m_csFamily;f.MakeUpper();
				n=oOwner->m_csName;n.MakeUpper();
				s=oOwner->m_csSurname;s.MakeUpper();

				csPreview+=f;csPreview+=" ";
				csPreview+=n;csPreview+=" ";
				csPreview+=s;
				if(bDates) csPreview+=oOwner->m_Birthday.Format(" (%d.%m.%Y �.�.)");
				csPreview+=",";
			}
		}
		if(csPreview!="") csPreview+=end;
		csPreview+=Trace(NULL,docdata,bWord,bt,bDates);
	//if(b) SetDlgItemText(IDC_PREVIEW,m_csPreview);
	return csPreview;	
}
void TrimNames(CString *f, CString *n, CString *s)
{
	CString csVal;
	f->TrimLeft();
	f->TrimRight();
	n->TrimLeft();
	n->TrimRight();
	s->TrimLeft();
	s->TrimRight();
	int pos;
	////��������: ������ ������ �� ���������
	if(s->GetLength()>0)
	{
		s->MakeLower();
		csVal=s->Left(1);
		csVal.MakeUpper();
		s->SetAt(0,csVal.GetAt(0));
	}
	////�������: ������ ������ �� ��������� � ����� ����
	if(f->GetLength()>0)
	{
		f->MakeLower();
		csVal=f->Left(1);
		csVal.MakeUpper();
		f->SetAt(0,csVal.GetAt(0));
		pos=f->Find("-");
		if(pos!=-1) 
		{
			csVal=f->GetAt(pos+1);
			csVal.MakeUpper();
			f->SetAt(pos+1,csVal.GetAt(0));
		}
	}
	////���: ������ ������ �� ���������
	if(n->GetLength()>0)
	{
		n->MakeLower();
		csVal=n->Left(1);
		csVal.MakeUpper();
		n->SetAt(0,csVal.GetAt(0));
		pos=n->Find("-");
		if(pos!=-1) 
		{
			csVal=n->GetAt(pos+1);
			csVal.MakeUpper();
			n->SetAt(pos+1,csVal.GetAt(0));
		}
	}
}

void Owner::Trim()
{
	TrimNames(&m_csFamily,&m_csName,&m_csSurname);
}

void Refuser::Trim()
{
	TrimNames(&m_csFamily,&m_csName,&m_csSurname);
}