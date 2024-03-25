// stdafx.cpp : source file that includes just the standard includes
//	privatisation.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
double DoubleRound(double src, int n)
{
	double e=pow(10.0,(double)n);
	return ((long)(src*e + 0.5))/e;
}

/*BOOL MyFloatParse(LPCTSTR lpszText, double &d)
{
	ASSERT(lpszText != NULL);
	while (*lpszText == ' ' || *lpszText == '\t')
		lpszText++;

	TCHAR chFirst = lpszText[0];
	d = _tcstod(lpszText, (LPTSTR*)&lpszText);
	if (d == 0.0 && chFirst != '0')
		return FALSE;   // could not convert
	while (*lpszText == ' ' || *lpszText == '\t')
		lpszText++;

	if (*lpszText != '\0')
		return FALSE;   // not terminated properly

	return TRUE;
}*/
void MyDDX_Text(CDataExchange *pDX, int nIDC, double &value)
{
	ASSERT(&value != NULL);
	TCHAR szBuffer[32];
	HWND hWndCtrl = pDX->PrepareEditCtrl(nIDC);
	if(value!=0.0) 
		sprintf(szBuffer, _T("%.2f"), value);
	else
		sprintf(szBuffer, _T(""));
	::SetWindowText(hWndCtrl, szBuffer);
	//SetDlgItemText(pDX->m_pDlgWnd->GetSafeHwnd(),nIDC, szBuffer);
}
void MyDDX_Date(CDataExchange* pDX, int nIDC, CWnd& rControl)
{
	ASSERT(&rControl != NULL);
	TCHAR szBuffer[32];
	COleDateTime date;
	HWND hWndCtrl = pDX->PrepareEditCtrl(nIDC);
	if (pDX->m_bSaveAndValidate)
	{
		::GetWindowText(hWndCtrl, szBuffer, 32);
		if(strcmp(szBuffer,"**-**-****") && !date.ParseDateTime(szBuffer,VAR_DATEVALUEONLY,
			(MAKELANGID(LANG_RUSSIAN, SUBLANG_DEFAULT))))
		{
			AfxMessageBox("������� ���������� ����", MB_ICONERROR);
			pDX->Fail();            // throws exception
		}
		else
		{
			COleDateTime lowerLimit;
			COleDateTime upperLimit;
			lowerLimit.SetDate(1900,1,1);
			upperLimit.SetDate(2050,1,1);
			if((date<lowerLimit || date > upperLimit) && strcmp(szBuffer,"**-**-****"))
			{
				AfxMessageBox("������� ���������� ����", MB_ICONERROR);
				pDX->Fail();            // throws exception
			}
		}
		//value = d;*/
	}
}
void MyDDX_Text(CDataExchange* pDX, int nIDC, int& value)
{
	ASSERT(&value!= NULL);
	HWND hWndCtrl = pDX->PrepareEditCtrl(nIDC);
	if(value==0) ::SetWindowText(hWndCtrl, _T(""));
}

