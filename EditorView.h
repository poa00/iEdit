#if !defined(AFX_EDITORVIEW_H__96DFF9CB_1881_11D3_808A_00A0C9B72FDD__INCLUDED_)
#define AFX_EDITORVIEW_H__96DFF9CB_1881_11D3_808A_00A0C9B72FDD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditorView.h : ヘッダー ファイル
//

/////////////////////////////////////////////////////////////////////////////
// EditorView ビュー
class iEditDoc;

class EditorView : public CEditView
{
protected:
	EditorView();           // 動的生成に使用されるプロテクト コンストラクタ
	DECLARE_DYNCREATE(EditorView)

// アトリビュート
public:

// オペレーション
public:
	virtual void OnReplaceAll( LPCTSTR lpszFind, LPCTSTR lpszReplace, BOOL bCase);
	virtual void  OnReplaceSel( LPCTSTR lpszFind, BOOL bNext, BOOL bCase, LPCTSTR lpszReplace);
	virtual void OnFindNext( LPCTSTR lpszFind, BOOL bNext, BOOL bCase );
	void setViewFont();
	void setTabStop();
	iEditDoc* GetDocument();

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。

	//{{AFX_VIRTUAL(EditorView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // このビューを描画するためにオーバーライドしました。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:
	virtual ~EditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// 生成されたメッセージ マップ関数
protected:
	void initSizeChar();
	void DrawCaretLine(BOOL bInPaint = FALSE);
	int GetCaretLine() const;
	void GetLineRect(int nLine, LPRECT lpRect) const;
	//{{AFX_MSG(EditorView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnDelete();
	afx_msg void OnUpdateDelete(CCmdUI* pCmdUI);
	afx_msg void OnEditLabel();
	afx_msg void OnEditCut();
	afx_msg void OnUpdateEditCut(CCmdUI* pCmdUI);
	afx_msg void OnEditPaste();
	afx_msg void OnUpdateEditPaste(CCmdUI* pCmdUI);
	afx_msg void OnEditUndo();
	afx_msg void OnUpdateEditUndo(CCmdUI* pCmdUI);
	afx_msg void OnEditClear();
	afx_msg void OnUpdateEditClear(CCmdUI* pCmdUI);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg void OnEditFind();
	afx_msg void OnUpdateEditFind(CCmdUI* pCmdUI);
	afx_msg void OnEditReplace();
	afx_msg void OnUpdateEditReplace(CCmdUI* pCmdUI);
	afx_msg void OnPaint();
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	afx_msg void OnChange();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bDrawUnderLine;
	BOOL	m_bCanPaint;
	int		m_nCaretLine;
	CSize m_sizeChar;
	CBrush m_hBrsBack;
	COLORREF m_textColor;
	COLORREF m_bkColor;
	CFindReplaceDialog* m_pFindReplacedlg;
	CFont m_font;
	DWORD m_preKey;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_EDITORVIEW_H__96DFF9CB_1881_11D3_808A_00A0C9B72FDD__INCLUDED_)
