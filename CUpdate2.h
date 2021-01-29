#pragma once


// CUpdate2 dialog

class CUpdate2 : public CDialogEx
{
	DECLARE_DYNAMIC(CUpdate2)

public:
	CUpdate2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CUpdate2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = update2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString nameupdate;
	int priceupdate;
	int prnoupdate;
};
