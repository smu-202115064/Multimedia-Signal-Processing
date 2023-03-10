
// HelloView.h : CHelloView Ŭ������ �������̽�
//

#pragma once


class CHelloView : public CView
{
protected: // serialization������ ��������ϴ�.
	CHelloView();
	DECLARE_DYNCREATE(CHelloView)

// Ư���Դϴ�.
public:
	CHelloDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CHelloView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPrintHello();
};

#ifndef _DEBUG  // HelloView.cpp�� ����� ����
inline CHelloDoc* CHelloView::GetDocument() const
   { return reinterpret_cast<CHelloDoc*>(m_pDocument); }
#endif
