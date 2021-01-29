#pragma once


// CUpdate dialog

class CUpdate : public CDialogEx
{
	DECLARE_DYNAMIC(CUpdate)

public:
	CUpdate(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CUpdate();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = update };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// int idupdate;// int idupdate;
	int idupdate2;
};
