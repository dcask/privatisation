// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "msword.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// _Application properties

/////////////////////////////////////////////////////////////////////////////
// _Application operations

LPDISPATCH _Application::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetDocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetActiveDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetSelection()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetWordBasic()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetRecentFiles()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetNormalTemplate()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetSystem()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAutoCorrect()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetLandscapeFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetPortraitFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetLanguages()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAssistant()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetBrowser()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetFileConverters()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetMailingLabel()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetDialogs()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetCaptionLabels()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAutoCaptions()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetVisible()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Application::GetVersion()
{
	CString result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetScreenUpdating()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetScreenUpdating(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Application::GetPrintPreview()
{
	BOOL result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetPrintPreview(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetTasks()
{
	LPDISPATCH result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDisplayStatusBar()
{
	BOOL result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayStatusBar(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Application::GetSpecialMode()
{
	BOOL result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _Application::GetUsableWidth()
{
	long result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Application::GetUsableHeight()
{
	long result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetMathCoprocessorAvailable()
{
	BOOL result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetMouseAvailable()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT _Application::GetInternational(long Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Index);
	return result;
}

CString _Application::GetBuild()
{
	CString result;
	InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetCapsLock()
{
	BOOL result;
	InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetNumLock()
{
	BOOL result;
	InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Application::GetUserName_()
{
	CString result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetUserName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Application::GetUserInitials()
{
	CString result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetUserInitials(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Application::GetUserAddress()
{
	CString result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetUserAddress(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x36, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Application::GetMacroContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDisplayRecentFiles()
{
	BOOL result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayRecentFiles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x38, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetSynonymInfo(LPCTSTR Word, VARIANT* LanguageID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		Word, LanguageID);
	return result;
}

LPDISPATCH _Application::GetVbe()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetDefaultSaveFormat()
{
	CString result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetDefaultSaveFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x40, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Application::GetListGalleries()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetActivePrinter()
{
	CString result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetActivePrinter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Application::GetTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetCustomizationContext()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Application::SetCustomizationContext(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Application::GetKeyBindings()
{
	LPDISPATCH result;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetKeysBoundTo(long KeyCategory, LPCTSTR Command, VARIANT* CommandParameter)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		KeyCategory, Command, CommandParameter);
	return result;
}

LPDISPATCH _Application::GetFindKey(long KeyCode, VARIANT* KeyCode2)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		KeyCode, KeyCode2);
	return result;
}

CString _Application::GetCaption()
{
	CString result;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Application::GetPath()
{
	CString result;
	InvokeHelper(0x51, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDisplayScrollBars()
{
	BOOL result;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayScrollBars(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Application::GetStartupPath()
{
	CString result;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetStartupPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Application::GetBackgroundSavingStatus()
{
	long result;
	InvokeHelper(0x55, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Application::GetBackgroundPrintingStatus()
{
	long result;
	InvokeHelper(0x56, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Application::GetLeft()
{
	long result;
	InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x57, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetTop()
{
	long result;
	InvokeHelper(0x58, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x58, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetWidth()
{
	long result;
	InvokeHelper(0x59, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetHeight()
{
	long result;
	InvokeHelper(0x5a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Application::GetWindowState()
{
	long result;
	InvokeHelper(0x5b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetWindowState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Application::GetDisplayAutoCompleteTips()
{
	BOOL result;
	InvokeHelper(0x5c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayAutoCompleteTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x5d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetDisplayAlerts()
{
	long result;
	InvokeHelper(0x5e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayAlerts(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Application::GetCustomDictionaries()
{
	LPDISPATCH result;
	InvokeHelper(0x5f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Application::GetPathSeparator()
{
	CString result;
	InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetStatusBar(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x61, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Application::GetMAPIAvailable()
{
	BOOL result;
	InvokeHelper(0x62, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDisplayScreenTips()
{
	BOOL result;
	InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDisplayScreenTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Application::GetEnableCancelKey()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetEnableCancelKey(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Application::GetUserControl()
{
	BOOL result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetFileSearch()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetMailSystem()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString _Application::GetDefaultTableSeparator()
{
	CString result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetDefaultTableSeparator(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Application::GetShowVisualBasicEditor()
{
	BOOL result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetShowVisualBasicEditor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Application::GetBrowseExtraFileTypes()
{
	CString result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetBrowseExtraFileTypes(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Application::GetIsObjectValid(LPDISPATCH Object)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		Object);
	return result;
}

LPDISPATCH _Application::GetHangulHanjaDictionaries()
{
	LPDISPATCH result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetMailMessage()
{
	LPDISPATCH result;
	InvokeHelper(0x15c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetFocusInMailHeader()
{
	BOOL result;
	InvokeHelper(0x182, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::Quit(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void _Application::ScreenRefresh()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::LookupNameProperties(LPCTSTR Name)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name);
}

void _Application::SubstituteFont(LPCTSTR UnavailableFont, LPCTSTR SubstituteFont)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 UnavailableFont, SubstituteFont);
}

BOOL _Application::Repeat(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x131, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

void _Application::DDEExecute(long Channel, LPCTSTR Command)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x136, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, Command);
}

long _Application::DDEInitiate(LPCTSTR App, LPCTSTR Topic)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x137, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		App, Topic);
	return result;
}

void _Application::DDEPoke(long Channel, LPCTSTR Item, LPCTSTR Data)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, Item, Data);
}

CString _Application::DDERequest(long Channel, LPCTSTR Item)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x139, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Channel, Item);
	return result;
}

void _Application::DDETerminate(long Channel)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel);
}

void _Application::DDETerminateAll()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Application::BuildKeyCode(long Arg1, VARIANT* Arg2, VARIANT* Arg3, VARIANT* Arg4)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Arg1, Arg2, Arg3, Arg4);
	return result;
}

CString _Application::KeyString(long KeyCode, VARIANT* KeyCode2)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		KeyCode, KeyCode2);
	return result;
}

void _Application::OrganizerCopy(LPCTSTR Source, LPCTSTR Destination, LPCTSTR Name, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, Name, Object);
}

void _Application::OrganizerDelete(LPCTSTR Source, LPCTSTR Name, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x13f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Name, Object);
}

void _Application::OrganizerRename(LPCTSTR Source, LPCTSTR Name, LPCTSTR NewName, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Name, NewName, Object);
}

CString _Application::GetAddress(VARIANT* Name, VARIANT* AddressProperties, VARIANT* UseAutoText, VARIANT* DisplaySelectDialog, VARIANT* SelectDialog, VARIANT* CheckNamesDialog, VARIANT* RecentAddressesChoice, VARIANT* UpdateRecentAddresses)
{
	CString result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Name, AddressProperties, UseAutoText, DisplaySelectDialog, SelectDialog, CheckNamesDialog, RecentAddressesChoice, UpdateRecentAddresses);
	return result;
}

BOOL _Application::CheckGrammar(LPCTSTR String)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x143, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		String);
	return result;
}

BOOL _Application::CheckSpelling(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, 
		VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x144, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Word, CustomDictionary, IgnoreUppercase, MainDictionary, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
	return result;
}

void _Application::ResetIgnoreAll()
{
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Application::GetSpellingSuggestions(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x147, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Word, CustomDictionary, IgnoreUppercase, MainDictionary, SuggestionMode, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, 
		CustomDictionary10);
	return result;
}

void _Application::GoBack()
{
	InvokeHelper(0x148, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::Help(VARIANT* HelpType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x149, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 HelpType);
}

void _Application::AutomaticChange()
{
	InvokeHelper(0x14a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::ShowMe()
{
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::HelpTool()
{
	InvokeHelper(0x14c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Application::NewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x159, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Application::ListCommands(BOOL ListAllCommands)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ListAllCommands);
}

void _Application::ShowClipboard()
{
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::OnTime(VARIANT* When, LPCTSTR Name, VARIANT* Tolerance)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x15e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 When, Name, Tolerance);
}

void _Application::NextLetter()
{
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short _Application::MountVolume(LPCTSTR Zone, LPCTSTR Server, LPCTSTR Volume, VARIANT* User, VARIANT* UserPassword, VARIANT* VolumePassword)
{
	short result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x161, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		Zone, Server, Volume, User, UserPassword, VolumePassword);
	return result;
}

CString _Application::CleanString(LPCTSTR String)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		String);
	return result;
}

void _Application::SendFax()
{
	InvokeHelper(0x164, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::ChangeFileOpenDirectory(LPCTSTR Path)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x165, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path);
}

void _Application::GoForward()
{
	InvokeHelper(0x167, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::Move(long Left, long Top)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x168, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top);
}

void _Application::Resize(long Width, long Height)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x169, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Width, Height);
}

float _Application::InchesToPoints(float Inches)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x172, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Inches);
	return result;
}

float _Application::CentimetersToPoints(float Centimeters)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x173, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Centimeters);
	return result;
}

float _Application::MillimetersToPoints(float Millimeters)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x174, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Millimeters);
	return result;
}

float _Application::PicasToPoints(float Picas)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x175, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Picas);
	return result;
}

float _Application::LinesToPoints(float Lines)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x176, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Lines);
	return result;
}

float _Application::PointsToInches(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17c, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float _Application::PointsToCentimeters(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17d, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float _Application::PointsToMillimeters(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17e, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float _Application::PointsToPicas(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17f, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float _Application::PointsToLines(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x180, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

void _Application::Activate()
{
	InvokeHelper(0x181, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float _Application::PointsToPixels(float Points, VARIANT* fVertical)
{
	float result;
	static BYTE parms[] =
		VTS_R4 VTS_PVARIANT;
	InvokeHelper(0x183, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points, fVertical);
	return result;
}

float _Application::PixelsToPoints(float Pixels, VARIANT* fVertical)
{
	float result;
	static BYTE parms[] =
		VTS_R4 VTS_PVARIANT;
	InvokeHelper(0x184, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Pixels, fVertical);
	return result;
}

void _Application::KeyboardLatin()
{
	InvokeHelper(0x190, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::KeyboardBidi()
{
	InvokeHelper(0x191, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Application::ToggleKeyboard()
{
	InvokeHelper(0x192, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Application::Keyboard(long LangId)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1be, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		LangId);
	return result;
}

CString _Application::ProductCode()
{
	CString result;
	InvokeHelper(0x194, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::DefaultWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x195, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Application::SetDefaultTheme(LPCTSTR Name, long DocumentType)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x19e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, DocumentType);
}

CString _Application::GetDefaultTheme(long DocumentType)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1a0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		DocumentType);
	return result;
}

LPDISPATCH _Application::GetEmailOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x185, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetLanguage()
{
	long result;
	InvokeHelper(0x187, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetCOMAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetCheckLanguage()
{
	BOOL result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetCheckLanguage(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetLanguageSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetAnswerWizard()
{
	LPDISPATCH result;
	InvokeHelper(0x199, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Application::GetFeatureInstall()
{
	long result;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetFeatureInstall(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT _Application::Run(LPCTSTR MacroName, VARIANT* varg1, VARIANT* varg2, VARIANT* varg3, VARIANT* varg4, VARIANT* varg5, VARIANT* varg6, VARIANT* varg7, VARIANT* varg8, VARIANT* varg9, VARIANT* varg10, VARIANT* varg11, VARIANT* varg12, VARIANT* varg13, 
		VARIANT* varg14, VARIANT* varg15, VARIANT* varg16, VARIANT* varg17, VARIANT* varg18, VARIANT* varg19, VARIANT* varg20, VARIANT* varg21, VARIANT* varg22, VARIANT* varg23, VARIANT* varg24, VARIANT* varg25, VARIANT* varg26, VARIANT* varg27, 
		VARIANT* varg28, VARIANT* varg29, VARIANT* varg30)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		MacroName, varg1, varg2, varg3, varg4, varg5, varg6, varg7, varg8, varg9, varg10, varg11, varg12, varg13, varg14, varg15, varg16, varg17, varg18, varg19, varg20, varg21, varg22, varg23, varg24, varg25, varg26, varg27, varg28, varg29, 
		varg30);
	return result;
}

void _Application::PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* FileName, VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT;
	InvokeHelper(0x1c0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Background, Append, Range, OutputFileName, From, To, Item, Copies, Pages, PageType, PrintToFile, Collate, FileName, ActivePrinterMacGX, ManualDuplexPrint, PrintZoomColumn, PrintZoomRow, PrintZoomPaperWidth, PrintZoomPaperHeight);
}

long _Application::GetAutomationSecurity()
{
	long result;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Application::SetAutomationSecurity(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Application::GetFileDialog(long FileDialogType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		FileDialogType);
	return result;
}

CString _Application::GetEmailTemplate()
{
	CString result;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Application::SetEmailTemplate(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Application::GetShowWindowsInTaskbar()
{
	BOOL result;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetShowWindowsInTaskbar(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetNewDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x1c6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetShowStartupDialog()
{
	BOOL result;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetShowStartupDialog(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetAutoCorrectEmail()
{
	LPDISPATCH result;
	InvokeHelper(0x1c8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetTaskPanes()
{
	LPDISPATCH result;
	InvokeHelper(0x1c9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Application::GetDefaultLegalBlackline()
{
	BOOL result;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Application::SetDefaultLegalBlackline(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Application::GetSmartTagRecognizers()
{
	LPDISPATCH result;
	InvokeHelper(0x1cc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetSmartTagTypes()
{
	LPDISPATCH result;
	InvokeHelper(0x1cd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Application::GetXMLNamespaces()
{
	LPDISPATCH result;
	InvokeHelper(0x1cf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Application::PutFocusInMailHeader()
{
	InvokeHelper(0x1d0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Application::GetArbitraryXMLSupportAvailable()
{
	BOOL result;
	InvokeHelper(0x1d1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Documents properties

/////////////////////////////////////////////////////////////////////////////
// Documents operations

LPUNKNOWN Documents::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Documents::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Documents::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::Item(VARIANT* Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

void Documents::Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void Documents::Save(VARIANT* NoPrompt, VARIANT* OriginalFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NoPrompt, OriginalFormat);
}

LPDISPATCH Documents::Add(VARIANT* Template, VARIANT* NewTemplate, VARIANT* DocumentType, VARIANT* Visible)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Template, NewTemplate, DocumentType, Visible);
	return result;
}

void Documents::CheckOut(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

BOOL Documents::CanCheckOut(LPCTSTR FileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileName);
	return result;
}

LPDISPATCH Documents::Open(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog, VARIANT* XMLTransform)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ConfirmConversions, ReadOnly, AddToRecentFiles, PasswordDocument, PasswordTemplate, Revert, WritePasswordDocument, WritePasswordTemplate, Format, Encoding, Visible, OpenAndRepair, DocumentDirection, NoEncodingDialog, 
		XMLTransform);
	return result;
}
/* word 2002*/
LPDISPATCH Documents::Open2002(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ConfirmConversions, ReadOnly, AddToRecentFiles, PasswordDocument, PasswordTemplate, Revert, WritePasswordDocument, WritePasswordTemplate, Format, Encoding, Visible, OpenAndRepair, DocumentDirection, NoEncodingDialog);
	return result;
}
/*word 97*/
LPDISPATCH Documents::Open97(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ConfirmConversions, ReadOnly, AddToRecentFiles, PasswordDocument, PasswordTemplate, Revert, WritePasswordDocument, WritePasswordTemplate, Format);
	return result;
}
/////////////////////////////////////////////////////////////////////////////
// _Document properties

/////////////////////////////////////////////////////////////////////////////
// _Document operations

CString _Document::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBuiltInDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCustomDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetPath()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetType()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetAutoHyphenation()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetAutoHyphenation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetHyphenateCaps()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetHyphenateCaps(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetHyphenationZone()
{
	long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetHyphenationZone(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetConsecutiveHyphensLimit()
{
	long result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetConsecutiveHyphensLimit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfFigures()
{
	LPDISPATCH result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetVariables()
{
	LPDISPATCH result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetMailMerge()
{
	LPDISPATCH result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEnvelope()
{
	LPDISPATCH result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetFullName()
{
	CString result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetRevisions()
{
	LPDISPATCH result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfContents()
{
	LPDISPATCH result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfAuthorities()
{
	LPDISPATCH result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetHasRoutingSlip()
{
	BOOL result;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetHasRoutingSlip(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetRoutingSlip()
{
	LPDISPATCH result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetRouted()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfAuthoritiesCategories()
{
	LPDISPATCH result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetIndexes()
{
	LPDISPATCH result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetSaved()
{
	BOOL result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaved(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetContent()
{
	LPDISPATCH result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetKind()
{
	long result;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetKind(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetReadOnly()
{
	BOOL result;
	InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSubdocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetIsMasterDocument()
{
	BOOL result;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

float _Document::GetDefaultTabStop()
{
	float result;
	InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetDefaultTabStop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x30, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Document::GetEmbedTrueTypeFonts()
{
	BOOL result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEmbedTrueTypeFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x32, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSaveFormsData()
{
	BOOL result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveFormsData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x33, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetReadOnlyRecommended()
{
	BOOL result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetReadOnlyRecommended(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSaveSubsetFonts()
{
	BOOL result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveSubsetFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetCompatibility(long Type)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		Type);
	return result;
}

void _Document::SetCompatibility(long Type, BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x37, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Type, bNewValue);
}

LPDISPATCH _Document::GetStoryRanges()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetIsSubdocument()
{
	BOOL result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _Document::GetSaveFormat()
{
	long result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Document::GetProtectionType()
{
	long result;
	InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetListTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x3f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetLists()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetUpdateStylesOnOpen()
{
	BOOL result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetUpdateStylesOnOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _Document::GetAttachedTemplate()
{
	VARIANT result;
	InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Document::SetAttachedTemplate(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x43, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetBackground(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x45, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Document::GetGrammarChecked()
{
	BOOL result;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetGrammarChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x46, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSpellingChecked()
{
	BOOL result;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSpellingChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x47, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetShowGrammaticalErrors()
{
	BOOL result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowGrammaticalErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetShowSpellingErrors()
{
	BOOL result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowSpellingErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetVersions()
{
	LPDISPATCH result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetShowSummary()
{
	BOOL result;
	InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowSummary(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetSummaryViewMode()
{
	long result;
	InvokeHelper(0x4d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetSummaryViewMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetSummaryLength()
{
	long result;
	InvokeHelper(0x4e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetSummaryLength(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetPrintFractionalWidths()
{
	BOOL result;
	InvokeHelper(0x4f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintFractionalWidths(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetPrintPostScriptOverText()
{
	BOOL result;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintPostScriptOverText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetPrintFormsData()
{
	BOOL result;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintFormsData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetListParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x54, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetPassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x55, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Document::SetWritePassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x56, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Document::GetHasPassword()
{
	BOOL result;
	InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetWriteReserved()
{
	BOOL result;
	InvokeHelper(0x58, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Document::GetActiveWritingStyle(VARIANT* LanguageID)
{
	CString result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x5a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		LanguageID);
	return result;
}

void _Document::SetActiveWritingStyle(VARIANT* LanguageID, LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BSTR;
	InvokeHelper(0x5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 LanguageID, lpszNewValue);
}

BOOL _Document::GetUserControl()
{
	BOOL result;
	InvokeHelper(0x5c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetUserControl(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetHasMailer()
{
	BOOL result;
	InvokeHelper(0x5d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetHasMailer(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetMailer()
{
	LPDISPATCH result;
	InvokeHelper(0x5e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetReadabilityStatistics()
{
	LPDISPATCH result;
	InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetGrammaticalErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x61, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSpellingErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x62, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetVBProject()
{
	LPDISPATCH result;
	InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetFormsDesign()
{
	BOOL result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Document::Get_CodeName()
{
	CString result;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::Set_CodeName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Document::GetCodeName()
{
	CString result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetSnapToGrid()
{
	BOOL result;
	InvokeHelper(0x12c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSnapToGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSnapToShapes()
{
	BOOL result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSnapToShapes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float _Document::GetGridDistanceHorizontal()
{
	float result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridDistanceHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridDistanceVertical()
{
	float result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridDistanceVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridOriginHorizontal()
{
	float result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridOriginVertical()
{
	float result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Document::GetGridSpaceBetweenHorizontalLines()
{
	long result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridSpaceBetweenHorizontalLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetGridSpaceBetweenVerticalLines()
{
	long result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridSpaceBetweenVerticalLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x133, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetGridOriginFromMargin()
{
	BOOL result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginFromMargin(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x134, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetKerningByAlgorithm()
{
	BOOL result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetKerningByAlgorithm(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetJustificationMode()
{
	long result;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetJustificationMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetFarEastLineBreakLevel()
{
	long result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFarEastLineBreakLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _Document::GetNoLineBreakBefore()
{
	CString result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetNoLineBreakBefore(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Document::GetNoLineBreakAfter()
{
	CString result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetNoLineBreakAfter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Document::GetTrackRevisions()
{
	BOOL result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetTrackRevisions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetPrintRevisions()
{
	BOOL result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintRevisions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetShowRevisions()
{
	BOOL result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowRevisions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void _Document::Repaginate()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::FitToPages()
{
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ManualHyphenation()
{
	InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DataForm()
{
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Route()
{
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Save()
{
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SendMail()
{
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::Range(VARIANT* Start, VARIANT* End)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7d0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, End);
	return result;
}

void _Document::RunAutoMacro(long Which)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Which);
}

void _Document::Activate()
{
	InvokeHelper(0x71, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::PrintPreview()
{
	InvokeHelper(0x72, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

BOOL _Document::Undo(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

BOOL _Document::Redo(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

long _Document::ComputeStatistics(long Statistic, VARIANT* IncludeFootnotesAndEndnotes)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Statistic, IncludeFootnotesAndEndnotes);
	return result;
}

void _Document::MakeCompatibilityDefault()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Unprotect(VARIANT* Password)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Password);
}

void _Document::EditionOptions(long Type, long Option, LPCTSTR Name, VARIANT* Format)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, Option, Name, Format);
}

void _Document::RunLetterWizard(VARIANT* LetterContent, VARIANT* WizardMode)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LetterContent, WizardMode);
}

LPDISPATCH _Document::GetLetterContent()
{
	LPDISPATCH result;
	InvokeHelper(0x7c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetLetterContent(VARIANT* LetterContent)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LetterContent);
}

void _Document::CopyStylesFromTemplate(LPCTSTR Template)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Template);
}

void _Document::UpdateStyles()
{
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckGrammar()
{
	InvokeHelper(0x83, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x84, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CustomDictionary, IgnoreUppercase, AlwaysSuggest, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
}

void _Document::FollowHyperlink(VARIANT* Address, VARIANT* SubAddress, VARIANT* NewWindow, VARIANT* AddHistory, VARIANT* ExtraInfo, VARIANT* Method, VARIANT* HeaderInfo)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x87, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, SubAddress, NewWindow, AddHistory, ExtraInfo, Method, HeaderInfo);
}

void _Document::AddToFavorites()
{
	InvokeHelper(0x88, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Reload()
{
	InvokeHelper(0x89, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::AutoSummarize(VARIANT* Length, VARIANT* Mode, VARIANT* UpdateProperties)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x8a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Length, Mode, UpdateProperties);
	return result;
}

void _Document::RemoveNumbers(VARIANT* NumberType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumberType);
}

void _Document::ConvertNumbersToText(VARIANT* NumberType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumberType);
}

long _Document::CountNumberedItems(VARIANT* NumberType, VARIANT* Level)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x8e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		NumberType, Level);
	return result;
}

void _Document::Post()
{
	InvokeHelper(0x8f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ToggleFormsDesign()
{
	InvokeHelper(0x90, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::UpdateSummaryProperties()
{
	InvokeHelper(0x92, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT _Document::GetCrossReferenceItems(VARIANT* ReferenceType)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x93, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		ReferenceType);
	return result;
}

void _Document::AutoFormat()
{
	InvokeHelper(0x94, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ViewCode()
{
	InvokeHelper(0x95, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ViewPropertyBrowser()
{
	InvokeHelper(0x96, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ForwardMailer()
{
	InvokeHelper(0xfa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Reply()
{
	InvokeHelper(0xfb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ReplyAll()
{
	InvokeHelper(0xfc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SendMailer(VARIANT* FileFormat, VARIANT* Priority)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xfd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileFormat, Priority);
}

void _Document::UndoClear()
{
	InvokeHelper(0xfe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::PresentIt()
{
	InvokeHelper(0xff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SendFax(LPCTSTR Address, VARIANT* Subject)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x100, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, Subject);
}

void _Document::ClosePrintPreview()
{
	InvokeHelper(0x102, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckConsistency()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::CreateLetterContent(LPCTSTR DateFormat, BOOL IncludeHeaderFooter, LPCTSTR PageDesign, long LetterStyle, BOOL Letterhead, long LetterheadLocation, float LetterheadSize, LPCTSTR RecipientName, LPCTSTR RecipientAddress, 
		LPCTSTR Salutation, long SalutationType, LPCTSTR RecipientReference, LPCTSTR MailingInstructions, LPCTSTR AttentionLine, LPCTSTR Subject, LPCTSTR CCList, LPCTSTR ReturnAddress, LPCTSTR SenderName, LPCTSTR Closing, LPCTSTR SenderCompany, 
		LPCTSTR SenderJobTitle, LPCTSTR SenderInitials, long EnclosureNumber, VARIANT* InfoBlock, VARIANT* RecipientCode, VARIANT* RecipientGender, VARIANT* ReturnAddressShortForm, VARIANT* SenderCity, VARIANT* SenderCode, VARIANT* SenderGender, 
		VARIANT* SenderReference)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BSTR VTS_I4 VTS_BOOL VTS_I4 VTS_R4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x104, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DateFormat, IncludeHeaderFooter, PageDesign, LetterStyle, Letterhead, LetterheadLocation, LetterheadSize, RecipientName, RecipientAddress, Salutation, SalutationType, RecipientReference, MailingInstructions, AttentionLine, Subject, 
		CCList, ReturnAddress, SenderName, Closing, SenderCompany, SenderJobTitle, SenderInitials, EnclosureNumber, InfoBlock, RecipientCode, RecipientGender, ReturnAddressShortForm, SenderCity, SenderCode, SenderGender, SenderReference);
	return result;
}

void _Document::AcceptAllRevisions()
{
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RejectAllRevisions()
{
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DetectLanguage()
{
	InvokeHelper(0x97, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ApplyTheme(LPCTSTR Name)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name);
}

void _Document::RemoveTheme()
{
	InvokeHelper(0x143, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::WebPagePreview()
{
	InvokeHelper(0x145, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ReloadAs(long Encoding)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Encoding);
}

CString _Document::GetActiveTheme()
{
	CString result;
	InvokeHelper(0x21c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Document::GetActiveThemeDisplayName()
{
	CString result;
	InvokeHelper(0x21d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEmail()
{
	LPDISPATCH result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetScripts()
{
	LPDISPATCH result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetFarEastLineBreakLanguage()
{
	long result;
	InvokeHelper(0x146, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFarEastLineBreakLanguage(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetFrameset()
{
	LPDISPATCH result;
	InvokeHelper(0x147, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Document::GetClickAndTypeParagraphStyle()
{
	VARIANT result;
	InvokeHelper(0x148, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Document::SetClickAndTypeParagraphStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x148, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetHTMLProject()
{
	LPDISPATCH result;
	InvokeHelper(0x149, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x14a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetOpenEncoding()
{
	long result;
	InvokeHelper(0x14c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Document::GetSaveEncoding()
{
	long result;
	InvokeHelper(0x14d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetOptimizeForWord97()
{
	BOOL result;
	InvokeHelper(0x14e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetOptimizeForWord97(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetVBASigned()
{
	BOOL result;
	InvokeHelper(0x14f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::ConvertVietDoc(long CodePageOrigin)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1bf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CodePageOrigin);
}

void _Document::PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1be, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Background, Append, Range, OutputFileName, From, To, Item, Copies, Pages, PageType, PrintToFile, Collate, ActivePrinterMacGX, ManualDuplexPrint, PrintZoomColumn, PrintZoomRow, PrintZoomPaperWidth, PrintZoomPaperHeight);
}

LPDISPATCH _Document::GetMailEnvelope()
{
	LPDISPATCH result;
	InvokeHelper(0x150, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetDisableFeatures()
{
	BOOL result;
	InvokeHelper(0x151, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetDisableFeatures(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x151, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetDoNotEmbedSystemFonts()
{
	BOOL result;
	InvokeHelper(0x152, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetDoNotEmbedSystemFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x152, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetSignatures()
{
	LPDISPATCH result;
	InvokeHelper(0x153, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetDefaultTargetFrame()
{
	CString result;
	InvokeHelper(0x154, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetDefaultTargetFrame(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x154, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Document::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x156, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetDisableFeaturesIntroducedAfter()
{
	long result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetDisableFeaturesIntroducedAfter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetRemovePersonalInformation()
{
	BOOL result;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetRemovePersonalInformation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetSmartTags()
{
	LPDISPATCH result;
	InvokeHelper(0x15a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::CheckIn(BOOL SaveChanges, VARIANT* Comments, BOOL MakePublic)
{
	static BYTE parms[] =
		VTS_BOOL VTS_PVARIANT VTS_BOOL;
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, Comments, MakePublic);
}

BOOL _Document::CanCheckin()
{
	BOOL result;
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::Merge(LPCTSTR FileName, VARIANT* MergeTarget, VARIANT* DetectFormatChanges, VARIANT* UseFormattingFrom, VARIANT* AddToRecentFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x16a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, MergeTarget, DetectFormatChanges, UseFormattingFrom, AddToRecentFiles);
}

BOOL _Document::GetEmbedSmartTags()
{
	BOOL result;
	InvokeHelper(0x15b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEmbedSmartTags(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSmartTagsAsXMLProps()
{
	BOOL result;
	InvokeHelper(0x15c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSmartTagsAsXMLProps(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetTextEncoding()
{
	long result;
	InvokeHelper(0x165, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetTextEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x165, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetTextLineEnding()
{
	long result;
	InvokeHelper(0x166, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetTextLineEnding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x166, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Document::SendForReview(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage, VARIANT* IncludeAttachment)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x161, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Recipients, Subject, ShowMessage, IncludeAttachment);
}

void _Document::ReplyWithChanges(VARIANT* ShowMessage)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShowMessage);
}

void _Document::EndReview()
{
	InvokeHelper(0x164, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GetStyleSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x168, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Document::GetDefaultTableStyle()
{
	VARIANT result;
	InvokeHelper(0x16d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString _Document::GetPasswordEncryptionProvider()
{
	CString result;
	InvokeHelper(0x16f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Document::GetPasswordEncryptionAlgorithm()
{
	CString result;
	InvokeHelper(0x170, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Document::GetPasswordEncryptionKeyLength()
{
	long result;
	InvokeHelper(0x171, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetPasswordEncryptionFileProperties()
{
	BOOL result;
	InvokeHelper(0x172, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, VARIANT* PasswordEncryptionFileProperties)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x169, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PasswordEncryptionProvider, PasswordEncryptionAlgorithm, PasswordEncryptionKeyLength, PasswordEncryptionFileProperties);
}

void _Document::RecheckSmartTags()
{
	InvokeHelper(0x16b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RemoveSmartTags()
{
	InvokeHelper(0x16c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SetDefaultTableStyle(VARIANT* Style, BOOL SetInTemplate)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BOOL;
	InvokeHelper(0x16e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, SetInTemplate);
}

void _Document::DeleteAllComments()
{
	InvokeHelper(0x173, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::AcceptAllRevisionsShown()
{
	InvokeHelper(0x174, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RejectAllRevisionsShown()
{
	InvokeHelper(0x175, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DeleteAllCommentsShown()
{
	InvokeHelper(0x176, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ResetFormFields()
{
	InvokeHelper(0x177, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SaveAs(VARIANT* FileName, VARIANT* FileFormat, VARIANT* LockComments, VARIANT* Password, VARIANT* AddToRecentFiles, VARIANT* WritePassword, VARIANT* ReadOnlyRecommended, VARIANT* EmbedTrueTypeFonts, VARIANT* SaveNativePictureFormat, 
		VARIANT* SaveFormsData, VARIANT* SaveAsAOCELetter, VARIANT* Encoding, VARIANT* InsertLineBreaks, VARIANT* AllowSubstitutions, VARIANT* LineEnding, VARIANT* AddBiDiMarks)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x178, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FileFormat, LockComments, Password, AddToRecentFiles, WritePassword, ReadOnlyRecommended, EmbedTrueTypeFonts, SaveNativePictureFormat, SaveFormsData, SaveAsAOCELetter, Encoding, InsertLineBreaks, AllowSubstitutions, LineEnding, 
		AddBiDiMarks);
}

BOOL _Document::GetEmbedLinguisticData()
{
	BOOL result;
	InvokeHelper(0x179, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEmbedLinguisticData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x179, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowFont()
{
	BOOL result;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowFont(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowClear()
{
	BOOL result;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowClear(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowParagraph()
{
	BOOL result;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowParagraph(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowNumbering()
{
	BOOL result;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowNumbering(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetFormattingShowFilter()
{
	long result;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowFilter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Document::CheckNewSmartTags()
{
	InvokeHelper(0x17a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GetPermission()
{
	LPDISPATCH result;
	InvokeHelper(0x1c5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetXMLNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x1cc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetXMLSchemaReferences()
{
	LPDISPATCH result;
	InvokeHelper(0x1cd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSmartDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x1ce, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSharedWorkspace()
{
	LPDISPATCH result;
	InvokeHelper(0x1cf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSync()
{
	LPDISPATCH result;
	InvokeHelper(0x1d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetEnforceStyle()
{
	BOOL result;
	InvokeHelper(0x1d7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEnforceStyle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetAutoFormatOverride()
{
	BOOL result;
	InvokeHelper(0x1d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetAutoFormatOverride(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLSaveDataOnly()
{
	BOOL result;
	InvokeHelper(0x1d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLSaveDataOnly(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLHideNamespaces()
{
	BOOL result;
	InvokeHelper(0x1dd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLHideNamespaces(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLShowAdvancedErrors()
{
	BOOL result;
	InvokeHelper(0x1de, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLShowAdvancedErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLUseXSLTWhenSaving()
{
	BOOL result;
	InvokeHelper(0x1da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLUseXSLTWhenSaving(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Document::GetXMLSaveThroughXSLT()
{
	CString result;
	InvokeHelper(0x1db, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLSaveThroughXSLT(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Document::GetDocumentLibraryVersions()
{
	LPDISPATCH result;
	InvokeHelper(0x1dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetReadingModeLayoutFrozen()
{
	BOOL result;
	InvokeHelper(0x1e1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingModeLayoutFrozen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetRemoveDateAndTime()
{
	BOOL result;
	InvokeHelper(0x1e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetRemoveDateAndTime(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::SendFaxOverInternet(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1d0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Recipients, Subject, ShowMessage);
}

void _Document::TransformDocument(LPCTSTR Path, BOOL DataOnly)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1f4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path, DataOnly);
}

void _Document::Protect(long Type, VARIANT* NoReset, VARIANT* Password, VARIANT* UseIRM, VARIANT* EnforceStyleLock)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, NoReset, Password, UseIRM, EnforceStyleLock);
}

void _Document::SelectAllEditableRanges(VARIANT* EditorID)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x1d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 EditorID);
}

void _Document::DeleteAllEditableRanges(VARIANT* EditorID)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x1d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 EditorID);
}

void _Document::DeleteAllInkAnnotations()
{
	InvokeHelper(0x1df, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Compare(LPCTSTR Name, VARIANT* AuthorName, VARIANT* CompareTarget, VARIANT* DetectFormatChanges, VARIANT* IgnoreAllComparisonWarnings, VARIANT* AddToRecentFiles, VARIANT* RemovePersonalInformation, VARIANT* RemoveDateAndTime)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, AuthorName, CompareTarget, DetectFormatChanges, IgnoreAllComparisonWarnings, AddToRecentFiles, RemovePersonalInformation, RemoveDateAndTime);
}

void _Document::RemoveLockedStyles()
{
	InvokeHelper(0x1e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GetChildNodeSuggestions()
{
	LPDISPATCH result;
	InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::SelectSingleNode(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1e8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, PrefixMapping, FastSearchSkippingTextNodes);
	return result;
}

LPDISPATCH _Document::SelectNodes(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1e9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, PrefixMapping, FastSearchSkippingTextNodes);
	return result;
}

LPDISPATCH _Document::GetXMLSchemaViolations()
{
	LPDISPATCH result;
	InvokeHelper(0x1ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetReadingLayoutSizeX()
{
	long result;
	InvokeHelper(0x1eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingLayoutSizeX(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetReadingLayoutSizeY()
{
	long result;
	InvokeHelper(0x1ec, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingLayoutSizeY(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Selection properties

/////////////////////////////////////////////////////////////////////////////
// Selection operations

CString Selection::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Selection::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Selection::GetFormattedText()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetFormattedText(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Selection::GetStart()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetEnd()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Selection::GetType()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetStoryType()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Selection::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Selection::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetParagraphFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Selection::GetStoryLength()
{
	long result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetLanguageID()
{
	long result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetLanguageIDFarEast()
{
	long result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageIDFarEast(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetLanguageIDOther()
{
	long result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageIDOther(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetHeaderFooter()
{
	LPDISPATCH result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetIsEndOfRowMark()
{
	BOOL result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Selection::GetBookmarkID()
{
	long result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetPreviousBookmarkID()
{
	long result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFind()
{
	LPDISPATCH result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Selection::GetInformation(long Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Type);
	return result;
}

long Selection::GetFlags()
{
	long result;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetFlags(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Selection::GetActive()
{
	BOOL result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetStartIsActive()
{
	BOOL result;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetStartIsActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Selection::GetIPAtEndOfLine()
{
	BOOL result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetExtendMode()
{
	BOOL result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetExtendMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Selection::GetColumnSelectMode()
{
	BOOL result;
	InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetColumnSelectMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Selection::GetOrientation()
{
	long result;
	InvokeHelper(0x19a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Selection::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetShapeRange()
{
	LPDISPATCH result;
	InvokeHelper(0x3ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SetRange(long Start, long End)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Start, End);
}

void Selection::Collapse(VARIANT* Direction)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void Selection::InsertBefore(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void Selection::InsertAfter(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

LPDISPATCH Selection::Next(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

LPDISPATCH Selection::Previous(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::StartOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::EndOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::Move(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveStart(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveEnd(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveStartWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveEndWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveStartUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveEndUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

void Selection::Cut()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Copy()
{
	InvokeHelper(0x78, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Paste()
{
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertBreak(VARIANT* Type)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void Selection::InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, Range, ConfirmConversions, Link, Attachment);
}

BOOL Selection::InStory(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

BOOL Selection::InRange(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

long Selection::Delete(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::Expand(VARIANT* Unit)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit);
	return result;
}

void Selection::InsertParagraph()
{
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertParagraphAfter()
{
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CharacterNumber, Font, Unicode, Bias);
}

void Selection::CopyAsPicture()
{
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SortAscending()
{
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SortDescending()
{
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Selection::IsEqual(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

float Selection::Calculate()
{
	float result;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

LPDISPATCH Selection::GoToNext(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

LPDISPATCH Selection::GoToPrevious(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

void Selection::PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IconIndex, Link, Placement, DisplayAsIcon, DataType, IconFileName, IconLabel);
}

LPDISPATCH Selection::PreviousField()
{
	LPDISPATCH result;
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::NextField()
{
	LPDISPATCH result;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::InsertParagraphBefore()
{
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertCells(VARIANT* ShiftCells)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xd6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShiftCells);
}

void Selection::Extend(VARIANT* Character)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x12c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Character);
}

void Selection::Shrink()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Selection::MoveLeft(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveRight(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveUp(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveDown(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::HomeKey(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::EndKey(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

void Selection::EscapeKey()
{
	InvokeHelper(0x1fa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeText(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1fb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void Selection::CopyFormat()
{
	InvokeHelper(0x1fd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteFormat()
{
	InvokeHelper(0x1fe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeParagraph()
{
	InvokeHelper(0x200, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeBackspace()
{
	InvokeHelper(0x201, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::NextSubdocument()
{
	InvokeHelper(0x202, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PreviousSubdocument()
{
	InvokeHelper(0x203, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectColumn()
{
	InvokeHelper(0x204, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentFont()
{
	InvokeHelper(0x205, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentAlignment()
{
	InvokeHelper(0x206, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentSpacing()
{
	InvokeHelper(0x207, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentIndent()
{
	InvokeHelper(0x208, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentTabs()
{
	InvokeHelper(0x209, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentColor()
{
	InvokeHelper(0x20a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::CreateTextbox()
{
	InvokeHelper(0x20b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::WholeStory()
{
	InvokeHelper(0x20c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectRow()
{
	InvokeHelper(0x20d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SplitTable()
{
	InvokeHelper(0x20e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRows(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x210, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::InsertColumns()
{
	InvokeHelper(0x211, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertFormula(VARIANT* Formula, VARIANT* NumberFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x212, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Formula, NumberFormat);
}

LPDISPATCH Selection::NextRevision(VARIANT* Wrap)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x213, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Wrap);
	return result;
}

LPDISPATCH Selection::PreviousRevision(VARIANT* Wrap)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x214, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Wrap);
	return result;
}

void Selection::PasteAsNestedTable()
{
	InvokeHelper(0x215, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Selection::CreateAutoTextEntry(LPCTSTR Name, LPCTSTR StyleName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x216, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name, StyleName);
	return result;
}

void Selection::DetectLanguage()
{
	InvokeHelper(0x217, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCell()
{
	InvokeHelper(0x218, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRowsBelow(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x219, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::InsertColumnsRight()
{
	InvokeHelper(0x21a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRowsAbove(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x21b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::RtlRun()
{
	InvokeHelper(0x258, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::LtrRun()
{
	InvokeHelper(0x259, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::BoldRun()
{
	InvokeHelper(0x25a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ItalicRun()
{
	InvokeHelper(0x25b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::RtlPara()
{
	InvokeHelper(0x25d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::LtrPara()
{
	InvokeHelper(0x25e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DateTimeFormat, InsertAsField, InsertAsFullWidth, DateLanguage, CalendarType);
}

LPDISPATCH Selection::ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1c9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NumRows, NumColumns, InitialColumnWidth, Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit, AutoFitBehavior, DefaultTableBehavior);
	return result;
}

LPDISPATCH Selection::ConvertToTable97(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NumRows, NumColumns, InitialColumnWidth, Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit);
	return result;
}
long Selection::GetNoProofing()
{
	long result;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetNoProofing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetTopLevelTables()
{
	LPDISPATCH result;
	InvokeHelper(0x3ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Selection::GetFitTextWidth()
{
	float result;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Selection::SetFitTextWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void Selection::ClearFormatting()
{
	InvokeHelper(0x3f1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteAppendTable()
{
	InvokeHelper(0x3f2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Selection::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x3f3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSmartTags()
{
	LPDISPATCH result;
	InvokeHelper(0x3f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetChildShapeRange()
{
	LPDISPATCH result;
	InvokeHelper(0x3fd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetHasChildShapeRange()
{
	BOOL result;
	InvokeHelper(0x3fe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFootnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x400, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetEndnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x401, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::ToggleCharacterCode()
{
	InvokeHelper(0x3f4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteAndFormat(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void Selection::PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF)
{
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x3f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LinkedToExcel, WordFormatting, RTF);
}

void Selection::ShrinkDiscontiguousSelection()
{
	InvokeHelper(0x3fb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertStyleSeparator()
{
	InvokeHelper(0x3fc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID, VARIANT* SubFieldNumber, 
		VARIANT* SubFieldNumber2, VARIANT* SubFieldNumber3)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x3ff, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, SortColumn, Separator, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, 
		IgnoreHe, LanguageID, SubFieldNumber, SubFieldNumber2, SubFieldNumber3);
}

LPDISPATCH Selection::GetXMLNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetXMLParentNode()
{
	LPDISPATCH result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetEditors()
{
	LPDISPATCH result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Selection::GetXml(BOOL DataOnly)
{
	CString result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		DataOnly);
	return result;
}

VARIANT Selection::GetEnhMetaFileBits()
{
	VARIANT result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GoToEditableRange(VARIANT* EditorID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x403, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditorID);
	return result;
}

void Selection::InsertXML(LPCTSTR XML, VARIANT* Transform)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x404, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 XML, Transform);
}

void Selection::InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Label, Title, TitleAutoText, Position, ExcludeLabel);
}

void Selection::InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ReferenceType, ReferenceKind, ReferenceItem, InsertAsHyperlink, IncludePosition, SeparateNumbers, SeparatorString);
}


/////////////////////////////////////////////////////////////////////////////
// Paragraphs properties

/////////////////////////////////////////////////////////////////////////////
// Paragraphs operations

LPUNKNOWN Paragraphs::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Paragraphs::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraphs::GetFirst()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraphs::GetLast()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraphs::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Paragraphs::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraphs::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraphs::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Paragraphs::GetTabStops()
{
	LPDISPATCH result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetTabStops(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Paragraphs::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT Paragraphs::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraphs::GetAlignment()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetKeepTogether()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetKeepTogether(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetKeepWithNext()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetKeepWithNext(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetPageBreakBefore()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetPageBreakBefore(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetNoLineNumber()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetNoLineNumber(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Paragraphs::GetRightIndent()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetLeftIndent()
{
	float result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetFirstLineIndent()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetLineSpacing()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetLineSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraphs::GetLineSpacingRule()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetLineSpacingRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Paragraphs::GetSpaceBefore()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetSpaceBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetSpaceAfter()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetSpaceAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraphs::GetHyphenation()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetHyphenation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetWidowControl()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetWidowControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Paragraphs::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Paragraphs::GetFarEastLineBreakControl()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetFarEastLineBreakControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetWordWrap()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetHangingPunctuation()
{
	long result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetHangingPunctuation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetHalfWidthPunctuationOnTopOfLine()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetHalfWidthPunctuationOnTopOfLine(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetAddSpaceBetweenFarEastAndAlpha()
{
	long result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetAddSpaceBetweenFarEastAndAlpha(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetAddSpaceBetweenFarEastAndDigit()
{
	long result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetAddSpaceBetweenFarEastAndDigit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetBaseLineAlignment()
{
	long result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetBaseLineAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetAutoAdjustRightIndent()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetAutoAdjustRightIndent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetDisableLineHeightGrid()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetDisableLineHeightGrid(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetOutlineLevel()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetOutlineLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Paragraphs::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Paragraphs::Add(VARIANT* Range)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Range);
	return result;
}

void Paragraphs::CloseUp()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::OpenUp()
{
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::OpenOrCloseUp()
{
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::TabHangingIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraphs::TabIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraphs::Reset()
{
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::Space1()
{
	InvokeHelper(0x139, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::Space15()
{
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::Space2()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::IndentCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraphs::IndentFirstLineCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraphs::OutlinePromote()
{
	InvokeHelper(0x144, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::OutlineDemote()
{
	InvokeHelper(0x145, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::OutlineDemoteToBody()
{
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::Indent()
{
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::Outdent()
{
	InvokeHelper(0x14e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float Paragraphs::GetCharacterUnitRightIndent()
{
	float result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetCharacterUnitRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetCharacterUnitLeftIndent()
{
	float result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetCharacterUnitLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetCharacterUnitFirstLineIndent()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetCharacterUnitFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetLineUnitBefore()
{
	float result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetLineUnitBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x81, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraphs::GetLineUnitAfter()
{
	float result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetLineUnitAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraphs::GetReadingOrder()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetSpaceBeforeAuto()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetSpaceBeforeAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraphs::GetSpaceAfterAuto()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraphs::SetSpaceAfterAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Paragraphs::IncreaseSpacing()
{
	InvokeHelper(0x14f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraphs::DecreaseSpacing()
{
	InvokeHelper(0x150, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Paragraph properties

/////////////////////////////////////////////////////////////////////////////
// Paragraph operations

LPDISPATCH Paragraph::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraph::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Paragraph::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraph::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Paragraph::GetFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraph::SetFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Paragraph::GetTabStops()
{
	LPDISPATCH result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraph::SetTabStops(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Paragraph::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Paragraph::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Paragraph::GetDropCap()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Paragraph::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Paragraph::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraph::GetAlignment()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetKeepTogether()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetKeepTogether(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetKeepWithNext()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetKeepWithNext(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetPageBreakBefore()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetPageBreakBefore(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetNoLineNumber()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetNoLineNumber(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Paragraph::GetRightIndent()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetLeftIndent()
{
	float result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetFirstLineIndent()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetLineSpacing()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetLineSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraph::GetLineSpacingRule()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetLineSpacingRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Paragraph::GetSpaceBefore()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetSpaceBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetSpaceAfter()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetSpaceAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraph::GetHyphenation()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetHyphenation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetWidowControl()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetWidowControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Paragraph::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Paragraph::GetFarEastLineBreakControl()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetFarEastLineBreakControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetWordWrap()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetHangingPunctuation()
{
	long result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetHangingPunctuation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetHalfWidthPunctuationOnTopOfLine()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetHalfWidthPunctuationOnTopOfLine(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetAddSpaceBetweenFarEastAndAlpha()
{
	long result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetAddSpaceBetweenFarEastAndAlpha(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetAddSpaceBetweenFarEastAndDigit()
{
	long result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetAddSpaceBetweenFarEastAndDigit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetBaseLineAlignment()
{
	long result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetBaseLineAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetAutoAdjustRightIndent()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetAutoAdjustRightIndent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetDisableLineHeightGrid()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetDisableLineHeightGrid(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetOutlineLevel()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetOutlineLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Paragraph::CloseUp()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::OpenUp()
{
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::OpenOrCloseUp()
{
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::TabHangingIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraph::TabIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraph::Reset()
{
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::Space1()
{
	InvokeHelper(0x139, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::Space15()
{
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::Space2()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::IndentCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void Paragraph::IndentFirstLineCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

LPDISPATCH Paragraph::Next(VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x144, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Count);
	return result;
}

LPDISPATCH Paragraph::Previous(VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x145, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Count);
	return result;
}

void Paragraph::OutlinePromote()
{
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::OutlineDemote()
{
	InvokeHelper(0x147, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::OutlineDemoteToBody()
{
	InvokeHelper(0x148, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::Indent()
{
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Paragraph::Outdent()
{
	InvokeHelper(0x14e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float Paragraph::GetCharacterUnitRightIndent()
{
	float result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetCharacterUnitRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetCharacterUnitLeftIndent()
{
	float result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetCharacterUnitLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetCharacterUnitFirstLineIndent()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetCharacterUnitFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetLineUnitBefore()
{
	float result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetLineUnitBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x81, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Paragraph::GetLineUnitAfter()
{
	float result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetLineUnitAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Paragraph::GetReadingOrder()
{
	long result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Paragraph::GetId()
{
	CString result;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Paragraph::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xcc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Paragraph::GetSpaceBeforeAuto()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetSpaceBeforeAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Paragraph::GetSpaceAfterAuto()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Paragraph::SetSpaceAfterAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Paragraph::GetIsStyleSeparator()
{
	BOOL result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Paragraph::SelectNumber()
{
	InvokeHelper(0x14f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Find properties

/////////////////////////////////////////////////////////////////////////////
// Find operations

LPDISPATCH Find::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Find::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Find::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Find::GetForward()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetForward(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Find::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Find::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Find::GetFound()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Find::GetMatchAllWordForms()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchAllWordForms(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchCase()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchCase(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchWildcards()
{
	BOOL result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchWildcards(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchSoundsLike()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchSoundsLike(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchWholeWord()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchWholeWord(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchFuzzy()
{
	BOOL result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchFuzzy(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchByte()
{
	BOOL result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchByte(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x29, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Find::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Find::SetParagraphFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT Find::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Find::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString Find::GetText()
{
	CString result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Find::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Find::GetLanguageID()
{
	long result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Find::GetHighlight()
{
	long result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetHighlight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Find::GetReplacement()
{
	LPDISPATCH result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Find::GetFrame()
{
	LPDISPATCH result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Find::GetWrap()
{
	long result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Find::GetFormat()
{
	BOOL result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetFormat(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Find::GetLanguageIDFarEast()
{
	long result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetLanguageIDFarEast(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Find::GetLanguageIDOther()
{
	long result;
	InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetLanguageIDOther(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Find::GetCorrectHangulEndings()
{
	BOOL result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetCorrectHangulEndings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void Find::ClearFormatting()
{
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Find::SetAllFuzzyOptions()
{
	InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Find::ClearAllFuzzyOptions()
{
	InvokeHelper(0x21, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Find::Execute(VARIANT* FindText, VARIANT* MatchCase, VARIANT* MatchWholeWord, VARIANT* MatchWildcards, VARIANT* MatchSoundsLike, VARIANT* MatchAllWordForms, VARIANT* Forward, VARIANT* Wrap, VARIANT* Format, VARIANT* ReplaceWith, 
		VARIANT* Replace, VARIANT* MatchKashida, VARIANT* MatchDiacritics, VARIANT* MatchAlefHamza, VARIANT* MatchControl)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FindText, MatchCase, MatchWholeWord, MatchWildcards, MatchSoundsLike, MatchAllWordForms, Forward, Wrap, Format, ReplaceWith, Replace, MatchKashida, MatchDiacritics, MatchAlefHamza, MatchControl);
	return result;
}
BOOL Find::Execute97(VARIANT* FindText, VARIANT* MatchCase, VARIANT* MatchWholeWord, VARIANT* MatchWildcards, VARIANT* MatchSoundsLike, VARIANT* MatchAllWordForms, VARIANT* Forward, VARIANT* Wrap, VARIANT* Format, VARIANT* ReplaceWith, 
		VARIANT* Replace)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FindText, MatchCase, MatchWholeWord, MatchWildcards, MatchSoundsLike, MatchAllWordForms, Forward, Wrap, Format, ReplaceWith, Replace);
	return result;
}

long Find::GetNoProofing()
{
	long result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Find::SetNoProofing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Find::GetMatchKashida()
{
	BOOL result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchKashida(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchDiacritics()
{
	BOOL result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchDiacritics(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchAlefHamza()
{
	BOOL result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchAlefHamza(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Find::GetMatchControl()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Find::SetMatchControl(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Tables properties

/////////////////////////////////////////////////////////////////////////////
// Tables operations

LPUNKNOWN Tables::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Tables::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Tables::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Tables::Add(LPDISPATCH Range, long NumRows, long NumColumns, VARIANT* DefaultTableBehavior, VARIANT* AutoFitBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Range, NumRows, NumColumns, DefaultTableBehavior, AutoFitBehavior);
	return result;
}

long Tables::GetNestingLevel()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Table properties

/////////////////////////////////////////////////////////////////////////////
// Table operations

LPDISPATCH Table::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Table::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Table::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Table::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Table::GetUniform()
{
	BOOL result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Table::GetAutoFormatType()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::Select()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::Delete()
{
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::SortAscending()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::SortDescending()
{
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::AutoFormat(VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit);
}

void Table::UpdateAutoFormat()
{
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Table::Cell(long Row, long Column)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Row, Column);
	return result;
}

LPDISPATCH Table::Split(VARIANT* BeforeRow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeRow);
	return result;
}

LPDISPATCH Table::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

void Table::AutoFitBehavior(long Behavior)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Behavior);
}

void Table::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, IgnoreHe, LanguageID);
}

LPDISPATCH Table::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Table::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Table::GetAllowPageBreaks()
{
	BOOL result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetAllowPageBreaks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetAllowAutoFit()
{
	BOOL result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetAllowAutoFit(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Table::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Table::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Table::GetTopPadding()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetTopPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetBottomPadding()
{
	float result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetBottomPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetLeftPadding()
{
	float result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetLeftPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetRightPadding()
{
	float result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetRightPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetSpacing()
{
	float result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Table::GetTableDirection()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::SetTableDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Table::GetId()
{
	CString result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Table::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

VARIANT Table::GetStyle()
{
	VARIANT result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Table::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Table::GetApplyStyleHeadingRows()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleHeadingRows(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleLastRow()
{
	BOOL result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleLastRow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleFirstColumn()
{
	BOOL result;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleFirstColumn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleLastColumn()
{
	BOOL result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleLastColumn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Cell properties

/////////////////////////////////////////////////////////////////////////////
// Cell operations

LPDISPATCH Cell::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetRowIndex()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Cell::GetColumnIndex()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Cell::GetWidth()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Cell::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Cell::GetVerticalAlignment()
{
	long result;
	InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetVerticalAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x450, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Cell::GetColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetRow()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Cell::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void Cell::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cell::Delete(VARIANT* ShiftCells)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShiftCells);
}

void Cell::Formula(VARIANT* Formula, VARIANT* NumFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Formula, NumFormat);
}

void Cell::SetWidth(float ColumnWidth, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ColumnWidth, RulerStyle);
}

void Cell::SetHeight(VARIANT* RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

void Cell::Merge(LPDISPATCH MergeTo)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 MergeTo);
}

void Cell::Split(VARIANT* NumRows, VARIANT* NumColumns)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows, NumColumns);
}

void Cell::AutoSum()
{
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Cell::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Cell::GetWordWrap()
{
	BOOL result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Cell::SetWordWrap(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Cell::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Cell::GetFitText()
{
	BOOL result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Cell::SetFitText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Cell::GetTopPadding()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetTopPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetBottomPadding()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetBottomPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetLeftPadding()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetLeftPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetRightPadding()
{
	float result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetRightPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString Cell::GetId()
{
	CString result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Cell::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Cell::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Rows properties

/////////////////////////////////////////////////////////////////////////////
// Rows operations

LPUNKNOWN Rows::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Rows::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Rows::GetAllowBreakAcrossPages()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAllowBreakAcrossPages(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetAlignment()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetHeadingFormat()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeadingFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetSpaceBetweenColumns()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetSpaceBetweenColumns(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Rows::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetLeftIndent()
{
	float result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Rows::GetFirst()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetLast()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Rows::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Rows::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Rows::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Rows::Add(VARIANT* BeforeRow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeRow);
	return result;
}

void Rows::Select()
{
	InvokeHelper(0xc7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Rows::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Rows::SetLeftIndent(float LeftIndent, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LeftIndent, RulerStyle);
}

void Rows::SetHeight(float RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

void Rows::DistributeHeight()
{
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Rows::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

long Rows::GetWrapAroundText()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetWrapAroundText(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetDistanceTop()
{
	float result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceBottom()
{
	float result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceBottom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceLeft()
{
	float result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceRight()
{
	float result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceRight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetHorizontalPosition()
{
	float result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetHorizontalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetVerticalPosition()
{
	float result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetVerticalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Rows::GetRelativeHorizontalPosition()
{
	long result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetRelativeHorizontalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetRelativeVerticalPosition()
{
	long result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetRelativeVerticalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetAllowOverlap()
{
	long result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAllowOverlap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetNestingLevel()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Rows::GetTableDirection()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetTableDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// _Font properties

/////////////////////////////////////////////////////////////////////////////
// _Font operations

LPDISPATCH _Font::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Font::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Font::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetBold()
{
	long result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetItalic()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetHidden()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetHidden(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSmallCaps()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSmallCaps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetAllCaps()
{
	long result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetAllCaps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetStrikeThrough()
{
	long result;
	InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetStrikeThrough(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetDoubleStrikeThrough()
{
	long result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetDoubleStrikeThrough(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetColorIndex()
{
	long result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSubscript()
{
	long result;
	InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSubscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSuperscript()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSuperscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetUnderline()
{
	long result;
	InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetUnderline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSize()
{
	float result;
	InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x8d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _Font::GetName()
{
	CString result;
	InvokeHelper(0x8e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Font::GetPosition()
{
	long result;
	InvokeHelper(0x8f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSpacing()
{
	float result;
	InvokeHelper(0x90, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x90, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Font::GetScaling()
{
	long result;
	InvokeHelper(0x91, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetScaling(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x91, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetShadow()
{
	long result;
	InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetShadow(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x92, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetOutline()
{
	long result;
	InvokeHelper(0x93, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetOutline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x93, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetEmboss()
{
	long result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEmboss(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x94, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetKerning()
{
	float result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetKerning(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x95, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Font::GetEngrave()
{
	long result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEngrave(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x96, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetAnimation()
{
	long result;
	InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetAnimation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Font::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetEmphasisMark()
{
	long result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEmphasisMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Font::GetDisableCharacterSpaceGrid()
{
	BOOL result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Font::SetDisableCharacterSpaceGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Font::GetNameFarEast()
{
	CString result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameFarEast(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Font::GetNameAscii()
{
	CString result;
	InvokeHelper(0x9d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameAscii(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Font::GetNameOther()
{
	CString result;
	InvokeHelper(0x9e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameOther(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Font::Grow()
{
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::Shrink()
{
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::Reset()
{
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::SetAsTemplateDefault()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Font::GetColor()
{
	long result;
	InvokeHelper(0x9f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetBoldBi()
{
	long result;
	InvokeHelper(0xa0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetBoldBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetItalicBi()
{
	long result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetItalicBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSizeBi()
{
	float result;
	InvokeHelper(0xa2, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSizeBi(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _Font::GetNameBi()
{
	CString result;
	InvokeHelper(0xa3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameBi(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Font::GetColorIndexBi()
{
	long result;
	InvokeHelper(0xa4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetColorIndexBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetDiacriticColor()
{
	long result;
	InvokeHelper(0xa5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetDiacriticColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetUnderlineColor()
{
	long result;
	InvokeHelper(0xa6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetUnderlineColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Options properties

/////////////////////////////////////////////////////////////////////////////
// Options operations

LPDISPATCH Options::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Options::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Options::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Options::GetAllowAccentedUppercase()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowAccentedUppercase(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetWPHelp()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetWPHelp(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetWPDocNavKeys()
{
	BOOL result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetWPDocNavKeys(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPagination()
{
	BOOL result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPagination(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetBlueScreen()
{
	BOOL result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetBlueScreen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetEnableSound()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetEnableSound(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetConfirmConversions()
{
	BOOL result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetConfirmConversions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetUpdateLinksAtOpen()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUpdateLinksAtOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSendMailAttach()
{
	BOOL result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSendMailAttach(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetMeasurementUnit()
{
	long result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetMeasurementUnit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetButtonFieldClicks()
{
	long result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetButtonFieldClicks(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetShortMenuNames()
{
	BOOL result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShortMenuNames(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetRTFInClipboard()
{
	BOOL result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetRTFInClipboard(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetUpdateFieldsAtPrint()
{
	BOOL result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUpdateFieldsAtPrint(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintProperties()
{
	BOOL result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintProperties(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintFieldCodes()
{
	BOOL result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintFieldCodes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintComments()
{
	BOOL result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintComments(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintHiddenText()
{
	BOOL result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintHiddenText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetEnvelopeFeederInstalled()
{
	BOOL result;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Options::GetUpdateLinksAtPrint()
{
	BOOL result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUpdateLinksAtPrint(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintBackground()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintBackground(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x25, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintDrawingObjects()
{
	BOOL result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintDrawingObjects(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Options::GetDefaultTray()
{
	CString result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultTray(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Options::GetDefaultTrayID()
{
	long result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultTrayID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetCreateBackup()
{
	BOOL result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCreateBackup(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x29, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAllowFastSave()
{
	BOOL result;
	InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowFastSave(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSavePropertiesPrompt()
{
	BOOL result;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSavePropertiesPrompt(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSaveNormalPrompt()
{
	BOOL result;
	InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSaveNormalPrompt(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetSaveInterval()
{
	long result;
	InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetSaveInterval(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetBackgroundSave()
{
	BOOL result;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetBackgroundSave(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetInsertedTextMark()
{
	long result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetInsertedTextMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x39, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetDeletedTextMark()
{
	long result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDeletedTextMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetRevisedLinesMark()
{
	long result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetRevisedLinesMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetInsertedTextColor()
{
	long result;
	InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetInsertedTextColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetDeletedTextColor()
{
	long result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDeletedTextColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetRevisedLinesColor()
{
	long result;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetRevisedLinesColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Options::GetDefaultFilePath(long Path)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

void Options::SetDefaultFilePath(long Path, LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x41, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Path, lpszNewValue);
}

BOOL Options::GetOvertype()
{
	BOOL result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetOvertype(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetReplaceSelection()
{
	BOOL result;
	InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetReplaceSelection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x43, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAllowDragAndDrop()
{
	BOOL result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowDragAndDrop(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoWordSelection()
{
	BOOL result;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoWordSelection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x45, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetINSKeyForPaste()
{
	BOOL result;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetINSKeyForPaste(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x46, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSmartCutPaste()
{
	BOOL result;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSmartCutPaste(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x47, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetTabIndentKey()
{
	BOOL result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetTabIndentKey(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Options::GetPictureEditor()
{
	CString result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Options::SetPictureEditor(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Options::GetAnimateScreenMovements()
{
	BOOL result;
	InvokeHelper(0x4a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAnimateScreenMovements(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetRevisedPropertiesMark()
{
	long result;
	InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetRevisedPropertiesMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetRevisedPropertiesColor()
{
	long result;
	InvokeHelper(0x4d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetRevisedPropertiesColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetSnapToGrid()
{
	BOOL result;
	InvokeHelper(0x4f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSnapToGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSnapToShapes()
{
	BOOL result;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSnapToShapes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Options::GetGridDistanceHorizontal()
{
	float result;
	InvokeHelper(0x51, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Options::SetGridDistanceHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x51, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Options::GetGridDistanceVertical()
{
	float result;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Options::SetGridDistanceVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Options::GetGridOriginHorizontal()
{
	float result;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Options::SetGridOriginHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Options::GetGridOriginVertical()
{
	float result;
	InvokeHelper(0x54, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Options::SetGridOriginVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x54, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Options::GetInlineConversion()
{
	BOOL result;
	InvokeHelper(0x56, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetInlineConversion(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x56, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetIMEAutomaticControl()
{
	BOOL result;
	InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetIMEAutomaticControl(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x57, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatApplyHeadings()
{
	BOOL result;
	InvokeHelper(0xfa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatApplyHeadings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatApplyLists()
{
	BOOL result;
	InvokeHelper(0xfb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatApplyLists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatApplyBulletedLists()
{
	BOOL result;
	InvokeHelper(0xfc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatApplyBulletedLists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatApplyOtherParas()
{
	BOOL result;
	InvokeHelper(0xfd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatApplyOtherParas(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceQuotes()
{
	BOOL result;
	InvokeHelper(0xfe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceQuotes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xfe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceSymbols()
{
	BOOL result;
	InvokeHelper(0xff, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceSymbols(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xff, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceOrdinals()
{
	BOOL result;
	InvokeHelper(0x100, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceOrdinals(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x100, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceFractions()
{
	BOOL result;
	InvokeHelper(0x101, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceFractions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x101, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplacePlainTextEmphasis()
{
	BOOL result;
	InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplacePlainTextEmphasis(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x102, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatPreserveStyles()
{
	BOOL result;
	InvokeHelper(0x103, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatPreserveStyles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x103, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyHeadings()
{
	BOOL result;
	InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyHeadings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x104, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyBorders()
{
	BOOL result;
	InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyBorders(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyBulletedLists()
{
	BOOL result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyBulletedLists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x106, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyNumberedLists()
{
	BOOL result;
	InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyNumberedLists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceQuotes()
{
	BOOL result;
	InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceQuotes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceSymbols()
{
	BOOL result;
	InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceSymbols(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceOrdinals()
{
	BOOL result;
	InvokeHelper(0x10a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceOrdinals(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceFractions()
{
	BOOL result;
	InvokeHelper(0x10b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceFractions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplacePlainTextEmphasis()
{
	BOOL result;
	InvokeHelper(0x10c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplacePlainTextEmphasis(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeFormatListItemBeginning()
{
	BOOL result;
	InvokeHelper(0x10d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeFormatListItemBeginning(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeDefineStyles()
{
	BOOL result;
	InvokeHelper(0x10e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeDefineStyles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatPlainTextWordMail()
{
	BOOL result;
	InvokeHelper(0x10f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatPlainTextWordMail(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceHyperlinks()
{
	BOOL result;
	InvokeHelper(0x110, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceHyperlinks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x110, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceHyperlinks()
{
	BOOL result;
	InvokeHelper(0x111, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceHyperlinks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x111, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDefaultHighlightColorIndex()
{
	long result;
	InvokeHelper(0x112, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultHighlightColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x112, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetDefaultBorderLineStyle()
{
	long result;
	InvokeHelper(0x113, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultBorderLineStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x113, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetCheckSpellingAsYouType()
{
	BOOL result;
	InvokeHelper(0x114, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCheckSpellingAsYouType(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x114, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetCheckGrammarAsYouType()
{
	BOOL result;
	InvokeHelper(0x115, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCheckGrammarAsYouType(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x115, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetIgnoreInternetAndFileAddresses()
{
	BOOL result;
	InvokeHelper(0x116, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetIgnoreInternetAndFileAddresses(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x116, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetShowReadabilityStatistics()
{
	BOOL result;
	InvokeHelper(0x117, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShowReadabilityStatistics(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x117, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetIgnoreUppercase()
{
	BOOL result;
	InvokeHelper(0x118, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetIgnoreUppercase(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x118, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetIgnoreMixedDigits()
{
	BOOL result;
	InvokeHelper(0x119, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetIgnoreMixedDigits(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x119, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSuggestFromMainDictionaryOnly()
{
	BOOL result;
	InvokeHelper(0x11a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSuggestFromMainDictionaryOnly(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSuggestSpellingCorrections()
{
	BOOL result;
	InvokeHelper(0x11b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSuggestSpellingCorrections(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDefaultBorderLineWidth()
{
	long result;
	InvokeHelper(0x11c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultBorderLineWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetCheckGrammarWithSpelling()
{
	BOOL result;
	InvokeHelper(0x11d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCheckGrammarWithSpelling(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDefaultOpenFormat()
{
	long result;
	InvokeHelper(0x11e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultOpenFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x11e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetPrintDraft()
{
	BOOL result;
	InvokeHelper(0x11f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintDraft(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintReverse()
{
	BOOL result;
	InvokeHelper(0x120, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintReverse(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x120, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMapPaperSize()
{
	BOOL result;
	InvokeHelper(0x121, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMapPaperSize(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x121, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyTables()
{
	BOOL result;
	InvokeHelper(0x122, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyTables(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x122, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatApplyFirstIndents()
{
	BOOL result;
	InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatApplyFirstIndents(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x123, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatMatchParentheses()
{
	BOOL result;
	InvokeHelper(0x126, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatMatchParentheses(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x126, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatReplaceFarEastDashes()
{
	BOOL result;
	InvokeHelper(0x127, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatReplaceFarEastDashes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x127, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatDeleteAutoSpaces()
{
	BOOL result;
	InvokeHelper(0x128, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatDeleteAutoSpaces(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x128, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyFirstIndents()
{
	BOOL result;
	InvokeHelper(0x129, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyFirstIndents(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x129, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyDates()
{
	BOOL result;
	InvokeHelper(0x12a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyDates(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeApplyClosings()
{
	BOOL result;
	InvokeHelper(0x12b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeApplyClosings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeMatchParentheses()
{
	BOOL result;
	InvokeHelper(0x12c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeMatchParentheses(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeReplaceFarEastDashes()
{
	BOOL result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeReplaceFarEastDashes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeDeleteAutoSpaces()
{
	BOOL result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeDeleteAutoSpaces(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeInsertClosings()
{
	BOOL result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeInsertClosings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeAutoLetterWizard()
{
	BOOL result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeAutoLetterWizard(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoFormatAsYouTypeInsertOvers()
{
	BOOL result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoFormatAsYouTypeInsertOvers(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetDisplayGridLines()
{
	BOOL result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetDisplayGridLines(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyCase()
{
	BOOL result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyCase(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyByte()
{
	BOOL result;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyByte(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyHiragana()
{
	BOOL result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyHiragana(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzySmallKana()
{
	BOOL result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzySmallKana(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyDash()
{
	BOOL result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyDash(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyIterationMark()
{
	BOOL result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyIterationMark(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyKanji()
{
	BOOL result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyKanji(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyOldKana()
{
	BOOL result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyOldKana(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyProlongedSoundMark()
{
	BOOL result;
	InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyProlongedSoundMark(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyDZ()
{
	BOOL result;
	InvokeHelper(0x13e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyDZ(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyBV()
{
	BOOL result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyBV(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyTC()
{
	BOOL result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyTC(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x140, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyHF()
{
	BOOL result;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyHF(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyZJ()
{
	BOOL result;
	InvokeHelper(0x142, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyZJ(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyAY()
{
	BOOL result;
	InvokeHelper(0x143, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyAY(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyKiKu()
{
	BOOL result;
	InvokeHelper(0x144, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyKiKu(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x144, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzyPunctuation()
{
	BOOL result;
	InvokeHelper(0x145, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzyPunctuation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x145, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetMatchFuzzySpace()
{
	BOOL result;
	InvokeHelper(0x146, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetMatchFuzzySpace(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetApplyFarEastFontsToAscii()
{
	BOOL result;
	InvokeHelper(0x147, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetApplyFarEastFontsToAscii(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x147, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetConvertHighAnsiToFarEast()
{
	BOOL result;
	InvokeHelper(0x148, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetConvertHighAnsiToFarEast(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x148, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintOddPagesInAscendingOrder()
{
	BOOL result;
	InvokeHelper(0x14a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintOddPagesInAscendingOrder(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintEvenPagesInAscendingOrder()
{
	BOOL result;
	InvokeHelper(0x14b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintEvenPagesInAscendingOrder(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDefaultBorderColorIndex()
{
	long result;
	InvokeHelper(0x151, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultBorderColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x151, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetEnableMisusedWordsDictionary()
{
	BOOL result;
	InvokeHelper(0x152, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetEnableMisusedWordsDictionary(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x152, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAllowCombinedAuxiliaryForms()
{
	BOOL result;
	InvokeHelper(0x153, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowCombinedAuxiliaryForms(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x153, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetHangulHanjaFastConversion()
{
	BOOL result;
	InvokeHelper(0x154, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetHangulHanjaFastConversion(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x154, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetCheckHangulEndings()
{
	BOOL result;
	InvokeHelper(0x155, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCheckHangulEndings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x155, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetEnableHangulHanjaRecentOrdering()
{
	BOOL result;
	InvokeHelper(0x156, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetEnableHangulHanjaRecentOrdering(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x156, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetMultipleWordConversionsMode()
{
	long result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetMultipleWordConversionsMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void Options::SetWPHelpOptions(VARIANT* CommandKeyHelp, VARIANT* DocNavigationKeys, VARIANT* MouseSimulation, VARIANT* DemoGuidance, VARIANT* DemoSpeed, VARIANT* HelpType)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CommandKeyHelp, DocNavigationKeys, MouseSimulation, DemoGuidance, DemoSpeed, HelpType);
}

long Options::GetDefaultBorderColor()
{
	long result;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultBorderColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetAllowPixelUnits()
{
	BOOL result;
	InvokeHelper(0x159, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowPixelUnits(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x159, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetUseCharacterUnit()
{
	BOOL result;
	InvokeHelper(0x15a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUseCharacterUnit(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAllowCompoundNounProcessing()
{
	BOOL result;
	InvokeHelper(0x15b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowCompoundNounProcessing(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoKeyboardSwitching()
{
	BOOL result;
	InvokeHelper(0x18f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoKeyboardSwitching(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x18f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDocumentViewDirection()
{
	long result;
	InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDocumentViewDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x190, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetArabicNumeral()
{
	long result;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetArabicNumeral(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetMonthNames()
{
	long result;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetMonthNames(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetCursorMovement()
{
	long result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetCursorMovement(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetVisualSelection()
{
	long result;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetVisualSelection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetShowDiacritics()
{
	BOOL result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShowDiacritics(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetShowControlCharacters()
{
	BOOL result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShowControlCharacters(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAddControlCharacters()
{
	BOOL result;
	InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAddControlCharacters(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAddBiDirectionalMarksWhenSavingTextFile()
{
	BOOL result;
	InvokeHelper(0x198, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAddBiDirectionalMarksWhenSavingTextFile(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetStrictInitialAlefHamza()
{
	BOOL result;
	InvokeHelper(0x199, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetStrictInitialAlefHamza(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x199, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetStrictFinalYaa()
{
	BOOL result;
	InvokeHelper(0x19a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetStrictFinalYaa(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetHebrewMode()
{
	long result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetHebrewMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetArabicMode()
{
	long result;
	InvokeHelper(0x19c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetArabicMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetAllowClickAndTypeMouse()
{
	BOOL result;
	InvokeHelper(0x19d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowClickAndTypeMouse(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetUseGermanSpellingReform()
{
	BOOL result;
	InvokeHelper(0x19f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUseGermanSpellingReform(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetInterpretHighAnsi()
{
	long result;
	InvokeHelper(0x1a2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetInterpretHighAnsi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetAddHebDoubleQuote()
{
	BOOL result;
	InvokeHelper(0x1a3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAddHebDoubleQuote(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetUseDiffDiacColor()
{
	BOOL result;
	InvokeHelper(0x1a4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetUseDiffDiacColor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetDiacriticColorVal()
{
	long result;
	InvokeHelper(0x1a5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDiacriticColorVal(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1a5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetOptimizeForWord97byDefault()
{
	BOOL result;
	InvokeHelper(0x1a7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetOptimizeForWord97byDefault(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetLocalNetworkFile()
{
	BOOL result;
	InvokeHelper(0x1a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetLocalNetworkFile(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetTypeNReplace()
{
	BOOL result;
	InvokeHelper(0x1a9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetTypeNReplace(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSequenceCheck()
{
	BOOL result;
	InvokeHelper(0x1aa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSequenceCheck(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1aa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetBackgroundOpen()
{
	BOOL result;
	InvokeHelper(0x1ab, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetBackgroundOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetDisableFeaturesbyDefault()
{
	BOOL result;
	InvokeHelper(0x1ac, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetDisableFeaturesbyDefault(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteAdjustWordSpacing()
{
	BOOL result;
	InvokeHelper(0x1ad, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteAdjustWordSpacing(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteAdjustParagraphSpacing()
{
	BOOL result;
	InvokeHelper(0x1ae, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteAdjustParagraphSpacing(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ae, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteAdjustTableFormatting()
{
	BOOL result;
	InvokeHelper(0x1af, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteAdjustTableFormatting(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1af, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteSmartStyleBehavior()
{
	BOOL result;
	InvokeHelper(0x1b0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteSmartStyleBehavior(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteMergeFromPPT()
{
	BOOL result;
	InvokeHelper(0x1b1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteMergeFromPPT(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteMergeFromXL()
{
	BOOL result;
	InvokeHelper(0x1b2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteMergeFromXL(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetCtrlClickHyperlinkToOpen()
{
	BOOL result;
	InvokeHelper(0x1b3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetCtrlClickHyperlinkToOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetPictureWrapType()
{
	long result;
	InvokeHelper(0x1b4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetPictureWrapType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1b4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetDisableFeaturesIntroducedAfterbyDefault()
{
	long result;
	InvokeHelper(0x1b5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDisableFeaturesIntroducedAfterbyDefault(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetPasteSmartCutPaste()
{
	BOOL result;
	InvokeHelper(0x1b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteSmartCutPaste(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetDisplayPasteOptions()
{
	BOOL result;
	InvokeHelper(0x1b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetDisplayPasteOptions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPromptUpdateStyle()
{
	BOOL result;
	InvokeHelper(0x1b9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPromptUpdateStyle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Options::GetDefaultEPostageApp()
{
	CString result;
	InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultEPostageApp(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Options::GetDefaultTextEncoding()
{
	long result;
	InvokeHelper(0x1bb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetDefaultTextEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1bb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetLabelSmartTags()
{
	BOOL result;
	InvokeHelper(0x1bc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetLabelSmartTags(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1bc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetDisplaySmartTagButtons()
{
	BOOL result;
	InvokeHelper(0x1bd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetDisplaySmartTagButtons(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1bd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetWarnBeforeSavingPrintingSendingMarkup()
{
	BOOL result;
	InvokeHelper(0x1be, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetWarnBeforeSavingPrintingSendingMarkup(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1be, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetStoreRSIDOnSave()
{
	BOOL result;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetStoreRSIDOnSave(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetShowFormatError()
{
	BOOL result;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShowFormatError(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetFormatScanning()
{
	BOOL result;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetFormatScanning(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPasteMergeLists()
{
	BOOL result;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPasteMergeLists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAutoCreateNewDrawings()
{
	BOOL result;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAutoCreateNewDrawings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSmartParaSelection()
{
	BOOL result;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSmartParaSelection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Options::GetRevisionsBalloonPrintOrientation()
{
	long result;
	InvokeHelper(0x1c5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetRevisionsBalloonPrintOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Options::GetCommentsColor()
{
	long result;
	InvokeHelper(0x1c6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Options::SetCommentsColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Options::GetPrintXMLTag()
{
	BOOL result;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintXMLTag(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetPrintBackgrounds()
{
	BOOL result;
	InvokeHelper(0x1c8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetPrintBackgrounds(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetAllowReadingMode()
{
	BOOL result;
	InvokeHelper(0x1c9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetAllowReadingMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetShowMarkupOpenSave()
{
	BOOL result;
	InvokeHelper(0x1ca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetShowMarkupOpenSave(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Options::GetSmartCursoring()
{
	BOOL result;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Options::SetSmartCursoring(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat properties

/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat operations

LPDISPATCH WParagraphFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WParagraphFormat::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WParagraphFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WParagraphFormat::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT WParagraphFormat::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WParagraphFormat::GetAlignment()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetKeepTogether()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetKeepTogether(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetKeepWithNext()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetKeepWithNext(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetPageBreakBefore()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetPageBreakBefore(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetNoLineNumber()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetNoLineNumber(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float WParagraphFormat::GetRightIndent()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetLeftIndent()
{
	float result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetFirstLineIndent()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetLineSpacing()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetLineSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WParagraphFormat::GetLineSpacingRule()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetLineSpacingRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float WParagraphFormat::GetSpaceBefore()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetSpaceBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetSpaceAfter()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetSpaceAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WParagraphFormat::GetHyphenation()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetHyphenation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetWidowControl()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetWidowControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetFarEastLineBreakControl()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetFarEastLineBreakControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetWordWrap()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetHangingPunctuation()
{
	long result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetHangingPunctuation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetHalfWidthPunctuationOnTopOfLine()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetHalfWidthPunctuationOnTopOfLine(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetAddSpaceBetweenFarEastAndAlpha()
{
	long result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetAddSpaceBetweenFarEastAndAlpha(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetAddSpaceBetweenFarEastAndDigit()
{
	long result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetAddSpaceBetweenFarEastAndDigit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetBaseLineAlignment()
{
	long result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetBaseLineAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetAutoAdjustRightIndent()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetAutoAdjustRightIndent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetDisableLineHeightGrid()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetDisableLineHeightGrid(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WParagraphFormat::GetTabStops()
{
	LPDISPATCH result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetTabStops(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WParagraphFormat::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WParagraphFormat::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WParagraphFormat::GetOutlineLevel()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetOutlineLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void WParagraphFormat::CloseUp()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::OpenUp()
{
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::OpenOrCloseUp()
{
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::TabHangingIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void WParagraphFormat::TabIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void WParagraphFormat::Reset()
{
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::Space1()
{
	InvokeHelper(0x139, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::Space15()
{
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::Space2()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WParagraphFormat::IndentCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void WParagraphFormat::IndentFirstLineCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

float WParagraphFormat::GetCharacterUnitRightIndent()
{
	float result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetCharacterUnitRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetCharacterUnitLeftIndent()
{
	float result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetCharacterUnitLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetCharacterUnitFirstLineIndent()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetCharacterUnitFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetLineUnitBefore()
{
	float result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetLineUnitBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x81, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float WParagraphFormat::GetLineUnitAfter()
{
	float result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetLineUnitAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WParagraphFormat::GetReadingOrder()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetSpaceBeforeAuto()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetSpaceBeforeAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WParagraphFormat::GetSpaceAfterAuto()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WParagraphFormat::SetSpaceAfterAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Row properties

/////////////////////////////////////////////////////////////////////////////
// Row operations

LPDISPATCH Row::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Row::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Row::GetAllowBreakAcrossPages()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetAllowBreakAcrossPages(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Row::GetAlignment()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Row::GetHeadingFormat()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetHeadingFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Row::GetSpaceBetweenColumns()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetSpaceBetweenColumns(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Row::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Row::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Row::GetLeftIndent()
{
	float result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Row::GetIsLast()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Row::GetIsFirst()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Row::GetIndex()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Row::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Row::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Row::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Row::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Row::SetLeftIndent(float LeftIndent, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LeftIndent, RulerStyle);
}

void Row::SetHeight(float RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

LPDISPATCH Row::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

long Row::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Row::GetId()
{
	CString result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Row::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}




/////////////////////////////////////////////////////////////////////////////
// Sections properties

/////////////////////////////////////////////////////////////////////////////
// Sections operations

LPUNKNOWN Sections::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Sections::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sections::GetFirst()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sections::GetLast()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sections::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Sections::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sections::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Sections::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Sections::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Sections::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Sections::Add(VARIANT* Range, VARIANT* Start)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Range, Start);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Section properties

/////////////////////////////////////////////////////////////////////////////
// Section operations

LPDISPATCH Section::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Section::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Section::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Section::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Section::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Section::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Section::GetHeaders()
{
	LPDISPATCH result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Section::GetFooters()
{
	LPDISPATCH result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Section::GetProtectedForForms()
{
	BOOL result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Section::SetProtectedForForms(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Section::GetIndex()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Section::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Section::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}


/////////////////////////////////////////////////////////////////////////////
// HeadersFooters properties

/////////////////////////////////////////////////////////////////////////////
// HeadersFooters operations

LPDISPATCH HeadersFooters::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HeadersFooters::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPUNKNOWN HeadersFooters::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long HeadersFooters::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeadersFooters::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// HeaderFooter properties

/////////////////////////////////////////////////////////////////////////////
// HeaderFooter operations

LPDISPATCH HeaderFooter::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HeaderFooter::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeaderFooter::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH HeaderFooter::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long HeaderFooter::GetIndex()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL HeaderFooter::GetIsHeader()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL HeaderFooter::GetExists()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetExists(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH HeaderFooter::GetPageNumbers()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL HeaderFooter::GetLinkToPrevious()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void HeaderFooter::SetLinkToPrevious(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH HeaderFooter::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Range properties

/////////////////////////////////////////////////////////////////////////////
// Range operations

CString WRange::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WRange::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH WRange::GetFormattedText()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetFormattedText(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WRange::GetStart()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetEnd()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WRange::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WRange::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetStoryType()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WRange::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetTextRetrievalMode()
{
	LPDISPATCH result;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetTextRetrievalMode(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WRange::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetParagraphFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WRange::GetListFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetBold()
{
	long result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetItalic()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetUnderline()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetUnderline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetEmphasisMark()
{
	long result;
	InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetEmphasisMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL WRange::GetDisableCharacterSpaceGrid()
{
	BOOL result;
	InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetDisableCharacterSpaceGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH WRange::GetRevisions()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT WRange::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void WRange::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WRange::GetStoryLength()
{
	long result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long WRange::GetLanguageID()
{
	long result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WRange::GetSynonymInfo()
{
	LPDISPATCH result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetListParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x9d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetSubdocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x9f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL WRange::GetGrammarChecked()
{
	BOOL result;
	InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetGrammarChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x104, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL WRange::GetSpellingChecked()
{
	BOOL result;
	InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetSpellingChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long WRange::GetHighlightColorIndex()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetHighlightColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WRange::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL WRange::GetIsEndOfRowMark()
{
	BOOL result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long WRange::GetBookmarkID()
{
	long result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long WRange::GetPreviousBookmarkID()
{
	long result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetFind()
{
	LPDISPATCH result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH WRange::GetShapeRange()
{
	LPDISPATCH result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetCase()
{
	long result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetCase(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT WRange::GetInformation(long Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Type);
	return result;
}

LPDISPATCH WRange::GetReadabilityStatistics()
{
	LPDISPATCH result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetGrammaticalErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetSpellingErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetOrientation()
{
	long result;
	InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WRange::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetNextStoryRange()
{
	LPDISPATCH result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetLanguageIDFarEast()
{
	long result;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetLanguageIDFarEast(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetLanguageIDOther()
{
	long result;
	InvokeHelper(0x142, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetLanguageIDOther(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void WRange::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::SetRange(long Start, long End)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Start, End);
}

void WRange::Collapse(VARIANT* Direction)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void WRange::InsertBefore(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void WRange::InsertAfter(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

LPDISPATCH WRange::Next(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

LPDISPATCH WRange::Previous(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

long WRange::StartOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long WRange::EndOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long WRange::Move(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long WRange::MoveStart(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long WRange::MoveEnd(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long WRange::MoveWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long WRange::MoveStartWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long WRange::MoveEndWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long WRange::MoveUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long WRange::MoveStartUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long WRange::MoveEndUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

void WRange::Cut()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::Copy()
{
	InvokeHelper(0x78, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::Paste()
{
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::InsertBreak(VARIANT* Type)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void WRange::InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, Range, ConfirmConversions, Link, Attachment);
}

BOOL WRange::InStory(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

BOOL WRange::InRange(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

long WRange::Delete(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

void WRange::WholeStory()
{
	InvokeHelper(0x80, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long WRange::Expand(VARIANT* Unit)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit);
	return result;
}

void WRange::InsertParagraph()
{
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::InsertParagraphAfter()
{
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CharacterNumber, Font, Unicode, Bias);
}

void WRange::CopyAsPicture()
{
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::SortAscending()
{
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::SortDescending()
{
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL WRange::IsEqual(LPDISPATCH Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Range);
	return result;
}

float WRange::Calculate()
{
	float result;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

LPDISPATCH WRange::GoToNext(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

LPDISPATCH WRange::GoToPrevious(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

void WRange::PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IconIndex, Link, Placement, DisplayAsIcon, DataType, IconFileName, IconLabel);
}

void WRange::LookupNameProperties()
{
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long WRange::ComputeStatistics(long Statistic)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Statistic);
	return result;
}

void WRange::Relocate(long Direction)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void WRange::CheckSynonyms()
{
	InvokeHelper(0xb4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::SubscribeTo(LPCTSTR Edition, VARIANT* Format)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Edition, Format);
}

void WRange::CreatePublisher(VARIANT* Edition, VARIANT* ContainsPICT, VARIANT* ContainsRTF, VARIANT* ContainsText)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Edition, ContainsPICT, ContainsRTF, ContainsText);
}

void WRange::InsertAutoText()
{
	InvokeHelper(0xb7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::InsertDatabase(VARIANT* Format, VARIANT* Style, VARIANT* LinkToSource, VARIANT* Connection, VARIANT* SQLStatement, VARIANT* SQLStatement1, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* DataSource, VARIANT* From, VARIANT* To, VARIANT* IncludeFields)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Format, Style, LinkToSource, Connection, SQLStatement, SQLStatement1, PasswordDocument, PasswordTemplate, WritePasswordDocument, WritePasswordTemplate, DataSource, From, To, IncludeFields);
}

void WRange::AutoFormat()
{
	InvokeHelper(0xc3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::CheckGrammar()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CustomDictionary, IgnoreUppercase, AlwaysSuggest, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
}

LPDISPATCH WRange::GetSpellingSuggestions(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		CustomDictionary, IgnoreUppercase, MainDictionary, SuggestionMode, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
	return result;
}

void WRange::InsertParagraphBefore()
{
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::NextSubdocument()
{
	InvokeHelper(0xdb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::PreviousSubdocument()
{
	InvokeHelper(0xdc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::ConvertHangulAndHanja(VARIANT* ConversionsMode, VARIANT* FastConversion, VARIANT* CheckHangulEnding, VARIANT* EnableRecentOrdering, VARIANT* CustomDictionary)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xdd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ConversionsMode, FastConversion, CheckHangulEnding, EnableRecentOrdering, CustomDictionary);
}

void WRange::PasteAsNestedTable()
{
	InvokeHelper(0xde, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WRange::ModifyEnclosure(VARIANT* Style, VARIANT* Symbol, VARIANT* EnclosedText)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xdf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Symbol, EnclosedText);
}

void WRange::PhoneticGuide(LPCTSTR Text, long Alignment, long Raise, long FontSize, LPCTSTR FontName)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xe0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text, Alignment, Raise, FontSize, FontName);
}

void WRange::InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DateTimeFormat, InsertAsField, InsertAsFullWidth, DateLanguage, CalendarType);
}

void WRange::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT;
	InvokeHelper(0x1e4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, SortColumn, Separator, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, 
		IgnoreHe, LanguageID);
}

void WRange::DetectLanguage()
{
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH WRange::ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NumRows, NumColumns, InitialColumnWidth, Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit, AutoFitBehavior, DefaultTableBehavior);
	return result;
}

void WRange::TCSCConverter(long WdTCSCConverterDirection, BOOL CommonTerms, BOOL UseVariants)
{
	static BYTE parms[] =
		VTS_I4 VTS_BOOL VTS_BOOL;
	InvokeHelper(0x1f3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 WdTCSCConverterDirection, CommonTerms, UseVariants);
}

BOOL WRange::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float WRange::GetFitTextWidth()
{
	float result;
	InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WRange::SetFitTextWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long WRange::GetHorizontalInVertical()
{
	long result;
	InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetHorizontalInVertical(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetTwoLinesInOne()
{
	long result;
	InvokeHelper(0x10a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetTwoLinesInOne(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL WRange::GetCombineCharacters()
{
	BOOL result;
	InvokeHelper(0x10b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetCombineCharacters(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long WRange::GetNoProofing()
{
	long result;
	InvokeHelper(0x143, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetNoProofing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH WRange::GetTopLevelTables()
{
	LPDISPATCH result;
	InvokeHelper(0x144, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetScripts()
{
	LPDISPATCH result;
	InvokeHelper(0x145, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WRange::GetCharacterWidth()
{
	long result;
	InvokeHelper(0x146, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetCharacterWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetKana()
{
	long result;
	InvokeHelper(0x147, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetKana(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x147, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetBoldBi()
{
	long result;
	InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetBoldBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x190, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long WRange::GetItalicBi()
{
	long result;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void WRange::SetItalicBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString WRange::GetId()
{
	CString result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WRange::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH WRange::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetSmartTags()
{
	LPDISPATCH result;
	InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL WRange::GetShowAll()
{
	BOOL result;
	InvokeHelper(0x198, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WRange::SetShowAll(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH WRange::GetDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x199, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetFootnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x19a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetEndnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WRange::PasteAndFormat(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void WRange::PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF)
{
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x19d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LinkedToExcel, WordFormatting, RTF);
}

void WRange::PasteAppendTable()
{
	InvokeHelper(0x19e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH WRange::GetXMLNodes()
{
	LPDISPATCH result;
	InvokeHelper(0x154, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetXMLParentNode()
{
	LPDISPATCH result;
	InvokeHelper(0x155, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GetEditors()
{
	LPDISPATCH result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString WRange::GetXml(BOOL DataOnly)
{
	CString result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		DataOnly);
	return result;
}

VARIANT WRange::GetEnhMetaFileBits()
{
	VARIANT result;
	InvokeHelper(0x159, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH WRange::GoToEditableRange(VARIANT* EditorID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x19f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditorID);
	return result;
}

void WRange::InsertXML(LPCTSTR XML, VARIANT* Transform)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x1a0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 XML, Transform);
}

void WRange::InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Label, Title, TitleAutoText, Position, ExcludeLabel);
}

void WRange::InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ReferenceType, ReferenceKind, ReferenceItem, InsertAsHyperlink, IncludePosition, SeparateNumbers, SeparatorString);
}






/////////////////////////////////////////////////////////////////////////////
// Frames properties

/////////////////////////////////////////////////////////////////////////////
// Frames operations

LPDISPATCH Frames::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Frames::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Frames::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPUNKNOWN Frames::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Frames::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Frames::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Frames::Add(LPDISPATCH Range)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Range);
	return result;
}

void Frames::Delete()
{
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Frame properties

/////////////////////////////////////////////////////////////////////////////
// Frame operations

LPDISPATCH Frame::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Frame::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Frame::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Frame::GetHeightRule()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Frame::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Frame::GetWidthRule()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Frame::SetWidthRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Frame::GetHorizontalDistanceFromText()
{
	float result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetHorizontalDistanceFromText(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Frame::GetHeight()
{
	float result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Frame::GetHorizontalPosition()
{
	float result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetHorizontalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Frame::GetLockAnchor()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Frame::SetLockAnchor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Frame::GetRelativeHorizontalPosition()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Frame::SetRelativeHorizontalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Frame::GetRelativeVerticalPosition()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Frame::SetRelativeVerticalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Frame::GetVerticalDistanceFromText()
{
	float result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetVerticalDistanceFromText(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Frame::GetVerticalPosition()
{
	float result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetVerticalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Frame::GetWidth()
{
	float result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Frame::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Frame::GetTextWrap()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Frame::SetTextWrap(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Frame::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Frame::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Frame::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Frame::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Frame::Delete()
{
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Frame::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Frame::Copy()
{
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Frame::Cut()
{
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// FormFields properties

/////////////////////////////////////////////////////////////////////////////
// FormFields operations

LPDISPATCH WFormFields::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WFormFields::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormFields::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WFormFields::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL WFormFields::GetShaded()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WFormFields::SetShaded(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPUNKNOWN WFormFields::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormFields::Item(VARIANT* Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH WFormFields::Add(LPDISPATCH Range, long Type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Range, Type);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// FormField properties

/////////////////////////////////////////////////////////////////////////////
// FormField operations

LPDISPATCH WFormField::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WFormField::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormField::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WFormField::GetType()
{
	long result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString WFormField::GetName()
{
	CString result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString WFormField::GetEntryMacro()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetEntryMacro(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString WFormField::GetExitMacro()
{
	CString result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetExitMacro(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL WFormField::GetOwnHelp()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WFormField::SetOwnHelp(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL WFormField::GetOwnStatus()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WFormField::SetOwnStatus(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString WFormField::GetHelpText()
{
	CString result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetHelpText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString WFormField::GetStatusText()
{
	CString result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetStatusText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL WFormField::GetEnabled()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WFormField::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString WFormField::GetResult()
{
	CString result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void WFormField::SetResult(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH WFormField::GetTextInput()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormField::GetCheckBox()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormField::GetDropDown()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormField::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH WFormField::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL WFormField::GetCalculateOnExit()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WFormField::SetCalculateOnExit(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH WFormField::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void WFormField::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WFormField::Copy()
{
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WFormField::Cut()
{
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void WFormField::Delete()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CheckBox properties

/////////////////////////////////////////////////////////////////////////////
// CheckBox operations

LPDISPATCH WCheckBox::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long WCheckBox::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH WCheckBox::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL WCheckBox::GetValid()
{
	BOOL result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL WCheckBox::GetAutoSize()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WCheckBox::SetAutoSize(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float WCheckBox::GetSize()
{
	float result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void WCheckBox::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL WCheckBox::GetDefault()
{
	BOOL result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WCheckBox::SetDefault(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL WCheckBox::GetValue()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void WCheckBox::SetValue(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}



/////////////////////////////////////////////////////////////////////////////
// Bookmark properties

/////////////////////////////////////////////////////////////////////////////
// Bookmark operations

CString Bookmark::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Bookmark::GetRange()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Bookmark::GetEmpty()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Bookmark::GetStart()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Bookmark::SetStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Bookmark::GetEnd()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Bookmark::SetEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Bookmark::GetColumn()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Bookmark::GetStoryType()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Bookmark::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Bookmark::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Bookmark::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Bookmark::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Bookmark::Delete()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Bookmark::Copy(LPCTSTR Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Bookmarks properties

/////////////////////////////////////////////////////////////////////////////
// Bookmarks operations

LPUNKNOWN Bookmarks::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Bookmarks::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Bookmarks::GetDefaultSorting()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Bookmarks::SetDefaultSorting(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Bookmarks::GetShowHidden()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Bookmarks::SetShowHidden(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Bookmarks::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Bookmarks::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Bookmarks::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Bookmarks::Item(VARIANT* Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Bookmarks::Add(LPCTSTR Name, VARIANT* Range)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name, Range);
	return result;
}

BOOL Bookmarks::Exists(LPCTSTR Name)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Name);
	return result;
}
