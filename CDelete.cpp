// CDelete.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CDelete.h"
#include "afxdialogex.h"


// CDelete dialog

IMPLEMENT_DYNAMIC(CDelete, CDialogEx)

CDelete::CDelete(CWnd* pParent /*=nullptr*/)
	: CDialogEx(deldlg, pParent)
	, delpro(0)
{

}

CDelete::~CDelete()
{
}

void CDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtdel, delpro);
}


BEGIN_MESSAGE_MAP(CDelete, CDialogEx)
END_MESSAGE_MAP()


// CDelete message handlers
