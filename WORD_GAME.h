/*
*×÷Õß:ºú¾ÃÁÖ
*/
// WORD_GAME.h : main header file for the WORD_GAME application
//

#if !defined(AFX_WORD_GAME_H__C731C2A1_3410_4BD5_B5B5_18523BBAE9C6__INCLUDED_)
#define AFX_WORD_GAME_H__C731C2A1_3410_4BD5_B5B5_18523BBAE9C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWORD_GAMEApp:
// See WORD_GAME.cpp for the implementation of this class
//

class CWORD_GAMEApp : public CWinApp
{
public:
	CWORD_GAMEApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWORD_GAMEApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWORD_GAMEApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WORD_GAME_H__C731C2A1_3410_4BD5_B5B5_18523BBAE9C6__INCLUDED_)
