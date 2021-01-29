// CUpdate2.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CUpdate2.h"
#include "afxdialogex.h"


// CUpdate2 dialog

IMPLEMENT_DYNAMIC(CUpdate2, CDialogEx)

CUpdate2::CUpdate2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(update2, pParent)
	, nameupdate(_T(""))
	, priceupdate(0)
	, prnoupdate(0)
{

}

CUpdate2::~CUpdate2()
{
}

void CUpdate2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtname2, nameupdate);
	DDX_Text(pDX, txtprice2, priceupdate);
	DDX_Text(pDX, txtprno2, prnoupdate);
}


BEGIN_MESSAGE_MAP(CUpdate2, CDialogEx)
END_MESSAGE_MAP()


// CUpdate2 message handlers
