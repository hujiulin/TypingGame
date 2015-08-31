// WORD_GAMEDlg.cpp : implementation file
//
/*
*作者：胡久林
*/
#include "stdafx.h"
#include "WORD_GAME.h"
#include "WORD_GAMEDlg.h"
#include "Dialog_USER_RULE.h"
#include "Dialog_USER_RANK.h"
#include "Dialog_USER_HARD.h"
#include "DIALOG_USER_REGISTER.h"
#include "Dialog_USER_LOG.h"
#include "Dialog_IMAGE.h"
#include "Dialog_Music.h"
#include <fstream>
using namespace std;
/*播放音乐使用的头文件*/
/*************************************************************************/
#include <mmsystem.h> 
#pragma comment( lib, "Winmm.lib" )  
/*************************************************************************/
//by hujiulin
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWORD_GAMEDlg dialog

CWORD_GAMEDlg::CWORD_GAMEDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWORD_GAMEDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWORD_GAMEDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CWORD_GAMEDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWORD_GAMEDlg)
	DDX_Control(pDX, IDC_PROCESS, m_process);
	DDX_Control(pDX, IDC_COUNT, m_count);
	DDX_Control(pDX, IDC_MOVE, m_move);
	DDX_Control(pDX, IDC_OUT, m_out);
	DDX_Control(pDX, IDC_STATIC_IMAGE, m_image);
	DDX_Control(pDX, IDC_RADIO2, m_radio2);
	DDX_Control(pDX, IDC_STATIC_MUSIC, m_music);
	DDX_Control(pDX, IDC_RADIO1, m_radio1);
	DDX_Control(pDX, IDC_BUTTONCAPSLOCK, m_capslock);
	DDX_Control(pDX, IDC_BUTTONBACKSPACE, m_backspace);
	DDX_Control(pDX, IDC_NOW, m_now);
	DDX_Control(pDX, IDC_SCORE, m_score);
	DDX_Control(pDX, IDC_NAMEB, m_nameb);
	DDX_Control(pDX, IDC_NAMEA, m_namea);
	DDX_Control(pDX, IDC_BUTTONZ, m_z);
	DDX_Control(pDX, IDC_BUTTONX, m_x);
	DDX_Control(pDX, IDC_BUTTONY, m_y);
	DDX_Control(pDX, IDC_BUTTONW, m_w);
	DDX_Control(pDX, IDC_BUTTONV, m_v);
	DDX_Control(pDX, IDC_BUTTONU, m_u);
	DDX_Control(pDX, IDC_BUTTONT, m_t);
	DDX_Control(pDX, IDC_BUTTONS, m_s);
	DDX_Control(pDX, IDC_BUTTONR, m_r);
	DDX_Control(pDX, IDC_BUTTONQ, m_q);
	DDX_Control(pDX, IDC_BUTTONP, m_p);
	DDX_Control(pDX, IDC_BUTTONO, m_o);
	DDX_Control(pDX, IDC_BUTTONN, m_n);
	DDX_Control(pDX, IDC_BUTTONM, m_m);
	DDX_Control(pDX, IDC_BUTTONK, m_k);
	DDX_Control(pDX, IDC_BUTTONL, m_l);
	DDX_Control(pDX, IDC_BUTTONJ, m_j);
	DDX_Control(pDX, IDC_BUTTONI, m_i);
	DDX_Control(pDX, IDC_BUTTONH, m_h);
	DDX_Control(pDX, IDC_BUTTONG, m_g);
	DDX_Control(pDX, IDC_BUTTONF, m_f);
	DDX_Control(pDX, IDC_BUTTONEnter, m_enter);
	DDX_Control(pDX, IDC_BUTTONE, m_e);
	DDX_Control(pDX, IDC_BUTTOND, m_d);
	DDX_Control(pDX, IDC_BUTTONC, m_c);
	DDX_Control(pDX, IDC_BUTTONB, m_b);
	DDX_Control(pDX, IDC_BUTTONA, m_a);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CWORD_GAMEDlg, CDialog)
	//{{AFX_MSG_MAP(CWORD_GAMEDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
	ON_COMMAND(ID_ABOUT, OnAbout)
	ON_BN_CLICKED(ID_START, OnStart)
	ON_COMMAND(ID_MUSIC, OnMusic)
	ON_BN_CLICKED(IDC_BUTTONCAPSLOCK, OnButtoncapslock)
	ON_BN_CLICKED(IDC_BUTTONA, OnButtona)
	ON_BN_CLICKED(IDC_BUTTONB, OnButtonb)
	ON_BN_CLICKED(IDC_BUTTONC, OnButtonc)
	ON_BN_CLICKED(IDC_BUTTOND, OnButtond)
	ON_BN_CLICKED(IDC_BUTTONE, OnButtone)
	ON_BN_CLICKED(IDC_BUTTONF, OnButtonf)
	ON_BN_CLICKED(IDC_BUTTONG, OnButtong)
	ON_BN_CLICKED(IDC_BUTTONH, OnButtonh)
	ON_BN_CLICKED(IDC_BUTTONI, OnButtoni)
	ON_BN_CLICKED(IDC_BUTTONJ, OnButtonj)
	ON_BN_CLICKED(IDC_BUTTONK, OnButtonk)
	ON_BN_CLICKED(IDC_BUTTONL, OnButtonl)
	ON_BN_CLICKED(IDC_BUTTONM, OnButtonm)
	ON_BN_CLICKED(IDC_BUTTONN, OnButtonn)
	ON_BN_CLICKED(IDC_BUTTONO, OnButtono)
	ON_BN_CLICKED(IDC_BUTTONP, OnButtonp)
	ON_BN_CLICKED(IDC_BUTTONQ, OnButtonq)
	ON_BN_CLICKED(IDC_BUTTONR, OnButtonr)
	ON_BN_CLICKED(IDC_BUTTONS, OnButtons)
	ON_BN_CLICKED(IDC_BUTTONT, OnButtont)
	ON_BN_CLICKED(IDC_BUTTONU, OnButtonu)
	ON_BN_CLICKED(IDC_BUTTONV, OnButtonv)
	ON_BN_CLICKED(IDC_BUTTONW, OnButtonw)
	ON_BN_CLICKED(IDC_BUTTONX, OnButtonx)
	ON_BN_CLICKED(IDC_BUTTONY, OnButtony)
	ON_BN_CLICKED(IDC_BUTTONZ, OnButtonz)
	ON_BN_CLICKED(IDC_BUTTONEnter, OnBUTTONEnter)
	ON_BN_CLICKED(IDC_BUTTONBACKSPACE, OnButtonbackspace)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_COMMAND(ID_IMAGE, OnImage)
	ON_COMMAND(ID_LOG, OnLog)
	ON_COMMAND(ID_REGISTER, OnRegister)
	ON_COMMAND(ID_RANK, OnRank)
	ON_COMMAND(ID_HARD, OnHard)
	ON_COMMAND(ID_RULE, OnRule)
	ON_WM_TIMER()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWORD_GAMEDlg message handlers

