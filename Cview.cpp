// Cview.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "Cview.h"
#include "afxdialogex.h"


// Cview dialog

IMPLEMENT_DYNAMIC(Cview, CDialogEx)

Cview::Cview(CWnd* pParent /*=nullptr*/)
	: CDialogEx(view, pParent)
	, txtview(_T(""))
{

}

Cview::~Cview()
{
}

void Cview::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtView, txtview);
}


BEGIN_MESSAGE_MAP(Cview, CDialogEx)
END_MESSAGE_MAP()


// Cview message handlers
