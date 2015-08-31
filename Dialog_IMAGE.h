/*
*作者：胡久林
*/
#if !defined(AFX_DIALOG_IMAGE_H__CC4CF4D8_3262_4BCB_9B24_62FF56FAB2B8__INCLUDED_)
#define AFX_DIALOG_IMAGE_H__CC4CF4D8_3262_4BCB_9B24_62FF56FAB2B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog_IMAGE.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog_IMAGE dialog

class CDialog_IMAGE : public CDialog
{
// Construction
public:
	CDialog_IMAGE(CWnd* pParent = NULL);   // standard constructor

	/*图片选择参数*/
	/***************************************************************************/	
	int select;
	/***************************************************************************/
// Dialog Data
	//{{AFX_DATA(CDialog_IMAGE)
	enum { IDD = IDD_IMAGE };
	CButton	m_snow;
	CButton	m_fish;
	CButton	m_null;
	CButton	m_ball;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog_IMAGE)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog_IMAGE)
	afx_msg void OnRadioBall();
	afx_msg void OnRadioFish();
	afx_msg void OnRadioSnow();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG_IMAGE_H__CC4CF4D8_3262_4BCB_9B24_62FF56FAB2B8__INCLUDED_)
