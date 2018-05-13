﻿// OnProcDlg.cpp : インプリメンテーション ファイル
//

#include "stdafx.h"
#include "iEdit.h"
#include "OnProcDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ProceedingDlg ダイアログ


ProceedingDlg::ProceedingDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ProceedingDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ProceedingDlg)
	//}}AFX_DATA_INIT
}


void ProceedingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ProceedingDlg)
	DDX_Control(pDX, IDC_PROC_NAME, m_ProcName);
	DDX_Control(pDX, IDC_PROGPROC, m_ProgProc);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ProceedingDlg, CDialog)
	//{{AFX_MSG_MAP(ProceedingDlg)
		// メモ - ClassWizard はこの位置にマッピング用のマクロを追加または削除します。
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ProceedingDlg メッセージ ハンドラ
