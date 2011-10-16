// EuroConvDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EuroConv.h"
#include "EuroConvDlg.h"
#include "Rates.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEuroConvDlg dialog

CEuroConvDlg::CEuroConvDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEuroConvDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEuroConvDlg)
	m_input = 0.0f;
	m_dispconv = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEuroConvDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEuroConvDlg)
	DDX_Control(pDX, IDC_CURRENCY, m_currency);
	DDX_Text(pDX, IDC_INPUT, m_input);
	DDX_Text(pDX, IDC_DISPCONV, m_dispconv);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEuroConvDlg, CDialog)
	//{{AFX_MSG_MAP(CEuroConvDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EURO_OLD, OnEuroOld)
	ON_BN_CLICKED(IDC_OLD_EURO, OnOldEuro)
	ON_CBN_SELCHANGE(IDC_CURRENCY, OnSelchangeCurrency)
	ON_BN_CLICKED(IDRATES, OnRates)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEuroConvDlg message handlers

BOOL CEuroConvDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_currency.SetCurSel(7);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEuroConvDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEuroConvDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEuroConvDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEuroConvDlg::OnEuroOld() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
	m_currency.GetLBText(m_currency.GetCurSel(), m_country);

if (m_country=="Italy - Liras (ITL)")
{a=1936.27;}
	if (m_country=="Germany - Marks (DM)")
	{a=1.95583;}
	if (m_country=="France - Francs (FRF)")
	{a=6.55957;}
		if (m_country=="Spain - Pesetas (ESP)")
	{a=166.386;}
if (m_country=="Belgium - Francs (BEF)")
	{a=40.3399;}
if (m_country=="Greece - Drachmas (GRD)")
	{a=340.750;}
if (m_country=="Ireland - Punts (IEP)")
	{a=.787564;}
if (m_country=="Luxembourg - Francs (LUF)")
	{a=40.3399;}
if (m_country=="Netherlands - Guilders (NLG)")
	{a=2.20371;}
if (m_country=="Austria - Shillings (ATS)")
	{a=13.7603;}
if (m_country=="Portugal - Escudos (PTE)")
	{a=200.482;}
if (m_country=="Finland - Markkas (FIM)")
	{a=5.94573;}


		b=(m_input*a);

if (m_country=="Italy - Liras (ITL)")
{
	m_dispconv.Format("%.2f Euro = %.0f %s ", m_input, b, m_country);}
else
{m_dispconv.Format("%.2f Euro = %.2f %s ", m_input, b, m_country);}
    
m_input=0;

	UpdateData(false);	
}

void CEuroConvDlg::OnOldEuro() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
	m_currency.GetLBText(m_currency.GetCurSel(), m_country);


if (m_country=="Italy - Liras (ITL)")
{a=1936.27;}
	if (m_country=="Germany - Marks (DM)")
	{a=1.95583;}
	if (m_country=="France - Francs (FRF)")
	{a=6.55957;}
		if (m_country=="Spain - Pesetas (ESP)")
	{a=166.386;}
if (m_country=="Belgium - Francs (BEF)")
	{a=40.3399;}
if (m_country=="Greece - Drachmas (GRD)")
	{a=340.750;}
if (m_country=="Ireland - Punts (IEP)")
	{a=.787564;}
if (m_country=="Luxembourg - Francs (LUF)")
	{a=40.3399;}
if (m_country=="Netherlands - Guilders (NLG)")
	{a=2.20371;}
if (m_country=="Austria - Shillings (ATS)")
	{a=13.7603;}
if (m_country=="Portugal - Escudos (PTE)")
	{a=200.482;}
if (m_country=="Finland - Markkas (FIM)")
	{a=5.94573;}

		b=(m_input/a);

if (m_country=="Italy - Liras (ITL)")
{
	m_dispconv.Format("%.0f %s = %.2f Euro", m_input, m_country, b);}
else
{m_dispconv.Format("%.2f %s = %.2f Euro", m_input, m_country, b);}

    m_input=0;

	UpdateData(false);
}

void CEuroConvDlg::OnSelchangeCurrency() 
{
	// TODO: Add your control notification handler code here
	m_currency.GetLBText(m_currency.GetCurSel(), m_country);
	UpdateData(false);
}

void CEuroConvDlg::OnRates() 
{
	// TODO: Add your control notification handler code here
CRates Dlg;
Dlg.DoModal();
}
