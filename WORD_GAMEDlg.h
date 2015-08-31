/*
*���ߣ�������
*/
// WORD_GAMEDlg.h : header file
//

#if !defined(AFX_WORD_GAMEDLG_H__427BF4B0_A8F7_467E_8E9E_AD01C337AD54__INCLUDED_)
#define AFX_WORD_GAMEDLG_H__427BF4B0_A8F7_467E_8E9E_AD01C337AD54__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWORD_GAMEDlg dialog

class CWORD_GAMEDlg : public CDialog
{
// Construction
public:
	BOOL PlaySound(LPCSTR pszSound, HMODULE hmod,DWORD fdwSound); 
	CWORD_GAMEDlg(CWnd* pParent = NULL);	// standard constructor
	
	/***************************************************************************/
	/*************************************************************************/
	CMenu m_Menu;		/*�˵���*/
	/*************************************************************************/
	bool game_start;	/*��ǰ��Ϸ�Ƿ�ʼ*/
	bool user_log;		/*��ǰ�Ƿ����û���¼*/
	char username[40];	/*��ǰ�û������������10������*/
	char nickname[40];  /*��ǰ�û��ǳƣ��������10������*/
	char code[12];		/*��ǰ�û�����*/
	/*************************************************************************/
	char now_word[1000]; /*��ǰ����ĵ�������*/
	int now_top;		 /*��ǰ���鵽�Ǹ�λ��*/
	/*************************************************************************/
	int music;			/*���ֵ�ѡ��0Ϊ����*/	
	char music_char[6][40];
	int image;
	char imagename[4][20];
	/*************************************************************************/
	int cap_count;		/*������ǣ��Ƿ��Сдת��*/
	/*************************************************************************/
	
	/*�����С���ż�����*/
	/***************************************************************************/
	bool ball[16];
	int ballx[16],bally[16];
	/***************************************************************************/
	char word[16][40];

	int image_num[16];/*ͼ����*/

	unsigned int time_hujiulin;/*�����*/
	
	int balls[16];
	CRect lpRect;/*�ػ�����*/
	
	/*�����Ѷ�ϵ��*/
	/***************************************************************************/
	int pinlv;
	int sulv;
	int sulvnum[4];
	char chuci[3][10];
	char yidong[4][10];
	int danci;
	/***************************************************************************/

	char dancichar[4][10];

	char wordtemp[150][40];/*��ʱ�����*/
	
	/*�ʿ�*/
	/***************************************************************************/
	char word50[50][40];
	char word100[100][40];
	char word150[150][50];
	/***************************************************************************/

	int wordcount;/*��������*/

	int score;/*��ǰ�÷�*/

	char topname[6][40];/*�������û���*/
	int  topscore[6];/*������÷�*/
	/***************************************************************************/

	/*��Ļ�ֱ��ʼ��ػ�ؼ�*/
	/***************************************************************************/
	int m_nDlgWidth,m_nDlgHeight;
	int m_nWidth,m_nHeight;
	float m_Multiple_width,m_Mutiple_heith;
	bool change_flag;
	void ReSize(int nID);
	/***************************************************************************/

// Dialog Data
	//{{AFX_DATA(CWORD_GAMEDlg)
	enum { IDD = IDD_WORD_GAME_DIALOG };
	CStatic	m_process;
	CStatic	m_count;
	CStatic	m_move;
	CStatic	m_out;
	CStatic	m_image;
	CButton	m_radio2;
	CStatic	m_music;
	CButton	m_radio1;
	CButton	m_capslock;
	CButton	m_backspace;
	CStatic	m_now;
	CStatic	m_score;
	CStatic	m_nameb;
	CStatic	m_namea;
	CButton	m_z;
	CButton	m_x;
	CButton	m_y;
	CButton	m_w;
	CButton	m_v;
	CButton	m_u;
	CButton	m_t;
	CButton	m_s;
	CButton	m_r;
	CButton	m_q;
	CButton	m_p;
	CButton	m_o;
	CButton	m_n;
	CButton	m_m;
	CButton	m_k;
	CButton	m_l;
	CButton	m_j;
	CButton	m_i;
	CButton	m_h;
	CButton	m_g;
	CButton	m_f;
	CButton	m_enter;
	CButton	m_e;
	CButton	m_d;
	CButton	m_c;
	CButton	m_b;
	CButton	m_a;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWORD_GAMEDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWORD_GAMEDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnAbout();
	afx_msg void OnStart();
	afx_msg void OnMusic();
	afx_msg void OnButtoncapslock();
	afx_msg void OnButtona();
	afx_msg void OnButtonb();
	afx_msg void OnButtonc();
	afx_msg void OnButtond();
	afx_msg void OnButtone();
	afx_msg void OnButtonf();
	afx_msg void OnButtong();
	afx_msg void OnButtonh();
	afx_msg void OnButtoni();
	afx_msg void OnButtonj();
	afx_msg void OnButtonk();
	afx_msg void OnButtonl();
	afx_msg void OnButtonm();
	afx_msg void OnButtonn();
	afx_msg void OnButtono();
	afx_msg void OnButtonp();
	afx_msg void OnButtonq();
	afx_msg void OnButtonr();
	afx_msg void OnButtons();
	afx_msg void OnButtont();
	afx_msg void OnButtonu();
	afx_msg void OnButtonv();
	afx_msg void OnButtonw();
	afx_msg void OnButtonx();
	afx_msg void OnButtony();
	afx_msg void OnButtonz();
	afx_msg void OnBUTTONEnter();
	afx_msg void OnButtonbackspace();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnImage();
	afx_msg void OnLog();
	afx_msg void OnRegister();
	afx_msg void OnRank();
	afx_msg void OnHard();
	afx_msg void OnRule();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WORD_GAMEDLG_H__427BF4B0_A8F7_467E_8E9E_AD01C337AD54__INCLUDED_)
