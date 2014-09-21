// dlggitDlg.h : header file
//

#if !defined(AFX_DLGGITDLG_H__0AD6B95D_9D38_44B1_9301_6476F7223A48__INCLUDED_)
#define AFX_DLGGITDLG_H__0AD6B95D_9D38_44B1_9301_6476F7223A48__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDlggitDlg dialog

class CDlggitDlg : public CDialog
{
// Construction
public:
	CDlggitDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDlggitDlg)
	enum { IDD = IDD_DLGGIT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlggitDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDlggitDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGGITDLG_H__0AD6B95D_9D38_44B1_9301_6476F7223A48__INCLUDED_)
