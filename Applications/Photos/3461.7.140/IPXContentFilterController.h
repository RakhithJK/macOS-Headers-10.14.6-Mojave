//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXContentFilterPopoverControllerDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "RDVersionsFilterDelegate-Protocol.h"

@class IPXContentFilterObjectsController, IPXContentFilterPopoverController, IPXWorkspaceController, NSMutableDictionary, NSMutableSet, NSString;
@protocol IPXContentFilterControllerDelegate;

@interface IPXContentFilterController : NSObject <IPXContentFilterPopoverControllerDelegate, NSPopoverDelegate, RDVersionsFilterDelegate>
{
    IPXContentFilterPopoverController *_popoverController;
    CDUnknownBlockType _filteringCompletedCallback;
    IPXContentFilterObjectsController *_objectsControllerProxy;
    IPXWorkspaceController *_workspace;
    id _containerId;
    NSMutableDictionary *_filtersForIdentifier;
    NSMutableDictionary *_refilterBlocksForIdentifier;
    NSMutableDictionary *_showHiddenBlocksForIdentifier;
    NSMutableDictionary *_queryOptionsForIdentifier;
    BOOL _keywordManagerInitialized;
    id <IPXContentFilterControllerDelegate> _helperDelegate;
    id _objectsDelegate;
    NSMutableSet *_containerIDsWithFilteringDisabledInUI;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableSet *containerIDsWithFilteringDisabledInUI; // @synthesize containerIDsWithFilteringDisabledInUI=_containerIDsWithFilteringDisabledInUI;
@property(nonatomic) __weak id objectsDelegate; // @synthesize objectsDelegate=_objectsDelegate;
@property(retain, nonatomic) IPXWorkspaceController *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)hiddenContentFilterIdentifiers;
- (void)filterItemClicked:(id)arg1;
- (void)cacheOptions:(id)arg1 forUuid:(id)arg2;
- (id)queryOptionsForUuid:(id)arg1;
- (CDUnknownBlockType)showHiddenToggleBlock;
- (BOOL)containerSupportsContentFilteirng;
- (BOOL)contentFilteringUsed;
- (BOOL)hasContentFilteringRules;
- (void)removeContentFilterForContainer:(id)arg1;
- (void)setContentFilteringDisabledInUI:(BOOL)arg1 forContainer:(id)arg2;
- (void)installContentFilterForContainer:(id)arg1 withHelperDelegate:(id)arg2;
- (void)setShowsHiddenCommand:(CDUnknownBlockType)arg1;
- (void)setRefilterCommand:(CDUnknownBlockType)arg1;
- (id)filterVersionsWithContentFilter:(id)arg1;
- (void)activateContentFilter;
- (id)filteringController;
@property(readonly, nonatomic) IPXContentFilterObjectsController *currentContentFilterObjectsController;
- (id)contentFilterControllerWithObjectsController:(id)arg1;
- (id)currentFilterObjectsController;
- (void)_favoriteKeywordsDidChangeNotification:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)_showPopOverForControl:(id)arg1;
- (void)didPerformFilter:(id)arg1;
- (void)a_filterMenuItemSelected:(id)arg1;
- (void)collectionDidChange;
- (void)updateContentFilterMenu:(id *)arg1;
- (void)showContentFilterMenuWithSender:(id)arg1;
- (void)showContentFilterMenuFromControl:(id)arg1 objectsDelegate:(id)arg2 selectionHandler:(CDUnknownBlockType)arg3;
- (void)_menuWillAppearCommonInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

