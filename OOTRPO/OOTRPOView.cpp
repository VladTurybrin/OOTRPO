// OOTRPOView.cpp : реализация класса COOTRPOView
//

#include "stdafx.h"
#include "OOTRPO.h"

#include "OOTRPODoc.h"
#include "OOTRPOView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COOTRPOView

IMPLEMENT_DYNCREATE(COOTRPOView, CView)

BEGIN_MESSAGE_MAP(COOTRPOView, CView)
	// Стандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// создание/уничтожение COOTRPOView

COOTRPOView::COOTRPOView()
{
	// TODO: добавьте код создания

}

COOTRPOView::~COOTRPOView()
{
}

BOOL COOTRPOView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменения
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// рисование COOTRPOView

void COOTRPOView::OnDraw(CDC* /*pDC*/)
{
	COOTRPODoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки для собственных данных
}


// печать COOTRPOView

BOOL COOTRPOView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void COOTRPOView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void COOTRPOView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}


// диагностика COOTRPOView

#ifdef _DEBUG
void COOTRPOView::AssertValid() const
{
	CView::AssertValid();
}

void COOTRPOView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COOTRPODoc* COOTRPOView::GetDocument() const // встроена неотлаженная версия
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COOTRPODoc)));
	return (COOTRPODoc*)m_pDocument;
}
#endif //_DEBUG


// обработчики сообщений COOTRPOView
