/*
*×÷Õß£ººú¾ÃÁÖ
*/
#if !defined(AFX_DIALOG_USER_REGISTER_H__5D76449D_E046_4834_9948_57FC34CD5082__INCLUDED_)
#define AFX_DIALOG_USER_REGISTER_H__5D76449D_E046_4834_9948_57FC34CD5082__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DIALOG_USER_REGISTER.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDIALOG_USER_REGISTER dialog

class CDIALOG_USER_REGISTER : public CDialog
{
// Construction
public:
	CDIALOG_USER_REGISTER(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDIALOG_USER_REGISTER)
	enum { IDD = IDD_USER_REGISTER };
	CString	m_code;
	CString	m_nick;
	CString	m_username;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDIALOG_USER_REGISTER)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDIALOG_USER_REGISTER)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_USER_REGISTER_H__5D76449D_E046_4834_9948_57FC34CD5082__INCLUDED_)
