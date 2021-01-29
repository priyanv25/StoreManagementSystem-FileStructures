// CMatch2.cpp : implementation file
//

#include "pch.h"
#include "sms2.h"
#include "CMatch2.h"
#include "afxdialogex.h"


// CMatch2 dialog

IMPLEMENT_DYNAMIC(CMatch2, CDialogEx)

CMatch2::CMatch2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(matchDlg, pParent)
	, storeitem(_T(""))
	, premitem(_T(""))
	, cose(_T(""))
{

}

CMatch2::~CMatch2()
{
}

void CMatch2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtitems, storeitem);
	DDX_Text(pDX, txtpremium, premitem);
	DDX_Text(pDX, txtcose, cose);
}


BEGIN_MESSAGE_MAP(CMatch2, CDialogEx)
	ON_EN_CHANGE(txtcose, &CMatch2::OnEnChangetxtcose)
END_MESSAGE_MAP()


// CMatch2 message handlers


void CMatch2::OnEnChangetxtcose()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
