#pragma once


// CInsert2 dialog

class CInsert2 : public CDialogEx
{
	DECLARE_DYNAMIC(CInsert2)

public:
	CInsert2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CInsert2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = insertdlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString name;
	int price;
	int prno;
};
