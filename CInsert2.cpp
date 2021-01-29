// CInsert2.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CInsert2.h"
#include "afxdialogex.h"


// CInsert2 dialog

IMPLEMENT_DYNAMIC(CInsert2, CDialogEx)

CInsert2::CInsert2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(insertdlg, pParent)
	, name(_T(""))
	, price(0)
	, prno(0)
{

}

CInsert2::~CInsert2()
{
}

void CInsert2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtname, name);
	DDX_Text(pDX, txtprice, price);
	DDX_Text(pDX, txtprno, prno);
}


BEGIN_MESSAGE_MAP(CInsert2, CDialogEx)
END_MESSAGE_MAP()


// CInsert2 message handlers
