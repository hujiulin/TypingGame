; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDialog_USER_LOG
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "WORD_GAME.h"

ClassCount=11
Class1=CWORD_GAMEApp
Class2=CWORD_GAMEDlg
Class3=CAboutDlg

ResourceCount=11
Resource1=IDD_WORD_GAME_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_RANK
Resource4=IDD_IMAGE
Class4=CDialog_USER_LOG
Resource5=IDD_USER_LOG
Class5=CDialog_Music
Resource6=IDD_HARD
Class6=CDIALOG_USER_REGISTER
Resource7=IDD_USER_REGISTER
Class7=CDialog_IMAGE
Class8=CDialog_RANK
Resource8=IDD_ABOUTBOX
Class9=CDialog_USER_RANK
Resource9=IDD_MUSIC
Class10=CDialog_USER_HARD
Resource10=IDD_RULE
Class11=CDialog_USER_RULE
Resource11=IDR_MENU1

[CLS:CWORD_GAMEApp]
Type=0
HeaderFile=WORD_GAME.h
ImplementationFile=WORD_GAME.cpp
Filter=N

[CLS:CWORD_GAMEDlg]
Type=0
HeaderFile=WORD_GAMEDlg.h
ImplementationFile=WORD_GAMEDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CWORD_GAMEDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=WORD_GAMEDlg.h
ImplementationFile=WORD_GAMEDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_WORD_GAME_DIALOG]
Type=1
Class=CWORD_GAMEDlg
ControlCount=66
Control1=IDOK,button,1342242817
Control2=IDC_STATIC_XIAN6,static,1342181393
Control3=IDC_STATIC_YONGHU,button,1342177287
Control4=IDC_STATIC_JIANPAN,button,1342177287
Control5=ID_START,button,1342242817
Control6=IDC_BUTTONQ,button,1342242816
Control7=IDC_BUTTONW,button,1342242816
Control8=IDC_BUTTONE,button,1342242816
Control9=IDC_BUTTONR,button,1342242816
Control10=IDC_BUTTONT,button,1342242816
Control11=IDC_BUTTONY,button,1342242816
Control12=IDC_BUTTONU,button,1342242816
Control13=IDC_BUTTONI,button,1342242816
Control14=IDC_BUTTONO,button,1342242816
Control15=IDC_BUTTONP,button,1342242816
Control16=IDC_BUTTONA,button,1342242816
Control17=IDC_BUTTONS,button,1342242816
Control18=IDC_BUTTOND,button,1342242816
Control19=IDC_BUTTONF,button,1342242816
Control20=IDC_BUTTONG,button,1342242816
Control21=IDC_BUTTONH,button,1342242816
Control22=IDC_BUTTONJ,button,1342242816
Control23=IDC_BUTTONK,button,1342242816
Control24=IDC_BUTTONL,button,1342242816
Control25=IDC_BUTTONZ,button,1342242816
Control26=IDC_BUTTONX,button,1342242816
Control27=IDC_BUTTONC,button,1342242816
Control28=IDC_BUTTONV,button,1342242816
Control29=IDC_BUTTONB,button,1342242816
Control30=IDC_BUTTONN,button,1342242816
Control31=IDC_BUTTONM,button,1342242816
Control32=IDC_BUTTONCAPSLOCK,button,1342242816
Control33=IDC_BUTTONEnter,button,1342242816
Control34=IDC_NAME,static,1350697473
Control35=IDC_NAMEA,static,1342312961
Control36=IDC_NAMEB,static,1342312961
Control37=IDC_SCORE,static,1342312961
Control38=IDC_NAME1,static,1350697473
Control39=IDC_NAME2,static,1350697473
Control40=IDC_STATIC_XIAN1,static,1342181392
Control41=IDC_STATIC_XUANXIANG,button,1342177287
Control42=IDC_STATIC_COUNT,static,1350697473
Control43=IDC_STATIC_HARD,static,1350697473
Control44=IDC_STATIC_HZ,static,1350697473
Control45=IDC_STATIC_MOVE,static,1350697473
Control46=IDC_STATIC_BACK_MUSIC,static,1350697473
Control47=IDC_RADIO1,button,1342308361
Control48=IDC_RADIO2,button,1342308361
Control49=IDC_STATIC_IMAGE_TYPE,static,1350697473
Control50=IDC_WRITE_HARD,static,1342312961
Control51=IDC_COUNT,static,1342312961
Control52=IDC_OUT,static,1342312961
Control53=IDC_MOVE,static,1342312961
Control54=IDC_STATIC_GAME,static,1350697473
Control55=IDC_PROCESS,static,1342312961
Control56=IDC_STATIC_XIAN7,static,1342181392
Control57=IDC_STATIC_XIAN2,static,1342181392
Control58=IDC_NOW,static,1342308865
Control59=IDC_BUTTONBACKSPACE,button,1342242816
Control60=IDC_STATIC_MUSIC,static,1342312961
Control61=IDC_STATIC_IMAGE,static,1342312961
Control62=IDC_STATIC_XIAN4,static,1342181383
Control63=IDC_STATIC_XIAN5,static,1342181383
Control64=IDC_LIST1,listbox,1352728835
Control65=IDC_BNU,static,1342177294
Control66=IDC_STATIC_XIAN3,static,1342181392

[MNU:IDR_MENU1]
Type=1
Class=CWORD_GAMEDlg
Command1=ID_LOG
Command2=ID_REGISTER
Command3=ID_HARD
Command4=ID_IMAGE
Command5=ID_MUSIC
Command6=ID_RANK
Command7=ID_RULE
Command8=ID_ABOUT
CommandCount=8

