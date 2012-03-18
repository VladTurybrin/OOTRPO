// OOTRPODoc.cpp : реализаци€ класса COOTRPODoc
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


// создание/уничтожение COOTRPODoc

COOTRPODoc::COOTRPODoc()
{
	// TODO: добавьте код дл€ одноразового вызова конструктора

}

COOTRPODoc::~COOTRPODoc()
{
}

BOOL COOTRPODoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: добавьте код повторной инициализации
	// (ƒокументы SDI будут повторно использовать этот документ)

	return TRUE;
}




// сериализаци€ COOTRPODoc

void COOTRPODoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: добавьте код сохранени€
	}
	else
	{
		// TODO: добавьте код загрузки
	}
}


// диагностика COOTRPODoc

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


// команды COOTRPODoc
