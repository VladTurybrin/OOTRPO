// OOTRPOView.cpp : ���������� ������ COOTRPOView
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
	// ����������� ������� ������
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// ��������/����������� COOTRPOView

COOTRPOView::COOTRPOView()
{
	// TODO: �������� ��� ��������

}

COOTRPOView::~COOTRPOView()
{
}

BOOL COOTRPOView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �������� ����� Window ��� ����� ����������� ���������
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ��������� COOTRPOView

void COOTRPOView::OnDraw(CDC* /*pDC*/)
{
	COOTRPODoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �������� ����� ��� ��������� ��� ����������� ������
}


// ������ COOTRPOView

BOOL COOTRPOView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ���������� �� ���������
	return DoPreparePrinting(pInfo);
}

void COOTRPOView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� �������������� ������������� ����� �������
}

void COOTRPOView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� ������� ����� ������
}


// ����������� COOTRPOView

#ifdef _DEBUG
void COOTRPOView::AssertValid() const
{
	CView::AssertValid();
}

void COOTRPOView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COOTRPODoc* COOTRPOView::GetDocument() const // �������� ������������ ������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COOTRPODoc)));
	return (COOTRPODoc*)m_pDocument;
}
#endif //_DEBUG


// ����������� ��������� COOTRPOView
