#pragma once


// CCustomer dialog

class CCustomer : public CDialogEx
{
	DECLARE_DYNAMIC(CCustomer)

public:
	CCustomer(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CCustomer();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
