// CloneDlg.cpp : implementation file
//

#include "stdafx.h"
#include "dlggit.h"
#include "CloneDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCloneDlg dialog


CCloneDlg::CCloneDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCloneDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCloneDlg)
	m_strDestPathName = _T("");
	m_strSrcPathName = _T("");
	//}}AFX_DATA_INIT
}


void CCloneDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCloneDlg)
	DDX_Text(pDX, IDC_EDIT_DESTPATHNAME, m_strDestPathName);
	DDX_Text(pDX, IDC_EDIT_SRCPATHNAME, m_strSrcPathName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCloneDlg, CDialog)
	//{{AFX_MSG_MAP(CCloneDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCloneDlg message handlers
