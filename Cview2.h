#pragma once


// Cview2 dialog

class Cview2 : public CDialogEx
{
	DECLARE_DYNAMIC(Cview2)

public:
	Cview2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Cview2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = view };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
