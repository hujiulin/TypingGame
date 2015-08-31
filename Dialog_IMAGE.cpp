// Dialog_IMAGE.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "Dialog_IMAGE.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog_IMAGE dialog


CDialog_IMAGE::CDialog_IMAGE(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog_IMAGE::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog_IMAGE)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialog_IMAGE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog_IMAGE)
	DDX_Control(pDX, IDC_RADIO_SNOW, m_snow);
	DDX_Control(pDX, IDC_RADIO_BALL, m_ball);
	//}}AFX_DATA_MAP

}


BEGIN_MESSAGE_MAP(CDialog_IMAGE, CDialog)
	//{{AFX_MSG_MAP(CDialog_IMAGE)
	ON_BN_CLICKED(IDC_RADIO_BALL, OnRadioBall)
	ON_BN_CLICKED(IDC_RADIO_SNOW, OnRadioSnow)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog_IMAGE message handlers

/*选择气球*/
/***************************************************************************/
void CDialog_IMAGE::OnRadioBall() 
{
	// TODO: Add your control notification handler code here
	m_ball.SetCheck(1);	
	m_snow.SetCheck(0);

	select = 1;
}
/***************************************************************************/

/*选择小鱼*/
/***************************************************************************/
void CDialog_IMAGE::OnRadioSnow() 
{
	// TODO: Add your control notification handler code here
	m_ball.SetCheck(0);	
	m_snow.SetCheck(1);
	
	select = 2;
}
/***************************************************************************/