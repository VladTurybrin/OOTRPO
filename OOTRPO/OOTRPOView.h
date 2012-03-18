// OOTRPOView.h : ��������� ������ COOTRPOView
//


#pragma once


class COOTRPOView : public CView
{
protected: // ������� ������ �� ������������
	COOTRPOView();
	DECLARE_DYNCREATE(COOTRPOView)

// ��������
public:
	COOTRPODoc* GetDocument() const;

// ��������
public:

// ���������������
public:
	virtual void OnDraw(CDC* pDC);  // �������������� ��� ��������� ����� �������������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����������
public:
	virtual ~COOTRPOView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���������� ������ � OOTRPOView.cpp
inline COOTRPODoc* COOTRPOView::GetDocument() const
   { return reinterpret_cast<COOTRPODoc*>(m_pDocument); }
#endif

