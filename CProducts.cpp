// CProducts.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CProducts.h"
#include "afxdialogex.h"


// CProducts dialog

IMPLEMENT_DYNAMIC(CProducts, CDialogEx)

CProducts::CProducts(CWnd* pParent /*=nullptr*/)
	: CDialogEx(deldlg, pParent)
{

}

CProducts::~CProducts()
{
}

void CProducts::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CProducts, CDialogEx)
END_MESSAGE_MAP()


// CProducts message handlers
