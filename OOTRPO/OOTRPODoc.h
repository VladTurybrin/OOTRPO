// OOTRPODoc.h : интерфейс класса COOTRPODoc
//


#pragma once


class COOTRPODoc : public CDocument
{
protected: // создать только из сериализации
	COOTRPODoc();
	DECLARE_DYNCREATE(COOTRPODoc)

// Атрибуты
public:

// Операции
public:

// Переопределение
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Реализация
public:
	virtual ~COOTRPODoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};


