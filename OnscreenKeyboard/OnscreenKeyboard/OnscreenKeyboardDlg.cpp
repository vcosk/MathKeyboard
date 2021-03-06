/*
This file is part of MathKeyboard.

    MathKeyboard is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MathKeyboard is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MathKeyboard.  If not, see <http://www.gnu.org/licenses/>.
*/
// OnscreenKeyboardDlg.cpp : implementation file
//
//#include <windows.h>
#include "afxwin.h"
#include "stdafx.h"
#include "OnscreenKeyboard.h"
#include "OnscreenKeyboardDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About
const int LINEAR_WASH_SEGMENTS = 60;
class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

    // Dialog Data
    enum { IDD = IDD_ABOUTBOX };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    // Implementation
protected:
    DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// COnscreenKeyboardDlg dialog




COnscreenKeyboardDlg::COnscreenKeyboardDlg(CWnd* pParent /*=NULL*/)
: CDialog(COnscreenKeyboardDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1);
}

void COnscreenKeyboardDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(COnscreenKeyboardDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
    ON_BN_CLICKED(DFC_CAPTION, &COnscreenKeyboardDlg::about)
    ON_BN_CLICKED(IDC_BUTTON1, &COnscreenKeyboardDlg::OnBnClickedButton1)
    ON_BN_CLICKED(IDC_BUTTON2, &COnscreenKeyboardDlg::OnBnClickedButton2)
    ON_BN_CLICKED(IDC_BUTTON3, &COnscreenKeyboardDlg::OnBnClickedButton3)
    ON_BN_CLICKED(IDC_BUTTON4, &COnscreenKeyboardDlg::OnBnClickedButton4)
    ON_BN_CLICKED(IDC_BUTTON5, &COnscreenKeyboardDlg::OnBnClickedButton5)
    ON_BN_CLICKED(IDC_BUTTON6, &COnscreenKeyboardDlg::OnBnClickedButton6)
    ON_BN_CLICKED(IDC_BUTTON7, &COnscreenKeyboardDlg::OnBnClickedButton7)
    ON_BN_CLICKED(IDC_BUTTON8, &COnscreenKeyboardDlg::OnBnClickedButton8)
    ON_BN_CLICKED(IDC_BUTTON9, &COnscreenKeyboardDlg::OnBnClickedButton9)
    ON_BN_CLICKED(IDC_BUTTON10, &COnscreenKeyboardDlg::OnBnClickedButton10)
    ON_BN_CLICKED(IDC_BUTTON11, &COnscreenKeyboardDlg::OnBnClickedButton11)
    ON_BN_CLICKED(IDC_BUTTON12, &COnscreenKeyboardDlg::OnBnClickedButton12)
    ON_BN_CLICKED(IDC_BUTTON13, &COnscreenKeyboardDlg::OnBnClickedButton13)
    ON_BN_CLICKED(IDC_BUTTON14, &COnscreenKeyboardDlg::OnBnClickedButton14)
    ON_BN_CLICKED(IDC_BUTTON15, &COnscreenKeyboardDlg::OnBnClickedButton15)
    ON_BN_CLICKED(IDC_BUTTON16, &COnscreenKeyboardDlg::OnBnClickedButton16)
    ON_BN_CLICKED(IDC_BUTTON17, &COnscreenKeyboardDlg::OnBnClickedButton17)
    ON_BN_CLICKED(IDC_BUTTON18, &COnscreenKeyboardDlg::OnBnClickedButton18)
    ON_BN_CLICKED(IDC_BUTTON19, &COnscreenKeyboardDlg::OnBnClickedButton19)
    ON_BN_CLICKED(IDC_BUTTON20, &COnscreenKeyboardDlg::OnBnClickedButton20)
    ON_BN_CLICKED(IDC_BUTTON21, &COnscreenKeyboardDlg::OnBnClickedButton21)
    ON_BN_CLICKED(IDC_BUTTON22, &COnscreenKeyboardDlg::OnBnClickedButton22)
    ON_BN_CLICKED(IDC_BUTTON23, &COnscreenKeyboardDlg::OnBnClickedButton23)
    ON_BN_CLICKED(IDC_BUTTON24, &COnscreenKeyboardDlg::OnBnClickedButton24)
    ON_BN_CLICKED(IDC_BUTTON25, &COnscreenKeyboardDlg::OnBnClickedButton25)
    ON_BN_CLICKED(IDC_BUTTON26, &COnscreenKeyboardDlg::OnBnClickedButton26)
    ON_BN_CLICKED(IDC_BUTTON27, &COnscreenKeyboardDlg::OnBnClickedButton27)
    ON_BN_CLICKED(IDC_BUTTON28, &COnscreenKeyboardDlg::OnBnClickedButton28)
    ON_BN_CLICKED(IDC_BUTTON29, &COnscreenKeyboardDlg::OnBnClickedButton29)
    ON_BN_CLICKED(IDC_BUTTON30, &COnscreenKeyboardDlg::OnBnClickedButton30)
    ON_BN_CLICKED(IDC_BUTTON31, &COnscreenKeyboardDlg::OnBnClickedButton31)
    ON_BN_CLICKED(IDC_BUTTON32, &COnscreenKeyboardDlg::OnBnClickedButton32)
    ON_BN_CLICKED(IDC_BUTTON33, &COnscreenKeyboardDlg::OnBnClickedButton33)
    ON_BN_CLICKED(IDC_BUTTON34, &COnscreenKeyboardDlg::OnBnClickedButton34)
    ON_BN_CLICKED(IDC_BUTTON35, &COnscreenKeyboardDlg::OnBnClickedButton35)
    ON_BN_CLICKED(IDC_BUTTON36, &COnscreenKeyboardDlg::OnBnClickedButton36)
    ON_BN_CLICKED(IDC_BUTTON37, &COnscreenKeyboardDlg::OnBnClickedButton37)
    ON_BN_CLICKED(IDC_BUTTON38, &COnscreenKeyboardDlg::OnBnClickedButton38)
    ON_BN_CLICKED(IDC_BUTTON39, &COnscreenKeyboardDlg::OnBnClickedButton39)
    ON_BN_CLICKED(IDC_BUTTON40, &COnscreenKeyboardDlg::OnBnClickedButton40)
    ON_BN_CLICKED(IDC_BUTTON41, &COnscreenKeyboardDlg::OnBnClickedButton41)
    ON_BN_CLICKED(IDC_BUTTON42, &COnscreenKeyboardDlg::OnBnClickedButton42)
    ON_BN_CLICKED(IDC_BUTTON43, &COnscreenKeyboardDlg::OnBnClickedButton43)
    ON_BN_CLICKED(IDC_BUTTON44, &COnscreenKeyboardDlg::OnBnClickedButton44)
    ON_BN_CLICKED(IDC_BUTTON45, &COnscreenKeyboardDlg::OnBnClickedButton45)
    ON_BN_CLICKED(IDC_BUTTON46, &COnscreenKeyboardDlg::OnBnClickedButton46)
    ON_BN_CLICKED(IDC_BUTTON47, &COnscreenKeyboardDlg::OnBnClickedButton47)
    ON_BN_CLICKED(IDC_BUTTON48, &COnscreenKeyboardDlg::OnBnClickedButton48)
    ON_BN_CLICKED(IDC_BUTTON49, &COnscreenKeyboardDlg::OnBnClickedButton49)
    ON_BN_CLICKED(IDC_BUTTON50, &COnscreenKeyboardDlg::OnBnClickedButton50)
    ON_BN_CLICKED(IDC_BUTTON51, &COnscreenKeyboardDlg::OnBnClickedButton51)
    ON_BN_CLICKED(IDC_BUTTON52, &COnscreenKeyboardDlg::OnBnClickedButton52)
    ON_BN_CLICKED(IDC_BUTTON53, &COnscreenKeyboardDlg::OnBnClickedButton53)
    ON_BN_CLICKED(IDC_BUTTON54, &COnscreenKeyboardDlg::OnBnClickedButton54)
    ON_BN_CLICKED(IDC_BUTTON55, &COnscreenKeyboardDlg::OnBnClickedButton55)
    ON_BN_CLICKED(IDC_BUTTON56, &COnscreenKeyboardDlg::OnBnClickedButton56)
    ON_BN_CLICKED(IDC_BUTTON57, &COnscreenKeyboardDlg::OnBnClickedButton57)
    ON_BN_CLICKED(IDC_BUTTON58, &COnscreenKeyboardDlg::OnBnClickedButton58)
    ON_BN_CLICKED(IDC_BUTTON59, &COnscreenKeyboardDlg::OnBnClickedButton59)
    ON_BN_CLICKED(IDC_BUTTON60, &COnscreenKeyboardDlg::OnBnClickedButton60)
    ON_BN_CLICKED(IDC_BUTTON61, &COnscreenKeyboardDlg::OnBnClickedButton61)
    ON_BN_CLICKED(IDC_BUTTON62, &COnscreenKeyboardDlg::OnBnClickedButton62)
    ON_BN_CLICKED(IDC_BUTTON63, &COnscreenKeyboardDlg::OnBnClickedButton63)

END_MESSAGE_MAP()


// COnscreenKeyboardDlg message handlers`
//HANDLE m_Mutex_h;
//UINT m_WinMsg_ui; 
BOOL COnscreenKeyboardDlg::OnInitDialog()
{

    HANDLE m_hOneInstanceMutex = CreateMutex(NULL, TRUE, _T("Hello"));
    if ((m_hOneInstanceMutex!=NULL)&&(GetLastError()!=ERROR_ALREADY_EXISTS))
    {
    }
    else
    { 
        //::MessageBox(NULL, _T("An Instance of this application is already running..."), _T(""), MB_OK);
        exit(0);
        return FALSE; 
    }

    CDialog::OnInitDialog();
    ModifyStyleEx(0, IDM_ABOUTBOX); 
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
    SetIcon(m_hIcon, TRUE);		// Set small icon

    // TODO: Add extra initialization here
    COnscreenKeyboardDlg::userHook();
    return TRUE;  // return TRUE  unless you set the focus to a control
}

void COnscreenKeyboardDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void COnscreenKeyboardDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // device context for painting

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
    //OnNcPaint();
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR COnscreenKeyboardDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

void COnscreenKeyboardDlg::userHook() {
    CWnd *button;
    CFont m_font;
    LOGFONT lf;
    lf.lfHeight = 20; 
    wcscpy_s(lf.lfFaceName, _T("Tahoma"));
    m_font.CreateFontIndirect(&lf);

    	button = GetDlgItem(IDC_BUTTON1);
	button->SetWindowTextW((LPCTSTR)_T("\u2264"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON2);
	button->SetWindowTextW((LPCTSTR)_T("\u2265"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON3);
	button->SetWindowTextW((LPCTSTR)_T("\u00B1"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON4);
	button->SetWindowTextW((LPCTSTR)_T("\u2260"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON5);
	button->SetWindowTextW((LPCTSTR)_T("\u00F7"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON6);
	button->SetWindowTextW((LPCTSTR)_T("\u00D7"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON7);
	button->SetWindowTextW((LPCTSTR)_T("\u221A"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON8);
	button->SetWindowTextW((LPCTSTR)_T("\u221B"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON9);
	button->SetWindowTextW((LPCTSTR)_T("\u221C"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON10);
	button->SetWindowTextW((LPCTSTR)_T("\u221E"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON11);
	button->SetWindowTextW((LPCTSTR)_T("\u0192"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON12);
	button->SetWindowTextW((LPCTSTR)_T("\u2234"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON13);
	button->SetWindowTextW((LPCTSTR)_T("\u22C5"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON14);
	button->SetWindowTextW((LPCTSTR)_T("\u2308"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON15);
	button->SetWindowTextW((LPCTSTR)_T("\u2309"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON16);
	button->SetWindowTextW((LPCTSTR)_T("\u230A"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON17);
	button->SetWindowTextW((LPCTSTR)_T("\u230B"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON18);
	button->SetWindowTextW((LPCTSTR)_T("\u2295"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON19);
	button->SetWindowTextW((LPCTSTR)_T("\u2297"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON20);
	button->SetWindowTextW((LPCTSTR)_T("\u2070"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON21);
	button->SetWindowTextW((LPCTSTR)_T("\u00B9"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON22);
	button->SetWindowTextW((LPCTSTR)_T("\u00B2"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON23);
	button->SetWindowTextW((LPCTSTR)_T("\u00B3"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON24);
	button->SetWindowTextW((LPCTSTR)_T("\u2074"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON25);
	button->SetWindowTextW((LPCTSTR)_T("\u2075"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON26);
	button->SetWindowTextW((LPCTSTR)_T("\u2076"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON27);
	button->SetWindowTextW((LPCTSTR)_T("\u2077"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON28);
	button->SetWindowTextW((LPCTSTR)_T("\u2078"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON29);
	button->SetWindowTextW((LPCTSTR)_T("\u2079"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON30);
	button->SetWindowTextW((LPCTSTR)_T("\u2080"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON31);
	button->SetWindowTextW((LPCTSTR)_T("\u2081"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON32);
	button->SetWindowTextW((LPCTSTR)_T("\u2082"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON33);
	button->SetWindowTextW((LPCTSTR)_T("\u2083"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON34);
	button->SetWindowTextW((LPCTSTR)_T("\u2084"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON35);
	button->SetWindowTextW((LPCTSTR)_T("\u2085"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON36);
	button->SetWindowTextW((LPCTSTR)_T("\u2086"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON37);
	button->SetWindowTextW((LPCTSTR)_T("\u2087"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON38);
	button->SetWindowTextW((LPCTSTR)_T("\u2088"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON39);
	button->SetWindowTextW((LPCTSTR)_T("\u2089"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON40);
	button->SetWindowTextW((LPCTSTR)_T("\u208A"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON41);
	button->SetWindowTextW((LPCTSTR)_T("\u208B"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON42);
	button->SetWindowTextW((LPCTSTR)_T("\u208C"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON43);
	button->SetWindowTextW((LPCTSTR)_T("\u208D"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON44);
	button->SetWindowTextW((LPCTSTR)_T("\u208E"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON45);
	button->SetWindowTextW((LPCTSTR)_T("\u03C3"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON46);
	button->SetWindowTextW((LPCTSTR)_T("\u03C7"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON47);
	button->SetWindowTextW((LPCTSTR)_T("\u2211"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON48);
	button->SetWindowTextW((LPCTSTR)_T("\u00B0"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON49);
	button->SetWindowTextW((LPCTSTR)_T("\u00B5"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON50);
	button->SetWindowTextW((LPCTSTR)_T("\u2032"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON51);
	button->SetWindowTextW((LPCTSTR)_T("\u222B"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON52);
	button->SetWindowTextW((LPCTSTR)_T("\u2202"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON53);
	button->SetWindowTextW((LPCTSTR)_T("\u2206"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON54);
	button->SetWindowTextW((LPCTSTR)_T("\u2207"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON55);
	button->SetWindowTextW((LPCTSTR)_T("\u211D"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON56);
	button->SetWindowTextW((LPCTSTR)_T("\u2102"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON57);
	button->SetWindowTextW((LPCTSTR)_T("\u2115"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON58);
	button->SetWindowTextW((LPCTSTR)_T("\u2119"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON59);
	button->SetWindowTextW((LPCTSTR)_T("\u211A"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON60);
	button->SetWindowTextW((LPCTSTR)_T("\u2124"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON61);
	button->SetWindowTextW((LPCTSTR)_T("\u2200"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON62);
	button->SetWindowTextW((LPCTSTR)_T("\u2205"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON63);
	button->SetWindowTextW((LPCTSTR)_T("\u2227"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON64);
	button->SetWindowTextW((LPCTSTR)_T("\u2228"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON65);
	button->SetWindowTextW((LPCTSTR)_T("\u22BB"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON66);
	button->SetWindowTextW((LPCTSTR)_T("\u22BC"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON67);
	button->SetWindowTextW((LPCTSTR)_T("\u22BD"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON68);
	button->SetWindowTextW((LPCTSTR)_T("\u2229"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON69);
	button->SetWindowTextW((LPCTSTR)_T("\u222A"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON70);
	button->SetWindowTextW((LPCTSTR)_T("\u2208"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON71);
	button->SetWindowTextW((LPCTSTR)_T("\u2209"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON72);
	button->SetWindowTextW((LPCTSTR)_T("\u2282"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON73);
	button->SetWindowTextW((LPCTSTR)_T("\u2283"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON74);
	button->SetWindowTextW((LPCTSTR)_T("\u2243"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON75);
	button->SetWindowTextW((LPCTSTR)_T("\u2295"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON76);
	button->SetWindowTextW((LPCTSTR)_T("\u2297"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON77);
	button->SetWindowTextW((LPCTSTR)_T("\u2296"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON78);
	button->SetWindowTextW((LPCTSTR)_T("\u2298"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON79);
	button->SetWindowTextW((LPCTSTR)_T("\u2234"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON80);
	button->SetWindowTextW((LPCTSTR)_T("\u2235"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON81);
	button->SetWindowTextW((LPCTSTR)_T("\u221D"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON82);
	button->SetWindowTextW((LPCTSTR)_T("\u2260"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON83);
	button->SetWindowTextW((LPCTSTR)_T("\u224C"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON84);
	button->SetWindowTextW((LPCTSTR)_T("\u2218"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON85);
	button->SetWindowTextW((LPCTSTR)_T("\u2219"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON86);
	button->SetWindowTextW((LPCTSTR)_T("\u221D"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON87);
	button->SetWindowTextW((LPCTSTR)_T("\u2236"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);

	button = GetDlgItem(IDC_BUTTON88);
	button->SetWindowTextW((LPCTSTR)_T("\u2237"));
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_font);
}

void COnscreenKeyboardDlg::OnBnClickedButton1()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2264;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton2()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2265;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton3()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B1;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton4()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2260;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton5()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00F7;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton6()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00D7;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton7()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221A;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton8()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221B;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton9()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221C;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton10()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221E;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton11()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x0192;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton12()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2234;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton13()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x22C5;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton14()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2308;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton15()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2309;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton16()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x230A;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton17()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x230B;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton18()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2295;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton19()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2297;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton20()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2070;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton21()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B9;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton22()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B2;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton23()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B3;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton24()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2074;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton25()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2075;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton26()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2076;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton27()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2077;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton28()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2078;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton29()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2079;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton30()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2080;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton31()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2081;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton32()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2082;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton33()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2083;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton34()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2084;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton35()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2085;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton36()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2086;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton37()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2087;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton38()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2088;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton39()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2089;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton40()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x208A;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton41()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x208B;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton42()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x208C;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton43()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x208D;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton44()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x208E;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton45()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x03C3;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton46()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x03C7;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton47()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2211;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton48()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B0;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton49()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x00B5;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton50()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2032;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton51()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x222B;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton52()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2202;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton53()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2206;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton54()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2207;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton55()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x211D;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton56()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2102;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton57()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2115;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton58()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2119;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton59()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x211A;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton60()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2124;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton61()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2200;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton62()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2205;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton63()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2227;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton64()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2228;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton65()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x22BB;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton66()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x22BC;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton67()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x22BD;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton68()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2229;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton69()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x222A;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton70()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2208;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton71()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2209;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton72()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2282;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton73()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2283;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton74()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2243;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton75()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2295;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton76()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2297;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton77()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2296;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton78()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2298;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton79()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2234;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton80()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2235;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton81()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221D;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton82()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2260;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton83()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x224C;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton84()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2218;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton85()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2219;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton86()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x221D;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton87()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2236;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnBnClickedButton88()
{
	KEYBDINPUT kb={0};
	INPUT Input={0};
	kb.wScan = 0x2237;
	kb.dwFlags = KEYEVENTF_UNICODE;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));
}

void COnscreenKeyboardDlg::OnNcPaint()
{
    Default();
    CDC* pDC = GetWindowDC();
    CDC dcMem;
    dcMem.CreateCompatibleDC(pDC);
    CBitmap bitmap;

    CRect rc;
    CalculateCaptionTextRect(this, &rc);

    bitmap.CreateCompatibleBitmap(pDC, rc.Width(), rc.Height());
    CBitmap* pOldBitmap = dcMem.SelectObject(&bitmap);

    CSize sizeButton(GetSystemMetrics(SM_CXSIZE), GetSystemMetrics(SM_CYSIZE));

    //DoGradientFill(this, acLeft, m_startColor, m_endColor);

    rc.right -= 5;
    rc.top += 5 ;
    rc.bottom -= 2;
    
    
    //CString s;
    //s.Format(_T("%ld"),sizeButton.cx);
    //MessageBox(s);
    
    rc.right -= 60;
    rc.left = rc.right - 21;
    
    dcMem.DrawFrameControl(rc, DFC_CAPTION , DFCS_CAPTIONHELP);
    CRect rcBitBlt = rc;
    pDC->BitBlt(rc.left, rc.top, rcBitBlt.Width(), rcBitBlt.Height(), &dcMem, 
        rc.left, rc.top , SRCCOPY);
    dcMem.SelectObject(pOldBitmap);
    DeleteObject(pOldBitmap);
    ReleaseDC(&dcMem);
    ReleaseDC(pDC);

    GetDlgItem(DFC_CAPTION);
}

void COnscreenKeyboardDlg::about()
{
    MessageBox(_T("SUP"));
}

void COnscreenKeyboardDlg::CalculateCaptionTextRect(CWnd* pWnd, CRect* prc)
{
    // Get some needed system metrics.

    CSize sizeFrame(GetSystemMetrics(SM_CXFRAME),
        GetSystemMetrics(SM_CYFRAME));
    CSize sizeBorder(GetSystemMetrics(SM_CXBORDER),
        GetSystemMetrics(SM_CYBORDER));
    CSize sizeButton(GetSystemMetrics(SM_CXSIZE),
        GetSystemMetrics(SM_CYSIZE));

    // Get the window rectangle and style information.

    CRect rcWindow;
    DWORD dwStyle = pWnd->GetStyle();
    pWnd->GetWindowRect(rcWindow);

    // Set the rectangle initially based on the frame, window
    // rect, and height of a caption-bar button.

    if (dwStyle & WS_THICKFRAME)
    {
        prc->left = sizeFrame.cx;
        prc->top = sizeFrame.cy;
        prc->right = rcWindow.Width() - sizeFrame.cx;
    }
    else
    {
        prc->left = 0;
        prc->top = 0;
        prc->right = rcWindow.Width();
    }
    prc->bottom = prc->top + sizeButton.cy + 3;

    if (dwStyle & WS_SYSMENU)
        prc->left += (sizeButton.cx + sizeBorder.cx);
}