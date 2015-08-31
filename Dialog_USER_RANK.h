/*
*×÷Õß£ººú¾ÃÁÖ
*/
#if !defined(AFX_DIALOG_USER_RANK_H__E75FBDE4_49EF_4D15_9AA9_C90BD1052A85__INCLUDED_)
#define AFX_DIALOG_USER_RANK_H__E75FBDE4_49EF_4D15_9AA9_C90BD1052A85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog_USER_RANK.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_RANK dialog

class CDialog_USER_RANK : public CDialog
{
// Construction
public:
	CDialog_USER_RANK(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialog_USER_RANK)
	enum { IDD = IDD_RANK };
	CStatic	m_score5;
	CStatic	m_score4;
	CStatic	m_score3;
	CStatic	m_score2;
	CStatic	m_score1;
	CStatic	m_name5;
	CStatic	m_name4;
	CStatic	m_name3;
	CStatic	m_name2;
	CStatic	m_name1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog_USER_RANK)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog_USER_RANK)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_USER_RANK_H__E75FBDE4_49EF_4D15_9AA9_C90BD1052A85__INCLUDED_)
