#pragma once


// Cinsert dialog

class Cinsert : public CDialogEx
{
	DECLARE_DYNAMIC(Cinsert)

public:
	Cinsert(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Cinsert();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	CString name;
	int price;
	int prno;
};