CString ConvertDate2String(COleDateTime dt)
{
	// �������������� ���� 
	CString s;
	int day=dt.GetDay();
	int month=dt.GetMonth();
	int year=dt.GetYear();
	s="";
	// ����
	if(day>30) s="�������� ";
	else if(day>20) s="�������� ";
	if((day<10||day>20)&&day!=30)
		switch(day-day/10*10)
		{
			case 1: s+="������ ";break;
			case 2: s+="������ ";break;
			case 3: s+="������ ";break;
			case 4: s+="�������� ";break;
			case 5: s+="����� ";break;
			case 6: s+="������ ";break;
			case 7: s+="������� ";break;
			case 8: s+="������� ";break;
			case 9: s+="������� ";break;
		}
	else 
		switch(day)
		{
			case 10: s="������� ";break;
			case 11: s="������������ ";break;
			case 12: s="����������� ";break;
			case 13: s="����������� ";break;
			case 14: s="������������� ";break;
			case 15: s="����������� ";break;
			case 16: s="������������ ";break;
			case 17: s="����������� ";break;
			case 18: s="������������� ";break;
			case 19: s="������������� ";break;
			case 20: s="��������� ";break;
			case 30: s="��������� ";break;
		}
	// �����
	switch (month)
	{
		case 1: s+="������ "; break;
		case 2: s+="������� "; break;
		case 3: s+="����� "; break;
		case 4: s+="������ "; break;
		case 5: s+="��� "; break;
		case 6: s+="���� "; break;
		case 7: s+="���� "; break;
		case 8: s+="������� "; break;
		case 9: s+="�������� "; break;
		case 10: s+="������� "; break;
		case 11: s+="������ "; break;
		case 12: s+="������� "; break;
	}

	// ���
	if(year!=2000)
	{
		if (year/100==19) s+="������ ��������� "; else s+="��� ������ ";
		if(year/10*10==year)
			switch (year-year/100*100)
			{
				case 10: s+="�������� "; break;
				case 20: s+="���������� "; break;
				case 30: s+="���������� "; break;
				case 40: s+="���������� "; break;
				case 50: s+="������������ "; break;
				case 60: s+="������������� "; break;
				case 70: s+="������������ "; break;
				case 80: s+="�������������� "; break;
				case 90: s+="����������� "; break;
			}
		else
			switch ((year-year/100*100)/10*10)
			{
				//case 10: s+="��������"; break;
				case 20: s+="�������� "; break;
				case 30: s+="�������� "; break;
				case 40: s+="����� "; break;
				case 50: s+="��������� "; break;
				case 60: s+="���������� "; break;
				case 70: s+="��������� "; break;
				case 80: s+="����������� "; break;
				case 90: s+="��������� "; break;
			}
		if(year-year/100*100>10&&year-year/100*100<20)
			switch (year-year/100*100)
			{
				case 11: s+="������������� "; break;
				case 12: s+="������������ "; break;
				case 13: s+="������������ "; break;
				case 14: s+="�������������� "; break;
				case 15: s+="������������ "; break;
				case 16: s+="������������� "; break;
				case 17: s+="������������ "; break;
				case 18: s+="������������� "; break;
				case 19: s+="������������� "; break;
			}
		else
			switch (year-year/10*10)
			{
				case 1: s+="������� "; break;
				case 2: s+="������� "; break;
				case 3: s+="�������� "; break;
				case 4: s+="��������� "; break;
				case 5: s+="������ "; break;
				case 6: s+="������� "; break;
				case 7: s+="�������� "; break;
				case 8: s+="�������� "; break;
				case 9: s+="�������� "; break;
			}
	}
	else s+="�������������";
	s+=" ����";
	s.MakeUpper();
	return s;
}

