/*
*作者：胡久林
*/
#if !defined(AFX_DIALOG_USER_HARD_H__73E17937_8554_47C8_88F6_AC00FB3FE4AD__INCLUDED_)
#define AFX_DIALOG_USER_HARD_H__73E17937_8554_47C8_88F6_AC00FB3FE4AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog_USER_HARD.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_HARD dialog

class CDialog_USER_HARD : public CDialog
{
// Construction
public:
	CDialog_USER_HARD(CWnd* pParent = NULL);   // standard constructor
	
	/*难度选择参数*/
	/***************************************************************************/
	int danci;
	int pinlv;
	int sulv;
	/***************************************************************************/

// Dialog Data
	//{{AFX_DATA(CDialog_USER_HARD)
	enum { IDD = IDD_HARD };
	CComboBox	m_list4;
	CComboBox	m_list3;
	CComboBox	m_list2;
	CComboBox	m_list1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog_USER_HARD)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog_USER_HARD)
	afx_msg void Onshezhihao();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_USER_HARD_H__73E17937_8554_47C8_88F6_AC00FB3FE4AD__INCLUDED_)
