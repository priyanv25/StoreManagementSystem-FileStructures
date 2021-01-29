#pragma once


// CDelete2 dialog

class CDelete2 : public CDialogEx
{
	DECLARE_DYNAMIC(CDelete2)

public:
	CDelete2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDelete2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = deldlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int delpro;
};
