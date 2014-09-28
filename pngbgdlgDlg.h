// pngbgdlgDlg.h : header file
//

#if !defined(AFX_PNGBGDLGDLG_H__E38378F1_E0C7_413E_B1C4_467F5FFD79EB__INCLUDED_)
#define AFX_PNGBGDLGDLG_H__E38378F1_E0C7_413E_B1C4_467F5FFD79EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPngbgdlgDlg dialog

class CPngbgdlgDlg : public CDialog
{
// Construction
public:
	CPngbgdlgDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CPngbgdlgDlg)
	enum { IDD = IDD_PNGBGDLG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPngbgdlgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPngbgdlgDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PNGBGDLGDLG_H__E38378F1_E0C7_413E_B1C4_467F5FFD79EB__INCLUDED_)
