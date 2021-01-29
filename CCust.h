#pragma once


// CCust dialog

class CCust : public CDialogEx
{
	DECLARE_DYNAMIC(CCust)

public:
	CCust(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CCust();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = customerdlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
