// CDelete2.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CDelete2.h"
#include "afxdialogex.h"


// CDelete2 dialog

IMPLEMENT_DYNAMIC(CDelete2, CDialogEx)

CDelete2::CDelete2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(deldlg, pParent)
	, delpro(0)
{

}

CDelete2::~CDelete2()
{
}

void CDelete2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtdel, delpro);
}


BEGIN_MESSAGE_MAP(CDelete2, CDialogEx)
END_MESSAGE_MAP()


// CDelete2 message handlers
