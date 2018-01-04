// uiDlg.h : header file
//

#if !defined(AFX_UIDLG_H__5047CADE_AAB1_49A0_8B9B_82C1CDF78D36__INCLUDED_)
#define AFX_UIDLG_H__5047CADE_AAB1_49A0_8B9B_82C1CDF78D36__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CUiDlg dialog

class CUiDlg : public CDialog
{
// Construction
public:
	CUiDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CUiDlg)
	enum { IDD = IDD_UI_DIALOG };
	CStatic	m_static7;
	CStatic	m_static6;
	CStatic	m_static5;
	CStatic	m_static4;
	CStatic	m_static3;
	CStatic	m_static2;
	CStatic	m_static1;
	int		m_start2;
	int		m_start3;
	int		m_start4;
	int		m_start5;
	int		m_start6;
	int		m_start7;
	int		m_start9;
	int		m_x;
	int		m_end1;
	int		m_end2;
	int		m_end3;
	int		m_end4;
	int		m_end5;
	int		m_end6;
	int		m_end7;
	int		m_end8;
	int		m_end9;
	int		m_start1;
	CString	m_static14;
	CString	m_time;
	int		m_start8;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides

	//{{AFX_VIRTUAL(CUiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CUiDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_UIDLG_H__5047CADE_AAB1_49A0_8B9B_82C1CDF78D36__INCLUDED_)
