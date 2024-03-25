// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// _Application wrapper class
#if !defined(MSWORD__H__D9AF2879_6356_426D_A0E9_43C940DC37A1__INCLUDED_)
#define MSWORD__H__D9AF2879_6356_426D_A0E9_43C940DC37A1__INCLUDED_

class _Application : public COleDispatchDriver
{
public:
	_Application() {}		// Calls COleDispatchDriver default constructor
	_Application(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Application(const _Application& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	CString GetName();
	LPDISPATCH GetDocuments();
	LPDISPATCH GetWindows();
	LPDISPATCH GetActiveDocument();
	LPDISPATCH GetActiveWindow();
	LPDISPATCH GetSelection();
	LPDISPATCH GetWordBasic();
	LPDISPATCH GetRecentFiles();
	LPDISPATCH GetNormalTemplate();
	LPDISPATCH GetSystem();
	LPDISPATCH GetAutoCorrect();
	LPDISPATCH GetFontNames();
	LPDISPATCH GetLandscapeFontNames();
	LPDISPATCH GetPortraitFontNames();
	LPDISPATCH GetLanguages();
	LPDISPATCH GetAssistant();
	LPDISPATCH GetBrowser();
	LPDISPATCH GetFileConverters();
	LPDISPATCH GetMailingLabel();
	LPDISPATCH GetDialogs();
	LPDISPATCH GetCaptionLabels();
	LPDISPATCH GetAutoCaptions();
	LPDISPATCH GetAddIns();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString GetVersion();
	BOOL GetScreenUpdating();
	void SetScreenUpdating(BOOL bNewValue);
	BOOL GetPrintPreview();
	void SetPrintPreview(BOOL bNewValue);
	LPDISPATCH GetTasks();
	BOOL GetDisplayStatusBar();
	void SetDisplayStatusBar(BOOL bNewValue);
	BOOL GetSpecialMode();
	long GetUsableWidth();
	long GetUsableHeight();
	BOOL GetMathCoprocessorAvailable();
	BOOL GetMouseAvailable();
	VARIANT GetInternational(long Index);
	CString GetBuild();
	BOOL GetCapsLock();
	BOOL GetNumLock();
	CString GetUserName_();
	void SetUserName(LPCTSTR lpszNewValue);
	CString GetUserInitials();
	void SetUserInitials(LPCTSTR lpszNewValue);
	CString GetUserAddress();
	void SetUserAddress(LPCTSTR lpszNewValue);
	LPDISPATCH GetMacroContainer();
	BOOL GetDisplayRecentFiles();
	void SetDisplayRecentFiles(BOOL bNewValue);
	LPDISPATCH GetCommandBars();
	LPDISPATCH GetSynonymInfo(LPCTSTR Word, VARIANT* LanguageID);
	LPDISPATCH GetVbe();
	CString GetDefaultSaveFormat();
	void SetDefaultSaveFormat(LPCTSTR lpszNewValue);
	LPDISPATCH GetListGalleries();
	CString GetActivePrinter();
	void SetActivePrinter(LPCTSTR lpszNewValue);
	LPDISPATCH GetTemplates();
	LPDISPATCH GetCustomizationContext();
	void SetCustomizationContext(LPDISPATCH newValue);
	LPDISPATCH GetKeyBindings();
	LPDISPATCH GetKeysBoundTo(long KeyCategory, LPCTSTR Command, VARIANT* CommandParameter);
	LPDISPATCH GetFindKey(long KeyCode, VARIANT* KeyCode2);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetPath();
	BOOL GetDisplayScrollBars();
	void SetDisplayScrollBars(BOOL bNewValue);
	CString GetStartupPath();
	void SetStartupPath(LPCTSTR lpszNewValue);
	long GetBackgroundSavingStatus();
	long GetBackgroundPrintingStatus();
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	long GetWindowState();
	void SetWindowState(long nNewValue);
	BOOL GetDisplayAutoCompleteTips();
	void SetDisplayAutoCompleteTips(BOOL bNewValue);
	LPDISPATCH GetOptions();
	long GetDisplayAlerts();
	void SetDisplayAlerts(long nNewValue);
	LPDISPATCH GetCustomDictionaries();
	CString GetPathSeparator();
	void SetStatusBar(LPCTSTR lpszNewValue);
	BOOL GetMAPIAvailable();
	BOOL GetDisplayScreenTips();
	void SetDisplayScreenTips(BOOL bNewValue);
	long GetEnableCancelKey();
	void SetEnableCancelKey(long nNewValue);
	BOOL GetUserControl();
	LPDISPATCH GetFileSearch();
	long GetMailSystem();
	CString GetDefaultTableSeparator();
	void SetDefaultTableSeparator(LPCTSTR lpszNewValue);
	BOOL GetShowVisualBasicEditor();
	void SetShowVisualBasicEditor(BOOL bNewValue);
	CString GetBrowseExtraFileTypes();
	void SetBrowseExtraFileTypes(LPCTSTR lpszNewValue);
	BOOL GetIsObjectValid(LPDISPATCH Object);
	LPDISPATCH GetHangulHanjaDictionaries();
	LPDISPATCH GetMailMessage();
	BOOL GetFocusInMailHeader();
	void Quit(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void ScreenRefresh();
	void LookupNameProperties(LPCTSTR Name);
	void SubstituteFont(LPCTSTR UnavailableFont, LPCTSTR SubstituteFont);
	BOOL Repeat(VARIANT* Times);
	void DDEExecute(long Channel, LPCTSTR Command);
	long DDEInitiate(LPCTSTR App, LPCTSTR Topic);
	void DDEPoke(long Channel, LPCTSTR Item, LPCTSTR Data);
	CString DDERequest(long Channel, LPCTSTR Item);
	void DDETerminate(long Channel);
	void DDETerminateAll();
	long BuildKeyCode(long Arg1, VARIANT* Arg2, VARIANT* Arg3, VARIANT* Arg4);
	CString KeyString(long KeyCode, VARIANT* KeyCode2);
	void OrganizerCopy(LPCTSTR Source, LPCTSTR Destination, LPCTSTR Name, long Object);
	void OrganizerDelete(LPCTSTR Source, LPCTSTR Name, long Object);
	void OrganizerRename(LPCTSTR Source, LPCTSTR Name, LPCTSTR NewName, long Object);
	// method 'AddAddress' not emitted because of invalid return type or parameter type
	CString GetAddress(VARIANT* Name, VARIANT* AddressProperties, VARIANT* UseAutoText, VARIANT* DisplaySelectDialog, VARIANT* SelectDialog, VARIANT* CheckNamesDialog, VARIANT* RecentAddressesChoice, VARIANT* UpdateRecentAddresses);
	BOOL CheckGrammar(LPCTSTR String);
	BOOL CheckSpelling(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, 
		VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void ResetIgnoreAll();
	LPDISPATCH GetSpellingSuggestions(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void GoBack();
	void Help(VARIANT* HelpType);
	void AutomaticChange();
	void ShowMe();
	void HelpTool();
	LPDISPATCH NewWindow();
	void ListCommands(BOOL ListAllCommands);
	void ShowClipboard();
	void OnTime(VARIANT* When, LPCTSTR Name, VARIANT* Tolerance);
	void NextLetter();
	short MountVolume(LPCTSTR Zone, LPCTSTR Server, LPCTSTR Volume, VARIANT* User, VARIANT* UserPassword, VARIANT* VolumePassword);
	CString CleanString(LPCTSTR String);
	void SendFax();
	void ChangeFileOpenDirectory(LPCTSTR Path);
	void GoForward();
	void Move(long Left, long Top);
	void Resize(long Width, long Height);
	float InchesToPoints(float Inches);
	float CentimetersToPoints(float Centimeters);
	float MillimetersToPoints(float Millimeters);
	float PicasToPoints(float Picas);
	float LinesToPoints(float Lines);
	float PointsToInches(float Points);
	float PointsToCentimeters(float Points);
	float PointsToMillimeters(float Points);
	float PointsToPicas(float Points);
	float PointsToLines(float Points);
	void Activate();
	float PointsToPixels(float Points, VARIANT* fVertical);
	float PixelsToPoints(float Pixels, VARIANT* fVertical);
	void KeyboardLatin();
	void KeyboardBidi();
	void ToggleKeyboard();
	long Keyboard(long LangId);
	CString ProductCode();
	LPDISPATCH DefaultWebOptions();
	void SetDefaultTheme(LPCTSTR Name, long DocumentType);
	CString GetDefaultTheme(long DocumentType);
	LPDISPATCH GetEmailOptions();
	long GetLanguage();
	LPDISPATCH GetCOMAddIns();
	BOOL GetCheckLanguage();
	void SetCheckLanguage(BOOL bNewValue);
	LPDISPATCH GetLanguageSettings();
	LPDISPATCH GetAnswerWizard();
	long GetFeatureInstall();
	void SetFeatureInstall(long nNewValue);
	VARIANT Run(LPCTSTR MacroName, VARIANT* varg1, VARIANT* varg2, VARIANT* varg3, VARIANT* varg4, VARIANT* varg5, VARIANT* varg6, VARIANT* varg7, VARIANT* varg8, VARIANT* varg9, VARIANT* varg10, VARIANT* varg11, VARIANT* varg12, VARIANT* varg13, 
		VARIANT* varg14, VARIANT* varg15, VARIANT* varg16, VARIANT* varg17, VARIANT* varg18, VARIANT* varg19, VARIANT* varg20, VARIANT* varg21, VARIANT* varg22, VARIANT* varg23, VARIANT* varg24, VARIANT* varg25, VARIANT* varg26, VARIANT* varg27, 
		VARIANT* varg28, VARIANT* varg29, VARIANT* varg30);
	void PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* FileName, VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight);
	long GetAutomationSecurity();
	void SetAutomationSecurity(long nNewValue);
	LPDISPATCH GetFileDialog(long FileDialogType);
	CString GetEmailTemplate();
	void SetEmailTemplate(LPCTSTR lpszNewValue);
	BOOL GetShowWindowsInTaskbar();
	void SetShowWindowsInTaskbar(BOOL bNewValue);
	LPDISPATCH GetNewDocument();
	BOOL GetShowStartupDialog();
	void SetShowStartupDialog(BOOL bNewValue);
	LPDISPATCH GetAutoCorrectEmail();
	LPDISPATCH GetTaskPanes();
	BOOL GetDefaultLegalBlackline();
	void SetDefaultLegalBlackline(BOOL bNewValue);
	LPDISPATCH GetSmartTagRecognizers();
	LPDISPATCH GetSmartTagTypes();
	LPDISPATCH GetXMLNamespaces();
	void PutFocusInMailHeader();
	BOOL GetArbitraryXMLSupportAvailable();
};
/////////////////////////////////////////////////////////////////////////////
// Documents wrapper class

class Documents : public COleDispatchDriver
{
public:
	Documents() {}		// Calls COleDispatchDriver default constructor
	Documents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Documents(const Documents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH Item(VARIANT* Index);
	void Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void Save(VARIANT* NoPrompt, VARIANT* OriginalFormat);
	LPDISPATCH Add(VARIANT* Template, VARIANT* NewTemplate, VARIANT* DocumentType, VARIANT* Visible);
	void CheckOut(LPCTSTR FileName);
	BOOL CanCheckOut(LPCTSTR FileName);
	LPDISPATCH Open(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog, VARIANT* XMLTransform);
	LPDISPATCH Open2002(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, \
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog);
	LPDISPATCH Open97(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format);
		
};
/////////////////////////////////////////////////////////////////////////////
// _Document wrapper class

class _Document : public COleDispatchDriver
{
public:
	_Document() {}		// Calls COleDispatchDriver default constructor
	_Document(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Document(const _Document& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetBuiltInDocumentProperties();
	LPDISPATCH GetCustomDocumentProperties();
	CString GetPath();
	LPDISPATCH GetBookmarks();
	LPDISPATCH GetTables();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	long GetType();
	BOOL GetAutoHyphenation();
	void SetAutoHyphenation(BOOL bNewValue);
	BOOL GetHyphenateCaps();
	void SetHyphenateCaps(BOOL bNewValue);
	long GetHyphenationZone();
	void SetHyphenationZone(long nNewValue);
	long GetConsecutiveHyphensLimit();
	void SetConsecutiveHyphensLimit(long nNewValue);
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetStyles();
	LPDISPATCH GetFrames();
	LPDISPATCH GetTablesOfFigures();
	LPDISPATCH GetVariables();
	LPDISPATCH GetMailMerge();
	LPDISPATCH GetEnvelope();
	CString GetFullName();
	LPDISPATCH GetRevisions();
	LPDISPATCH GetTablesOfContents();
	LPDISPATCH GetTablesOfAuthorities();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetWindows();
	BOOL GetHasRoutingSlip();
	void SetHasRoutingSlip(BOOL bNewValue);
	LPDISPATCH GetRoutingSlip();
	BOOL GetRouted();
	LPDISPATCH GetTablesOfAuthoritiesCategories();
	LPDISPATCH GetIndexes();
	BOOL GetSaved();
	void SetSaved(BOOL bNewValue);
	LPDISPATCH GetContent();
	LPDISPATCH GetActiveWindow();
	long GetKind();
	void SetKind(long nNewValue);
	BOOL GetReadOnly();
	LPDISPATCH GetSubdocuments();
	BOOL GetIsMasterDocument();
	float GetDefaultTabStop();
	void SetDefaultTabStop(float newValue);
	BOOL GetEmbedTrueTypeFonts();
	void SetEmbedTrueTypeFonts(BOOL bNewValue);
	BOOL GetSaveFormsData();
	void SetSaveFormsData(BOOL bNewValue);
	BOOL GetReadOnlyRecommended();
	void SetReadOnlyRecommended(BOOL bNewValue);
	BOOL GetSaveSubsetFonts();
	void SetSaveSubsetFonts(BOOL bNewValue);
	BOOL GetCompatibility(long Type);
	void SetCompatibility(long Type, BOOL bNewValue);
	LPDISPATCH GetStoryRanges();
	LPDISPATCH GetCommandBars();
	BOOL GetIsSubdocument();
	long GetSaveFormat();
	long GetProtectionType();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetShapes();
	LPDISPATCH GetListTemplates();
	LPDISPATCH GetLists();
	BOOL GetUpdateStylesOnOpen();
	void SetUpdateStylesOnOpen(BOOL bNewValue);
	VARIANT GetAttachedTemplate();
	void SetAttachedTemplate(VARIANT* newValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetBackground();
	void SetBackground(LPDISPATCH newValue);
	BOOL GetGrammarChecked();
	void SetGrammarChecked(BOOL bNewValue);
	BOOL GetSpellingChecked();
	void SetSpellingChecked(BOOL bNewValue);
	BOOL GetShowGrammaticalErrors();
	void SetShowGrammaticalErrors(BOOL bNewValue);
	BOOL GetShowSpellingErrors();
	void SetShowSpellingErrors(BOOL bNewValue);
	LPDISPATCH GetVersions();
	BOOL GetShowSummary();
	void SetShowSummary(BOOL bNewValue);
	long GetSummaryViewMode();
	void SetSummaryViewMode(long nNewValue);
	long GetSummaryLength();
	void SetSummaryLength(long nNewValue);
	BOOL GetPrintFractionalWidths();
	void SetPrintFractionalWidths(BOOL bNewValue);
	BOOL GetPrintPostScriptOverText();
	void SetPrintPostScriptOverText(BOOL bNewValue);
	LPDISPATCH GetContainer();
	BOOL GetPrintFormsData();
	void SetPrintFormsData(BOOL bNewValue);
	LPDISPATCH GetListParagraphs();
	void SetPassword(LPCTSTR lpszNewValue);
	void SetWritePassword(LPCTSTR lpszNewValue);
	BOOL GetHasPassword();
	BOOL GetWriteReserved();
	CString GetActiveWritingStyle(VARIANT* LanguageID);
	void SetActiveWritingStyle(VARIANT* LanguageID, LPCTSTR lpszNewValue);
	BOOL GetUserControl();
	void SetUserControl(BOOL bNewValue);
	BOOL GetHasMailer();
	void SetHasMailer(BOOL bNewValue);
	LPDISPATCH GetMailer();
	LPDISPATCH GetReadabilityStatistics();
	LPDISPATCH GetGrammaticalErrors();
	LPDISPATCH GetSpellingErrors();
	LPDISPATCH GetVBProject();
	BOOL GetFormsDesign();
	CString Get_CodeName();
	void Set_CodeName(LPCTSTR lpszNewValue);
	CString GetCodeName();
	BOOL GetSnapToGrid();
	void SetSnapToGrid(BOOL bNewValue);
	BOOL GetSnapToShapes();
	void SetSnapToShapes(BOOL bNewValue);
	float GetGridDistanceHorizontal();
	void SetGridDistanceHorizontal(float newValue);
	float GetGridDistanceVertical();
	void SetGridDistanceVertical(float newValue);
	float GetGridOriginHorizontal();
	void SetGridOriginHorizontal(float newValue);
	float GetGridOriginVertical();
	void SetGridOriginVertical(float newValue);
	long GetGridSpaceBetweenHorizontalLines();
	void SetGridSpaceBetweenHorizontalLines(long nNewValue);
	long GetGridSpaceBetweenVerticalLines();
	void SetGridSpaceBetweenVerticalLines(long nNewValue);
	BOOL GetGridOriginFromMargin();
	void SetGridOriginFromMargin(BOOL bNewValue);
	BOOL GetKerningByAlgorithm();
	void SetKerningByAlgorithm(BOOL bNewValue);
	long GetJustificationMode();
	void SetJustificationMode(long nNewValue);
	long GetFarEastLineBreakLevel();
	void SetFarEastLineBreakLevel(long nNewValue);
	CString GetNoLineBreakBefore();
	void SetNoLineBreakBefore(LPCTSTR lpszNewValue);
	CString GetNoLineBreakAfter();
	void SetNoLineBreakAfter(LPCTSTR lpszNewValue);
	BOOL GetTrackRevisions();
	void SetTrackRevisions(BOOL bNewValue);
	BOOL GetPrintRevisions();
	void SetPrintRevisions(BOOL bNewValue);
	BOOL GetShowRevisions();
	void SetShowRevisions(BOOL bNewValue);
	void Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void Repaginate();
	void FitToPages();
	void ManualHyphenation();
	void Select();
	void DataForm();
	void Route();
	void Save();
	void SendMail();
	LPDISPATCH Range(VARIANT* Start, VARIANT* End);
	void RunAutoMacro(long Which);
	void Activate();
	void PrintPreview();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	BOOL Undo(VARIANT* Times);
	BOOL Redo(VARIANT* Times);
	long ComputeStatistics(long Statistic, VARIANT* IncludeFootnotesAndEndnotes);
	void MakeCompatibilityDefault();
	void Unprotect(VARIANT* Password);
	void EditionOptions(long Type, long Option, LPCTSTR Name, VARIANT* Format);
	void RunLetterWizard(VARIANT* LetterContent, VARIANT* WizardMode);
	LPDISPATCH GetLetterContent();
	void SetLetterContent(VARIANT* LetterContent);
	void CopyStylesFromTemplate(LPCTSTR Template);
	void UpdateStyles();
	void CheckGrammar();
	void CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void FollowHyperlink(VARIANT* Address, VARIANT* SubAddress, VARIANT* NewWindow, VARIANT* AddHistory, VARIANT* ExtraInfo, VARIANT* Method, VARIANT* HeaderInfo);
	void AddToFavorites();
	void Reload();
	LPDISPATCH AutoSummarize(VARIANT* Length, VARIANT* Mode, VARIANT* UpdateProperties);
	void RemoveNumbers(VARIANT* NumberType);
	void ConvertNumbersToText(VARIANT* NumberType);
	long CountNumberedItems(VARIANT* NumberType, VARIANT* Level);
	void Post();
	void ToggleFormsDesign();
	void UpdateSummaryProperties();
	VARIANT GetCrossReferenceItems(VARIANT* ReferenceType);
	void AutoFormat();
	void ViewCode();
	void ViewPropertyBrowser();
	void ForwardMailer();
	void Reply();
	void ReplyAll();
	void SendMailer(VARIANT* FileFormat, VARIANT* Priority);
	void UndoClear();
	void PresentIt();
	void SendFax(LPCTSTR Address, VARIANT* Subject);
	void ClosePrintPreview();
	void CheckConsistency();
	LPDISPATCH CreateLetterContent(LPCTSTR DateFormat, BOOL IncludeHeaderFooter, LPCTSTR PageDesign, long LetterStyle, BOOL Letterhead, long LetterheadLocation, float LetterheadSize, LPCTSTR RecipientName, LPCTSTR RecipientAddress, 
		LPCTSTR Salutation, long SalutationType, LPCTSTR RecipientReference, LPCTSTR MailingInstructions, LPCTSTR AttentionLine, LPCTSTR Subject, LPCTSTR CCList, LPCTSTR ReturnAddress, LPCTSTR SenderName, LPCTSTR Closing, LPCTSTR SenderCompany, 
		LPCTSTR SenderJobTitle, LPCTSTR SenderInitials, long EnclosureNumber, VARIANT* InfoBlock, VARIANT* RecipientCode, VARIANT* RecipientGender, VARIANT* ReturnAddressShortForm, VARIANT* SenderCity, VARIANT* SenderCode, VARIANT* SenderGender, 
		VARIANT* SenderReference);
	void AcceptAllRevisions();
	void RejectAllRevisions();
	void DetectLanguage();
	void ApplyTheme(LPCTSTR Name);
	void RemoveTheme();
	void WebPagePreview();
	void ReloadAs(long Encoding);
	CString GetActiveTheme();
	CString GetActiveThemeDisplayName();
	LPDISPATCH GetEmail();
	LPDISPATCH GetScripts();
	BOOL GetLanguageDetected();
	void SetLanguageDetected(BOOL bNewValue);
	long GetFarEastLineBreakLanguage();
	void SetFarEastLineBreakLanguage(long nNewValue);
	LPDISPATCH GetFrameset();
	VARIANT GetClickAndTypeParagraphStyle();
	void SetClickAndTypeParagraphStyle(VARIANT* newValue);
	LPDISPATCH GetHTMLProject();
	LPDISPATCH GetWebOptions();
	long GetOpenEncoding();
	long GetSaveEncoding();
	void SetSaveEncoding(long nNewValue);
	BOOL GetOptimizeForWord97();
	void SetOptimizeForWord97(BOOL bNewValue);
	BOOL GetVBASigned();
	void ConvertVietDoc(long CodePageOrigin);
	void PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight);
	LPDISPATCH GetMailEnvelope();
	BOOL GetDisableFeatures();
	void SetDisableFeatures(BOOL bNewValue);
	BOOL GetDoNotEmbedSystemFonts();
	void SetDoNotEmbedSystemFonts(BOOL bNewValue);
	LPDISPATCH GetSignatures();
	CString GetDefaultTargetFrame();
	void SetDefaultTargetFrame(LPCTSTR lpszNewValue);
	LPDISPATCH GetHTMLDivisions();
	long GetDisableFeaturesIntroducedAfter();
	void SetDisableFeaturesIntroducedAfter(long nNewValue);
	BOOL GetRemovePersonalInformation();
	void SetRemovePersonalInformation(BOOL bNewValue);
	LPDISPATCH GetSmartTags();
	void CheckIn(BOOL SaveChanges, VARIANT* Comments, BOOL MakePublic);
	BOOL CanCheckin();
	void Merge(LPCTSTR FileName, VARIANT* MergeTarget, VARIANT* DetectFormatChanges, VARIANT* UseFormattingFrom, VARIANT* AddToRecentFiles);
	BOOL GetEmbedSmartTags();
	void SetEmbedSmartTags(BOOL bNewValue);
	BOOL GetSmartTagsAsXMLProps();
	void SetSmartTagsAsXMLProps(BOOL bNewValue);
	long GetTextEncoding();
	void SetTextEncoding(long nNewValue);
	long GetTextLineEnding();
	void SetTextLineEnding(long nNewValue);
	void SendForReview(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage, VARIANT* IncludeAttachment);
	void ReplyWithChanges(VARIANT* ShowMessage);
	void EndReview();
	LPDISPATCH GetStyleSheets();
	VARIANT GetDefaultTableStyle();
	CString GetPasswordEncryptionProvider();
	CString GetPasswordEncryptionAlgorithm();
	long GetPasswordEncryptionKeyLength();
	BOOL GetPasswordEncryptionFileProperties();
	void SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, VARIANT* PasswordEncryptionFileProperties);
	void RecheckSmartTags();
	void RemoveSmartTags();
	void SetDefaultTableStyle(VARIANT* Style, BOOL SetInTemplate);
	void DeleteAllComments();
	void AcceptAllRevisionsShown();
	void RejectAllRevisionsShown();
	void DeleteAllCommentsShown();
	void ResetFormFields();
	void SaveAs(VARIANT* FileName, VARIANT* FileFormat, VARIANT* LockComments, VARIANT* Password, VARIANT* AddToRecentFiles, VARIANT* WritePassword, VARIANT* ReadOnlyRecommended, VARIANT* EmbedTrueTypeFonts, VARIANT* SaveNativePictureFormat, 
		VARIANT* SaveFormsData, VARIANT* SaveAsAOCELetter, VARIANT* Encoding, VARIANT* InsertLineBreaks, VARIANT* AllowSubstitutions, VARIANT* LineEnding, VARIANT* AddBiDiMarks);
	BOOL GetEmbedLinguisticData();
	void SetEmbedLinguisticData(BOOL bNewValue);
	BOOL GetFormattingShowFont();
	void SetFormattingShowFont(BOOL bNewValue);
	BOOL GetFormattingShowClear();
	void SetFormattingShowClear(BOOL bNewValue);
	BOOL GetFormattingShowParagraph();
	void SetFormattingShowParagraph(BOOL bNewValue);
	BOOL GetFormattingShowNumbering();
	void SetFormattingShowNumbering(BOOL bNewValue);
	long GetFormattingShowFilter();
	void SetFormattingShowFilter(long nNewValue);
	void CheckNewSmartTags();
	LPDISPATCH GetPermission();
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLSchemaReferences();
	LPDISPATCH GetSmartDocument();
	LPDISPATCH GetSharedWorkspace();
	LPDISPATCH GetSync();
	BOOL GetEnforceStyle();
	void SetEnforceStyle(BOOL bNewValue);
	BOOL GetAutoFormatOverride();
	void SetAutoFormatOverride(BOOL bNewValue);
	BOOL GetXMLSaveDataOnly();
	void SetXMLSaveDataOnly(BOOL bNewValue);
	BOOL GetXMLHideNamespaces();
	void SetXMLHideNamespaces(BOOL bNewValue);
	BOOL GetXMLShowAdvancedErrors();
	void SetXMLShowAdvancedErrors(BOOL bNewValue);
	BOOL GetXMLUseXSLTWhenSaving();
	void SetXMLUseXSLTWhenSaving(BOOL bNewValue);
	CString GetXMLSaveThroughXSLT();
	void SetXMLSaveThroughXSLT(LPCTSTR lpszNewValue);
	LPDISPATCH GetDocumentLibraryVersions();
	BOOL GetReadingModeLayoutFrozen();
	void SetReadingModeLayoutFrozen(BOOL bNewValue);
	BOOL GetRemoveDateAndTime();
	void SetRemoveDateAndTime(BOOL bNewValue);
	void SendFaxOverInternet(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage);
	void TransformDocument(LPCTSTR Path, BOOL DataOnly);
	void Protect(long Type, VARIANT* NoReset, VARIANT* Password, VARIANT* UseIRM, VARIANT* EnforceStyleLock);
	void SelectAllEditableRanges(VARIANT* EditorID);
	void DeleteAllEditableRanges(VARIANT* EditorID);
	void DeleteAllInkAnnotations();
	void Compare(LPCTSTR Name, VARIANT* AuthorName, VARIANT* CompareTarget, VARIANT* DetectFormatChanges, VARIANT* IgnoreAllComparisonWarnings, VARIANT* AddToRecentFiles, VARIANT* RemovePersonalInformation, VARIANT* RemoveDateAndTime);
	void RemoveLockedStyles();
	LPDISPATCH GetChildNodeSuggestions();
	LPDISPATCH SelectSingleNode(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes);
	LPDISPATCH SelectNodes(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes);
	LPDISPATCH GetXMLSchemaViolations();
	long GetReadingLayoutSizeX();
	void SetReadingLayoutSizeX(long nNewValue);
	long GetReadingLayoutSizeY();
	void SetReadingLayoutSizeY(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Selection wrapper class

class Selection : public COleDispatchDriver
{
public:
	Selection() {}		// Calls COleDispatchDriver default constructor
	Selection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Selection(const Selection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	LPDISPATCH GetFormattedText();
	void SetFormattedText(LPDISPATCH newValue);
	long GetStart();
	void SetStart(long nNewValue);
	long GetEnd();
	void SetEnd(long nNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	long GetType();
	long GetStoryType();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	LPDISPATCH GetTables();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	LPDISPATCH GetCells();
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetFrames();
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetBookmarks();
	long GetStoryLength();
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	LPDISPATCH GetHeaderFooter();
	BOOL GetIsEndOfRowMark();
	long GetBookmarkID();
	long GetPreviousBookmarkID();
	LPDISPATCH GetFind();
	LPDISPATCH GetRange();
	VARIANT GetInformation(long Type);
	long GetFlags();
	void SetFlags(long nNewValue);
	BOOL GetActive();
	BOOL GetStartIsActive();
	void SetStartIsActive(BOOL bNewValue);
	BOOL GetIPAtEndOfLine();
	BOOL GetExtendMode();
	void SetExtendMode(BOOL bNewValue);
	BOOL GetColumnSelectMode();
	void SetColumnSelectMode(BOOL bNewValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDocument();
	LPDISPATCH GetShapeRange();
	void Select();
	void SetRange(long Start, long End);
	void Collapse(VARIANT* Direction);
	void InsertBefore(LPCTSTR Text);
	void InsertAfter(LPCTSTR Text);
	LPDISPATCH Next(VARIANT* Unit, VARIANT* Count);
	LPDISPATCH Previous(VARIANT* Unit, VARIANT* Count);
	long StartOf(VARIANT* Unit, VARIANT* Extend);
	long EndOf(VARIANT* Unit, VARIANT* Extend);
	long Move(VARIANT* Unit, VARIANT* Count);
	long MoveStart(VARIANT* Unit, VARIANT* Count);
	long MoveEnd(VARIANT* Unit, VARIANT* Count);
	long MoveWhile(VARIANT* Cset, VARIANT* Count);
	long MoveStartWhile(VARIANT* Cset, VARIANT* Count);
	long MoveEndWhile(VARIANT* Cset, VARIANT* Count);
	long MoveUntil(VARIANT* Cset, VARIANT* Count);
	long MoveStartUntil(VARIANT* Cset, VARIANT* Count);
	long MoveEndUntil(VARIANT* Cset, VARIANT* Count);
	void Cut();
	void Copy();
	void Paste();
	void InsertBreak(VARIANT* Type);
	void InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment);
	BOOL InStory(LPDISPATCH Range);
	BOOL InRange(LPDISPATCH Range);
	long Delete(VARIANT* Unit, VARIANT* Count);
	long Expand(VARIANT* Unit);
	void InsertParagraph();
	void InsertParagraphAfter();
	void InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias);
	void CopyAsPicture();
	void SortAscending();
	void SortDescending();
	BOOL IsEqual(LPDISPATCH Range);
	float Calculate();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	LPDISPATCH GoToNext(long What);
	LPDISPATCH GoToPrevious(long What);
	void PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel);
	LPDISPATCH PreviousField();
	LPDISPATCH NextField();
	void InsertParagraphBefore();
	void InsertCells(VARIANT* ShiftCells);
	void Extend(VARIANT* Character);
	void Shrink();
	long MoveLeft(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveRight(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveUp(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveDown(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long HomeKey(VARIANT* Unit, VARIANT* Extend);
	long EndKey(VARIANT* Unit, VARIANT* Extend);
	void EscapeKey();
	void TypeText(LPCTSTR Text);
	void CopyFormat();
	void PasteFormat();
	void TypeParagraph();
	void TypeBackspace();
	void NextSubdocument();
	void PreviousSubdocument();
	void SelectColumn();
	void SelectCurrentFont();
	void SelectCurrentAlignment();
	void SelectCurrentSpacing();
	void SelectCurrentIndent();
	void SelectCurrentTabs();
	void SelectCurrentColor();
	void CreateTextbox();
	void WholeStory();
	void SelectRow();
	void SplitTable();
	void InsertRows(VARIANT* NumRows);
	void InsertColumns();
	void InsertFormula(VARIANT* Formula, VARIANT* NumberFormat);
	LPDISPATCH NextRevision(VARIANT* Wrap);
	LPDISPATCH PreviousRevision(VARIANT* Wrap);
	void PasteAsNestedTable();
	LPDISPATCH CreateAutoTextEntry(LPCTSTR Name, LPCTSTR StyleName);
	void DetectLanguage();
	void SelectCell();
	void InsertRowsBelow(VARIANT* NumRows);
	void InsertColumnsRight();
	void InsertRowsAbove(VARIANT* NumRows);
	void RtlRun();
	void LtrRun();
	void BoldRun();
	void ItalicRun();
	void RtlPara();
	void LtrPara();
	void InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType);
	LPDISPATCH ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior);
	LPDISPATCH ConvertToTable97(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	LPDISPATCH GetTopLevelTables();
	BOOL GetLanguageDetected();
	void SetLanguageDetected(BOOL bNewValue);
	float GetFitTextWidth();
	void SetFitTextWidth(float newValue);
	void ClearFormatting();
	void PasteAppendTable();
	LPDISPATCH GetHTMLDivisions();
	LPDISPATCH GetSmartTags();
	LPDISPATCH GetChildShapeRange();
	BOOL GetHasChildShapeRange();
	LPDISPATCH GetFootnoteOptions();
	LPDISPATCH GetEndnoteOptions();
	void ToggleCharacterCode();
	void PasteAndFormat(long Type);
	void PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF);
	void ShrinkDiscontiguousSelection();
	void InsertStyleSeparator();
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID, VARIANT* SubFieldNumber, 
		VARIANT* SubFieldNumber2, VARIANT* SubFieldNumber3);
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLParentNode();
	LPDISPATCH GetEditors();
	CString GetXml(BOOL DataOnly);
	VARIANT GetEnhMetaFileBits();
	LPDISPATCH GoToEditableRange(VARIANT* EditorID);
	void InsertXML(LPCTSTR XML, VARIANT* Transform);
	void InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel);
	void InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString);
};
/////////////////////////////////////////////////////////////////////////////
// Paragraphs wrapper class

class Paragraphs : public COleDispatchDriver
{
public:
	Paragraphs() {}		// Calls COleDispatchDriver default constructor
	Paragraphs(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Paragraphs(const Paragraphs& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetFirst();
	LPDISPATCH GetLast();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetFormat();
	void SetFormat(LPDISPATCH newValue);
	LPDISPATCH GetTabStops();
	void SetTabStops(LPDISPATCH newValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetKeepTogether();
	void SetKeepTogether(long nNewValue);
	long GetKeepWithNext();
	void SetKeepWithNext(long nNewValue);
	long GetPageBreakBefore();
	void SetPageBreakBefore(long nNewValue);
	long GetNoLineNumber();
	void SetNoLineNumber(long nNewValue);
	float GetRightIndent();
	void SetRightIndent(float newValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	float GetFirstLineIndent();
	void SetFirstLineIndent(float newValue);
	float GetLineSpacing();
	void SetLineSpacing(float newValue);
	long GetLineSpacingRule();
	void SetLineSpacingRule(long nNewValue);
	float GetSpaceBefore();
	void SetSpaceBefore(float newValue);
	float GetSpaceAfter();
	void SetSpaceAfter(float newValue);
	long GetHyphenation();
	void SetHyphenation(long nNewValue);
	long GetWidowControl();
	void SetWidowControl(long nNewValue);
	LPDISPATCH GetShading();
	long GetFarEastLineBreakControl();
	void SetFarEastLineBreakControl(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetHangingPunctuation();
	void SetHangingPunctuation(long nNewValue);
	long GetHalfWidthPunctuationOnTopOfLine();
	void SetHalfWidthPunctuationOnTopOfLine(long nNewValue);
	long GetAddSpaceBetweenFarEastAndAlpha();
	void SetAddSpaceBetweenFarEastAndAlpha(long nNewValue);
	long GetAddSpaceBetweenFarEastAndDigit();
	void SetAddSpaceBetweenFarEastAndDigit(long nNewValue);
	long GetBaseLineAlignment();
	void SetBaseLineAlignment(long nNewValue);
	long GetAutoAdjustRightIndent();
	void SetAutoAdjustRightIndent(long nNewValue);
	long GetDisableLineHeightGrid();
	void SetDisableLineHeightGrid(long nNewValue);
	long GetOutlineLevel();
	void SetOutlineLevel(long nNewValue);
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(VARIANT* Range);
	void CloseUp();
	void OpenUp();
	void OpenOrCloseUp();
	void TabHangingIndent(short Count);
	void TabIndent(short Count);
	void Reset();
	void Space1();
	void Space15();
	void Space2();
	void IndentCharWidth(short Count);
	void IndentFirstLineCharWidth(short Count);
	void OutlinePromote();
	void OutlineDemote();
	void OutlineDemoteToBody();
	void Indent();
	void Outdent();
	float GetCharacterUnitRightIndent();
	void SetCharacterUnitRightIndent(float newValue);
	float GetCharacterUnitLeftIndent();
	void SetCharacterUnitLeftIndent(float newValue);
	float GetCharacterUnitFirstLineIndent();
	void SetCharacterUnitFirstLineIndent(float newValue);
	float GetLineUnitBefore();
	void SetLineUnitBefore(float newValue);
	float GetLineUnitAfter();
	void SetLineUnitAfter(float newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	long GetSpaceBeforeAuto();
	void SetSpaceBeforeAuto(long nNewValue);
	long GetSpaceAfterAuto();
	void SetSpaceAfterAuto(long nNewValue);
	void IncreaseSpacing();
	void DecreaseSpacing();
};
/////////////////////////////////////////////////////////////////////////////
// Paragraph wrapper class

class Paragraph : public COleDispatchDriver
{
public:
	Paragraph() {}		// Calls COleDispatchDriver default constructor
	Paragraph(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Paragraph(const Paragraph& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetFormat();
	void SetFormat(LPDISPATCH newValue);
	LPDISPATCH GetTabStops();
	void SetTabStops(LPDISPATCH newValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetDropCap();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetKeepTogether();
	void SetKeepTogether(long nNewValue);
	long GetKeepWithNext();
	void SetKeepWithNext(long nNewValue);
	long GetPageBreakBefore();
	void SetPageBreakBefore(long nNewValue);
	long GetNoLineNumber();
	void SetNoLineNumber(long nNewValue);
	float GetRightIndent();
	void SetRightIndent(float newValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	float GetFirstLineIndent();
	void SetFirstLineIndent(float newValue);
	float GetLineSpacing();
	void SetLineSpacing(float newValue);
	long GetLineSpacingRule();
	void SetLineSpacingRule(long nNewValue);
	float GetSpaceBefore();
	void SetSpaceBefore(float newValue);
	float GetSpaceAfter();
	void SetSpaceAfter(float newValue);
	long GetHyphenation();
	void SetHyphenation(long nNewValue);
	long GetWidowControl();
	void SetWidowControl(long nNewValue);
	LPDISPATCH GetShading();
	long GetFarEastLineBreakControl();
	void SetFarEastLineBreakControl(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetHangingPunctuation();
	void SetHangingPunctuation(long nNewValue);
	long GetHalfWidthPunctuationOnTopOfLine();
	void SetHalfWidthPunctuationOnTopOfLine(long nNewValue);
	long GetAddSpaceBetweenFarEastAndAlpha();
	void SetAddSpaceBetweenFarEastAndAlpha(long nNewValue);
	long GetAddSpaceBetweenFarEastAndDigit();
	void SetAddSpaceBetweenFarEastAndDigit(long nNewValue);
	long GetBaseLineAlignment();
	void SetBaseLineAlignment(long nNewValue);
	long GetAutoAdjustRightIndent();
	void SetAutoAdjustRightIndent(long nNewValue);
	long GetDisableLineHeightGrid();
	void SetDisableLineHeightGrid(long nNewValue);
	long GetOutlineLevel();
	void SetOutlineLevel(long nNewValue);
	void CloseUp();
	void OpenUp();
	void OpenOrCloseUp();
	void TabHangingIndent(short Count);
	void TabIndent(short Count);
	void Reset();
	void Space1();
	void Space15();
	void Space2();
	void IndentCharWidth(short Count);
	void IndentFirstLineCharWidth(short Count);
	LPDISPATCH Next(VARIANT* Count);
	LPDISPATCH Previous(VARIANT* Count);
	void OutlinePromote();
	void OutlineDemote();
	void OutlineDemoteToBody();
	void Indent();
	void Outdent();
	float GetCharacterUnitRightIndent();
	void SetCharacterUnitRightIndent(float newValue);
	float GetCharacterUnitLeftIndent();
	void SetCharacterUnitLeftIndent(float newValue);
	float GetCharacterUnitFirstLineIndent();
	void SetCharacterUnitFirstLineIndent(float newValue);
	float GetLineUnitBefore();
	void SetLineUnitBefore(float newValue);
	float GetLineUnitAfter();
	void SetLineUnitAfter(float newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	long GetSpaceBeforeAuto();
	void SetSpaceBeforeAuto(long nNewValue);
	long GetSpaceAfterAuto();
	void SetSpaceAfterAuto(long nNewValue);
	BOOL GetIsStyleSeparator();
	void SelectNumber();
};
/////////////////////////////////////////////////////////////////////////////
// Find wrapper class

class Find : public COleDispatchDriver
{
public:
	Find() {}		// Calls COleDispatchDriver default constructor
	Find(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Find(const Find& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	BOOL GetForward();
	void SetForward(BOOL bNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	BOOL GetFound();
	BOOL GetMatchAllWordForms();
	void SetMatchAllWordForms(BOOL bNewValue);
	BOOL GetMatchCase();
	void SetMatchCase(BOOL bNewValue);
	BOOL GetMatchWildcards();
	void SetMatchWildcards(BOOL bNewValue);
	BOOL GetMatchSoundsLike();
	void SetMatchSoundsLike(BOOL bNewValue);
	BOOL GetMatchWholeWord();
	void SetMatchWholeWord(BOOL bNewValue);
	BOOL GetMatchFuzzy();
	void SetMatchFuzzy(BOOL bNewValue);
	BOOL GetMatchByte();
	void SetMatchByte(BOOL bNewValue);
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	long GetHighlight();
	void SetHighlight(long nNewValue);
	LPDISPATCH GetReplacement();
	LPDISPATCH GetFrame();
	long GetWrap();
	void SetWrap(long nNewValue);
	BOOL GetFormat();
	void SetFormat(BOOL bNewValue);
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	BOOL GetCorrectHangulEndings();
	void SetCorrectHangulEndings(BOOL bNewValue);
	void ClearFormatting();
	void SetAllFuzzyOptions();
	void ClearAllFuzzyOptions();
	BOOL Execute(VARIANT* FindText, VARIANT* MatchCase, VARIANT* MatchWholeWord, VARIANT* MatchWildcards, VARIANT* MatchSoundsLike, VARIANT* MatchAllWordForms, VARIANT* Forward, VARIANT* Wrap, VARIANT* Format, VARIANT* ReplaceWith, 
		VARIANT* Replace, VARIANT* MatchKashida, VARIANT* MatchDiacritics, VARIANT* MatchAlefHamza, VARIANT* MatchControl);
	BOOL Execute97(VARIANT* FindText, VARIANT* MatchCase, VARIANT* MatchWholeWord, VARIANT* MatchWildcards, VARIANT* MatchSoundsLike, VARIANT* MatchAllWordForms, VARIANT* Forward, VARIANT* Wrap, VARIANT* Format, VARIANT* ReplaceWith, 
		VARIANT* Replace);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	BOOL GetMatchKashida();
	void SetMatchKashida(BOOL bNewValue);
	BOOL GetMatchDiacritics();
	void SetMatchDiacritics(BOOL bNewValue);
	BOOL GetMatchAlefHamza();
	void SetMatchAlefHamza(BOOL bNewValue);
	BOOL GetMatchControl();
	void SetMatchControl(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Tables wrapper class

class Tables : public COleDispatchDriver
{
public:
	Tables() {}		// Calls COleDispatchDriver default constructor
	Tables(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Tables(const Tables& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(LPDISPATCH Range, long NumRows, long NumColumns, VARIANT* DefaultTableBehavior, VARIANT* AutoFitBehavior);
	long GetNestingLevel();
};
/////////////////////////////////////////////////////////////////////////////
// Table wrapper class

class Table : public COleDispatchDriver
{
public:
	Table() {}		// Calls COleDispatchDriver default constructor
	Table(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Table(const Table& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	BOOL GetUniform();
	long GetAutoFormatType();
	void Select();
	void Delete();
	void SortAscending();
	void SortDescending();
	void AutoFormat(VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit);
	void UpdateAutoFormat();
	LPDISPATCH Cell(long Row, long Column);
	LPDISPATCH Split(VARIANT* BeforeRow);
	LPDISPATCH ConvertToText(VARIANT* Separator, VARIANT* NestedTables);
	void AutoFitBehavior(long Behavior);
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID);
	LPDISPATCH GetTables();
	long GetNestingLevel();
	BOOL GetAllowPageBreaks();
	void SetAllowPageBreaks(BOOL bNewValue);
	BOOL GetAllowAutoFit();
	void SetAllowAutoFit(BOOL bNewValue);
	float GetPreferredWidth();
	void SetPreferredWidth(float newValue);
	long GetPreferredWidthType();
	void SetPreferredWidthType(long nNewValue);
	float GetTopPadding();
	void SetTopPadding(float newValue);
	float GetBottomPadding();
	void SetBottomPadding(float newValue);
	float GetLeftPadding();
	void SetLeftPadding(float newValue);
	float GetRightPadding();
	void SetRightPadding(float newValue);
	float GetSpacing();
	void SetSpacing(float newValue);
	long GetTableDirection();
	void SetTableDirection(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	BOOL GetApplyStyleHeadingRows();
	void SetApplyStyleHeadingRows(BOOL bNewValue);
	BOOL GetApplyStyleLastRow();
	void SetApplyStyleLastRow(BOOL bNewValue);
	BOOL GetApplyStyleFirstColumn();
	void SetApplyStyleFirstColumn(BOOL bNewValue);
	BOOL GetApplyStyleLastColumn();
	void SetApplyStyleLastColumn(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Cell wrapper class

class Cell : public COleDispatchDriver
{
public:
	Cell() {}		// Calls COleDispatchDriver default constructor
	Cell(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Cell(const Cell& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetRowIndex();
	long GetColumnIndex();
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetHeightRule();
	void SetHeightRule(long nNewValue);
	long GetVerticalAlignment();
	void SetVerticalAlignment(long nNewValue);
	LPDISPATCH GetColumn();
	LPDISPATCH GetRow();
	LPDISPATCH GetNext();
	LPDISPATCH GetPrevious();
	LPDISPATCH GetShading();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	void Select();
	void Delete(VARIANT* ShiftCells);
	void Formula(VARIANT* Formula, VARIANT* NumFormat);
	void SetWidth(float ColumnWidth, long RulerStyle);
	void SetHeight(VARIANT* RowHeight, long HeightRule);
	void Merge(LPDISPATCH MergeTo);
	void Split(VARIANT* NumRows, VARIANT* NumColumns);
	void AutoSum();
	LPDISPATCH GetTables();
	long GetNestingLevel();
	BOOL GetWordWrap();
	void SetWordWrap(BOOL bNewValue);
	float GetPreferredWidth();
	void SetPreferredWidth(float newValue);
	BOOL GetFitText();
	void SetFitText(BOOL bNewValue);
	float GetTopPadding();
	void SetTopPadding(float newValue);
	float GetBottomPadding();
	void SetBottomPadding(float newValue);
	float GetLeftPadding();
	void SetLeftPadding(float newValue);
	float GetRightPadding();
	void SetRightPadding(float newValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	long GetPreferredWidthType();
	void SetPreferredWidthType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Rows wrapper class

class Rows : public COleDispatchDriver
{
public:
	Rows() {}		// Calls COleDispatchDriver default constructor
	Rows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Rows(const Rows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	long GetAllowBreakAcrossPages();
	void SetAllowBreakAcrossPages(long nNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetHeadingFormat();
	void SetHeadingFormat(long nNewValue);
	float GetSpaceBetweenColumns();
	void SetSpaceBetweenColumns(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetHeightRule();
	void SetHeightRule(long nNewValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	LPDISPATCH GetFirst();
	LPDISPATCH GetLast();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(VARIANT* BeforeRow);
	void Select();
	void Delete();
	void SetLeftIndent(float LeftIndent, long RulerStyle);
	void SetHeight(float RowHeight, long HeightRule);
	void DistributeHeight();
	LPDISPATCH ConvertToText(VARIANT* Separator, VARIANT* NestedTables);
	long GetWrapAroundText();
	void SetWrapAroundText(long nNewValue);
	float GetDistanceTop();
	void SetDistanceTop(float newValue);
	float GetDistanceBottom();
	void SetDistanceBottom(float newValue);
	float GetDistanceLeft();
	void SetDistanceLeft(float newValue);
	float GetDistanceRight();
	void SetDistanceRight(float newValue);
	float GetHorizontalPosition();
	void SetHorizontalPosition(float newValue);
	float GetVerticalPosition();
	void SetVerticalPosition(float newValue);
	long GetRelativeHorizontalPosition();
	void SetRelativeHorizontalPosition(long nNewValue);
	long GetRelativeVerticalPosition();
	void SetRelativeVerticalPosition(long nNewValue);
	long GetAllowOverlap();
	void SetAllowOverlap(long nNewValue);
	long GetNestingLevel();
	long GetTableDirection();
	void SetTableDirection(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Font wrapper class

class _Font : public COleDispatchDriver
{
public:
	_Font() {}		// Calls COleDispatchDriver default constructor
	_Font(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Font(const _Font& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDuplicate();
	long GetBold();
	void SetBold(long nNewValue);
	long GetItalic();
	void SetItalic(long nNewValue);
	long GetHidden();
	void SetHidden(long nNewValue);
	long GetSmallCaps();
	void SetSmallCaps(long nNewValue);
	long GetAllCaps();
	void SetAllCaps(long nNewValue);
	long GetStrikeThrough();
	void SetStrikeThrough(long nNewValue);
	long GetDoubleStrikeThrough();
	void SetDoubleStrikeThrough(long nNewValue);
	long GetColorIndex();
	void SetColorIndex(long nNewValue);
	long GetSubscript();
	void SetSubscript(long nNewValue);
	long GetSuperscript();
	void SetSuperscript(long nNewValue);
	long GetUnderline();
	void SetUnderline(long nNewValue);
	float GetSize();
	void SetSize(float newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	float GetSpacing();
	void SetSpacing(float newValue);
	long GetScaling();
	void SetScaling(long nNewValue);
	long GetShadow();
	void SetShadow(long nNewValue);
	long GetOutline();
	void SetOutline(long nNewValue);
	long GetEmboss();
	void SetEmboss(long nNewValue);
	float GetKerning();
	void SetKerning(float newValue);
	long GetEngrave();
	void SetEngrave(long nNewValue);
	long GetAnimation();
	void SetAnimation(long nNewValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	long GetEmphasisMark();
	void SetEmphasisMark(long nNewValue);
	BOOL GetDisableCharacterSpaceGrid();
	void SetDisableCharacterSpaceGrid(BOOL bNewValue);
	CString GetNameFarEast();
	void SetNameFarEast(LPCTSTR lpszNewValue);
	CString GetNameAscii();
	void SetNameAscii(LPCTSTR lpszNewValue);
	CString GetNameOther();
	void SetNameOther(LPCTSTR lpszNewValue);
	void Grow();
	void Shrink();
	void Reset();
	void SetAsTemplateDefault();
	long GetColor();
	void SetColor(long nNewValue);
	long GetBoldBi();
	void SetBoldBi(long nNewValue);
	long GetItalicBi();
	void SetItalicBi(long nNewValue);
	float GetSizeBi();
	void SetSizeBi(float newValue);
	CString GetNameBi();
	void SetNameBi(LPCTSTR lpszNewValue);
	long GetColorIndexBi();
	void SetColorIndexBi(long nNewValue);
	long GetDiacriticColor();
	void SetDiacriticColor(long nNewValue);
	long GetUnderlineColor();
	void SetUnderlineColor(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Options wrapper class

class Options : public COleDispatchDriver
{
public:
	Options() {}		// Calls COleDispatchDriver default constructor
	Options(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Options(const Options& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	BOOL GetAllowAccentedUppercase();
	void SetAllowAccentedUppercase(BOOL bNewValue);
	BOOL GetWPHelp();
	void SetWPHelp(BOOL bNewValue);
	BOOL GetWPDocNavKeys();
	void SetWPDocNavKeys(BOOL bNewValue);
	BOOL GetPagination();
	void SetPagination(BOOL bNewValue);
	BOOL GetBlueScreen();
	void SetBlueScreen(BOOL bNewValue);
	BOOL GetEnableSound();
	void SetEnableSound(BOOL bNewValue);
	BOOL GetConfirmConversions();
	void SetConfirmConversions(BOOL bNewValue);
	BOOL GetUpdateLinksAtOpen();
	void SetUpdateLinksAtOpen(BOOL bNewValue);
	BOOL GetSendMailAttach();
	void SetSendMailAttach(BOOL bNewValue);
	long GetMeasurementUnit();
	void SetMeasurementUnit(long nNewValue);
	long GetButtonFieldClicks();
	void SetButtonFieldClicks(long nNewValue);
	BOOL GetShortMenuNames();
	void SetShortMenuNames(BOOL bNewValue);
	BOOL GetRTFInClipboard();
	void SetRTFInClipboard(BOOL bNewValue);
	BOOL GetUpdateFieldsAtPrint();
	void SetUpdateFieldsAtPrint(BOOL bNewValue);
	BOOL GetPrintProperties();
	void SetPrintProperties(BOOL bNewValue);
	BOOL GetPrintFieldCodes();
	void SetPrintFieldCodes(BOOL bNewValue);
	BOOL GetPrintComments();
	void SetPrintComments(BOOL bNewValue);
	BOOL GetPrintHiddenText();
	void SetPrintHiddenText(BOOL bNewValue);
	BOOL GetEnvelopeFeederInstalled();
	BOOL GetUpdateLinksAtPrint();
	void SetUpdateLinksAtPrint(BOOL bNewValue);
	BOOL GetPrintBackground();
	void SetPrintBackground(BOOL bNewValue);
	BOOL GetPrintDrawingObjects();
	void SetPrintDrawingObjects(BOOL bNewValue);
	CString GetDefaultTray();
	void SetDefaultTray(LPCTSTR lpszNewValue);
	long GetDefaultTrayID();
	void SetDefaultTrayID(long nNewValue);
	BOOL GetCreateBackup();
	void SetCreateBackup(BOOL bNewValue);
	BOOL GetAllowFastSave();
	void SetAllowFastSave(BOOL bNewValue);
	BOOL GetSavePropertiesPrompt();
	void SetSavePropertiesPrompt(BOOL bNewValue);
	BOOL GetSaveNormalPrompt();
	void SetSaveNormalPrompt(BOOL bNewValue);
	long GetSaveInterval();
	void SetSaveInterval(long nNewValue);
	BOOL GetBackgroundSave();
	void SetBackgroundSave(BOOL bNewValue);
	long GetInsertedTextMark();
	void SetInsertedTextMark(long nNewValue);
	long GetDeletedTextMark();
	void SetDeletedTextMark(long nNewValue);
	long GetRevisedLinesMark();
	void SetRevisedLinesMark(long nNewValue);
	long GetInsertedTextColor();
	void SetInsertedTextColor(long nNewValue);
	long GetDeletedTextColor();
	void SetDeletedTextColor(long nNewValue);
	long GetRevisedLinesColor();
	void SetRevisedLinesColor(long nNewValue);
	CString GetDefaultFilePath(long Path);
	void SetDefaultFilePath(long Path, LPCTSTR lpszNewValue);
	BOOL GetOvertype();
	void SetOvertype(BOOL bNewValue);
	BOOL GetReplaceSelection();
	void SetReplaceSelection(BOOL bNewValue);
	BOOL GetAllowDragAndDrop();
	void SetAllowDragAndDrop(BOOL bNewValue);
	BOOL GetAutoWordSelection();
	void SetAutoWordSelection(BOOL bNewValue);
	BOOL GetINSKeyForPaste();
	void SetINSKeyForPaste(BOOL bNewValue);
	BOOL GetSmartCutPaste();
	void SetSmartCutPaste(BOOL bNewValue);
	BOOL GetTabIndentKey();
	void SetTabIndentKey(BOOL bNewValue);
	CString GetPictureEditor();
	void SetPictureEditor(LPCTSTR lpszNewValue);
	BOOL GetAnimateScreenMovements();
	void SetAnimateScreenMovements(BOOL bNewValue);
	long GetRevisedPropertiesMark();
	void SetRevisedPropertiesMark(long nNewValue);
	long GetRevisedPropertiesColor();
	void SetRevisedPropertiesColor(long nNewValue);
	BOOL GetSnapToGrid();
	void SetSnapToGrid(BOOL bNewValue);
	BOOL GetSnapToShapes();
	void SetSnapToShapes(BOOL bNewValue);
	float GetGridDistanceHorizontal();
	void SetGridDistanceHorizontal(float newValue);
	float GetGridDistanceVertical();
	void SetGridDistanceVertical(float newValue);
	float GetGridOriginHorizontal();
	void SetGridOriginHorizontal(float newValue);
	float GetGridOriginVertical();
	void SetGridOriginVertical(float newValue);
	BOOL GetInlineConversion();
	void SetInlineConversion(BOOL bNewValue);
	BOOL GetIMEAutomaticControl();
	void SetIMEAutomaticControl(BOOL bNewValue);
	BOOL GetAutoFormatApplyHeadings();
	void SetAutoFormatApplyHeadings(BOOL bNewValue);
	BOOL GetAutoFormatApplyLists();
	void SetAutoFormatApplyLists(BOOL bNewValue);
	BOOL GetAutoFormatApplyBulletedLists();
	void SetAutoFormatApplyBulletedLists(BOOL bNewValue);
	BOOL GetAutoFormatApplyOtherParas();
	void SetAutoFormatApplyOtherParas(BOOL bNewValue);
	BOOL GetAutoFormatReplaceQuotes();
	void SetAutoFormatReplaceQuotes(BOOL bNewValue);
	BOOL GetAutoFormatReplaceSymbols();
	void SetAutoFormatReplaceSymbols(BOOL bNewValue);
	BOOL GetAutoFormatReplaceOrdinals();
	void SetAutoFormatReplaceOrdinals(BOOL bNewValue);
	BOOL GetAutoFormatReplaceFractions();
	void SetAutoFormatReplaceFractions(BOOL bNewValue);
	BOOL GetAutoFormatReplacePlainTextEmphasis();
	void SetAutoFormatReplacePlainTextEmphasis(BOOL bNewValue);
	BOOL GetAutoFormatPreserveStyles();
	void SetAutoFormatPreserveStyles(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyHeadings();
	void SetAutoFormatAsYouTypeApplyHeadings(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyBorders();
	void SetAutoFormatAsYouTypeApplyBorders(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyBulletedLists();
	void SetAutoFormatAsYouTypeApplyBulletedLists(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyNumberedLists();
	void SetAutoFormatAsYouTypeApplyNumberedLists(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceQuotes();
	void SetAutoFormatAsYouTypeReplaceQuotes(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceSymbols();
	void SetAutoFormatAsYouTypeReplaceSymbols(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceOrdinals();
	void SetAutoFormatAsYouTypeReplaceOrdinals(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceFractions();
	void SetAutoFormatAsYouTypeReplaceFractions(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplacePlainTextEmphasis();
	void SetAutoFormatAsYouTypeReplacePlainTextEmphasis(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeFormatListItemBeginning();
	void SetAutoFormatAsYouTypeFormatListItemBeginning(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeDefineStyles();
	void SetAutoFormatAsYouTypeDefineStyles(BOOL bNewValue);
	BOOL GetAutoFormatPlainTextWordMail();
	void SetAutoFormatPlainTextWordMail(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceHyperlinks();
	void SetAutoFormatAsYouTypeReplaceHyperlinks(BOOL bNewValue);
	BOOL GetAutoFormatReplaceHyperlinks();
	void SetAutoFormatReplaceHyperlinks(BOOL bNewValue);
	long GetDefaultHighlightColorIndex();
	void SetDefaultHighlightColorIndex(long nNewValue);
	long GetDefaultBorderLineStyle();
	void SetDefaultBorderLineStyle(long nNewValue);
	BOOL GetCheckSpellingAsYouType();
	void SetCheckSpellingAsYouType(BOOL bNewValue);
	BOOL GetCheckGrammarAsYouType();
	void SetCheckGrammarAsYouType(BOOL bNewValue);
	BOOL GetIgnoreInternetAndFileAddresses();
	void SetIgnoreInternetAndFileAddresses(BOOL bNewValue);
	BOOL GetShowReadabilityStatistics();
	void SetShowReadabilityStatistics(BOOL bNewValue);
	BOOL GetIgnoreUppercase();
	void SetIgnoreUppercase(BOOL bNewValue);
	BOOL GetIgnoreMixedDigits();
	void SetIgnoreMixedDigits(BOOL bNewValue);
	BOOL GetSuggestFromMainDictionaryOnly();
	void SetSuggestFromMainDictionaryOnly(BOOL bNewValue);
	BOOL GetSuggestSpellingCorrections();
	void SetSuggestSpellingCorrections(BOOL bNewValue);
	long GetDefaultBorderLineWidth();
	void SetDefaultBorderLineWidth(long nNewValue);
	BOOL GetCheckGrammarWithSpelling();
	void SetCheckGrammarWithSpelling(BOOL bNewValue);
	long GetDefaultOpenFormat();
	void SetDefaultOpenFormat(long nNewValue);
	BOOL GetPrintDraft();
	void SetPrintDraft(BOOL bNewValue);
	BOOL GetPrintReverse();
	void SetPrintReverse(BOOL bNewValue);
	BOOL GetMapPaperSize();
	void SetMapPaperSize(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyTables();
	void SetAutoFormatAsYouTypeApplyTables(BOOL bNewValue);
	BOOL GetAutoFormatApplyFirstIndents();
	void SetAutoFormatApplyFirstIndents(BOOL bNewValue);
	BOOL GetAutoFormatMatchParentheses();
	void SetAutoFormatMatchParentheses(BOOL bNewValue);
	BOOL GetAutoFormatReplaceFarEastDashes();
	void SetAutoFormatReplaceFarEastDashes(BOOL bNewValue);
	BOOL GetAutoFormatDeleteAutoSpaces();
	void SetAutoFormatDeleteAutoSpaces(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyFirstIndents();
	void SetAutoFormatAsYouTypeApplyFirstIndents(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyDates();
	void SetAutoFormatAsYouTypeApplyDates(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeApplyClosings();
	void SetAutoFormatAsYouTypeApplyClosings(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeMatchParentheses();
	void SetAutoFormatAsYouTypeMatchParentheses(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeReplaceFarEastDashes();
	void SetAutoFormatAsYouTypeReplaceFarEastDashes(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeDeleteAutoSpaces();
	void SetAutoFormatAsYouTypeDeleteAutoSpaces(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeInsertClosings();
	void SetAutoFormatAsYouTypeInsertClosings(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeAutoLetterWizard();
	void SetAutoFormatAsYouTypeAutoLetterWizard(BOOL bNewValue);
	BOOL GetAutoFormatAsYouTypeInsertOvers();
	void SetAutoFormatAsYouTypeInsertOvers(BOOL bNewValue);
	BOOL GetDisplayGridLines();
	void SetDisplayGridLines(BOOL bNewValue);
	BOOL GetMatchFuzzyCase();
	void SetMatchFuzzyCase(BOOL bNewValue);
	BOOL GetMatchFuzzyByte();
	void SetMatchFuzzyByte(BOOL bNewValue);
	BOOL GetMatchFuzzyHiragana();
	void SetMatchFuzzyHiragana(BOOL bNewValue);
	BOOL GetMatchFuzzySmallKana();
	void SetMatchFuzzySmallKana(BOOL bNewValue);
	BOOL GetMatchFuzzyDash();
	void SetMatchFuzzyDash(BOOL bNewValue);
	BOOL GetMatchFuzzyIterationMark();
	void SetMatchFuzzyIterationMark(BOOL bNewValue);
	BOOL GetMatchFuzzyKanji();
	void SetMatchFuzzyKanji(BOOL bNewValue);
	BOOL GetMatchFuzzyOldKana();
	void SetMatchFuzzyOldKana(BOOL bNewValue);
	BOOL GetMatchFuzzyProlongedSoundMark();
	void SetMatchFuzzyProlongedSoundMark(BOOL bNewValue);
	BOOL GetMatchFuzzyDZ();
	void SetMatchFuzzyDZ(BOOL bNewValue);
	BOOL GetMatchFuzzyBV();
	void SetMatchFuzzyBV(BOOL bNewValue);
	BOOL GetMatchFuzzyTC();
	void SetMatchFuzzyTC(BOOL bNewValue);
	BOOL GetMatchFuzzyHF();
	void SetMatchFuzzyHF(BOOL bNewValue);
	BOOL GetMatchFuzzyZJ();
	void SetMatchFuzzyZJ(BOOL bNewValue);
	BOOL GetMatchFuzzyAY();
	void SetMatchFuzzyAY(BOOL bNewValue);
	BOOL GetMatchFuzzyKiKu();
	void SetMatchFuzzyKiKu(BOOL bNewValue);
	BOOL GetMatchFuzzyPunctuation();
	void SetMatchFuzzyPunctuation(BOOL bNewValue);
	BOOL GetMatchFuzzySpace();
	void SetMatchFuzzySpace(BOOL bNewValue);
	BOOL GetApplyFarEastFontsToAscii();
	void SetApplyFarEastFontsToAscii(BOOL bNewValue);
	BOOL GetConvertHighAnsiToFarEast();
	void SetConvertHighAnsiToFarEast(BOOL bNewValue);
	BOOL GetPrintOddPagesInAscendingOrder();
	void SetPrintOddPagesInAscendingOrder(BOOL bNewValue);
	BOOL GetPrintEvenPagesInAscendingOrder();
	void SetPrintEvenPagesInAscendingOrder(BOOL bNewValue);
	long GetDefaultBorderColorIndex();
	void SetDefaultBorderColorIndex(long nNewValue);
	BOOL GetEnableMisusedWordsDictionary();
	void SetEnableMisusedWordsDictionary(BOOL bNewValue);
	BOOL GetAllowCombinedAuxiliaryForms();
	void SetAllowCombinedAuxiliaryForms(BOOL bNewValue);
	BOOL GetHangulHanjaFastConversion();
	void SetHangulHanjaFastConversion(BOOL bNewValue);
	BOOL GetCheckHangulEndings();
	void SetCheckHangulEndings(BOOL bNewValue);
	BOOL GetEnableHangulHanjaRecentOrdering();
	void SetEnableHangulHanjaRecentOrdering(BOOL bNewValue);
	long GetMultipleWordConversionsMode();
	void SetMultipleWordConversionsMode(long nNewValue);
	void SetWPHelpOptions(VARIANT* CommandKeyHelp, VARIANT* DocNavigationKeys, VARIANT* MouseSimulation, VARIANT* DemoGuidance, VARIANT* DemoSpeed, VARIANT* HelpType);
	long GetDefaultBorderColor();
	void SetDefaultBorderColor(long nNewValue);
	BOOL GetAllowPixelUnits();
	void SetAllowPixelUnits(BOOL bNewValue);
	BOOL GetUseCharacterUnit();
	void SetUseCharacterUnit(BOOL bNewValue);
	BOOL GetAllowCompoundNounProcessing();
	void SetAllowCompoundNounProcessing(BOOL bNewValue);
	BOOL GetAutoKeyboardSwitching();
	void SetAutoKeyboardSwitching(BOOL bNewValue);
	long GetDocumentViewDirection();
	void SetDocumentViewDirection(long nNewValue);
	long GetArabicNumeral();
	void SetArabicNumeral(long nNewValue);
	long GetMonthNames();
	void SetMonthNames(long nNewValue);
	long GetCursorMovement();
	void SetCursorMovement(long nNewValue);
	long GetVisualSelection();
	void SetVisualSelection(long nNewValue);
	BOOL GetShowDiacritics();
	void SetShowDiacritics(BOOL bNewValue);
	BOOL GetShowControlCharacters();
	void SetShowControlCharacters(BOOL bNewValue);
	BOOL GetAddControlCharacters();
	void SetAddControlCharacters(BOOL bNewValue);
	BOOL GetAddBiDirectionalMarksWhenSavingTextFile();
	void SetAddBiDirectionalMarksWhenSavingTextFile(BOOL bNewValue);
	BOOL GetStrictInitialAlefHamza();
	void SetStrictInitialAlefHamza(BOOL bNewValue);
	BOOL GetStrictFinalYaa();
	void SetStrictFinalYaa(BOOL bNewValue);
	long GetHebrewMode();
	void SetHebrewMode(long nNewValue);
	long GetArabicMode();
	void SetArabicMode(long nNewValue);
	BOOL GetAllowClickAndTypeMouse();
	void SetAllowClickAndTypeMouse(BOOL bNewValue);
	BOOL GetUseGermanSpellingReform();
	void SetUseGermanSpellingReform(BOOL bNewValue);
	long GetInterpretHighAnsi();
	void SetInterpretHighAnsi(long nNewValue);
	BOOL GetAddHebDoubleQuote();
	void SetAddHebDoubleQuote(BOOL bNewValue);
	BOOL GetUseDiffDiacColor();
	void SetUseDiffDiacColor(BOOL bNewValue);
	long GetDiacriticColorVal();
	void SetDiacriticColorVal(long nNewValue);
	BOOL GetOptimizeForWord97byDefault();
	void SetOptimizeForWord97byDefault(BOOL bNewValue);
	BOOL GetLocalNetworkFile();
	void SetLocalNetworkFile(BOOL bNewValue);
	BOOL GetTypeNReplace();
	void SetTypeNReplace(BOOL bNewValue);
	BOOL GetSequenceCheck();
	void SetSequenceCheck(BOOL bNewValue);
	BOOL GetBackgroundOpen();
	void SetBackgroundOpen(BOOL bNewValue);
	BOOL GetDisableFeaturesbyDefault();
	void SetDisableFeaturesbyDefault(BOOL bNewValue);
	BOOL GetPasteAdjustWordSpacing();
	void SetPasteAdjustWordSpacing(BOOL bNewValue);
	BOOL GetPasteAdjustParagraphSpacing();
	void SetPasteAdjustParagraphSpacing(BOOL bNewValue);
	BOOL GetPasteAdjustTableFormatting();
	void SetPasteAdjustTableFormatting(BOOL bNewValue);
	BOOL GetPasteSmartStyleBehavior();
	void SetPasteSmartStyleBehavior(BOOL bNewValue);
	BOOL GetPasteMergeFromPPT();
	void SetPasteMergeFromPPT(BOOL bNewValue);
	BOOL GetPasteMergeFromXL();
	void SetPasteMergeFromXL(BOOL bNewValue);
	BOOL GetCtrlClickHyperlinkToOpen();
	void SetCtrlClickHyperlinkToOpen(BOOL bNewValue);
	long GetPictureWrapType();
	void SetPictureWrapType(long nNewValue);
	long GetDisableFeaturesIntroducedAfterbyDefault();
	void SetDisableFeaturesIntroducedAfterbyDefault(long nNewValue);
	BOOL GetPasteSmartCutPaste();
	void SetPasteSmartCutPaste(BOOL bNewValue);
	BOOL GetDisplayPasteOptions();
	void SetDisplayPasteOptions(BOOL bNewValue);
	BOOL GetPromptUpdateStyle();
	void SetPromptUpdateStyle(BOOL bNewValue);
	CString GetDefaultEPostageApp();
	void SetDefaultEPostageApp(LPCTSTR lpszNewValue);
	long GetDefaultTextEncoding();
	void SetDefaultTextEncoding(long nNewValue);
	BOOL GetLabelSmartTags();
	void SetLabelSmartTags(BOOL bNewValue);
	BOOL GetDisplaySmartTagButtons();
	void SetDisplaySmartTagButtons(BOOL bNewValue);
	BOOL GetWarnBeforeSavingPrintingSendingMarkup();
	void SetWarnBeforeSavingPrintingSendingMarkup(BOOL bNewValue);
	BOOL GetStoreRSIDOnSave();
	void SetStoreRSIDOnSave(BOOL bNewValue);
	BOOL GetShowFormatError();
	void SetShowFormatError(BOOL bNewValue);
	BOOL GetFormatScanning();
	void SetFormatScanning(BOOL bNewValue);
	BOOL GetPasteMergeLists();
	void SetPasteMergeLists(BOOL bNewValue);
	BOOL GetAutoCreateNewDrawings();
	void SetAutoCreateNewDrawings(BOOL bNewValue);
	BOOL GetSmartParaSelection();
	void SetSmartParaSelection(BOOL bNewValue);
	long GetRevisionsBalloonPrintOrientation();
	void SetRevisionsBalloonPrintOrientation(long nNewValue);
	long GetCommentsColor();
	void SetCommentsColor(long nNewValue);
	BOOL GetPrintXMLTag();
	void SetPrintXMLTag(BOOL bNewValue);
	BOOL GetPrintBackgrounds();
	void SetPrintBackgrounds(BOOL bNewValue);
	BOOL GetAllowReadingMode();
	void SetAllowReadingMode(BOOL bNewValue);
	BOOL GetShowMarkupOpenSave();
	void SetShowMarkupOpenSave(BOOL bNewValue);
	BOOL GetSmartCursoring();
	void SetSmartCursoring(BOOL bNewValue);
};

/////////////////////////////////////////////////////////////////////////////
// Row wrapper class

class Row : public COleDispatchDriver
{
public:
	Row() {}		// Calls COleDispatchDriver default constructor
	Row(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Row(const Row& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetAllowBreakAcrossPages();
	void SetAllowBreakAcrossPages(long nNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetHeadingFormat();
	void SetHeadingFormat(long nNewValue);
	float GetSpaceBetweenColumns();
	void SetSpaceBetweenColumns(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetHeightRule();
	void SetHeightRule(long nNewValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	BOOL GetIsLast();
	BOOL GetIsFirst();
	long GetIndex();
	LPDISPATCH GetCells();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetNext();
	LPDISPATCH GetPrevious();
	void Select();
	void Delete();
	void SetLeftIndent(float LeftIndent, long RulerStyle);
	void SetHeight(float RowHeight, long HeightRule);
	LPDISPATCH ConvertToText(VARIANT* Separator, VARIANT* NestedTables);
	long GetNestingLevel();
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Sections wrapper class

class Sections : public COleDispatchDriver
{
public:
	Sections() {}		// Calls COleDispatchDriver default constructor
	Sections(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Sections(const Sections& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetFirst();
	LPDISPATCH GetLast();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(VARIANT* Range, VARIANT* Start);
};
/////////////////////////////////////////////////////////////////////////////
// Section wrapper class

class Section : public COleDispatchDriver
{
public:
	Section() {}		// Calls COleDispatchDriver default constructor
	Section(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Section(const Section& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetHeaders();
	LPDISPATCH GetFooters();
	BOOL GetProtectedForForms();
	void SetProtectedForForms(BOOL bNewValue);
	long GetIndex();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// HeadersFooters wrapper class

class HeadersFooters : public COleDispatchDriver
{
public:
	HeadersFooters() {}		// Calls COleDispatchDriver default constructor
	HeadersFooters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	HeadersFooters(const HeadersFooters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH Item(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// HeaderFooter wrapper class

class HeaderFooter : public COleDispatchDriver
{
public:
	HeaderFooter() {}		// Calls COleDispatchDriver default constructor
	HeaderFooter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	HeaderFooter(const HeaderFooter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetRange();
	long GetIndex();
	BOOL GetIsHeader();
	BOOL GetExists();
	void SetExists(BOOL bNewValue);
	LPDISPATCH GetPageNumbers();
	BOOL GetLinkToPrevious();
	void SetLinkToPrevious(BOOL bNewValue);
	LPDISPATCH GetShapes();
};
/////////////////////////////////////////////////////////////////////////////
// Range wrapper class

class WRange : public COleDispatchDriver
{
public:
	WRange() {}		// Calls COleDispatchDriver default constructor
	WRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WRange(const WRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	LPDISPATCH GetFormattedText();
	void SetFormattedText(LPDISPATCH newValue);
	long GetStart();
	void SetStart(long nNewValue);
	long GetEnd();
	void SetEnd(long nNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	LPDISPATCH GetDuplicate();
	long GetStoryType();
	LPDISPATCH GetTables();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	LPDISPATCH GetCells();
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetTextRetrievalMode();
	void SetTextRetrievalMode(LPDISPATCH newValue);
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetFrames();
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	LPDISPATCH GetListFormat();
	LPDISPATCH GetBookmarks();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetBold();
	void SetBold(long nNewValue);
	long GetItalic();
	void SetItalic(long nNewValue);
	long GetUnderline();
	void SetUnderline(long nNewValue);
	long GetEmphasisMark();
	void SetEmphasisMark(long nNewValue);
	BOOL GetDisableCharacterSpaceGrid();
	void SetDisableCharacterSpaceGrid(BOOL bNewValue);
	LPDISPATCH GetRevisions();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetStoryLength();
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	LPDISPATCH GetSynonymInfo();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetListParagraphs();
	LPDISPATCH GetSubdocuments();
	BOOL GetGrammarChecked();
	void SetGrammarChecked(BOOL bNewValue);
	BOOL GetSpellingChecked();
	void SetSpellingChecked(BOOL bNewValue);
	long GetHighlightColorIndex();
	void SetHighlightColorIndex(long nNewValue);
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	BOOL GetIsEndOfRowMark();
	long GetBookmarkID();
	long GetPreviousBookmarkID();
	LPDISPATCH GetFind();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetShapeRange();
	long GetCase();
	void SetCase(long nNewValue);
	VARIANT GetInformation(long Type);
	LPDISPATCH GetReadabilityStatistics();
	LPDISPATCH GetGrammaticalErrors();
	LPDISPATCH GetSpellingErrors();
	long GetOrientation();
	void SetOrientation(long nNewValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetNextStoryRange();
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	void Select();
	void SetRange(long Start, long End);
	void Collapse(VARIANT* Direction);
	void InsertBefore(LPCTSTR Text);
	void InsertAfter(LPCTSTR Text);
	LPDISPATCH Next(VARIANT* Unit, VARIANT* Count);
	LPDISPATCH Previous(VARIANT* Unit, VARIANT* Count);
	long StartOf(VARIANT* Unit, VARIANT* Extend);
	long EndOf(VARIANT* Unit, VARIANT* Extend);
	long Move(VARIANT* Unit, VARIANT* Count);
	long MoveStart(VARIANT* Unit, VARIANT* Count);
	long MoveEnd(VARIANT* Unit, VARIANT* Count);
	long MoveWhile(VARIANT* Cset, VARIANT* Count);
	long MoveStartWhile(VARIANT* Cset, VARIANT* Count);
	long MoveEndWhile(VARIANT* Cset, VARIANT* Count);
	long MoveUntil(VARIANT* Cset, VARIANT* Count);
	long MoveStartUntil(VARIANT* Cset, VARIANT* Count);
	long MoveEndUntil(VARIANT* Cset, VARIANT* Count);
	void Cut();
	void Copy();
	void Paste();
	void InsertBreak(VARIANT* Type);
	void InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment);
	BOOL InStory(LPDISPATCH Range);
	BOOL InRange(LPDISPATCH Range);
	long Delete(VARIANT* Unit, VARIANT* Count);
	void WholeStory();
	long Expand(VARIANT* Unit);
	void InsertParagraph();
	void InsertParagraphAfter();
	void InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias);
	void CopyAsPicture();
	void SortAscending();
	void SortDescending();
	BOOL IsEqual(LPDISPATCH Range);
	float Calculate();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	LPDISPATCH GoToNext(long What);
	LPDISPATCH GoToPrevious(long What);
	void PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel);
	void LookupNameProperties();
	long ComputeStatistics(long Statistic);
	void Relocate(long Direction);
	void CheckSynonyms();
	void SubscribeTo(LPCTSTR Edition, VARIANT* Format);
	void CreatePublisher(VARIANT* Edition, VARIANT* ContainsPICT, VARIANT* ContainsRTF, VARIANT* ContainsText);
	void InsertAutoText();
	void InsertDatabase(VARIANT* Format, VARIANT* Style, VARIANT* LinkToSource, VARIANT* Connection, VARIANT* SQLStatement, VARIANT* SQLStatement1, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* DataSource, VARIANT* From, VARIANT* To, VARIANT* IncludeFields);
	void AutoFormat();
	void CheckGrammar();
	void CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	LPDISPATCH GetSpellingSuggestions(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void InsertParagraphBefore();
	void NextSubdocument();
	void PreviousSubdocument();
	void ConvertHangulAndHanja(VARIANT* ConversionsMode, VARIANT* FastConversion, VARIANT* CheckHangulEnding, VARIANT* EnableRecentOrdering, VARIANT* CustomDictionary);
	void PasteAsNestedTable();
	void ModifyEnclosure(VARIANT* Style, VARIANT* Symbol, VARIANT* EnclosedText);
	void PhoneticGuide(LPCTSTR Text, long Alignment, long Raise, long FontSize, LPCTSTR FontName);
	void InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType);
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID);
	void DetectLanguage();
	LPDISPATCH ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior);
	void TCSCConverter(long WdTCSCConverterDirection, BOOL CommonTerms, BOOL UseVariants);
	BOOL GetLanguageDetected();
	void SetLanguageDetected(BOOL bNewValue);
	float GetFitTextWidth();
	void SetFitTextWidth(float newValue);
	long GetHorizontalInVertical();
	void SetHorizontalInVertical(long nNewValue);
	long GetTwoLinesInOne();
	void SetTwoLinesInOne(long nNewValue);
	BOOL GetCombineCharacters();
	void SetCombineCharacters(BOOL bNewValue);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	LPDISPATCH GetTopLevelTables();
	LPDISPATCH GetScripts();
	long GetCharacterWidth();
	void SetCharacterWidth(long nNewValue);
	long GetKana();
	void SetKana(long nNewValue);
	long GetBoldBi();
	void SetBoldBi(long nNewValue);
	long GetItalicBi();
	void SetItalicBi(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	LPDISPATCH GetHTMLDivisions();
	LPDISPATCH GetSmartTags();
	BOOL GetShowAll();
	void SetShowAll(BOOL bNewValue);
	LPDISPATCH GetDocument();
	LPDISPATCH GetFootnoteOptions();
	LPDISPATCH GetEndnoteOptions();
	void PasteAndFormat(long Type);
	void PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF);
	void PasteAppendTable();
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLParentNode();
	LPDISPATCH GetEditors();
	CString GetXml(BOOL DataOnly);
	VARIANT GetEnhMetaFileBits();
	LPDISPATCH GoToEditableRange(VARIANT* EditorID);
	void InsertXML(LPCTSTR XML, VARIANT* Transform);
	void InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel);
	void InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString);
};
/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat wrapper class

class WParagraphFormat : public COleDispatchDriver
{
public:
	WParagraphFormat() {}		// Calls COleDispatchDriver default constructor
	WParagraphFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WParagraphFormat(const WParagraphFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDuplicate();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetKeepTogether();
	void SetKeepTogether(long nNewValue);
	long GetKeepWithNext();
	void SetKeepWithNext(long nNewValue);
	long GetPageBreakBefore();
	void SetPageBreakBefore(long nNewValue);
	long GetNoLineNumber();
	void SetNoLineNumber(long nNewValue);
	float GetRightIndent();
	void SetRightIndent(float newValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	float GetFirstLineIndent();
	void SetFirstLineIndent(float newValue);
	float GetLineSpacing();
	void SetLineSpacing(float newValue);
	long GetLineSpacingRule();
	void SetLineSpacingRule(long nNewValue);
	float GetSpaceBefore();
	void SetSpaceBefore(float newValue);
	float GetSpaceAfter();
	void SetSpaceAfter(float newValue);
	long GetHyphenation();
	void SetHyphenation(long nNewValue);
	long GetWidowControl();
	void SetWidowControl(long nNewValue);
	long GetFarEastLineBreakControl();
	void SetFarEastLineBreakControl(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetHangingPunctuation();
	void SetHangingPunctuation(long nNewValue);
	long GetHalfWidthPunctuationOnTopOfLine();
	void SetHalfWidthPunctuationOnTopOfLine(long nNewValue);
	long GetAddSpaceBetweenFarEastAndAlpha();
	void SetAddSpaceBetweenFarEastAndAlpha(long nNewValue);
	long GetAddSpaceBetweenFarEastAndDigit();
	void SetAddSpaceBetweenFarEastAndDigit(long nNewValue);
	long GetBaseLineAlignment();
	void SetBaseLineAlignment(long nNewValue);
	long GetAutoAdjustRightIndent();
	void SetAutoAdjustRightIndent(long nNewValue);
	long GetDisableLineHeightGrid();
	void SetDisableLineHeightGrid(long nNewValue);
	LPDISPATCH GetTabStops();
	void SetTabStops(LPDISPATCH newValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	long GetOutlineLevel();
	void SetOutlineLevel(long nNewValue);
	void CloseUp();
	void OpenUp();
	void OpenOrCloseUp();
	void TabHangingIndent(short Count);
	void TabIndent(short Count);
	void Reset();
	void Space1();
	void Space15();
	void Space2();
	void IndentCharWidth(short Count);
	void IndentFirstLineCharWidth(short Count);
	float GetCharacterUnitRightIndent();
	void SetCharacterUnitRightIndent(float newValue);
	float GetCharacterUnitLeftIndent();
	void SetCharacterUnitLeftIndent(float newValue);
	float GetCharacterUnitFirstLineIndent();
	void SetCharacterUnitFirstLineIndent(float newValue);
	float GetLineUnitBefore();
	void SetLineUnitBefore(float newValue);
	float GetLineUnitAfter();
	void SetLineUnitAfter(float newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	long GetSpaceBeforeAuto();
	void SetSpaceBeforeAuto(long nNewValue);
	long GetSpaceAfterAuto();
	void SetSpaceAfterAuto(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Frames wrapper class

class Frames : public COleDispatchDriver
{
public:
	Frames() {}		// Calls COleDispatchDriver default constructor
	Frames(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Frames(const Frames& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(LPDISPATCH Range);
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// Frame wrapper class

class Frame : public COleDispatchDriver
{
public:
	Frame() {}		// Calls COleDispatchDriver default constructor
	Frame(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Frame(const Frame& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetHeightRule();
	void SetHeightRule(long nNewValue);
	long GetWidthRule();
	void SetWidthRule(long nNewValue);
	float GetHorizontalDistanceFromText();
	void SetHorizontalDistanceFromText(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	float GetHorizontalPosition();
	void SetHorizontalPosition(float newValue);
	BOOL GetLockAnchor();
	void SetLockAnchor(BOOL bNewValue);
	long GetRelativeHorizontalPosition();
	void SetRelativeHorizontalPosition(long nNewValue);
	long GetRelativeVerticalPosition();
	void SetRelativeVerticalPosition(long nNewValue);
	float GetVerticalDistanceFromText();
	void SetVerticalDistanceFromText(float newValue);
	float GetVerticalPosition();
	void SetVerticalPosition(float newValue);
	float GetWidth();
	void SetWidth(float newValue);
	BOOL GetTextWrap();
	void SetTextWrap(BOOL bNewValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetRange();
	void Delete();
	void Select();
	void Copy();
	void Cut();
};
/////////////////////////////////////////////////////////////////////////////
// FormFields wrapper class

class WFormFields : public COleDispatchDriver
{
public:
	WFormFields() {}		// Calls COleDispatchDriver default constructor
	WFormFields(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WFormFields(const WFormFields& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetCount();
	BOOL GetShaded();
	void SetShaded(BOOL bNewValue);
	LPUNKNOWN Get_NewEnum();
	LPDISPATCH Item(VARIANT* Index);
	LPDISPATCH Add(LPDISPATCH Range, long Type);
};
/////////////////////////////////////////////////////////////////////////////
// FormField wrapper class

class WFormField : public COleDispatchDriver
{
public:
	WFormField() {}		// Calls COleDispatchDriver default constructor
	WFormField(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WFormField(const WFormField& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	CString GetEntryMacro();
	void SetEntryMacro(LPCTSTR lpszNewValue);
	CString GetExitMacro();
	void SetExitMacro(LPCTSTR lpszNewValue);
	BOOL GetOwnHelp();
	void SetOwnHelp(BOOL bNewValue);
	BOOL GetOwnStatus();
	void SetOwnStatus(BOOL bNewValue);
	CString GetHelpText();
	void SetHelpText(LPCTSTR lpszNewValue);
	CString GetStatusText();
	void SetStatusText(LPCTSTR lpszNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	CString GetResult();
	void SetResult(LPCTSTR lpszNewValue);
	LPDISPATCH GetTextInput();
	LPDISPATCH GetCheckBox();
	LPDISPATCH GetDropDown();
	LPDISPATCH GetNext();
	LPDISPATCH GetPrevious();
	BOOL GetCalculateOnExit();
	void SetCalculateOnExit(BOOL bNewValue);
	LPDISPATCH GetRange();
	void Select();
	void Copy();
	void Cut();
	void Delete();
};
/////////////////////////////////////////////////////////////////////////////
// CheckBox wrapper class

class WCheckBox : public COleDispatchDriver
{
public:
	WCheckBox() {}		// Calls COleDispatchDriver default constructor
	WCheckBox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	WCheckBox(const WCheckBox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	BOOL GetValid();
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	float GetSize();
	void SetSize(float newValue);
	BOOL GetDefault();
	void SetDefault(BOOL bNewValue);
	BOOL GetValue();
	void SetValue(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Bookmark wrapper class

class Bookmark : public COleDispatchDriver
{
public:
	Bookmark() {}		// Calls COleDispatchDriver default constructor
	Bookmark(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Bookmark(const Bookmark& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	LPDISPATCH GetRange();
	BOOL GetEmpty();
	long GetStart();
	void SetStart(long nNewValue);
	long GetEnd();
	void SetEnd(long nNewValue);
	BOOL GetColumn();
	long GetStoryType();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	void Select();
	void Delete();
	LPDISPATCH Copy(LPCTSTR Name);
};
/////////////////////////////////////////////////////////////////////////////
// Bookmarks wrapper class

class Bookmarks : public COleDispatchDriver
{
public:
	Bookmarks() {}		// Calls COleDispatchDriver default constructor
	Bookmarks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Bookmarks(const Bookmarks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	long GetDefaultSorting();
	void SetDefaultSorting(long nNewValue);
	BOOL GetShowHidden();
	void SetShowHidden(BOOL bNewValue);
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH Item(VARIANT* Index);
	LPDISPATCH Add(LPCTSTR Name, VARIANT* Range);
	BOOL Exists(LPCTSTR Name);
};
#endif // !defined(MSWORD_H__D9AF2879_6356_426D_A0E9_43C940DC37A1__INCLUDED_)