CString ConvertSum2String(double sum)
{
	CString s="";
	CString csVal;
	/*double tmp=DoubleRound(sum,2);
	sum=tmp;*/
	long summa=(long) sum;
	long l=(long)floor(sum/1000000000);
	if(l!=0)
		switch (l)
			{
				case 1: s+="���� �������� "; break;
				case 2: s+="��� ��������� "; break;
				case 3: s+="��� ��������� "; break;
				case 4: s+="������ ��������� "; break;
				case 5: s+="���� ���������� "; break;
				case 6: s+="����� ��������� "; break;
				case 7: s+="���� ���������� "; break;
				case 8: s+="������ ���������� "; break;
				case 9: s+="������ ���������� "; break;
			}
	l=100000000;
	int cifer=0;
	for(int i=0; i<3; i++)
	{
		cifer=(int)(floor(summa/l)-floor(summa/10.0/l)*10);
		if(cifer!=0)
			switch (cifer)
				{
					case 1: s+="��� "; break;
					case 2: s+="������ "; break;
					case 3: s+="������ "; break;
					case 4: s+="��������� "; break;
					case 5: s+="������� "; break;
					case 6: s+="�������� "; break;
					case 7: s+="������� "; break;
					case 8: s+="��������� "; break;
					case 9: s+="��������� "; break;
				}
		l/=10;
		cifer=(int)(floor(summa/double(l))-floor(summa/10.0/l)*10);
		if(cifer!=0)
			switch (cifer)
				{
					case 2: s+="�������� "; break;
					case 3: s+="�������� "; break;
					case 4: s+="����� "; break;
					case 5: s+="��������� "; break;
					case 6: s+="���������� "; break;
					case 7: s+="��������� "; break;
					case 8: s+="����������� "; break;
					case 9: s+="��������� "; break;
				}
		l/=10;
		if(cifer==1)
		{
			switch ((int)(floor(summa/double(l))-floor(summa/10.0/l)*10) )
				{
					case 0: s+="������ "; break;
					case 1: s+="����������� "; break;
					case 2: s+="���������� "; break;
					case 3: s+="���������� "; break;
					case 4: s+="������������ "; break;
					case 5: s+="���������� "; break;
					case 6: s+="����������� "; break;
					case 7: s+="���������� "; break;
					case 8: s+="������������ "; break;
					case 9: s+="������������ "; break;
				}
			switch (i)
			{
				case 0: s+="��������� "; 
					break;
				case 1: s+="����� ";
					break;
			}
			cifer=0;
		}
		else
		{
			cifer=(int)(floor(summa/double(l))-floor(summa/10.0/l)*10);
			//if(cifer!=0)
			switch (cifer)
			{
				case 1: if(i!=1) s+="���� "; else s+="���� "; break;
				case 2: if(i!=1) s+="��� "; else s+="��� "; break;
				case 3: s+="��� "; break;
				case 4: s+="������ "; break;
				case 5: s+="���� "; break;
				case 6: s+="����� "; break;
				case 7: s+="���� "; break;
				case 8: s+="������ "; break;
				case 9: s+="������ "; break;
			}
			switch (i)
			{
				case 0: if(cifer==1) s+="������� "; 
						if(cifer>1&&cifer<5) s+="�������� "; 
						if((cifer>4||cifer==0)&&s.GetLength()>0) s+="��������� "; 
					break;
				case 1: if(cifer==1) s+="������ "; 
						if(cifer>1&&cifer<5) s+="������ "; 
						if((cifer>4||cifer==0)&&s.GetLength()>0) s+="����� ";
					break;
			}
		}
		
		
		l/=10;
	}
	switch (cifer)
			{
				case 1: s+="����� ";break;
				case 2: 
				case 3: 
				case 4: s+="����� "; break;
				case 5: 
				case 6: 
				case 7: 
				case 8: 
				case 0: 
				case 9: s+="������ "; break;
			}
	summa=(long) DoubleRound(sum*100-floor(sum)*100,0);
	if (summa!=0)
	{
		
		csVal.Format("%d ",summa);
		s+=csVal;
		cifer=summa-long(floor(summa/10.0)*10);
		switch (cifer)
		{
			case 1: s+="�������"; break;
			case 2: 
			case 3: 
			case 4: s+="�������"; break;
			case 5: 
			case 6: 
			case 7: 
			case 8: 
			case 0: 
			case 9: s+="������"; break;
		}
	}
	csVal="";
	csVal+=s.GetAt(0);
	csVal.MakeUpper();
	s.SetAt(0,csVal.GetAt(0));
	return s;
}

