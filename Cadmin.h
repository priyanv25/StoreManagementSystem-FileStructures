#pragma once


// Cadmin dialog

class Cadmin : public CDialogEx
{
	DECLARE_DYNAMIC(Cadmin)

public:
	Cadmin(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Cadmin();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedinsertdlg();
	afx_msg void OnBnClickedviewdlg();
	afx_msg void OnBnClickedupdatedlg();
	afx_msg void OnBnClickeddeletedlg();
	afx_msg void OnBnClickedpremdlg();
};
