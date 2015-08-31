/*
*作者：胡久林
*/
#if !defined(AFX_DIALOG_MUSIC_H__CADD1519_E99F_44FC_9C96_579208C4B158__INCLUDED_)
#define AFX_DIALOG_MUSIC_H__CADD1519_E99F_44FC_9C96_579208C4B158__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog_Music.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog_Music dialog

class CDialog_Music : public CDialog
{
// Construction
public:
	CDialog_Music(CWnd* pParent = NULL);   // standard constructor
	
	/*记录用户所做的当前选择*/
	/***************************************************************************/
	int select;
	/***************************************************************************/

// Dialog Data
	//{{AFX_DATA(CDialog_Music)
	enum { IDD = IDD_MUSIC };
	CListBox	m_listmusic;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog_Music)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog_Music)
	afx_msg void OnMake();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_MUSIC_H__CADD1519_E99F_44FC_9C96_579208C4B158__INCLUDED_)
