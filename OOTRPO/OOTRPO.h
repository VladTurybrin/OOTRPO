// OOTRPO.h : ������� ���� ��������� ��� ���������� OOTRPO
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// COOTRPOApp:
// � ���������� ������� ������ ��. OOTRPO.cpp
//

class COOTRPOApp : public CWinApp
{
public:
	COOTRPOApp();


// ���������������
public:
	virtual BOOL InitInstance();

// ����������
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern COOTRPOApp theApp;