/*初始化主对话框*/
/***************************************************************************/
BOOL CWORD_GAMEDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	/*获得屏幕分辨率*/
    /***************************************************************************/
	CRect rect; 
	::GetWindowRect(m_hWnd,rect); 
	ScreenToClient(rect); 
	m_nDlgWidth = rect.right - rect.left; 
	m_nDlgHeight = rect.bottom - rect.top;
	//计算分辨率
	m_nWidth = GetSystemMetrics(SM_CXSCREEN); 
	m_nHeight = GetSystemMetrics(SM_CYSCREEN);
	//计算放大倍数
	m_Multiple_width = float(m_nWidth)/float(m_nDlgWidth); 
	m_Mutiple_heith = float(m_nHeight)/float(m_nDlgHeight); 
	change_flag=false;//这个是成员变量bool形，用来判断onsize执行时
	/***************************************************************************/

	/*读入词库*/
	int i;
	freopen("Doc\\50word.txt", "r", stdin);
	for(i = 0;i < 50;i++)
		scanf("%s",&this->word50[i]);
	fclose(stdin);

	freopen("Doc\\100word.txt", "r", stdin);
	for(i = 0;i < 100;i++)
		scanf("%s",&this->word100[i]);
	fclose(stdin);
	
	freopen("Doc\\150word.txt", "r", stdin);
	for(i = 0;i < 150;i++)
		scanf("%s",&this->word150[i]);
	fclose(stdin);
	
	/*初始化游戏主界面*/
	/*************************************************************************/
	user_log = false;/*初始化时，未有用户登录*/
	game_start = false;/*初始化，游戏未开始*/
	
	m_process.SetWindowText("停止");

	strcpy(this->chuci[1],"单倍");
	strcpy(this->chuci[2],"双倍");
	pinlv = 1;
	m_out.SetWindowText(chuci[pinlv]);
	
	strcpy(this->yidong[1],"慢速");
	strcpy(this->yidong[2],"中速");
	strcpy(this->yidong[3],"快速");
	sulv = 1;
	sulvnum[1] = 4;
	sulvnum[2] = 2;
	sulvnum[3] = 1;
	m_move.SetWindowText(yidong[sulv]);
	danci = 1;
	strcpy(this->dancichar[1],"50");
	strcpy(this->dancichar[2],"100");
	strcpy(this->dancichar[3],"150");
	m_count.SetWindowText(dancichar[danci]);

	/***************************************************************************/
	cap_count = 0;/*初始化时，鼠标点击按钮为小写*/
	
	now_top = 0;
	now_word[0] = '\0';/*当前未有用户登录*/
	
	for(i = 0;i < 16;i++)
	{
		ball[i] = false;
	}
	
	CPoint p1(20,30);
	CPoint p2(1030,360);
	lpRect.TopLeft() = p1;
	lpRect.BottomRight() = p2;
	
	image_num[0] = IDB_BITMAP1; 
	image_num[1] = IDB_BITMAP2;
	image_num[2] = IDB_BITMAP3;
	image_num[3] = IDB_BITMAP4;
	image_num[4] = IDB_BITMAP5;
	image_num[5] = IDB_BITMAP6;
	image_num[6] = IDB_BITMAP7;
	image_num[7] = IDB_BITMAP8;
	
	image_num[8]  = IDB_BITMAP11; 
	image_num[9]  = IDB_BITMAP12;
	image_num[10] = IDB_BITMAP13;
	image_num[11] = IDB_BITMAP14;
	image_num[12] = IDB_BITMAP15;
	image_num[13] = IDB_BITMAP16;
	image_num[14] = IDB_BITMAP17;
	image_num[15] = IDB_BITMAP18;

	image = 1;
	strcpy(imagename[1],"气球");
	strcpy(imagename[2],"小鱼");
	m_image.SetWindowText(imagename[image]);

	strcpy(music_char[0],"静音");
	strcpy(music_char[1],"安妮的仙境.wav");
	strcpy(music_char[2],"百鬼夜行抄.wav");
	strcpy(music_char[3],"北京欢迎你.wav");
	strcpy(music_char[4],"和兰花在一起.wav");
	strcpy(music_char[5],"忧伤还是快乐.wav");
	music = 0;
	m_music.SetWindowText(music_char[music]);
	m_radio1.SetCheck(1);/*默认为静音*/
	/*************************************************************************/
	// Add "About..." menu item to system menu.
	
	m_Menu.LoadMenu(IDR_MENU1);
    SetMenu(&m_Menu);/*载入自定义菜单项*/
	/*************************************************************************/
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	/*最大化游戏窗口*/
	/***************************************************************************/
	change_flag = true;
	ShowWindow(SW_MAXIMIZE);
	/***************************************************************************/
	return TRUE;  // return TRUE  unless you set the focus to a control
}

