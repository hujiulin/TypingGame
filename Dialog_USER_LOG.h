/*
*×÷Õß£ººú¾ÃÁÖ
*/
#if !defined(AFX_DIALOG_USER_LOG_H__84323B46_90A4_41B2_BFF7_C720CBBD6F7F__INCLUDED_)
#define AFX_DIALOG_USER_LOG_H__84323B46_90A4_41B2_BFF7_C720CBBD6F7F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog_USER_LOG.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_LOG dialog

class CDialog_USER_LOG : public CDialog
{
// Construction
public:
	CDialog_USER_LOG(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialog_USER_LOG)
	enum { IDD = IDD_USER_LOG };
	CString	m_username;
	CString	m_code;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog_USER_LOG)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog_USER_LOG)
	afx_msg void OnRegister();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_USER_LOG_H__84323B46_90A4_41B2_BFF7_C720CBBD6F7F__INCLUDED_)