void TransformFIO(CString *f, CString *n, CString *s,int i,CADOBaseTool *bt, int r)
{
	CString csVal, fam=*f, nam=*n, sur=*s;
	if(*f=="" || *n=="" || *s=="") return;
	if(i<1) return; // ���� ��� �������, ������ �� ��������
	/*������ ���������*/
	*f=fam.Left(1);f->MakeUpper();
	csVal=fam.Right(fam.GetLength()-1);
	csVal.MakeLower();
	*f+=csVal;

	*n=nam.Left(1);n->MakeUpper();
	csVal=nam.Right(nam.GetLength()-1);
	csVal.MakeLower();
	*n+=csVal;

	*s=sur.Left(1); s->MakeUpper();
	csVal=sur.Right(sur.GetLength()-1);
	csVal.MakeLower();
	*s+=csVal;
	
	//if(! data->m_ParentInternal) return;
	///////////////////////////////// �������� �����

	CADOCommand pCmd(bt->GetDB(), "[mFindName]");
	if(i!=3 && i!=5 && i!=6) i=1;
	try{
		pCmd.AddParameter("Name",CADORecordset::typeChar,
			CADOParameter::paramInput,n->GetLength()!=0?n->GetLength():1,*n);
		if(!bt->Execute(&pCmd))
			throw(1);
		if(bt->GetRecordsCount()>0) i=3;
	}catch(...)
	{
		AfxMessageBox("������ � ������");
		return;
	}


	switch(i)
	{
		case 1://m_csPreview+="�� ����� ����������,\r\n";
		case 2://m_csPreview+="�� ����� ������ ������������������� ����,\r\n";
		case 4://m_csPreview+="���������,\r\n";
		/*�������� �������*/
			if(r==1)
			{
					if(f->Right(2)=="��")
					{
						f->SetAt(f->GetLength()-2,'�');
						f->SetAt(f->GetLength()-1,'�');
						*f+="�";
					}
					else if(f->Right(1)=="�")
							f->SetAt(f->GetLength()-1,'�');
								
						else if (f->Right(1)!="�") *f+="�";
					/*�������� ���*/
					if(n->Right(1)=="�")
						n->SetAt(n->GetLength()-1,'�');
					else
						*n+="�";
					/*�������� ��������*/
					*s+="�";
			}
			else
			{
					if(f->Right(2)=="��")
					{
						f->SetAt(f->GetLength()-2,'�');
						f->SetAt(f->GetLength()-1,'�');
						*f+="�";
					}
					else if(f->Right(1)=="�")
							f->SetAt(f->GetLength()-1,'�');
								
						else if (f->Right(1)!="�") *f+="�";
					/*�������� ���*/
					if(n->Right(1)=="�")
						n->SetAt(n->GetLength()-1,'�');
					else
						*n+="�";
					/*�������� ��������*/
					*s+="�";
			}
			break;
		case 3://m_csPreview+="�� ����� ����� ������������������ ������,\r\n";
		case 5:
		case 6:
			if(r==1)
			{
				/*�������� �������*/
					if(f->Right(2)=="��")
					{
						f->SetAt(f->GetLength()-2,'�');
						f->SetAt(f->GetLength()-1,'�');
					}
					else
						if(f->Right(1)=="�")
						{
							f->SetAt(f->GetLength()-1,'�');
							*f+="�";
						}
				/*�������� ���*/
					if(n->Right(2)=="��")
					{
						n->SetAt(n->GetLength()-2,'�');
						n->SetAt(n->GetLength()-1,'�');
					}
					else
						if(n->Right(2)=="��")
							n->SetAt(n->GetLength()-1,'�');
						else
							if(n->Right(1)=="�")
								if(n->Right(2)=="��")
									n->SetAt(n->GetLength()-1,'�');
								else 
									n->SetAt(n->GetLength()-1,'�');
				/*�������� ��������*/
					if(s->Right(2)=="��")
						s->SetAt(s->GetLength()-1,'�');
			}
			else
			{
				/*�������� �������*/
					if(f->Right(2)=="��")
					{
						f->SetAt(f->GetLength()-2,'�');
						f->SetAt(f->GetLength()-1,'�');
					}
					else
						if(f->Right(1)=="�")
						{
							f->SetAt(f->GetLength()-1,'�');
							*f+="�";
						}
				/*�������� ���*/
					if(n->Right(2)=="��")
					{
						n->SetAt(n->GetLength()-2,'�');
						n->SetAt(n->GetLength()-1,'�');
					}
					else
						if(n->Right(2)=="��")
							n->SetAt(n->GetLength()-1,'�');
						else
							if(n->Right(1)=="�")
								n->SetAt(n->GetLength()-1,'�');
				/*�������� ��������*/
					if(s->Right(2)=="��")
						s->SetAt(s->GetLength()-1,'�');
			}
			break;
							
	}
}
CString MonthByWords(int m)
{
	CString csVal;
	switch(m)
	{
		case 1: csVal="������";
			break;
		case 2: csVal="�������";
			break;
		case 3: csVal="�����";
			break;
		case 4: csVal="������";
			break;
		case 5: csVal="���";
			break;
		case 6: csVal="����";
			break;
		case 7: csVal="����";
			break;
		case 8: csVal="�������";
			break;
		case 9: csVal="��������";
			break;
		case 10: csVal="�������";
			break;
		case 11: csVal="������";
			break;
		case 12: csVal="�������";
			break;
	}
	return csVal;
}

void MyDump(CString filename, CString info)
{
	CStdioFile f;
	CString csVal;
	AfxMessageBox(info, MB_ICONERROR);
	if(f.Open(filename,CFile::modeCreate | CFile:: modeWrite | CFile::modeNoTruncate))
	{
		f.SeekToEnd();
		csVal.Format("------- Report string. Failure detected at %s\n",COleDateTime::GetCurrentTime().Format("%d.%m.%Y %H:%M:%S"));
		f.WriteString(csVal);
		f.WriteString(info+"\n");
		f.Close();
	}
	
}