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
			AfxMessageBox("Введите корректную дату", MB_ICONERROR);
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
				AfxMessageBox("Введите корректную дату", MB_ICONERROR);
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
	// Конвертировать дату 
	CString s;
	int day=dt.GetDay();
	int month=dt.GetMonth();
	int year=dt.GetYear();
	s="";
	// день
	if(day>30) s="тридцать ";
	else if(day>20) s="двадцать ";
	if((day<10||day>20)&&day!=30)
		switch(day-day/10*10)
		{
			case 1: s+="первое ";break;
			case 2: s+="второе ";break;
			case 3: s+="третье ";break;
			case 4: s+="четвёртое ";break;
			case 5: s+="пятое ";break;
			case 6: s+="шестое ";break;
			case 7: s+="седьмое ";break;
			case 8: s+="восьмое ";break;
			case 9: s+="девятое ";break;
		}
	else 
		switch(day)
		{
			case 10: s="десятое ";break;
			case 11: s="одиннадцатое ";break;
			case 12: s="двенадцатое ";break;
			case 13: s="тринадцатое ";break;
			case 14: s="четырнадцатое ";break;
			case 15: s="пятнадцатое ";break;
			case 16: s="шестнадцатое ";break;
			case 17: s="семнадцатое ";break;
			case 18: s="восемнадцатое ";break;
			case 19: s="девятнадцатое ";break;
			case 20: s="двадцатое ";break;
			case 30: s="тридцатое ";break;
		}
	// месяц
	switch (month)
	{
		case 1: s+="января "; break;
		case 2: s+="февраля "; break;
		case 3: s+="марта "; break;
		case 4: s+="апреля "; break;
		case 5: s+="мая "; break;
		case 6: s+="июня "; break;
		case 7: s+="июля "; break;
		case 8: s+="августа "; break;
		case 9: s+="сентября "; break;
		case 10: s+="октября "; break;
		case 11: s+="ноября "; break;
		case 12: s+="декабря "; break;
	}

	// год
	if(year!=2000)
	{
		if (year/100==19) s+="тысяча девятьсот "; else s+="две тысячи ";
		if(year/10*10==year)
			switch (year-year/100*100)
			{
				case 10: s+="десятого "; break;
				case 20: s+="двадцатого "; break;
				case 30: s+="тридцатого "; break;
				case 40: s+="сорокового "; break;
				case 50: s+="пятидесятого "; break;
				case 60: s+="шестидесятого "; break;
				case 70: s+="семидесятого "; break;
				case 80: s+="восьмидесятого "; break;
				case 90: s+="девяностого "; break;
			}
		else
			switch ((year-year/100*100)/10*10)
			{
				//case 10: s+="десятого"; break;
				case 20: s+="двадцать "; break;
				case 30: s+="тридцать "; break;
				case 40: s+="сорок "; break;
				case 50: s+="пятидесят "; break;
				case 60: s+="шестидесят "; break;
				case 70: s+="семидесят "; break;
				case 80: s+="восьмидесят "; break;
				case 90: s+="девяносто "; break;
			}
		if(year-year/100*100>10&&year-year/100*100<20)
			switch (year-year/100*100)
			{
				case 11: s+="одиннадцатого "; break;
				case 12: s+="двенадцатого "; break;
				case 13: s+="тринадцатого "; break;
				case 14: s+="четырнадцатого "; break;
				case 15: s+="пятнадцатого "; break;
				case 16: s+="шестнадцатого "; break;
				case 17: s+="семнадцатого "; break;
				case 18: s+="восмнадцатого "; break;
				case 19: s+="девятнацатого "; break;
			}
		else
			switch (year-year/10*10)
			{
				case 1: s+="первого "; break;
				case 2: s+="второго "; break;
				case 3: s+="третьего "; break;
				case 4: s+="четвёртого "; break;
				case 5: s+="пятого "; break;
				case 6: s+="шестого "; break;
				case 7: s+="седьмого "; break;
				case 8: s+="восьмого "; break;
				case 9: s+="девятого "; break;
			}
	}
	else s+="двухтысячного";
	s+=" года";
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
				case 1: s+="один миллиард "; break;
				case 2: s+="два миллиарда "; break;
				case 3: s+="три миллиарда "; break;
				case 4: s+="четыре миллиарда "; break;
				case 5: s+="пять миллиардов "; break;
				case 6: s+="шесть миллиарда "; break;
				case 7: s+="семь миллиардов "; break;
				case 8: s+="восемь миллиардов "; break;
				case 9: s+="девять миллиардов "; break;
			}
	l=100000000;
	int cifer=0;
	for(int i=0; i<3; i++)
	{
		cifer=(int)(floor(summa/l)-floor(summa/10.0/l)*10);
		if(cifer!=0)
			switch (cifer)
				{
					case 1: s+="сто "; break;
					case 2: s+="двести "; break;
					case 3: s+="триста "; break;
					case 4: s+="четыреста "; break;
					case 5: s+="пятьсот "; break;
					case 6: s+="шестьсот "; break;
					case 7: s+="семьсот "; break;
					case 8: s+="восемьсот "; break;
					case 9: s+="девятьсот "; break;
				}
		l/=10;
		cifer=(int)(floor(summa/double(l))-floor(summa/10.0/l)*10);
		if(cifer!=0)
			switch (cifer)
				{
					case 2: s+="двадцать "; break;
					case 3: s+="тридцать "; break;
					case 4: s+="сорок "; break;
					case 5: s+="пятьдесят "; break;
					case 6: s+="шестьдесят "; break;
					case 7: s+="семьдесят "; break;
					case 8: s+="восемьдесят "; break;
					case 9: s+="девяносто "; break;
				}
		l/=10;
		if(cifer==1)
		{
			switch ((int)(floor(summa/double(l))-floor(summa/10.0/l)*10) )
				{
					case 0: s+="десять "; break;
					case 1: s+="одиннадцать "; break;
					case 2: s+="двенадцать "; break;
					case 3: s+="тринадцать "; break;
					case 4: s+="четырнадцать "; break;
					case 5: s+="пятнадцать "; break;
					case 6: s+="шестнадцать "; break;
					case 7: s+="семнадцать "; break;
					case 8: s+="восемнадцать "; break;
					case 9: s+="девятнадцать "; break;
				}
			switch (i)
			{
				case 0: s+="миллионов "; 
					break;
				case 1: s+="тысяч ";
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
				case 1: if(i!=1) s+="один "; else s+="одна "; break;
				case 2: if(i!=1) s+="два "; else s+="две "; break;
				case 3: s+="три "; break;
				case 4: s+="четыре "; break;
				case 5: s+="пять "; break;
				case 6: s+="шесть "; break;
				case 7: s+="семь "; break;
				case 8: s+="восемь "; break;
				case 9: s+="девять "; break;
			}
			switch (i)
			{
				case 0: if(cifer==1) s+="миллион "; 
						if(cifer>1&&cifer<5) s+="миллиона "; 
						if((cifer>4||cifer==0)&&s.GetLength()>0) s+="миллионов "; 
					break;
				case 1: if(cifer==1) s+="тысяча "; 
						if(cifer>1&&cifer<5) s+="тысячи "; 
						if((cifer>4||cifer==0)&&s.GetLength()>0) s+="тысяч ";
					break;
			}
		}
		
		
		l/=10;
	}
	switch (cifer)
			{
				case 1: s+="рубль ";break;
				case 2: 
				case 3: 
				case 4: s+="рубля "; break;
				case 5: 
				case 6: 
				case 7: 
				case 8: 
				case 0: 
				case 9: s+="рублей "; break;
			}
	summa=(long) DoubleRound(sum*100-floor(sum)*100,0);
	if (summa!=0)
	{
		
		csVal.Format("%d ",summa);
		s+=csVal;
		cifer=summa-long(floor(summa/10.0)*10);
		switch (cifer)
		{
			case 1: s+="копейка"; break;
			case 2: 
			case 3: 
			case 4: s+="копейки"; break;
			case 5: 
			case 6: 
			case 7: 
			case 8: 
			case 0: 
			case 9: s+="копеек"; break;
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
	if(i<1) return; // если без статуса, значит не склоняем
	/*первые заглавные*/
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
	///////////////////////////////// проверка имени

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
		AfxMessageBox("Ошибка в именах");
		return;
	}


	switch(i)
	{
		case 1://m_csPreview+="от имени гражданина,\r\n";
		case 2://m_csPreview+="от имени своего несовершеннолетнего сына,\r\n";
		case 4://m_csPreview+="опекаемый,\r\n";
		/*склоняем фамилию*/
			if(r==1)
			{
					if(f->Right(2)=="ий")
					{
						f->SetAt(f->GetLength()-2,'о');
						f->SetAt(f->GetLength()-1,'г');
						*f+="о";
					}
					else if(f->Right(1)=="а")
							f->SetAt(f->GetLength()-1,'ы');
								
						else if (f->Right(1)!="о") *f+="а";
					/*склоняем имя*/
					if(n->Right(1)=="й")
						n->SetAt(n->GetLength()-1,'я');
					else
						*n+="а";
					/*склоняем отчество*/
					*s+="а";
			}
			else
			{
					if(f->Right(2)=="ий")
					{
						f->SetAt(f->GetLength()-2,'о');
						f->SetAt(f->GetLength()-1,'м');
						*f+="у";
					}
					else if(f->Right(1)=="а")
							f->SetAt(f->GetLength()-1,'е');
								
						else if (f->Right(1)!="о") *f+="у";
					/*склоняем имя*/
					if(n->Right(1)=="й")
						n->SetAt(n->GetLength()-1,'ю');
					else
						*n+="у";
					/*склоняем отчество*/
					*s+="у";
			}
			break;
		case 3://m_csPreview+="от имени своей несовершеннолетней дочери,\r\n";
		case 5:
		case 6:
			if(r==1)
			{
				/*склоняем фамилию*/
					if(f->Right(2)=="ая")
					{
						f->SetAt(f->GetLength()-2,'о');
						f->SetAt(f->GetLength()-1,'й');
					}
					else
						if(f->Right(1)=="а")
						{
							f->SetAt(f->GetLength()-1,'о');
							*f+="й";
						}
				/*склоняем имя*/
					if(n->Right(2)=="ия")
					{
						n->SetAt(n->GetLength()-2,'и');
						n->SetAt(n->GetLength()-1,'и');
					}
					else
						if(n->Right(2)=="ья")
							n->SetAt(n->GetLength()-1,'и');
						else
							if(n->Right(1)=="а")
								if(n->Right(2)=="га")
									n->SetAt(n->GetLength()-1,'и');
								else 
									n->SetAt(n->GetLength()-1,'ы');
				/*склоняем отчество*/
					if(s->Right(2)=="на")
						s->SetAt(s->GetLength()-1,'ы');
			}
			else
			{
				/*склоняем фамилию*/
					if(f->Right(2)=="ая")
					{
						f->SetAt(f->GetLength()-2,'о');
						f->SetAt(f->GetLength()-1,'й');
					}
					else
						if(f->Right(1)=="а")
						{
							f->SetAt(f->GetLength()-1,'о');
							*f+="й";
						}
				/*склоняем имя*/
					if(n->Right(2)=="ия")
					{
						n->SetAt(n->GetLength()-2,'и');
						n->SetAt(n->GetLength()-1,'е');
					}
					else
						if(n->Right(2)=="ья")
							n->SetAt(n->GetLength()-1,'е');
						else
							if(n->Right(1)=="а")
								n->SetAt(n->GetLength()-1,'е');
				/*склоняем отчество*/
					if(s->Right(2)=="на")
						s->SetAt(s->GetLength()-1,'е');
			}
			break;
							
	}
}
CString MonthByWords(int m)
{
	CString csVal;
	switch(m)
	{
		case 1: csVal="января";
			break;
		case 2: csVal="февраля";
			break;
		case 3: csVal="марта";
			break;
		case 4: csVal="апреля";
			break;
		case 5: csVal="мая";
			break;
		case 6: csVal="июня";
			break;
		case 7: csVal="июля";
			break;
		case 8: csVal="августа";
			break;
		case 9: csVal="сентября";
			break;
		case 10: csVal="октября";
			break;
		case 11: csVal="ноября";
			break;
		case 12: csVal="декабря";
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