/*重新计算控件大小*/
/***************************************************************************/
void CWORD_GAMEDlg::ReSize(int nID)
{
	
	CRect Rect; 
	
	GetDlgItem(nID)->GetWindowRect((LPRECT)Rect);
	ScreenToClient(Rect); 
	//计算控件左上角点 
	CPoint OldTLPoint,TLPoint; 
	OldTLPoint = Rect.TopLeft(); 
	TLPoint.x = long(OldTLPoint.x *m_Multiple_width); 
	TLPoint.y = long(OldTLPoint.y * m_Mutiple_heith );
	//计算控件右下角点
	CPoint OldBRPoint,BRPoint; 
	OldBRPoint = Rect.BottomRight(); 
	BRPoint.x = long(OldBRPoint.x *m_Multiple_width); 
	BRPoint.y = long(OldBRPoint.y * m_Mutiple_heith ); 
	//移动控件到新矩形
	Rect.SetRect(TLPoint,BRPoint); 
	GetDlgItem(nID)->MoveWindow(Rect,TRUE); 
}
/***************************************************************************/

void CWORD_GAMEDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CWORD_GAMEDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CWORD_GAMEDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/*响应键盘按下*/
/***************************************************************************/
void CWORD_GAMEDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your message handler code here and/or call default
	switch(nChar)
	{
		case 8:
		case 40:
			m_backspace.SetFocus();
			m_backspace.SetState(true);
			Sleep(100);					
			break;
		case 13:
		case 45:
			m_enter.SetFocus();
			m_enter.SetState(true);
			Sleep(100);
			break;
		case 'a':
		case 'A':
			m_a.SetFocus();
			m_a.SetState(true);
			Sleep(100);
			break;
		case 'b':
		case 'B':
			m_b.SetFocus();
			m_b.SetState(true);
			Sleep(100);
			break;
		case 'c':
		case 'C':
			m_c.SetFocus();
			m_c.SetState(true);
			Sleep(100);
			break;
		case 'd':
		case 'D':
			m_d.SetFocus();
			m_d.SetState(true);
			Sleep(100);
			break;
		case 'e':
		case 'E':
			m_e.SetFocus();
			m_e.SetState(true);
			Sleep(100);
			break;
		case 'f':
		case 'F':
			m_f.SetFocus();
			m_f.SetState(true);
			Sleep(100);
			break;
		case 'g':
		case 'G':
			m_g.SetFocus();
			m_g.SetState(true);
			Sleep(100);
			break;
		case 'h':
		case 'H':
			m_h.SetFocus();
			m_h.SetState(true);
			Sleep(100);
			break;
		case 'i':
		case 'I':
			m_i.SetFocus();
			m_i.SetState(true);
			Sleep(100);
			break;
		case 'j':
		case 'J':
			m_j.SetFocus();
			m_j.SetState(true);
			Sleep(100);
			break;
		case 'k':
		case 'K':
			m_k.SetFocus();
			m_k.SetState(true);
			Sleep(100);
			break;
		case 'l':
		case 'L':
			m_l.SetFocus();
			m_l.SetState(true);
			Sleep(100);
			break;
		case 'm':
		case 'M':
			m_m.SetFocus();
			m_m.SetState(true);
			Sleep(100);
			break;
		case 'n':
		case 'N':
			m_n.SetFocus();
			m_n.SetState(true);
			Sleep(100);
			break;
		case 'o':
		case 'O':
			m_o.SetFocus();
			m_o.SetState(true);
			Sleep(100);
			break;
		case 'p':
		case 'P':
			m_p.SetFocus();
			m_p.SetState(true);
			Sleep(100);
			break;
		case 'q':
		case 'Q':
			m_q.SetFocus();
			m_q.SetState(true);
			Sleep(100);
			break;
		case 'r':
		case 'R':
			m_r.SetFocus();
			m_r.SetState(true);
			Sleep(100);
			break;
		case 's':
		case 'S':
			m_s.SetFocus();
			m_s.SetState(true);
			Sleep(100);
			break;
		case 't':
		case 'T':
			m_t.SetFocus();
			m_t.SetState(true);
			Sleep(100);
			break;
		case 'u':
		case 'U':
			m_u.SetFocus();
			m_u.SetState(true);
			Sleep(100);
			break;
		case 'v':
		case 'V':
			m_v.SetFocus();
			m_v.SetState(true);
			Sleep(100);
			break;
		case 'w':
		case 'W':
			m_w.SetFocus();
			m_w.SetState(true);
			Sleep(100);
			break;
		case 'x':
		case 'X':
			m_x.SetFocus();
			m_x.SetState(true);
			Sleep(100);
			break;
		case 'y':
		case 'Y':
			m_y.SetFocus();
			m_y.SetState(true);
			Sleep(100);
			break;
		case 'z':
		case 'Z':
			m_z.SetFocus();
			m_z.SetState(true);
			Sleep(100);
		    break; 
	}
	/*shift按下不响应任何操作*/
	if(nChar == 16||nChar == 48)
	{
		
	}
	else
	if(nChar == 8 || nChar == 40)/*响应backspace操作*/
	{
		now_top--;
		if(now_top < 0)
			now_top = 0;
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	if(nChar == 13 || nChar == 45)/*响应回车操作*/
	{
		int i;
		for(i = 0;i < 16;i++)
		{
			if(strcmp(now_word,word[i])==0)
			{
				score++;
				char ch[10];
				_itoa(score,ch,10);
				m_score.SetWindowText(ch);
				break;
			}
		}
		if(i < 16)
		{
			CDC * pDC = GetDC();
			CDC dcMemory;
			dcMemory.CreateCompatibleDC(pDC);
			CBitmap bmp1;
			CRect rect;
			if(bmp1.LoadBitmap(image_num[this->balls[i] - 1]))
			{
				BITMAP bmpInfo1;
				bmp1.GetBitmap(&bmpInfo1);
				CDC * pDC = GetDC();
		
				CDC dcMemory_light;
				dcMemory_light.CreateCompatibleDC(pDC);
				CBitmap bmp_light;
				
				int light;
				switch(image_num[this->balls[i]-1])
				{
					case IDB_BITMAP1:
						light = IDB_BITMAP19;
						break;
					case IDB_BITMAP2:
						light = IDB_BITMAP20;
						break;
					case IDB_BITMAP3:
						light = IDB_BITMAP21;
						break;
					case IDB_BITMAP4:
						light = IDB_BITMAP22;
						break;
					case IDB_BITMAP5:
						light = IDB_BITMAP23;
						break;
					case IDB_BITMAP6:
						light = IDB_BITMAP24;
						break;
					case IDB_BITMAP7:
						light = IDB_BITMAP25;
						break;
					case IDB_BITMAP8:
						light = IDB_BITMAP26;
						break;
					case IDB_BITMAP11:
						light = IDB_BITMAP27;
						break;
					case IDB_BITMAP12:
						light = IDB_BITMAP28;
						break;
					case IDB_BITMAP13:
						light = IDB_BITMAP29;
						break;
					case IDB_BITMAP14:
						light = IDB_BITMAP30;
						break;
					case IDB_BITMAP15:
						light = IDB_BITMAP31;
						break;
					case IDB_BITMAP16:
						light = IDB_BITMAP32;
						break;
					case IDB_BITMAP17:
						light = IDB_BITMAP33;
						break;
					case IDB_BITMAP18:
						light = IDB_BITMAP34;
						break;
				}

				if(bmp_light.LoadBitmap(light))
				{
				BITMAP bmpInfo_light;
				bmp_light.GetBitmap(&bmpInfo_light);
				CBitmap * pOldBitmap_light = dcMemory_light.SelectObject(&bmp_light);
				pDC->BitBlt(this->ballx[i],
        					this->bally[i] - bmpInfo_light.bmHeight + 10,
							this->ballx[i]+bmpInfo_light.bmWidth,
							this->bally[i] + 10,
							&dcMemory_light,0,0,SRCCOPY);
				pDC->SetTextColor(RGB(255,0,0));
				pDC->TextOut(this->ballx[i] ,this->bally[i] - bmpInfo_light.bmHeight/2,word[i]);
				}
				Sleep(100);
				KillTimer(i + 1);
				strcpy(word[i],"\0");
				CPoint p1(this->ballx[i],this->bally[i] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[i]+bmpInfo1.bmWidth,this->bally[i] + 10);
				rect = new CRect(p1,p2);	
				ball[i] = false;
				this->bally[i] = 360;
			}
			InvalidateRect(rect,false);
		}
		now_word[0] = '\0';
		now_top = 0;
		m_now.SetWindowText(now_word);
	}
	else/*响应空格操作*/
	{
		if(nChar == 64)
			nChar = 32;
		now_word[now_top++] = nChar;
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	CDialog::OnKeyDown(nChar, nRepCnt, nFlags);
}
/***************************************************************************/

/*键盘弹起的操作*/
/***************************************************************************/
void CWORD_GAMEDlg::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your message handler code here and/or call default
	switch(nChar)
	{
		case 8:
		case 40:
			m_backspace.SetState(false);
			break;
		case 13:
		case 45:
			m_enter.SetState(false);
			break;
		case 'a':
		case 'A':
			m_a.SetState(false);
			break;
		case 'b':
		case 'B':
			m_b.SetState(false);
			break;
		case 'c':
		case 'C':
			m_c.SetState(false);
			break;
		case 'd':
		case 'D':
			m_d.SetState(false);
			break;
		case 'e':
		case 'E':
			m_e.SetState(false);
			break;
		case 'f':
		case 'F':
			m_f.SetState(false);
			break;
		case 'g':
		case 'G':
			m_g.SetState(false);
			break;
		case 'h':
		case 'H':
			m_h.SetState(false);
			break;
		case 'i':
		case 'I':
			m_i.SetState(false);
			break;
		case 'j':
		case 'J':
			m_j.SetState(false);
			break;
		case 'k':
		case 'K':
			m_k.SetState(false);
			break;
		case 'l':
		case 'L':
			m_l.SetState(false);
			break;
		case 'm':
		case 'M':
			m_m.SetState(false);
			break;
		case 'n':
		case 'N':
			m_n.SetState(false);
			break;
		case 'o':
		case 'O':
			m_o.SetState(false);
			break;
		case 'p':
		case 'P':
			m_p.SetState(false);
			break;
		case 'q':
		case 'Q':
			m_q.SetState(false);
			break;
		case 'r':
		case 'R':
			m_r.SetState(false);
			break;
		case 's':
		case 'S':
			m_s.SetState(false);
			break;
		case 't':
		case 'T':
			m_t.SetState(false);
			break;
		case 'u':
		case 'U':
			m_u.SetState(false);
			break;
		case 'v':
		case 'V':
			m_v.SetState(false);
			break;
		case 'w':
		case 'W':
			m_w.SetState(false);
			break;
		case 'x':
		case 'X':
			m_x.SetState(false);
			break;
		case 'y':
		case 'Y':
			m_y.SetState(false);
			break;
		case 'z':
		case 'Z':
			m_z.SetState(false);
			break;
	}
	CDialog::OnKeyUp(nChar, nRepCnt, nFlags);
}
/***************************************************************************/

