// Cinsert.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "Cinsert.h"
#include "afxdialogex.h"


// Cinsert dialog

IMPLEMENT_DYNAMIC(Cinsert, CDialogEx)

Cinsert::Cinsert(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	
	, name(_T(""))
	, price(0)
	, prno(0)
{

}

Cinsert::~Cinsert()
{
}

void Cinsert::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
	DDX_Text(pDX, txtname, name);
	DDX_Text(pDX, txtprice, price);
	DDX_Text(pDX, txtprno, prno);
}


BEGIN_MESSAGE_MAP(Cinsert, CDialogEx)
END_MESSAGE_MAP()


// Cinsert message handlers
