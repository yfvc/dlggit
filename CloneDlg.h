#if !defined(AFX_CLONEDLG_H__0CB994D6_84DD_4BB3_9F43_AE0E334528C3__INCLUDED_)
#define AFX_CLONEDLG_H__0CB994D6_84DD_4BB3_9F43_AE0E334528C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CloneDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCloneDlg dialog

class CCloneDlg : public CDialog
{
// Construction
public:
	CCloneDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCloneDlg)
	enum { IDD = IDD_DLGGIT_CLONE };
	CString	m_strDestPathName;
	CString	m_strSrcPathName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCloneDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCloneDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLONEDLG_H__0CB994D6_84DD_4BB3_9F43_AE0E334528C3__INCLUDED_)
