// Dialog_USER_RULE.cpp : implementation file
//
/*
*作者：胡久林
*定义游戏规则对话框类
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_USER_RULE.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_RULE dialog


CDialog_USER_RULE::CDialog_USER_RULE(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_USER_RULE::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_USER_RULE)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialog_USER_RULE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_USER_RULE)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialog_USER_RULE, CDialog)
	//{{AFX_MSG_MAP(CDialog_USER_RULE)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_RULE message handlers
