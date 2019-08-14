//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"
#import "PFActionNotificationsReceiver-Protocol.h"

@class IPXMetadataInfoViewController, NSLock, NSOperationQueue, NSSet, NSString, NSTimer, NSTokenField, NSView, RDDatabase;

@interface IPXMetadataKeywordTokensController : IPXViewController <PFActionNotificationsReceiver, IPXMetadataEditorViewController, NSTokenFieldDelegate>
{
    RDDatabase *_versionDatabaseCached;
    NSSet *_cachedInitialKeywords;
    NSOperationQueue *_deferredDataQueue;
    NSOperationQueue *_saveOperationQueue;
    NSSet *_versionSet;
    NSSet *_cachedCommonKeywords;
    BOOL _updatePending;
    BOOL _isTokenized;
    BOOL _edited;
    BOOL _readOnly;
    NSTimer *_delayedLoadingTimer;
    NSLock *_initialKeywordsLock;
    NSLock *_commonKeywordsLock;
    NSTokenField *_keywordsTokenField;
    IPXMetadataInfoViewController *_contentController;
}

@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) __weak NSTokenField *keywordsTokenField; // @synthesize keywordsTokenField=_keywordsTokenField;
- (void).cxx_destruct;
- (void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (Class)_expectedTokenClass;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)saveChanges;
- (void)controlTextDidChange:(id)arg1;
- (void)a_keywordsDidChange:(id)arg1;
- (BOOL)_isTextViewTokenized:(id)arg1;
- (id)_keywordStringFromKeywordSet:(id)arg1;
- (id)_keywordSetForVersions:(id)arg1 commonOnly:(BOOL)arg2;
- (id)_keywordSetForImportAssets:(id)arg1 commonOnly:(BOOL)arg2;
- (id)_fetchCurrentKeywordString;
- (void)_resetCommonKeywords;
- (id)_commonKeywords;
- (void)_resetInitialKeywords;
- (id)_initialKeywords;
- (id)_keywordSetForSet:(id)arg1 commonOnly:(BOOL)arg2;
- (void)_setVersionSet:(id)arg1;
- (id)_versionDatabase;
- (void)updateViewForLoading;
- (void)cancelLoadingDelay;
- (void)updateViewForLoadingAfterDelay:(double)arg1;
- (void)updateViewForEmptyValue;
- (void)updateViewForNormalValue;
- (void)updateViewForDisabled;
- (void)updateViewForReadWrite;
- (void)updateViewForReadOnlyUpdatePlaceholder:(BOOL)arg1;
- (void)updateViewValueControlPlaceholderStyle;
- (void)_delayedLoadingTimeout:(id)arg1;
- (void)selectedVersions:(id)arg1;
- (void)propertiesHaveChanged:(id)arg1 forSelectedVersions:(id)arg2;
- (id)deferredDataQueue;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly, nonatomic) NSView *initialFirstResponder;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