/*发送响应消息*/
/***************************************************************************/
BOOL CWORD_GAMEDlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(game_start == false)
	{
		return CDialog::PreTranslateMessage(pMsg);
	}
	if(pMsg->message==WM_KEYDOWN && pMsg->wParam!=VK_CAPITAL)
	{
		if (GetKeyState(VK_CAPITAL))
		{
			OnKeyDown(pMsg->wParam,LOWORD(pMsg->lParam),HIWORD(pMsg->lParam)); 	
		}
		else
		{
			OnKeyDown(pMsg->wParam  + 'a' - 'A' ,LOWORD(pMsg->lParam),HIWORD(pMsg->lParam)); 	
		}
   
	}
	if(pMsg->message==WM_KEYUP && pMsg->wParam!=VK_CAPITAL)
	{
		if (GetKeyState(VK_CAPITAL))
		{
			OnKeyUp(pMsg->wParam ,LOWORD(pMsg->lParam),HIWORD(pMsg->lParam)); 	
		}
		else
		{

			OnKeyUp(pMsg->wParam  + 'a' - 'A',LOWORD(pMsg->lParam),HIWORD(pMsg->lParam) + 'a' - 'A'); 	
		}
	}
	return CDialog::PreTranslateMessage(pMsg);
}
/***************************************************************************/

