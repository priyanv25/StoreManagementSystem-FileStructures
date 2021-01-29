#pragma once


// CCUSTOMER3 dialog

class CCUSTOMER3 : public CDialogEx
{
	DECLARE_DYNAMIC(CCUSTOMER3)

public:
	CCUSTOMER3(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CCUSTOMER3();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = customerdlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
