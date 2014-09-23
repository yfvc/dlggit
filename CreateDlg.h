#if !defined(AFX_CREATEDLG_H__030D4104_579B_4F08_9BD4_558263DB0185__INCLUDED_)
#define AFX_CREATEDLG_H__030D4104_579B_4F08_9BD4_558263DB0185__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CreateDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCreateDlg dialog

class CCreateDlg : public CDialog
{
// Construction
public:
	CCreateDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCreateDlg)
	enum { IDD = IDD_DLGGIT_CREATE };
	CString	m_strPathName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCreateDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCreateDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CREATEDLG_H__030D4104_579B_4F08_9BD4_558263DB0185__INCLUDED_)