[DLG:IDD_MUSIC]
Type=1
Class=CDialog_Music
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_LIST1,listbox,1352728833
Control5=IDC_STATIC,static,1342181393
Control6=IDC_MAKE,button,1342242816
Control7=IDC_STATIC,static,1342177806

[CLS:CDialog_Music]
Type=0
HeaderFile=Dialog_Music.h
ImplementationFile=Dialog_Music.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_MAKE
VirtualFilter=dWC

[DLG:IDD_USER_LOG]
Type=1
Class=CDialog_USER_LOG
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1350697473
Control3=IDC_STATIC,static,1350697473
Control4=IDC_EDIT_USERNAME,edit,1350631552
Control5=IDC_EDIT_CODE,edit,1350631584
Control6=ID_REGISTER,button,1342242817
Control7=IDC_STATIC,static,1350697473
Control8=IDC_STATIC,static,1342177283

[DLG:IDD_USER_REGISTER]
Type=1
Class=CDialog_USER_LOG
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1350697473
Control4=IDC_STATIC,static,1350697473
Control5=IDC_EDIT_USERNAME,edit,1350631552
Control6=IDC_EDIT_CODE,edit,1350631584
Control7=IDC_STATIC,static,1350697473
Control8=IDC_EDIT_NICK,edit,1350631552
Control9=IDC_STATIC,static,1342177283

[CLS:CDialog_USER_LOG]
Type=0
HeaderFile=dialog_user_log.h
ImplementationFile=dialog_user_log.cpp
BaseClass=CDialog
LastObject=ID_REGISTER
Filter=D
VirtualFilter=dWC

[CLS:CDIALOG_USER_REGISTER]
Type=0
HeaderFile=DIALOG_USER_REGISTER.h
ImplementationFile=DIALOG_USER_REGISTER.cpp
BaseClass=CDialog
Filter=D
LastObject=CDIALOG_USER_REGISTER
VirtualFilter=dWC

[DLG:IDD_IMAGE]
Type=1
Class=CDialog_IMAGE
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RADIO_BALL,button,1342308361
Control4=IDC_RADIO_SNOW,button,1342308361
Control5=IDC_STATIC,button,1342177287
Control6=IDC_STATIC,static,1342177806
Control7=IDC_STATIC,static,1342177806

[CLS:CDialog_IMAGE]
Type=0
HeaderFile=Dialog_IMAGE.h
ImplementationFile=Dialog_IMAGE.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_IMAGE
VirtualFilter=dWC

[CLS:CDialog_RANK]
Type=0
HeaderFile=Dialog_RANK.h
ImplementationFile=Dialog_RANK.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialog_RANK

[DLG:IDD_RANK]
Type=1
Class=CDialog_USER_RANK
ControlCount=22
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342312961
Control3=IDC_STATIC,static,1342312961
Control4=IDC_STATIC,static,1342312961
Control5=IDC_STATIC,static,1342312961
Control6=IDC_STATIC,static,1342312961
Control7=IDC_STATIC,static,1342312961
Control8=IDC_STATIC,static,1342312961
Control9=IDC_STATIC,static,1342312961
Control10=IDC_STATIC,static,1342312961
Control11=IDC_STATIC,static,1342181393
Control12=IDC_STATIC_NAME1,static,1342312961
Control13=IDC_STATIC_NAME2,static,1342312961
Control14=IDC_STATIC_NAME3,static,1342312961
Control15=IDC_STATIC_NAME4,static,1342312961
Control16=IDC_STATIC_NAME5,static,1342312961
Control17=IDC_STATIC,static,1342181393
Control18=IDC_STATIC_SCORE1,static,1342312961
Control19=IDC_STATIC_SCORE2,static,1342312961
Control20=IDC_STATIC_SCORE3,static,1342312961
Control21=IDC_STATIC_SCORE4,static,1342312961
Control22=IDC_STATIC_SCORE5,static,1342312961

[CLS:CDialog_USER_RANK]
Type=0
HeaderFile=Dialog_USER_RANK.h
ImplementationFile=Dialog_USER_RANK.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_STATIC_SCORE1
VirtualFilter=dWC

[DLG:IDD_HARD]
Type=1
Class=CDialog_USER_HARD
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1350697473
Control3=IDC_STATIC,static,1350697473
Control4=IDC_STATIC,static,1350697473
Control5=IDC_STATIC,static,1350697473
Control6=IDC_COMBO1,combobox,1344339970
Control7=IDC_COMBO2,combobox,1344339970
Control8=IDC_COMBO3,combobox,1344339970
Control9=IDC_COMBO4,combobox,1344339970
Control10=IDC_STATIC,static,1342312961
Control11=IDC_shezhihao,button,1342242816
Control12=IDC_STATIC,static,1342177283

[CLS:CDialog_USER_HARD]
Type=0
HeaderFile=Dialog_USER_HARD.h
ImplementationFile=Dialog_USER_HARD.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialog_USER_HARD
VirtualFilter=dWC

[DLG:IDD_RULE]
Type=1
Class=CDialog_USER_RULE
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,button,1342177287
Control3=IDC_STATIC,static,1342308608

[CLS:CDialog_USER_RULE]
Type=0
HeaderFile=Dialog_USER_RULE.h
ImplementationFile=Dialog_USER_RULE.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialog_USER_RULE

