#pragma once


// CProducts dialog

class CProducts : public CDialogEx
{
	DECLARE_DYNAMIC(CProducts)

public:
	CProducts(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CProducts();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
