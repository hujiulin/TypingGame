// Dialog_Music.cpp : implementation file
//
/*
*���ߣ�������
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
	
	/*��ʼ����δѡ���κ�����*/
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

	/*��ʼ�������б�*/
	/***************************************************************************/
	 m_listmusic.AddString("����");
	 //m_listmusic.AddString("���ݵ��ɾ�.wav");
	 //m_listmusic.AddString("�ٹ�ҹ�г�.wav");
	 //m_listmusic.AddString("������ӭ��.wav");
	 //m_listmusic.AddString("��������һ��.wav");
	 //m_listmusic.AddString("���˻��ǿ���.wav");
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


/*��Ӧѡ�����ְ���*/
/***************************************************************************/
void CDialog_Music::OnMake() 
{
	// TODO: Add your control notification handler code here
	select = m_listmusic.GetCurSel();
}
/***************************************************************************/