// CUpdate.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CUpdate.h"
#include "afxdialogex.h"
#include<fstream>
#include<string>

// CUpdate dialog

IMPLEMENT_DYNAMIC(CUpdate, CDialogEx)

CUpdate::CUpdate(CWnd* pParent /*=nullptr*/)
	: CDialogEx(update, pParent)
	
	, idupdate2(0)
{

}

CUpdate::~CUpdate()
{
}

void CUpdate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
	DDX_Text(pDX, txtidupdate, idupdate2);
}


BEGIN_MESSAGE_MAP(CUpdate, CDialogEx)
END_MESSAGE_MAP()


// CUpdate message handlers
