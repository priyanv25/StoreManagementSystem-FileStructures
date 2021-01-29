#pragma once


// Cview dialog

class Cview : public CDialogEx
{
	DECLARE_DYNAMIC(Cview)

public:
	Cview(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Cview();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = view };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString txtview;
};
