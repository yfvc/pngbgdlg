// pngbgdlg.h : main header file for the PNGBGDLG application
//

#if !defined(AFX_PNGBGDLG_H__1C3D5267_650F_461E_991F_D577E23F8DF8__INCLUDED_)
#define AFX_PNGBGDLG_H__1C3D5267_650F_461E_991F_D577E23F8DF8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPngbgdlgApp:
// See pngbgdlg.cpp for the implementation of this class
//

class CPngbgdlgApp : public CWinApp
{
public:
	CPngbgdlgApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPngbgdlgApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPngbgdlgApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PNGBGDLG_H__1C3D5267_650F_461E_991F_D577E23F8DF8__INCLUDED_)
