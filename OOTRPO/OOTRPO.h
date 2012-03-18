// OOTRPO.h : главный файл заголовка для приложения OOTRPO
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// COOTRPOApp:
// О реализации данного класса см. OOTRPO.cpp
//

class COOTRPOApp : public CWinApp
{
public:
	COOTRPOApp();


// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern COOTRPOApp theApp;