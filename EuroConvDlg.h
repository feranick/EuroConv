// EuroConvDlg.h : header file
//

#if !defined(AFX_EUROCONVDLG_H__FBCD0A2A_BC30_4A4D_9A24_C58B12270F1D__INCLUDED_)
#define AFX_EUROCONVDLG_H__FBCD0A2A_BC30_4A4D_9A24_C58B12270F1D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEuroConvDlg dialog

class CEuroConvDlg : public CDialog
{
// Construction
public:
	CEuroConvDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEuroConvDlg)
	enum { IDD = IDD_EUROCONV_DIALOG };
	CComboBox	m_currency;
	float	m_input;
	CString	m_dispconv;
	CString m_country;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEuroConvDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
//	float lira=1936.27;
	float lira,a,b,c;
	// Generated message map functions
	//{{AFX_MSG(CEuroConvDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEuroOld();
	afx_msg void OnOldEuro();
	afx_msg void OnEditchangeCurrency();
	afx_msg void OnSelchangeCurrency();
	afx_msg void OnRates();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EUROCONVDLG_H__FBCD0A2A_BC30_4A4D_9A24_C58B12270F1D__INCLUDED_)
