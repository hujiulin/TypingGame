// DIALOG_USER_REGISTER.cpp : implementation file
//
/*
*作者：胡久林

*定义用户注册类
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "DIALOG_USER_REGISTER.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDIALOG_USER_REGISTER dialog


CDIALOG_USER_REGISTER::CDIALOG_USER_REGISTER(CWnd* pParent /*=NULL*/)
	: CDialog(CDIALOG_USER_REGISTER::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDIALOG_USER_REGISTER)
	m_code = _T("");
	m_nick = _T("");
	m_username = _T("");
	//}}AFX_DATA_INIT
}


void CDIALOG_USER_REGISTER::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDIALOG_USER_REGISTER)
	DDX_Text(pDX, IDC_EDIT_CODE, m_code);
	DDV_MaxChars(pDX, m_code, 12);
	DDX_Text(pDX, IDC_EDIT_NICK, m_nick);
	DDV_MaxChars(pDX, m_nick, 40);
	DDX_Text(pDX, IDC_EDIT_USERNAME, m_username);
	DDV_MaxChars(pDX, m_username, 40);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDIALOG_USER_REGISTER, CDialog)
	//{{AFX_MSG_MAP(CDIALOG_USER_REGISTER)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDIALOG_USER_REGISTER message handlers
