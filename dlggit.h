// dlggit.h : main header file for the DLGGIT application
//

#if !defined(AFX_DLGGIT_H__2A74DB58_F07A_415C_9160_793972D1EF3E__INCLUDED_)
#define AFX_DLGGIT_H__2A74DB58_F07A_415C_9160_793972D1EF3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDlggitApp:
// See dlggit.cpp for the implementation of this class
//

class CDlggitApp : public CWinApp
{
public:
	CDlggitApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlggitApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDlggitApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGGIT_H__2A74DB58_F07A_415C_9160_793972D1EF3E__INCLUDED_)
