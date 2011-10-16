// Rates.cpp : implementation file
//

#include "stdafx.h"
#include "EuroConv.h"
#include "Rates.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRates dialog


CRates::CRates(CWnd* pParent /*=NULL*/)
	: CDialog(CRates::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRates)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CRates::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRates)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRates, CDialog)
	//{{AFX_MSG_MAP(CRates)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRates message handlers
