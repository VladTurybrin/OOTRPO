// OOTRPODoc.h : ��������� ������ COOTRPODoc
//


#pragma once


class COOTRPODoc : public CDocument
{
protected: // ������� ������ �� ������������
	COOTRPODoc();
	DECLARE_DYNCREATE(COOTRPODoc)

// ��������
public:

// ��������
public:

// ���������������
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ����������
public:
	virtual ~COOTRPODoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()
};


