//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <AppKit/NSWindowDelegate-Protocol.h>

@class NSButton, NSComboBox, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSTextView;
@protocol NSFindPatternField;

__attribute__((visibility("hidden")))
@interface NSFindPanel : NSPanel <NSWindowDelegate>
{
    NSComboBox<NSFindPatternField> *_findComboBox;
    NSComboBox<NSFindPatternField> *_replaceComboBox;
    NSTextField *_statusField;
    NSButton *_ignoreCaseButton;
    NSButton *_replaceAllButton;
    NSButton *_replaceButton;
    NSButton *_findNextButton;
    NSButton *_findPreviousButton;
    NSButton *_replaceAndFindButton;
    NSButton *_wrapAroundButton;
    NSPopUpButton *_matchPopUp;
    NSTextView *_fe;
    NSMutableArray *_recentFindStrings;
    NSMutableArray *_recentFindOptions;
    NSMutableArray *_recentReplaceStrings;
    long long _numberOfRecentStrings;
    BOOL _caseInsensitiveSearchDefault;
    long long _substringMatchDefault;
    BOOL _lastFindWasSuccessful;
}

+ (BOOL)_isLoaded;
+ (id)sharedFindPanel;
- (void)setSubstringMatchType:(long long)arg1;
- (long long)substringMatchType;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)_setDefaultSubstringMatchType:(long long)arg1;
- (long long)_defaultSubstringMatchType;
- (void)_setCaseInsensitiveSearchDefault:(BOOL)arg1;
- (BOOL)_caseInsensitiveSearchDefault;
- (void)_restoreDefaultSearchOptions;
- (void)_makeCurrentSearchOptionsDefault;
- (void)windowDidUpdate:(id)arg1;
- (void)_setDefaultSearchOptions:(id)arg1;
- (void)_findNextAndOrderFindPanelOut:(id)arg1;
- (void)_setLastFindWasSuccessful:(BOOL)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