/*弹出关于程序*/
/***************************************************************************/
void CWORD_GAMEDlg::OnAbout() 
{
	// TODO: Add your command handler code here
	CAboutDlg help;
	if(help.DoModal() == IDOK)
	{
		
	}
}
/***************************************************************************/


/*响应开始游戏操作*/
/***************************************************************************/
void CWORD_GAMEDlg::OnStart() 
{
	// TODO: Add your control notification handler code here
	if(game_start == true && user_log == true)
	{
		return ;
	}
	if(user_log == false)
	{
		MessageBox("请先输入用户名和昵称!",NULL,MB_OK);
		return ;
	}
	else
	{
		Invalidate(true);
		game_start = true;
		score = 0;
		char ch[10];
		_itoa(score,ch,10);
		m_score.SetWindowText(ch);
		m_process.SetWindowText("开始");
		int i;
		for(i = 0;i < 8;i++)
		{
			this->ballx[i] = this->ballx[i + 8] = 100*(i+1);
			this->bally[i] = this->bally[i + 8] = 360;
		}
		for(i = 0;i < 16;i++)
		{
			ball[i] = false;
		}
		wordcount = 0;
		if(danci == 1)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word50[i]);
			}
		}
		if(danci == 2)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word100[i]);
			}
		}
		if(danci == 3)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word150[i]);
			}
		}
		SetTimer(0,1000,NULL);
	}
}
/***************************************************************************/

/*响应音乐按钮*/
/***************************************************************************/
void CWORD_GAMEDlg::OnMusic() 
{
	// TODO: Add your command handler code here
	CDialog_Music CDialog_music;
	
	if(CDialog_music.DoModal() == IDOK)
	{
		if(CDialog_music.select == -1)
		{
			MessageBox("未选择任何音乐!",NULL,MB_OK);
		}
		else
			music = CDialog_music.select;
	}
	switch(music)
	{
		case 1:
			PlaySound((LPCTSTR)IDR_WAVE1, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);  
			break;
		case 2:
			PlaySound((LPCTSTR)IDR_WAVE2, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);  
			break;
		case 3:
			PlaySound((LPCTSTR)IDR_WAVE3, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 4:
			PlaySound((LPCTSTR)IDR_WAVE4, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 5:
			PlaySound((LPCTSTR)IDR_WAVE5, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 0:
			PlaySound(NULL,NULL,SND_FILENAME);
			break;
	}
	m_music.SetWindowText(music_char[music]);
}
/***************************************************************************/

/*响应capslock按键*/
/***************************************************************************/
void CWORD_GAMEDlg::OnButtoncapslock() 
{
	// TODO: Add your control notification handler code here
	cap_count++;
	cap_count = cap_count%2;
}
/***************************************************************************/

/*响应A~Z的按键*/
/************************************************************************************/
void CWORD_GAMEDlg::OnButtona() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'a';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'A';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonb() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'b';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'B';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonc() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'c';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'C';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtond() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'd';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'D';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtone() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'e';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'E';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonf() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'f';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'F';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtong() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'g';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'G';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonh() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'h';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'H';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtoni() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'i';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'I';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonj() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'j';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'J';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonk() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'k';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'K';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonl() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'l';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'L';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}
}

void CWORD_GAMEDlg::OnButtonm() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'm';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'M';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonn() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'n';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'N';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtono() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'o';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'O';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonp() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'p';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'P';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonq() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'q';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'Q';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonr() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'r';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'R';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtons() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 's';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'S';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtont() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 't';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'T';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonu() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'u';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'U';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonv() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'v';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'V';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonw() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'w';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'W';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonx() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'x';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'X';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtony() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'y';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'Y';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}

void CWORD_GAMEDlg::OnButtonz() 
{
	if(game_start == false)
	{
		return ;
	}
	// TODO: Add your control notification handler code here
	if(cap_count == 0)
	{
		now_word[now_top++] = 'z';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);
	}
	else
	{
		now_word[now_top++] = 'Z';
		now_word[now_top] = '\0';
		m_now.SetWindowText(now_word);		
	}	
}
/************************************************************************************/

