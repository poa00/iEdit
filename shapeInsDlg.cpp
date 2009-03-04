// shapeInsDlg.cpp : インプリメンテーション ファイル
//

#include "stdafx.h"
#include "iEdit.h"
#include "shapeInsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// shapeInsDlg ダイアログ


shapeInsDlg::shapeInsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(shapeInsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(shapeInsDlg)
	m_strPath = _T("");
	//}}AFX_DATA_INIT
}


void shapeInsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(shapeInsDlg)
	DDX_Control(pDX, IDC_EDPATH, m_edPath);
	DDX_Control(pDX, IDC_SHAPE, m_iShape);
	DDX_Control(pDX, IDC_BTN_BROWSE, m_BtnBrowse);
	DDX_Text(pDX, IDC_EDPATH, m_strPath);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(shapeInsDlg, CDialog)
	//{{AFX_MSG_MAP(shapeInsDlg)
	ON_BN_CLICKED(IDC_BTN_BROWSE, OnBtnBrowse)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// shapeInsDlg メッセージ ハンドラ

void shapeInsDlg::OnBtnBrowse() 
{
	// TODO: この位置にコントロール通知ハンドラ用のコードを追加してください
	CString empath;
	char szFilters[] = "拡張メタファイル (*.emf)|*.emf|全てのファイル (*.*)|*.*||";
	CFileDialog dlg(TRUE, "emf", empath, OFN_HIDEREADONLY, szFilters, this);
	if (dlg.DoModal() != IDOK) return;
	CString infileName = dlg.GetPathName();
	if (infileName != "") {
		HENHMETAFILE hm = ::GetEnhMetaFile(infileName);
		if (hm != NULL) {
			m_iShape.SetEnhMetaFile(hm);
			m_strPath = infileName;
			m_edPath.SetWindowText(m_strPath);
		} else {
			AfxMessageBox("有効なメタファイル形式ではありません");
		}
	}
}

void shapeInsDlg::OnOK() 
{
	// TODO: この位置にその他の検証用のコードを追加してください
	if (m_strPath == "") {
		AfxMessageBox("メタファイルが指定されていません");
		return;
	}
	CDialog::OnOK();
}
