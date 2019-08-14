//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DictionaryObj, NSIndexSet, NSMutableArray, NSMutableDictionary, NSProgressIndicator, NSScrollView, NSURL, NSView, NSWindow, WebView;

@interface PreferenceController : NSObject
{
    NSWindow *_preferenceWindow;
    struct CGSize _minContentSizeWithoutWebView;
    NSMutableArray *_dictionariesWithFlags;
    NSIndexSet *_dictionaryListSet;
    WebView *_dictPrefWebView;
    NSView *_enclosingWebView;
    NSScrollView *_dictionaryScrollView;
    NSProgressIndicator *_progressIndicator;
    long long _totalDownloadingSize;
    long long _totalDownloadedSize;
    NSMutableDictionary *_downloardedSizeForDictionary;
    NSURL *_emptyPrefsHTMLURL;
    DictionaryObj *_lastSelectedDictionary;
    long long _numberOfDictionaries;
    BOOL _loadingHTML;
    BOOL _windowWillCloseDone;
    BOOL _preferenceWasChanged;
    unsigned long long _modifiersInOpen;
    NSMutableArray *_childNameArchive;
}

+ (id)sharedPreferenceWithCreate:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)_dictionaryStartStopDownload:(id)arg1;
- (void)_setPrefsToHTML:(id)arg1 withCopyright:(id)arg2;
- (id)_retrievePrefsFromHTML;
- (BOOL)_updateCurrentDictionaryPrefs;
- (void)_updatePreferredLanguageInfoWithDictionaries:(struct __CFArray *)arg1;
- (void)_checkAndUpdateApplicationPreference:(BOOL)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)setDictionaryListSet:(id)arg1;
- (void)_updateWithCurrentList;
- (void)setDictionariesWithFlags:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)startDownloadLinguisticData:(id)arg1;
- (void)startDownloadDictionary:(id)arg1;
- (void)checkboxClicked:(id)arg1;
- (id)dictionaryInfoArray;
- (void)prepareToQuit;
- (void)show;
- (void)dealloc;
- (id)init;

@end