/*响应回车按键*/
/***************************************************************************/
void CWORD_GAMEDlg::OnBUTTONEnter() 
{
	// TODO: Add your control notification handler code here
     		int i;
		for(i = 0;i < 16;i++)
		{
			if(strcmp(now_word,word[i])==0)
			{
				score++;
				char ch[10];
				_itoa(score,ch,10);
				m_score.SetWindowText(ch);
				break;
			}
		}
		if(i < 16)
		{
			CDC * pDC = GetDC();
			CDC dcMemory;
			dcMemory.CreateCompatibleDC(pDC);
			CBitmap bmp1;
			if(bmp1.LoadBitmap(image_num[this->balls[i] - 1]))
			{
				BITMAP bmpInfo1;
				bmp1.GetBitmap(&bmpInfo1);
				CDC * pDC = GetDC();
		
				CDC dcMemory_light;
				dcMemory_light.CreateCompatibleDC(pDC);
				CBitmap bmp_light;
				
				int light;
				switch(image_num[this->balls[i]-1])
				{
					case IDB_BITMAP1:
						light = IDB_BITMAP19;
						break;
					case IDB_BITMAP2:
						light = IDB_BITMAP20;
						break;
					case IDB_BITMAP3:
						light = IDB_BITMAP21;
						break;
					case IDB_BITMAP4:
						light = IDB_BITMAP22;
						break;
					case IDB_BITMAP5:
						light = IDB_BITMAP23;
						break;
					case IDB_BITMAP6:
						light = IDB_BITMAP24;
						break;
					case IDB_BITMAP7:
						light = IDB_BITMAP25;
						break;
					case IDB_BITMAP8:
						light = IDB_BITMAP26;
						break;
					case IDB_BITMAP11:
						light = IDB_BITMAP27;
						break;
					case IDB_BITMAP12:
						light = IDB_BITMAP28;
						break;
					case IDB_BITMAP13:
						light = IDB_BITMAP29;
						break;
					case IDB_BITMAP14:
						light = IDB_BITMAP30;
						break;
					case IDB_BITMAP15:
						light = IDB_BITMAP31;
						break;
					case IDB_BITMAP16:
						light = IDB_BITMAP32;
						break;
					case IDB_BITMAP17:
						light = IDB_BITMAP33;
						break;
					case IDB_BITMAP18:
						light = IDB_BITMAP34;
						break;
				}

				if(bmp_light.LoadBitmap(light))
				{
				BITMAP bmpInfo_light;
				bmp_light.GetBitmap(&bmpInfo_light);
				CBitmap * pOldBitmap_light = dcMemory_light.SelectObject(&bmp_light);
				pDC->BitBlt(this->ballx[i],
        					this->bally[i] - bmpInfo_light.bmHeight + 10,
							this->ballx[i]+bmpInfo_light.bmWidth,
							this->bally[i] + 10,
							&dcMemory_light,0,0,SRCCOPY);
				}
				Sleep(100);
				KillTimer(i + 1);
				CPoint p1(this->ballx[i],this->bally[i] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[i]+bmpInfo1.bmWidth,this->bally[i] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[i] = false;
				this->bally[i] = 360;
			}
		}
		now_word[0] = '\0';
		now_top = 0;
		m_now.SetWindowText(now_word);
}
/***************************************************************************/

/*响应退格按键*/
/***************************************************************************/
void CWORD_GAMEDlg::OnButtonbackspace() 
{
	// TODO: Add your control notification handler code here
	now_top--;
	if(now_top < 0)
		now_top = 0;
	now_word[now_top] = '\0';
	m_now.SetWindowText(now_word);
}
/***************************************************************************/

/*响应单选按钮“关”*/
/***************************************************************************/
void CWORD_GAMEDlg::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	m_radio1.SetCheck(1);
	m_radio2.SetCheck(0);
	music = 0;
	PlaySound(NULL,NULL,SND_FILENAME);
	m_music.SetWindowText(music_char[music]);
}
/***************************************************************************/

/*响应单选按钮“开”*/
/***************************************************************************/
void CWORD_GAMEDlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	m_radio1.SetCheck(0);
	m_radio2.SetCheck(1);
	CDialog_Music CDialog_music;
	
	if(CDialog_music.DoModal() == IDOK)
	{
		if(CDialog_music.select == -1)
		{
			MessageBox("未选择任何音乐!",NULL,MB_OK);
		}
		else
			music = CDialog_music.select;
	}
	switch(music)
	{
		case 1:
			PlaySound((LPCTSTR)IDR_WAVE1, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);  
			break;
		case 2:
			PlaySound((LPCTSTR)IDR_WAVE2, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);  
			break;
		case 3:
			PlaySound((LPCTSTR)IDR_WAVE3, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 4:
			PlaySound((LPCTSTR)IDR_WAVE4, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 5:
			PlaySound((LPCTSTR)IDR_WAVE5, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC |  SND_FILENAME |SND_LOOP);
			break;
		case 0:
			PlaySound(NULL,NULL,SND_FILENAME);
			break;
	}
	m_music.SetWindowText(music_char[music]);
}
/***************************************************************************/

/*响应图片选择*/
/***************************************************************************/
void CWORD_GAMEDlg::OnImage() 
{
	// TODO: Add your command handler code here
	CDialog_IMAGE CDialog_image;
	CDialog_image.select = image;
	if(CDialog_image.DoModal() == IDOK)
	{
		image = CDialog_image.select;
	}
	
	m_image.SetWindowText(imagename[image]);
}
/***************************************************************************/

/*响应用户登录*/
/***************************************************************************/
void CWORD_GAMEDlg::OnLog() 
{
	// TODO: Add your command handler code here
	// TODO: Add your command handler code here
	CDialog_USER_LOG Dialog_user_log;
	username[0] = '\0';
	code[0] = '\0';
    
	user_log = false;
	game_start = false;
	if(Dialog_user_log.DoModal() == IDOK)
	{
		strcpy(username,Dialog_user_log.m_username);
		strcpy(code,Dialog_user_log.m_code);
		

		if(username[0] == '\0')
		{
			MessageBox("请正确输入用户名!",NULL,MB_OK);
			return ;
		}
		if(code[0] == '\0')
		{
			MessageBox("请正确输入密码!",NULL,MB_OK);
			return ;	
		}
		
		freopen("Doc/USER.txt", "r", stdin);
		char temp_username[40];
		char temp_nick[40];
		char temp_code[12];
		while(1)
		{
			if(scanf("%s",&temp_username) == EOF)
				break;
			scanf("%s",&temp_nick);
			scanf("%s",&temp_code);
			if(strcmp(temp_username,username) == 0 && strcmp(temp_code,code) == 0)
			{
				user_log = true;
				break;
			}
		}
		fclose(stdin);
		if(!user_log)
		{
			MessageBox("用户名或密码错误!",NULL,MB_OK);
			return ;
		}
		if(user_log)
		{
			m_namea.SetWindowText(temp_username);
			m_nameb.SetWindowText(temp_nick);
			m_score.SetWindowText("0");
		}
	}
}
/***************************************************************************/

/*响应用户注册*/
/***************************************************************************/
void CWORD_GAMEDlg::OnRegister() 
{
	// TODO: Add your command handler code here
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
		freopen("Doc//USER.txt", "r", stdin);
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
		fout = fopen("Doc/USER.txt","a");
		if(fout == NULL)
		{
             MessageBox("注册失败!",NULL,MB_OK);
	     	 return ;
		}

		fprintf(fout,"%s ",username);
		fprintf(fout,"%s ",nick);
		fprintf(fout,"%s\n",code);

		fclose(fout);
	
	}
}
/***************************************************************************/

