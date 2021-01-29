#pragma once


// CCUSTNEW dialog

class CCUSTNEW : public CDialogEx
{
	DECLARE_DYNAMIC(CCUSTNEW)

public:
	CCUSTNEW(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CCUSTNEW();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = custdlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
