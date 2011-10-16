#if !defined(AFX_RATES_H__AE57458A_0A9E_4463_A26F_DF88CD0ABC28__INCLUDED_)
#define AFX_RATES_H__AE57458A_0A9E_4463_A26F_DF88CD0ABC28__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Rates.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRates dialog

class CRates : public CDialog
{
// Construction
public:
	CRates(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRates)
	enum { IDD = IDD_RATES_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRates)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRates)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RATES_H__AE57458A_0A9E_4463_A26F_DF88CD0ABC28__INCLUDED_)
