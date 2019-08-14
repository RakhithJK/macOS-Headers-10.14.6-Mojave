//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAssetsBrowserController.h"

#import "IPXAssetsViewControllerDelegate-Protocol.h"
#import "IPXAssetsViewControllerStyleBasedDelegate-Protocol.h"
#import "IPXBrowserSummaryActionDelegate-Protocol.h"
#import "IPXBrowserSummaryDataSource-Protocol.h"
#import "IPXBrowserSummaryHelperDelegate-Protocol.h"
#import "IPXBrowserToolbarItemsDataSource-Protocol.h"
#import "IPXContentFilterObjectsControllerChangeReceiver-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"

@class IPXAssetsViewControllerColumnCountSliderController, IPXBrowserControllerBarsHelper, IPXBrowserControllerSummaryHelper, IPXContentFilterObjectsController, IPXLibrarySearchResult, IPXSelectionLite, IPXVersionsFilteringController, IPXWorkspaceController, IPXZoomButtonItem, MOMediaView, NSArray, NSDateInterval, NSScrollView, NSString, UXBarButtonItem, _IPXLibrarySearchResultObjectsController;
@protocol PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot;

@interface IPXLibrarySearchResultsController : IPXAssetsBrowserController <IPXObjectsControllerChangeReceiver, IPXSelectionProvider, IPXAssetsViewControllerDelegate, IPXAssetsViewControllerStyleBasedDelegate, IPXBrowserSummaryDataSource, IPXBrowserSummaryHelperDelegate, IPXBrowserSummaryActionDelegate, IPXBrowserToolbarItemsDataSource, IPXContentFilterObjectsControllerChangeReceiver>
{
    _IPXLibrarySearchResultObjectsController *_searchResultObjectsController;
    IPXVersionsFilteringController *_filteringController;
    IPXAssetsViewControllerColumnCountSliderController *_columnCountSliderController;
    IPXZoomButtonItem *_columnCountSliderBarButtonItem;
    NSArray *_restoreSelection;
    IPXSelectionLite *_transitorySelection;
    IPXContentFilterObjectsController *_contentFilterObjectsController;
    IPXLibrarySearchResult *_searchResult;
    NSString *_searchTitle;
    IPXBrowserControllerSummaryHelper *_summaryHelper;
    IPXBrowserControllerBarsHelper *_barsHelper;
    UXBarButtonItem *_extraSlideshowButton;
}

@property(readonly, nonatomic) UXBarButtonItem *extraSlideshowButton; // @synthesize extraSlideshowButton=_extraSlideshowButton;
@property(readonly, nonatomic) IPXBrowserControllerBarsHelper *barsHelper; // @synthesize barsHelper=_barsHelper;
@property(readonly, nonatomic) IPXBrowserControllerSummaryHelper *summaryHelper; // @synthesize summaryHelper=_summaryHelper;
@property(copy, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(retain, nonatomic) IPXLibrarySearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filteringLocalizedTitle;
@property(readonly, nonatomic) NSString *filteringLocalizedCaption;
@property(readonly, nonatomic) BOOL filteringIsActive;
- (void)contentFilterObjectsControllerDidChangeFiltering:(id)arg1;
- (void)showFilteringOptionsWithSender:(id)arg1;
- (void)browserSummaryHelper:(id)arg1 didChange:(unsigned long long)arg2;
- (struct CGRect)targetFrameForActionIndicator:(id)arg1;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property(readonly, nonatomic) id <PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
@property(readonly, nonatomic) NSArray *extraBarButtonItems;
@property(readonly, nonatomic) NSString *containerLocalizedCount;
@property(retain, nonatomic) NSString *containerTitle;
@property(readonly, nonatomic) NSScrollView *contentScrollView;
- (void)assetsViewController:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (unsigned long long)assetsViewController:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (long long)assetsViewController:(id)arg1 allowedDropPositionsForItemsAtIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (BOOL)assetsViewControllerUpdatesLayoutOnDrag:(id)arg1;
- (BOOL)assetsViewController:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)a_startSlideshow:(id)arg1;
- (void)a_duplicateItemFromOriginal:(id)arg1;
- (void)a_duplicateItem:(id)arg1;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (void)updateFirstResponder;
- (id)preferredFirstResponder;
- (id)objectsControllerForEdit;
- (void)objectsController:(id)arg1 propertiesChanged:(id)arg2;
- (void)databaseObjectsControllerDatabaseClosing:(id)arg1;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)objectsControllerArrangedObjectsAvailable:(id)arg1;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)layoutColumnCountScalarForAssetsViewController:(id)arg1;
- (BOOL)assetsViewController:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2;
- (void)assetsViewControllerSelectionMetadataDidChange:(id)arg1;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (void)assetsViewController:(id)arg1 didUpdateSectionsCollection:(id)arg2;
- (void)assetsViewControllerDidScroll:(id)arg1;
- (void)assetsViewControllerItemsChanged:(id)arg1;
- (BOOL)isModal;
- (id)selectionProviderCurrentSelection;
- (id)makeTouchBar;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (void)_updateTitle;
- (void)_invalidateTitle;
- (void)cancelOperation:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateToolbar;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (Class)assetsViewController:(id)arg1 itemCellClassForViewStyle:(unsigned long long)arg2;
- (unsigned long long)styleForAssetsViewController:(id)arg1;
- (void)assetsViewController:(id)arg1 didAssignMediaSection:(id)arg2 toSupplementaryView:(id)arg3 atIndexPath:(id)arg4;
- (Class)assetsViewController:(id)arg1 headerViewClassForViewStyle:(unsigned long long)arg2;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)didBecomeInactive;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (id)columnCountSliderController;
- (id)initWithAssetsViewControllerDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSDateInterval *containerDateInterval;
@property(readonly, nonatomic) BOOL containerTitleIsEditable;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *dragSourceIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MOMediaView *mediaView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL wantsTopSectionHeaderInSummaryBar;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;

@end

