// OOTRPOView.h : интерфейс класса COOTRPOView
//


#pragma once


class COOTRPOView : public CView
{
protected: // создать только из сериализации
	COOTRPOView();
	DECLARE_DYNCREATE(COOTRPOView)

// Атрибуты
public:
	COOTRPODoc* GetDocument() const;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Реализация
public:
	virtual ~COOTRPOView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // отладочная версия в OOTRPOView.cpp
inline COOTRPODoc* COOTRPOView::GetDocument() const
   { return reinterpret_cast<COOTRPODoc*>(m_pDocument); }
#endif

