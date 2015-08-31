// Dialog_Music.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_Music.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_Music dialog


CDialog_Music::CDialog_Music(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_Music::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_Music)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	
	/*初始化，未选择任何音乐*/
	/***************************************************************************/
	select = -1;
	/***************************************************************************/
}


void CDialog_Music::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_Music)
	DDX_Control(pDX, IDC_LIST1, m_listmusic);
	//}}AFX_DATA_MAP

	/*初始化音乐列表*/
	/***************************************************************************/
	 m_listmusic.AddString("静音");
	 //m_listmusic.AddString("安妮的仙境.wav");
	 //m_listmusic.AddString("百鬼夜行抄.wav");
	 //m_listmusic.AddString("北京欢迎你.wav");
	 //m_listmusic.AddString("和兰花在一起.wav");
	 //m_listmusic.AddString("忧伤还是快乐.wav");
	 m_listmusic.SetCurSel(0);
	 /***************************************************************************/
}


BEGIN_MESSAGE_MAP(CDialog_Music, CDialog)
	//{{AFX_MSG_MAP(CDialog_Music)
	ON_BN_CLICKED(IDC_MAKE, OnMake)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_Music message handlers


/*响应选择音乐按键*/
/***************************************************************************/
void CDialog_Music::OnMake() 
{
	// TODO: Add your control notification handler code here
	select = m_listmusic.GetCurSel();
}
/***************************************************************************/