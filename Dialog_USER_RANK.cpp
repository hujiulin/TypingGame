// Dialog_USER_RANK.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_USER_RANK.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_RANK dialog


CDialog_USER_RANK::CDialog_USER_RANK(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_USER_RANK::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_USER_RANK)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialog_USER_RANK::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_USER_RANK)
	DDX_Control(pDX, IDC_STATIC_SCORE5, m_score5);
	DDX_Control(pDX, IDC_STATIC_SCORE4, m_score4);
	DDX_Control(pDX, IDC_STATIC_SCORE3, m_score3);
	DDX_Control(pDX, IDC_STATIC_SCORE2, m_score2);
	DDX_Control(pDX, IDC_STATIC_SCORE1, m_score1);
	DDX_Control(pDX, IDC_STATIC_NAME5, m_name5);
	DDX_Control(pDX, IDC_STATIC_NAME4, m_name4);
	DDX_Control(pDX, IDC_STATIC_NAME3, m_name3);
	DDX_Control(pDX, IDC_STATIC_NAME2, m_name2);
	DDX_Control(pDX, IDC_STATIC_NAME1, m_name1);
	//}}AFX_DATA_MAP

	/*显示当前排名榜*/
	/***************************************************************************/
	int i;
	char topname[6][40];
	int topscore[6];
	freopen("Doc\\HISTORY.txt", "r", stdin);
	for(i = 1;i <= 5;i++)
	{
		scanf("%s%d",&topname[i],&topscore[i]);
	}

	fclose(stdin);
	 m_name1.SetWindowText(topname[1]);
	 m_name2.SetWindowText(topname[2]);
	 m_name3.SetWindowText(topname[3]);
	 m_name4.SetWindowText(topname[4]);
	 m_name5.SetWindowText(topname[5]);
	
	char ch1[10];
	_itoa(topscore[1],ch1,10);
	char ch2[10];
	_itoa(topscore[2],ch2,10);
	char ch3[10];
	_itoa(topscore[3],ch3,10);
	char ch4[10];
	_itoa(topscore[4],ch4,10);
	char ch5[10];
	_itoa(topscore[5],ch5,10);
	 m_score1.SetWindowText(ch1);
	 m_score2.SetWindowText(ch2);
	 m_score3.SetWindowText(ch3);
	 m_score4.SetWindowText(ch4);
	 m_score5.SetWindowText(ch5);
	 /***************************************************************************/
}


BEGIN_MESSAGE_MAP(CDialog_USER_RANK, CDialog)
	//{{AFX_MSG_MAP(CDialog_USER_RANK)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_RANK message handlers
