//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSController.h>

#import "NSToolbarDelegate-Protocol.h"

@class NSButton, NSMenu, NSMenuItem, NSPopUpButton, NSSegmentedControl, NSString, SGTSearchField, TBrowserWindowController, TSegmentedControl;

@interface TToolbarController : NSController <NSToolbarDelegate>
{
    struct TNSRef<NSToolbar, void> _toolbar;
    TBrowserWindowController *_browserWindowController;
    struct TNSRef<NSArray, void> _topLevelObjects;
    struct TKeyValueBinder _viewSwitcherIndexBinder;
    NSMenuItem *_actionMenu;
    NSPopUpButton *_actionView;
    NSPopUpButton *_arrangeView;
    NSSegmentedControl *_backForwardView;
    NSMenu *_historySearchTemplate;
    NSMenuItem *_pathMenu;
    NSPopUpButton *_pathView;
    NSButton *_quickLookView;
    SGTSearchField *_searchView;
    NSButton *_toolbarButtonTemplate;
    NSMenuItem *_viewSwitcherMenu;
    TSegmentedControl *_viewSwitcherView;
    NSMenuItem *_shareMenu;
    NSButton *_shareView;
}

+ (_Bool)itemArrayContainsDefaultsPlusUnavailableSyncExtensions:(id)arg1;
+ (void)oneTimeAddItemForSyncExtensionIdentifier:(struct TString)arg1;
+ (void)upgradeNSToolbarPrefs:(_Bool)arg1;
+ (void)configurationMoveItem:(unsigned int)arg1 beforeAdjacentItem:(unsigned int)arg2;
+ (void)configurationAddItem:(unsigned int)arg1 afterItem:(unsigned int)arg2;
+ (void)configurationInsertItemIdentifier:(struct TString)arg1 atIndex:(unsigned long long)arg2;
+ (const struct ToolbarItemInfo *)itemEntryFromKind:(unsigned int)arg1;
+ (id)identifierFromKind:(unsigned int)arg1;
+ (unsigned int)kindFromIdentifier:(const struct TString *)arg1;
+ (id)toolbarDefaultItemIdentifiers;
@property(readonly, retain, nonatomic) NSButton *shareView; // @synthesize shareView=_shareView;
@property(readonly, retain, nonatomic) NSMenuItem *shareMenu; // @synthesize shareMenu=_shareMenu;
@property(readonly, retain, nonatomic) NSButton *toolbarButtonTemplate; // @synthesize toolbarButtonTemplate=_toolbarButtonTemplate;
@property(readonly, retain, nonatomic) NSButton *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(readonly, retain, nonatomic) NSMenu *historySearchTemplate; // @synthesize historySearchTemplate=_historySearchTemplate;
@property(readonly, retain, nonatomic) SGTSearchField *searchView; // @synthesize searchView=_searchView;
@property(readonly, retain, nonatomic) NSPopUpButton *arrangeView; // @synthesize arrangeView=_arrangeView;
@property(readonly, retain, nonatomic) NSMenuItem *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(readonly, retain, nonatomic) NSPopUpButton *actionView; // @synthesize actionView=_actionView;
@property(readonly, retain, nonatomic) NSMenuItem *pathMenu; // @synthesize pathMenu=_pathMenu;
@property(readonly, retain, nonatomic) NSPopUpButton *pathView; // @synthesize pathView=_pathView;
@property(readonly, retain, nonatomic) NSMenuItem *viewSwitcherMenu; // @synthesize viewSwitcherMenu=_viewSwitcherMenu;
@property(readonly, retain, nonatomic) NSSegmentedControl *viewSwitcherView; // @synthesize viewSwitcherView=_viewSwitcherView;
@property(readonly, retain, nonatomic) NSSegmentedControl *backForwardView; // @synthesize backForwardView=_backForwardView;
@property(nonatomic) TBrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeDisallowedToolbarItems;
- (void)backForwardClicked:(id)arg1;
- (void)historyChanged;
- (void)searchTextChanged:(id)arg1;
- (void)myCancelButtonAction:(id)arg1;
- (void)setSearchFieldText:(id)arg1;
- (id)searchSuggestions;
- (id)currentSearchFieldSuggestion;
- (_Bool)makeSearchFieldFirstResponder;
- (_Bool)searchFieldIsVisible;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 withPropertyListRepresentation:(id)arg3 willBeInsertedIntoToolbar:(_Bool)arg4;
- (id)toolbar:(id)arg1 itemsFromPasteboard:(id)arg2;
- (void)aboutToTearDown;
- (void)refreshToolbarForSyncExtensionChange;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarDidReorderItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)windowSplitterViewUpdated;
- (void)fixUpFlexibleSpacersForItems:(id)arg1;
- (id)toolbarItemForKind:(unsigned int)arg1 identifier:(struct TString)arg2 propertyList:(id)arg3 willBeInsertedIntoToolbar:(_Bool)arg4;
- (id)toolbar;
- (id)activeContainer;
- (void)unbindViewSwitcher;
- (void)bindViewSwitcher;
- (void)setVisibleWithoutAutoSave:(_Bool)arg1;
- (id)initWithBrowserWindowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

