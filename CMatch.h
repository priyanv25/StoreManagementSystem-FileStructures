#pragma once


// CMatch dialog

class CMatch : public CDialogEx
{
	DECLARE_DYNAMIC(CMatch)

public:
	CMatch(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMatch();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
