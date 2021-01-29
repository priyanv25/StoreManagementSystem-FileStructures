// CCust.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CCust.h"
#include "afxdialogex.h"


// CCust dialog

IMPLEMENT_DYNAMIC(CCust, CDialogEx)

CCust::CCust(CWnd* pParent /*=nullptr*/)
	: CDialogEx(custdlg, pParent)
{

}

CCust::~CCust()
{
}

void CCust::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCust, CDialogEx)
END_MESSAGE_MAP()


// CCust message handlers
