// Dialog_USER_LOG.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_USER_LOG.h"
#include "DIALOG_USER_REGISTER.h"

#include <fstream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_LOG dialog


CDialog_USER_LOG::CDialog_USER_LOG(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_USER_LOG::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_USER_LOG)
	m_username = _T("");
	m_code = _T("");
	//}}AFX_DATA_INIT
}


void CDialog_USER_LOG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_USER_LOG)
	DDX_Text(pDX, IDC_EDIT_USERNAME, m_username);
	DDV_MaxChars(pDX, m_username, 40);
	DDX_Text(pDX, IDC_EDIT_CODE, m_code);
	DDV_MaxChars(pDX, m_code, 12);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialog_USER_LOG, CDialog)
	//{{AFX_MSG_MAP(CDialog_USER_LOG)
	ON_BN_CLICKED(ID_REGISTER, OnRegister)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_LOG message handlers

/*注册新用户*/
/***************************************************************************/
void CDialog_USER_LOG::OnRegister() 
{
	// TODO: Add your control notification handler code here
	CDIALOG_USER_REGISTER Dialog_user_register;
	if(Dialog_user_register.DoModal() == IDOK)
	{
		char username[40];
		char nick[40];
		char code[12];

		username[0] = '\0';
		nick[0] = '\0';
		code[0] = '\0';
		
		strcpy(username,Dialog_user_register.m_username);
		strcpy(nick,Dialog_user_register.m_nick);
		strcpy(code,Dialog_user_register.m_code);
		
		if(username[0] == '\0')
		{
			MessageBox("请输入用户名!",NULL,MB_OK);
			return ;
		}
		if(nick[0] == '\0')
		{
			MessageBox("请输入用户昵称!",NULL,MB_OK);
			return ;
		}
		if(code[0] == '\0')
		{
			MessageBox("请输入密码!",NULL,MB_OK);
			return ;
		}
		
		bool flag = false;
		freopen("Doc\\USER.txt", "r", stdin);
		char temp_username[40];
		char temp_nick[40];
		char temp_code[12];
		while(1)
		{
			if(scanf("%s",&temp_username) == EOF)
				break;
			scanf("%s",&temp_nick);
			scanf("%s",&temp_code);
			if(strcmp(temp_username,username) == 0)
			{
				flag = true;
				break;
			}
		}
		fclose(stdin);
		if(flag == true)
		{
			MessageBox("用户已存在!",NULL,MB_OK);
			return ;
		}

		FILE * fout;
		fout = fopen("USER.txt","a");
	
		fprintf(fout,"%s ",username);
		fprintf(fout,"%s ",nick);
		fprintf(fout,"%s\n",code);

		fclose(fout);
	}
}
/***************************************************************************/
