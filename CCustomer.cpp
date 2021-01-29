// CCustomer.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CCustomer.h"
#include "afxdialogex.h"


// CCustomer dialog

IMPLEMENT_DYNAMIC(CCustomer, CDialogEx)

CCustomer::CCustomer(CWnd* pParent /*=nullptr*/)
	: CDialogEx(custdlg, pParent)
{

}

CCustomer::~CCustomer()
{
}

void CCustomer::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCustomer, CDialogEx)
END_MESSAGE_MAP()


// CCustomer message handlers