/*弹出排名榜对话框*/
/***************************************************************************/
void CWORD_GAMEDlg::OnRank() 
{
	// TODO: Add your command handler code here
	CDialog_USER_RANK CDialog_rank;

	if(CDialog_rank.DoModal() == IDOK)
	{
		
	}
}
/***************************************************************************/

/*响应难度设置按钮*/
/***************************************************************************/
void CWORD_GAMEDlg::OnHard() 
{
	// TODO: Add your command handler code here
	CDialog_USER_HARD CDialog_hard;
	
	CDialog_hard.danci = danci;
	CDialog_hard.sulv = sulv;
	CDialog_hard.pinlv = pinlv;
	if(CDialog_hard.DoModal() == IDOK)
	{
		danci = CDialog_hard.danci;
		sulv = CDialog_hard.sulv;
		pinlv = CDialog_hard.pinlv;
		int i;
		if(danci == 1)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word50[i]);
			}
		}
		if(danci == 2)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word100[i]);
			}
		}
		if(danci == 3)
		{
			for(i = 0;i < danci*50;i++)
			{
				strcpy(wordtemp[i],word150[i]);
			}
		}

		m_out.SetWindowText(chuci[pinlv]);
		m_move.SetWindowText(yidong[sulv]);
		m_count.SetWindowText(dancichar[danci]);
	}
}
/***************************************************************************/

/*响应游戏规则对话框*/
/***************************************************************************/
void CWORD_GAMEDlg::OnRule() 
{
	// TODO: Add your command handler code here
	CDialog_USER_RULE CDialog_rule;
	if(CDialog_rule.DoModal() == IDOK)
	{
		
	}
}
/***************************************************************************/

/*定时器，绘制图片，单词，设置移动轨迹，随机出现图片，移动速度及频率*/
/***************************************************************************/
void CWORD_GAMEDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	if(nIDEvent == 0)
	{
		if(wordcount >= 50*danci)
		{		
			KillTimer(0);
			now_word[0] = '\0';
			now_top = 0;
			m_now.SetWindowText(now_word);
			m_process.SetWindowText("停止");
			game_start = false;
			int i;
			freopen("Doc\\HISTORY.txt", "r", stdin);
			for(i = 1;i <= 5;i++)
			{
				scanf("%s%d",&topname[i],&topscore[i]);
			}
			fclose(stdin);
			
			for(i = 5;i >= 1;i--)
			{
				if(score < topscore[i])
				{
					break;
				}
			}
			int j;
			for(j = 5;j > i + 1;j--)
			{
				topscore[j] = topscore[j - 1];
				strcpy(topname[j],topname[j-1]);
			}
			topscore[i + 1] = score;
			strcpy(topname[i + 1],username);
			FILE * fout;
			fout = fopen("Doc\\HISTORY.txt","w");
			fseek(fout,0,SEEK_SET);
			for(i = 1;i <= 5;i++)
			{
				fprintf(fout,"%s %d\n",topname[i],topscore[i]);
			}
			fclose(fout);
			return ;
		}
		srand((unsigned)time(NULL));
		this->time_hujiulin = rand()%8 + 1;
		
		if(ball[this->time_hujiulin - 1] == false)
		{
			ball[this->time_hujiulin - 1] = true;
			srand((unsigned)time(NULL));
			this->balls[time_hujiulin - 1] = rand()%8 + 1;
			strcpy(word[this->time_hujiulin - 1],wordtemp[wordcount]);
			wordcount++;
			if(image == 2)
			{
				this->balls[time_hujiulin  - 1] += 8;
			}
			SetTimer(this->time_hujiulin,sulvnum[sulv]*125,NULL);
		}
		else
		{
			if(ball[this->time_hujiulin + 8 - 1] == false && pinlv == 2)
			{
				ball[this->time_hujiulin + 8 - 1] = true;
				this->balls[time_hujiulin + 8 - 1] = rand()%8 + 1;
				strcpy(word[this->time_hujiulin + 8- 1],wordtemp[wordcount]);
				wordcount++;
				if(image == 2)
				{
					this->balls[time_hujiulin + 8 - 1] += 8;
				}
				SetTimer(this->time_hujiulin + 8,sulvnum[sulv]*250,NULL);
			}
		}
	}
    if(nIDEvent == 1)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;
		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
			BITMAP bmpInfo1;
			bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				strcpy(word[nIDEvent - 1],"\0");
				KillTimer(1);
								
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				
				ball[0] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}
			
			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			
			pDC->SetBkMode(TRANSPARENT);
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,false);
		}
	}
	if(nIDEvent == 2)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(2);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[1] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			pDC->SetBkMode(TRANSPARENT);
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 3)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(3);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[2] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			pDC->SetBkMode(TRANSPARENT);	
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 4)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(4);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[3] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;

			pDC->SetBkMode(TRANSPARENT);			
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 5)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(5);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[4] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
	
			pDC->SetBkMode(TRANSPARENT);		
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 6)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(6);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[5] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			pDC->SetBkMode(TRANSPARENT);
			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 7)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(7);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[6] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);
		    
			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 8)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(8);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[7] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			if((this->bally[nIDEvent - 1]/10)%2 == 0)
			{
				this->ballx[nIDEvent - 1] += 1;
			}
			else
				this->ballx[nIDEvent - 1] -= 1;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 9)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(9);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[8] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 10)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(10);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[9] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 11)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(11);
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[10] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 12)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(12);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[11] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}
			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 13)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(13);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[12] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 14)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(14);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[13] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 15)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;


		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(15);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[14] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	if(nIDEvent == 16)
	{
		CDC * pDC = GetDC();
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);
		CBitmap bmp1;

		if(bmp1.LoadBitmap(image_num[this->balls[nIDEvent - 1]-1]))
		{
		BITMAP bmpInfo1;
		bmp1.GetBitmap(&bmpInfo1);
			if(this->bally[nIDEvent - 1] - bmpInfo1.bmHeight<= 15)
			{
				KillTimer(16);
				strcpy(word[nIDEvent - 1],"\0");
				CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1] - bmpInfo1.bmHeight);
				CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1] + 10);
				CRect rect(p1,p2);
				InvalidateRect(rect,false);
				ball[15] = false;
				this->bally[nIDEvent - 1] = 360;
				return ;
			}

			CBitmap * pOldBitmap = dcMemory.SelectObject(&bmp1);
			pDC->BitBlt(this->ballx[nIDEvent - 1],
						this->bally[nIDEvent - 1] - bmpInfo1.bmHeight,
						this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,
						this->bally[nIDEvent - 1],
						&dcMemory,0,0,SRCCOPY);
			this->bally[nIDEvent - 1] -= 10;
			pDC->SetBkMode(TRANSPARENT);

			pDC->TextOut(this->ballx[nIDEvent - 1] ,this->bally[nIDEvent - 1] - bmpInfo1.bmHeight/2,word[nIDEvent - 1]);

			CPoint p1(this->ballx[nIDEvent - 1],this->bally[nIDEvent - 1]+10);
			CPoint p2(this->ballx[nIDEvent - 1]+bmpInfo1.bmWidth,this->bally[nIDEvent - 1]+20);
			CRect rect(p1,p2);
			InvalidateRect(rect,true);
		}
	}
	CDialog::OnTimer(nIDEvent);
}
/***************************************************************************/

