// Dialog_USER_HARD.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_USER_HARD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_HARD dialog


CDialog_USER_HARD::CDialog_USER_HARD(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_USER_HARD::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_USER_HARD)
	//}}AFX_DATA_INIT
}


void CDialog_USER_HARD::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_USER_HARD)
	DDX_Control(pDX, IDC_COMBO4, m_list4);
	DDX_Control(pDX, IDC_COMBO3, m_list3);
	DDX_Control(pDX, IDC_COMBO2, m_list2);
	DDX_Control(pDX, IDC_COMBO1, m_list1);
	//}}AFX_DATA_MAP
	/*初始化选择难度的下拉列表框*/
	/***************************************************************************/
	 m_list1.AddString("50");
	 m_list1.AddString("100");
	 m_list1.AddString("150");

	 m_list2.AddString("随机");

	 m_list3.AddString("单倍");
	 m_list3.AddString("双倍");

	 m_list4.AddString("慢速");
	 m_list4.AddString("中速");
	 m_list4.AddString("快速");
	 /***************************************************************************/
}


BEGIN_MESSAGE_MAP(CDialog_USER_HARD, CDialog)
	//{{AFX_MSG_MAP(CDialog_USER_HARD)
	ON_BN_CLICKED(IDC_shezhihao, Onshezhihao)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_USER_HARD message handlers

void CDialog_USER_HARD::Onshezhihao() 
{
	// TODO: Add your control notification handler code here

	/*设置难度*/
	/***************************************************************************/
	if(m_list1.GetCurSel() != -1)
	{
		danci = m_list1.GetCurSel();
		danci++;
	}
	if(m_list3.GetCurSel() != -1)
	{
		pinlv = m_list3.GetCurSel();
		pinlv++;
	}
	if(m_list4.GetCurSel() != -1)
	{
		sulv = m_list4.GetCurSel();
		sulv++;
	}
	/***************************************************************************/
}
