#pragma once


// CMatch2 dialog

class CMatch2 : public CDialogEx
{
	DECLARE_DYNAMIC(CMatch2)

public:
	CMatch2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMatch2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = matchDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString storeitem;
	CString premitem;
	CString cose;
	afx_msg void OnEnChangetxtcose();
};
