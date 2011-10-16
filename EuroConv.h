// EuroConv.h : main header file for the EUROCONV application
//

#if !defined(AFX_EUROCONV_H__9542C5F8_C26D_4C8B_A16A_1B340D2A041B__INCLUDED_)
#define AFX_EUROCONV_H__9542C5F8_C26D_4C8B_A16A_1B340D2A041B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEuroConvApp:
// See EuroConv.cpp for the implementation of this class
//

class CEuroConvApp : public CWinApp
{
public:
	CEuroConvApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEuroConvApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEuroConvApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EUROCONV_H__9542C5F8_C26D_4C8B_A16A_1B340D2A041B__INCLUDED_)