/*重绘控件大小*/
/***************************************************************************/
void CWORD_GAMEDlg::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	if (change_flag == true)//如果确定oninitdlg已经调用完毕.
	{
	   ReSize(IDC_LIST1);
	   ReSize(IDC_NOW);
	   ReSize(IDC_BUTTONA);
	   ReSize(IDC_BUTTONB);
	   ReSize(IDC_BUTTONC);
	   ReSize(IDC_BUTTOND);
	   ReSize(IDC_BUTTONE);
	   ReSize(IDC_BUTTONF);
	   ReSize(IDC_BUTTONG);
	   ReSize(IDC_BUTTONH);
	   ReSize(IDC_BUTTONI);
	   ReSize(IDC_BUTTONJ);
	   ReSize(IDC_BUTTONK);
	   ReSize(IDC_BUTTONL);
	   ReSize(IDC_BUTTONM);
	   ReSize(IDC_BUTTONN);
	   ReSize(IDC_BUTTONO);
	   ReSize(IDC_BUTTONP);
	   ReSize(IDC_BUTTONQ);
	   ReSize(IDC_BUTTONR);
	   ReSize(IDC_BUTTONS);
	   ReSize(IDC_BUTTONT);
	   ReSize(IDC_BUTTONU);
	   ReSize(IDC_BUTTONV);
	   ReSize(IDC_BUTTONW);
	   ReSize(IDC_BUTTONX);
	   ReSize(IDC_BUTTONY);
	   ReSize(IDC_BUTTONZ);
	   ReSize(IDC_BUTTONBACKSPACE);
	   ReSize(IDC_BUTTONEnter);
	   ReSize(IDC_BUTTONCAPSLOCK);
	   ReSize(ID_START);
	   ReSize(IDOK);
	   ReSize(IDC_BNU);
	   ReSize(IDC_STATIC_GAME);
	   ReSize(IDC_PROCESS);
	   ReSize(IDC_STATIC_IMAGE_TYPE);
	   ReSize(IDC_STATIC_IMAGE);
	   ReSize(IDC_STATIC_MUSIC);
	   ReSize(IDC_STATIC_BACK_MUSIC);
	   ReSize(IDC_RADIO1);
	   ReSize(IDC_RADIO2);
	   ReSize(IDC_MOVE);
	   ReSize(IDC_STATIC_MOVE);
	   ReSize(IDC_STATIC_HZ);
	   ReSize(IDC_OUT);
	   ReSize(IDC_STATIC_HARD);
	   ReSize(IDC_WRITE_HARD);
	   ReSize(IDC_STATIC_COUNT);
	   ReSize(IDC_COUNT);
	   ReSize(IDC_NAME);
	   ReSize(IDC_NAMEA);
	   ReSize(IDC_NAME1);
	   ReSize(IDC_NAMEB);
	   ReSize(IDC_NAME2);
	   ReSize(IDC_SCORE);
	   ReSize(IDC_STATIC_YONGHU);
	   ReSize(IDC_STATIC_XUANXIANG);
	   ReSize(IDC_STATIC_JIANPAN);
	   ReSize(IDC_STATIC_XIAN1);
	   ReSize(IDC_STATIC_XIAN2);
	   ReSize(IDC_STATIC_XIAN3);
	   ReSize(IDC_STATIC_XIAN4);
	   ReSize(IDC_STATIC_XIAN5);
	   ReSize(IDC_STATIC_XIAN6);
	   ReSize(IDC_STATIC_XIAN7);
	   //恢复放大倍数，并保存 (确保还原时候能够还原到原来的大小)
	   m_Multiple_width = float(1)/ m_Multiple_width ; 
	   m_Mutiple_heith = float(1)/m_Mutiple_heith ; 
	}
}
/***************************************************************************/

