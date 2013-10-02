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
// OnscreenKeyboardDlg.h : header file
//

#pragma once


// COnscreenKeyboardDlg dialog
class COnscreenKeyboardDlg : public CDialog
{
    // Construction
public:
    COnscreenKeyboardDlg(CWnd* pParent = NULL);	// standard constructor

    // Dialog Data
    enum { IDD = IDD_ONSCREENKEYBOARD_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support



    // Implementation
private:
    enum AlignCaption { acLeft, acCenter, acRight };
    BOOL mPushedButton[6];//array with buttons state
    BOOL mbClickDown;//is button clicked
    int mnNumberButtonCliked;
    COLORREF m_colorText;//color text
    COLORREF m_startColor;//color start
    COLORREF m_endColor;//color end
    int m_nPaintDir;//direction to paint
    void CalculateCaptionTextRect(CWnd* pWnd, CRect* prc);
protected:
    HICON m_hIcon;

    // Generated message map functions
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
    afx_msg void OnNcPaint();
public:
    afx_msg void OnBnClickedOk();
    afx_msg void about();
    afx_msg void COnscreenKeyboardDlg::userHook();
    afx_msg void OnBnClickedButton1();
    afx_msg void OnBnClickedButton2();
    afx_msg void OnBnClickedButton3();
    afx_msg void OnBnClickedButton4();
    afx_msg void OnBnClickedButton5();
    afx_msg void OnBnClickedButton6();
    afx_msg void OnBnClickedButton7();
    afx_msg void OnBnClickedButton8();
    afx_msg void OnBnClickedButton9();
    afx_msg void OnBnClickedButton10();
    afx_msg void OnBnClickedButton11();
    afx_msg void OnBnClickedButton12();
    afx_msg void OnBnClickedButton13();
    afx_msg void OnBnClickedButton14();
    afx_msg void OnBnClickedButton15();
    afx_msg void OnBnClickedButton16();
    afx_msg void OnBnClickedButton17();
    afx_msg void OnBnClickedButton18();
    afx_msg void OnBnClickedButton19();
    afx_msg void OnBnClickedButton20();
    afx_msg void OnBnClickedButton21();
    afx_msg void OnBnClickedButton22();
    afx_msg void OnBnClickedButton23();
    afx_msg void OnBnClickedButton24();
    afx_msg void OnBnClickedButton25();
    afx_msg void OnBnClickedButton26();
    afx_msg void OnBnClickedButton27();
    afx_msg void OnBnClickedButton28();
    afx_msg void OnBnClickedButton29();
    afx_msg void OnBnClickedButton30();
    afx_msg void OnBnClickedButton31();
    afx_msg void OnBnClickedButton32();
    afx_msg void OnBnClickedButton33();
    afx_msg void OnBnClickedButton34();
    afx_msg void OnBnClickedButton35();
    afx_msg void OnBnClickedButton36();
    afx_msg void OnBnClickedButton37();
    afx_msg void OnBnClickedButton38();
    afx_msg void OnBnClickedButton39();
    afx_msg void OnBnClickedButton40();
    afx_msg void OnBnClickedButton41();
    afx_msg void OnBnClickedButton42();
    afx_msg void OnBnClickedButton43();
    afx_msg void OnBnClickedButton44();
    afx_msg void OnBnClickedButton45();
    afx_msg void OnBnClickedButton46();
    afx_msg void OnBnClickedButton47();
    afx_msg void OnBnClickedButton48();
    afx_msg void OnBnClickedButton49();
    afx_msg void OnBnClickedButton50();
    afx_msg void OnBnClickedButton51();
    afx_msg void OnBnClickedButton52();
    afx_msg void OnBnClickedButton53();
    afx_msg void OnBnClickedButton54();
    afx_msg void OnBnClickedButton55();
    afx_msg void OnBnClickedButton56();
    afx_msg void OnBnClickedButton57();
    afx_msg void OnBnClickedButton58();
    afx_msg void OnBnClickedButton59();
    afx_msg void OnBnClickedButton60();
    afx_msg void OnBnClickedButton61();
    afx_msg void OnBnClickedButton62();
    afx_msg void OnBnClickedButton63();
    afx_msg void OnBnClickedButton64();
    afx_msg void OnBnClickedButton65();
    afx_msg void OnBnClickedButton66();
    afx_msg void OnBnClickedButton67();
    afx_msg void OnBnClickedButton68();
    afx_msg void OnBnClickedButton69();
    afx_msg void OnBnClickedButton70();
    afx_msg void OnBnClickedButton71();
    afx_msg void OnBnClickedButton72();
    afx_msg void OnBnClickedButton73();
    afx_msg void OnBnClickedButton74();
    afx_msg void OnBnClickedButton75();
    afx_msg void OnBnClickedButton76();
    afx_msg void OnBnClickedButton77();
    afx_msg void OnBnClickedButton78();
    afx_msg void OnBnClickedButton79();
    afx_msg void OnBnClickedButton80();
    afx_msg void OnBnClickedButton81();
    afx_msg void OnBnClickedButton82();
    afx_msg void OnBnClickedButton83();
    afx_msg void OnBnClickedButton84();
    afx_msg void OnBnClickedButton85();
    afx_msg void OnBnClickedButton86();
    afx_msg void OnBnClickedButton87();
    afx_msg void OnBnClickedButton88();

};
