// OOTRPO.cpp : Определяет поведение классов для приложения.
//

#include "stdafx.h"
#include "OOTRPO.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "OOTRPODoc.h"
#include "OOTRPOView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COOTRPOApp

BEGIN_MESSAGE_MAP(COOTRPOApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &COOTRPOApp::OnAppAbout)
	// Стандартные команды по работе с файлами документов
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
	// Стандартная команда настройки печати
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()


// создание COOTRPOApp

COOTRPOApp::COOTRPOApp()
{
	// TODO: добавьте код создания,
	// Размещает весь важный код инициализации в InitInstance
}


// Единственный объект COOTRPOApp

COOTRPOApp theApp;


// инициализация COOTRPOApp

BOOL COOTRPOApp::InitInstance()
{
	// InitCommonControlsEx() требуются для Windows XP, если манифест
	// приложения использует ComCtl32.dll версии 6 или более поздней версии для включения
	// стилей отображения. В противном случае будет возникать сбой при создании любого окна.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Выберите этот параметр для включения всех общих классов управления, которые необходимо использовать
	// в вашем приложении.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	// Инициализация библиотек OLE
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	// Стандартная инициализация
	// Если эти возможности не используются и необходимо уменьшить размер
	// конечного исполняемого файла, необходимо удалить из следующего
	// конкретные процедуры инициализации, которые не требуются
	// Измените раздел реестра, в котором хранятся параметры
	// TODO: следует изменить эту строку на что-нибудь подходящее,
	// например на название организации
	SetRegistryKey(_T("Локальные приложения, созданные с помощью мастера приложений"));
	LoadStdProfileSettings(4);  // Загрузите стандартные параметры INI-файла (включая MRU)
	// Зарегистрируйте шаблоны документов приложения. Шаблоны документов
	//  выступают в роли посредника между документами, окнами фреймов и представлениями
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_OOTRPOTYPE,
		RUNTIME_CLASS(COOTRPODoc),
		RUNTIME_CLASS(CChildFrame), // настраиваемый дочерний фрейм MDI
		RUNTIME_CLASS(COOTRPOView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	// создайте главное окно фрейма MDI
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// вызов DragAcceptFiles только при наличии суффикса
	//  В приложении MDI это должно произойти сразу после задания m_pMainWnd


	// Синтаксический разбор командной строки на стандартные команды оболочки, DDE, открытие файлов
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	// Команды диспетчеризации, указанные в командной строке. Значение FALSE будет возвращено, если
	// приложение было запущено с параметром /RegServer, /Register, /Unregserver или /Unregister.
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	// Главное окно было инициализировано, поэтому отобразите и обновите его
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();

	return TRUE;
}



// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Данные диалогового окна
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// Команда приложения для запуска диалога
void COOTRPOApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// обработчики сообщений COOTRPOApp

