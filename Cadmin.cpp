// Cadmin.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "Cadmin.h"
#include "afxdialogex.h"
#include "Cinsert.h"
#include "CInsert2.h"
#include "Cview.h"
#include "Cview2.h"
#include <fstream>
#include <string>
#include "CUpdate.h"
#include "CUpdate2.h"
#include "CMatch.h"
#include "CDelete.h"
#include "CDelete2.h"
#include "CMatch2.h"
#include<set>
using namespace std;
// Cadmin dialog

IMPLEMENT_DYNAMIC(Cadmin, CDialogEx)

Cadmin::Cadmin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Cadmin::~Cadmin()
{
}

void Cadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cadmin, CDialogEx)
	ON_BN_CLICKED(insertdlg, &Cadmin::OnBnClickedinsertdlg)
	ON_BN_CLICKED(viewdlg, &Cadmin::OnBnClickedviewdlg)
	ON_BN_CLICKED(updatedlg, &Cadmin::OnBnClickedupdatedlg)
	ON_BN_CLICKED(deletedlg, &Cadmin::OnBnClickeddeletedlg)
	ON_BN_CLICKED(premdlg, &Cadmin::OnBnClickedpremdlg)
END_MESSAGE_MAP()


// Cadmin message handlers


void Cadmin::OnBnClickedinsertdlg()
{
	int price,prno;
	CString name;
	CInsert2 dlgInsert;
	if (dlgInsert.DoModal() == IDOK)
	{
		name = dlgInsert.name;
		price = dlgInsert.price;
		prno = dlgInsert.prno;
		

		CT2CA titlepszConvertedAnsiString(name);
		string strname(titlepszConvertedAnsiString);
        fstream fs;
		fs.open("sms.txt", ios::out | ios::app);
		fs << strname << "\t\t" << price << "\t\t" << prno << "\n";
		fs.close();
		string message = "product with the following details inserted : \r\n P ID :   " + to_string(prno) + "\r\n name :   " + strname +  "\r\n Price :   " + to_string(price);
		CString msg(message.c_str());
		AfxMessageBox(msg);
	}
	else
	{
		AfxMessageBox(L"product ID already exists");
	}
}



void Cadmin::OnBnClickedviewdlg()
{
	Cview  dlgView;
	fstream fs;
	fs.open("sms.txt", ios::in);
	string line, res;
	while (getline(fs, line))
	{
		res = res + "\r\n" + line;
	}
	CString display(res.c_str());
	dlgView.txtview = display;
	dlgView.DoModal();
	fs.close();
}


void Cadmin::OnBnClickedupdatedlg()
{
	int updateprno, updateprice;
	CString updatename;

	CUpdate dlgUpdate;
	CUpdate2 dlgUpdate2;
	if (dlgUpdate.DoModal() == IDOK)
	{
		if (dlgUpdate2.DoModal() == IDOK)
		{
			string stridupdate = to_string(dlgUpdate.idupdate2);
			string line;
			fstream file("sms.txt", ios::in);
			fstream temp("temp.txt", ios::out | ios::app);
			while (getline(file, line))
			{
				if (line.find(stridupdate) != string::npos)
				{
					continue;
				}
				else
				{
					temp << line << endl;
				}
			}
			updatename = dlgUpdate2.nameupdate;
			updateprice = dlgUpdate2.priceupdate;
			updateprno = dlgUpdate2.prnoupdate;
			

			CT2CA updatetitlepszConvertedAnsiString(updatename);
			string strupdatename(updatetitlepszConvertedAnsiString);

			

			temp << strupdatename << "\t\t" << updateprice << "\t\t" << updateprno << "\n";
			temp.close();
			file.close();
			remove("sms.txt");
			rename("temp.txt", "sms.txt");
		}
	}
	else
	{
		AfxMessageBox(L" doesn't Exist.");
	}
}


void Cadmin::OnBnClickeddeletedlg()
{
	int iddelete;
	CDelete2 dlgDelete;
	if (dlgDelete.DoModal() == IDOK)
	{
		fstream file;
		file.open("sms.txt", ios::in);
		fstream temp;
		temp.open("temp.txt", ios::out);
		string line;
		iddelete = dlgDelete.delpro;
		string striddelete = to_string(iddelete);
		while (getline(file, line))
		{
			if (line.find(striddelete) != string::npos)
			{
				continue;
			}
			else
			{
				temp << line << endl;
			}
		}
		temp.close();
		file.close();
		remove("sms.txt");
		rename("temp.txt", "sms.txt");
		AfxMessageBox(L"Product deleted successfully");
	}
	else
	{
		AfxMessageBox(L"Product not found");
	}
}





void Cadmin::OnBnClickedpremdlg()
{
	CMatch2 dlg;
	fstream ff, fnf, fout;
	ff.open("sms.txt", ios::in);
	fnf.open("pre.txt", ios::in);
	fout.open("common.txt", ios::out | ios::trunc);

	//display fiction
	string line, res;
	while (getline(ff, line))
	{
		res = res + "\r\n" + line;
	}
	CString output(res.c_str());
	dlg.storeitem = output;
	ff.close();

	//display non fiction
	string line1, res1;
	while (getline(fnf, line1))
	{

		res1 = res1 + "\r\n" + line1;

	}
	CString output1(res1.c_str());
	dlg.premitem = output1;
	fnf.close();

	//display common authors
	ff.open("sms.txt", ios::in);
	fnf.open("pre.txt", ios::in);

	string line2;
	set<string> s1, s2;
	while (getline(ff, line2)) {
		s1.insert(line2);
	}
	while (getline(fnf, line2)) {
		s2.insert(line2);
	}
	set<string>::iterator it = s1.begin();
	while (it != s1.end()) {
		if (s2.find(*it) != s2.end())
		{
			fout << *it << endl;
		}
		it++;
	}
	ff.close();
	fnf.close();
	fout.close();
	fout.open("common.txt", ios::in);
	string outp;
	while (getline(fout, line2))
	{
		outp = outp + "\r\n" + line2;
	}
	CString  temp(outp.c_str());
	dlg.cose = temp;
	dlg.DoModal();
}
