// OOTRPODoc.cpp : ���������� ������ COOTRPODoc
//

#include "stdafx.h"
#include "OOTRPO.h"

#include "OOTRPODoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COOTRPODoc

IMPLEMENT_DYNCREATE(COOTRPODoc, CDocument)

BEGIN_MESSAGE_MAP(COOTRPODoc, CDocument)
END_MESSAGE_MAP()


// ��������/����������� COOTRPODoc

COOTRPODoc::COOTRPODoc()
{
	// TODO: �������� ��� ��� ������������ ������ ������������

}

COOTRPODoc::~COOTRPODoc()
{
}

BOOL COOTRPODoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �������� ��� ��������� �������������
	// (��������� SDI ����� �������� ������������ ���� ��������)

	return TRUE;
}




// ������������ COOTRPODoc

void COOTRPODoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �������� ��� ����������
	}
	else
	{
		// TODO: �������� ��� ��������
	}
}


// ����������� COOTRPODoc

#ifdef _DEBUG
void COOTRPODoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COOTRPODoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// ������� COOTRPODoc
