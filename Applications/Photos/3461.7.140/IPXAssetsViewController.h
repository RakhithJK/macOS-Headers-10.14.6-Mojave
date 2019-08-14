//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXActionIndicatorTarget-Protocol.h"
#import "IPXAssetTransitioning-Protocol.h"
#import "IPXAssetsViewTestElement-Protocol.h"
#import "IPXLiveUpdateControllerDelegate-Protocol.h"
#import "MOAssetsViewDataSource-Protocol.h"
#import "MOAssetsViewDelegate-Protocol.h"

@class IPXAssetsView, IPXFilePromiseHelper, IPXLiveUpdateController, IPXMondrianViewDataSource, IPXMondrianViewDirtyItems, IPXMondrianViewLiveUpdateSuspensionRegistry, IPXTransitoryVisibleContentSnapshot, MOMediaView, NSArray, NSDictionary, NSMutableSet, NSObject, NSScrollView, NSString, NSViewController, RDVersion, RDVersionResourceRequest, UXNavigationController;
@protocol IPXAssetsViewControllerDelegate, PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot, UXCollectionViewAccessibilityDelegate;

@interface IPXAssetsViewController : IPXViewController <IPXAssetsViewTestElement, MOAssetsViewDataSource, MOAssetsViewDelegate, IPXLiveUpdateControllerDelegate, IPXAssetTransitioning, IPXActionIndicatorTarget>
{
    id <IPXAssetsViewControllerDelegate> _delegate;
    Class _delegateClass;
    unsigned int _delegateIsStyleBased:1;
    unsigned int _delegateRespondsToShouldAnimateChange:1;
    unsigned int _delegateRespondsToLayoutColumnCountScalar:1;
    unsigned int _delegateRespondsToNoAssetsPlacardViewController:1;
    unsigned int _delegateRespondsToDidAssignMediaItemToCell:1;
    unsigned int _delegateRespondsToDidAssignMediaSectionToSupplementaryView:1;
    unsigned int _delegateRespondsToSelectionWillChangeUserInfo:1;
    unsigned int _delegateRespondsToSelectionDidChangeUserInfo:1;
    unsigned int _delegateRespondsToSelectionMetadataDidChange:1;
    unsigned int _delegateRespondsToMouseDownWithEvent:1;
    unsigned int _delegateRespondsToBackgroundWasClickedWithEvent:1;
    unsigned int _delegateRespondsToBackgroundWasRightClickedWithEvent:1;
    unsigned int _delegateRespondsToAssetAtIndexPathWasRightClickedWithEvent:1;
    unsigned int _delegateRespondsToAssetAtIndexPathWasDoubleClickedWithEvent:1;
    unsigned int _delegateRespondsToShouldSelectAssetAtIndexPath:1;
    unsigned int _delegateRespondsToShouldDeselectAssetAtIndexPath:1;
    unsigned int _delegateRespondsToDidSelectAssetAtIndexPath:1;
    unsigned int _delegateRespondsToDidDeselectAssetAtIndexPath:1;
    unsigned int _delegateRespondsToShouldShowHeaderAtIndexPath:1;
    unsigned int _delegateRespondsToShouldShowFooterAtIndexPath:1;
    unsigned int _delegateRespondsToShouldShowMainFooter:1;
    unsigned int _delegateRespondsToFooterTitle:1;
    unsigned int _delegateRespondsToFooterInfo:1;
    unsigned int _delegateRespondsToMainFooterHeight:1;
    unsigned int _delegateRespondsToMouseEnteredSectionIndexWithEvent:1;
    unsigned int _delegateRespondsToMouseExitedSectionIndexWithEvent:1;
    unsigned int _delegateRespondsToCanMoveItemsAtIndexPaths:1;
    unsigned int _delegateRespondsToMovedAssetsAtIndexPathsToIndexPath:1;
    unsigned int _delegateRespondsToAllowedDropPositionsForIndexPath:1;
    unsigned int _delegateRespondsToUpdatesLayoutOnDrag:1;
    unsigned int _delegateRespondsToImageForDraggedItemAtIndexPath:1;
    unsigned int _delegateRespondsToPasteboardWriterForItemAtIndexPath:1;
    unsigned int _delegateRespondsToDraggingItemForIndexPath:1;
    unsigned int _delegateRespondsToPreferredDraggingFormation:1;
    unsigned int _delegateRespondsToCreatedDraggingSession:1;
    unsigned int _delegateRespondsToDraggingSessionSourceOperation:1;
    unsigned int _delegateRespondsToDraggingSessionWillBeginAtPoint:1;
    unsigned int _delegateRespondsToDraggingSessionMovedToPoint:1;
    unsigned int _delegateRespondsToDraggingSessionEndedAtPoint:1;
    unsigned int _delegateRespondsToPrepareForDragOperation:1;
    unsigned int _delegateRespondsToPerformDragOperation:1;
    unsigned int _delegateRespondsToDraggingEntered:1;
    unsigned int _delegateRespondsToDraggingUpdated:1;
    unsigned int _delegateRespondsToDraggingExited:1;
    unsigned int _delegateRespondsToDraggingEnded:1;
    unsigned int _delegateRespondsToWillBeginScrolling:1;
    unsigned int _delegateRespondsToDidScroll:1;
    unsigned int _delegateRespondsToDidEndScrolling:1;
    unsigned int _delegateRespondsToAssetsVisuallyTransitioning:1;
    unsigned int _delegateRespondsToAssetsViewControllerItemsChanged:1;
    unsigned int _delegateRespondsToItemCellClassForViewStyle:1;
    unsigned int _delegateRespondsToHeaderViewClassForViewStyle:1;
    unsigned int _delegateRespondsToMainFooterViewClassForViewStyle:1;
    unsigned int _delegateRespondsToPhotosBrowserHeaderDelegate:1;
    unsigned int _delegateRespondsToItemCellClassDefinitionsForLayout:1;
    unsigned int _delegateRespondsToSupplementaryViewClassDefinitionsForLayout:1;
    unsigned int _delegateRespondsToCellReuseIdentifierAtIndexPath:1;
    unsigned int _delegateRespondsToReuseIdentifierForSupplementaryViewOfKind:1;
    unsigned int _delegateAccessibilityIdentifier:1;
    IPXMondrianViewDataSource *_dataSource_DO_NOT_DIRECTLY_ACCESS;
    double _dataSourceLiveUpdateDelay;
    double _metadataLiveUpdateDelay;
    double _thumbnailImageLiveUpdateDelay;
    double _thumbnailAspectRatioLiveUpdateDelay;
    IPXLiveUpdateController *_liveUpdateController;
    IPXMondrianViewLiveUpdateSuspensionRegistry *_liveUpdateSuspensionRegistry;
    NSArray *_liveUpdateAssetsToSelect;
    IPXMondrianViewDirtyItems *_assetsNeedingMetadataUpdate;
    IPXMondrianViewDirtyItems *_assetsNeedingThumbnailRefresh;
    IPXMondrianViewDirtyItems *_assetsToReload;
    IPXMondrianViewDirtyItems *_assetsToSelect;
    IPXMondrianViewDirtyItems *_sectionsNeedingMetadataUpdate;
    NSViewController *_noAssetsPlacardViewController;
    IPXAssetsView *_assetsView_DO_NOT_DIRECTLY_ACCESS;
    NSMutableSet *_pinnedAssets;
    NSMutableSet *_assetsMarkedForDeletion;
    NSMutableSet *_selectedIndexPaths;
    unsigned int _viewIsVisibleToUser:1;
    unsigned int _isReloading:1;
    unsigned int _isPerformingModalSelection:1;
    unsigned int _rightClickChangesSelection:1;
    unsigned int _automaticallyPinsSelectedAssets:1;
    unsigned int _lastUpdateContainedPinnedAssets:1;
    RDVersionResourceRequest *_versionResourceRequest;
    BOOL _contentLoaded;
    BOOL _allowsAssetPinning;
    BOOL _shouldRetainBottomScrollWhileUpdating;
    BOOL _triggerHighResDownloadForVisibleAssets;
    short _dataSourceModelType;
    NSObject<UXCollectionViewAccessibilityDelegate> *_accessibilityDelegate;
    IPXFilePromiseHelper *_filePromiseHelper;
}

+ (id)customLayoutAssetsViewControllerWithDelegate:(id)arg1;
+ (id)styleBasedAssetsViewControllerWithDelegate:(id)arg1;
@property(nonatomic) short dataSourceModelType; // @synthesize dataSourceModelType=_dataSourceModelType;
@property(readonly, nonatomic) IPXFilePromiseHelper *filePromiseHelper; // @synthesize filePromiseHelper=_filePromiseHelper;
@property(nonatomic) BOOL triggerHighResDownloadForVisibleAssets; // @synthesize triggerHighResDownloadForVisibleAssets=_triggerHighResDownloadForVisibleAssets;
@property(nonatomic) __weak NSObject<UXCollectionViewAccessibilityDelegate> *accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) BOOL shouldRetainBottomScrollWhileUpdating; // @synthesize shouldRetainBottomScrollWhileUpdating=_shouldRetainBottomScrollWhileUpdating;
@property(nonatomic) BOOL allowsAssetPinning; // @synthesize allowsAssetPinning=_allowsAssetPinning;
- (void).cxx_destruct;
- (id)_collectionViewAXIdentifier;
- (struct CGRect)targetFrameForActionIndicator:(id)arg1;
- (void)didTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (void)willTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (id)_indexPathsForAssetTransitionItems;
- (struct CGRect)thumbnailRectInViewForItemAtIndexPath:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)a_zoomOut:(id)arg1;
- (void)a_zoomIn:(id)arg1;
- (void)performZoomOutAction;
- (void)performZoomInAction;
- (BOOL)decreaseLayoutColumnCount;
- (BOOL)increaseLayoutColumnCount;
- (void)_handleLayoutScalarChangedNotification:(id)arg1;
- (id)_layoutColumnCountScalar;
- (void)assetsView:(id)arg1 draggingEnded:(id)arg2;
- (void)assetsView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)assetsView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)assetsView:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)assetsView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)assetsView:(id)arg1 prepareForDragOperation:(id)arg2;
- (id)dragSourceIdentifierForAssetsView:(id)arg1;
- (void)assetsView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)assetsView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)assetsView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (void)assetsView:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (unsigned long long)assetsView:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (void)assetsView:(id)arg1 moveItemsAtIndexPaths:(id)arg2 toIndexPath:(id)arg3 dropPosition:(long long)arg4;
- (id)assetsView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (id)assetsView:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (long long)preferredDraggingFormationForAssetsView:(id)arg1;
- (id)assetsView:(id)arg1 draggingItemForIndexPath:(id)arg2 proposedDraggingItem:(id)arg3;
- (BOOL)assetsViewUpdatesLayoutOnDrag:(id)arg1;
- (long long)assetsView:(id)arg1 allowedDropPositionsForItemsAtIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (BOOL)assetsView:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)assetsView:(id)arg1 mouseExitedSectionIndex:(long long)arg2 withEvent:(id)arg3;
- (void)assetsView:(id)arg1 mouseEnteredSectionIndex:(long long)arg2 withEvent:(id)arg3;
- (double)mainFooterHeightForAssetsView:(id)arg1;
- (id)mainFooterInfoForAssetsView:(id)arg1;
- (id)mainFooterTitleForAssetsView:(id)arg1;
- (BOOL)shouldShowMainFooterForAssetsView:(id)arg1 includingWhenInBounds:(char *)arg2;
- (BOOL)assetsView:(id)arg1 shouldShowFooterAtIndexPath:(id)arg2;
- (BOOL)assetsView:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2;
- (void)assetsView:(id)arg1 visibleMediaItemsHaveChanged:(id)arg2 prefetchMediaItems:(id)arg3;
- (void)assetsView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)assetsView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)assetsView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)assetsView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)assetsView:(id)arg1 didUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5;
- (void)assetsView:(id)arg1 willUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5;
- (void)assetsView:(id)arg1 didUpdateCell:(id)arg2 withMediaItem:(id)arg3 atIndexPath:(id)arg4;
- (void)assetsView:(id)arg1 willUpdateCell:(id)arg2 withMediaItem:(id)arg3 atIndexPath:(id)arg4;
- (void)assetsViewSelectionDidChange:(id)arg1;
- (void)assetsViewSelectionWillChange:(id)arg1;
- (void)assetsView:(id)arg1 magnifyWithEvent:(id)arg2;
- (void)assetsView:(id)arg1 assetWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)assetsView:(id)arg1 assetWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)assetsViewBackgroundWasRightClicked:(id)arg1 withEvent:(id)arg2;
- (void)assetsViewBackgroundWasClicked:(id)arg1 withEvent:(id)arg2;
- (void)assetsViewMouseDown:(id)arg1 withEvent:(id)arg2;
- (id)assetsView:(id)arg1 indexPathsForMediaItems:(id)arg2;
- (id)customStyleSupplementaryViewClassesForAssetsView:(id)arg1;
- (id)customStyleCellClassesForAssetsView:(id)arg1;
- (id)customStyleLayoutForAssetsView:(id)arg1;
- (Class)assetsView:(id)arg1 mainFooterClassForStyle:(unsigned long long)arg2;
- (Class)assetsView:(id)arg1 headerClassForStyle:(unsigned long long)arg2;
- (Class)assetsView:(id)arg1 cellClassForStyle:(unsigned long long)arg2;
- (id)assetsView:(id)arg1 supplementaryViewReuseIdentifierOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)assetsView:(id)arg1 cellReuseIdentifierAtIndexPath:(id)arg2;
- (id)assetsView:(id)arg1 mediaItemAtIndexPath:(id)arg2;
- (id)assetsView:(id)arg1 mediaSectionAtIndexPath:(id)arg2;
- (long long)assetsView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInAssetsView:(id)arg1;
@property(nonatomic) BOOL forwardMouseEvents;
- (void)registerForDraggedTypes:(id)arg1;
- (id)pasteboardWriterForItemAtIndexPath:(id)arg1;
- (id)imageForDraggedItemAtIndexPath:(id)arg1;
- (BOOL)assetViewIsSourceOfDrag:(id)arg1;
@property(nonatomic) BOOL automaticallyPinsSelectedAssets;
- (void)unpinAssets:(id)arg1 withoutTriggeringLiveUpdate:(BOOL)arg2;
- (void)pinAssets:(id)arg1 withoutTriggeringLiveUpdate:(BOOL)arg2;
- (id)_pinnedAssets;
- (BOOL)getWindowRect:(struct CGRect *)arg1 representativeImage:(struct CGImage **)arg2 forIndexPath:(id)arg3;
- (BOOL)getWindowRect:(struct CGRect *)arg1 representativeImage:(struct CGImage **)arg2 forAsset:(id)arg3;
- (id)indexPathsOfAssets:(id)arg1;
- (id)indexPathOfAsset:(id)arg1;
- (id)assetsAtSectionIndex:(long long)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)visibleCells;
- (id)visibleAssets;
- (id)visibleMediaItemIndexPathsWithOverdraw;
- (id)visibleMediaItemIndexPaths;
- (id)visibleMediaItems;
- (long long)sectionIndexHitByWindowPoint:(struct CGPoint)arg1;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForAsset:(id)arg1;
- (id)cellForAssetAtIndexPath:(id)arg1;
- (BOOL)cancelModalSelection;
- (BOOL)endModalSelection;
- (BOOL)_endModalSelectionWithSuccessState:(BOOL)arg1;
- (BOOL)beginModalSelection;
- (BOOL)isPerformingModalSelection;
- (void)scrollToEnd:(BOOL)arg1;
- (void)scrollToBeginning:(BOOL)arg1;
@property(readonly, nonatomic, getter=isScrolledToBottom) BOOL scrolledToBottom;
@property(readonly, nonatomic, getter=isScrolledToTop) BOOL scrolledToTop;
- (void)assetsViewDidEndScrolling:(id)arg1;
- (void)assetsViewWillBeginScrolling:(id)arg1;
- (id)mediaSectionAtIndex:(long long)arg1;
- (void)mediaViewDidScroll:(id)arg1;
- (void)_updateCellScrollPositionForMediaView:(id)arg1 includeOnlyVisible:(BOOL)arg2;
- (id)contentScrollView;
- (void)scrollAsset:(id)arg1 toPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (unsigned long long)_collectionViewScrollPositionForAssetsViewControllerScrollPosition:(unsigned long long)arg1;
- (BOOL)enterCaptionEditingModeForAssetAtIndexPath:(id)arg1;
- (void)requestSelectionOfAssets:(id)arg1;
- (id)assetsToSelectAfterDeletingSelectedAssets:(id)arg1 options:(id)arg2;
- (id)assetsToSelectAfterDeletingCurrentlySelectedAssets;
- (void)unmarkAssetsForDeletion:(id)arg1;
- (void)markAssetsForDeletion:(id)arg1;
- (void)selectIfNoSelectedAssetAtIndexPath:(id)arg1;
- (void)setShouldDeselectAllOnBackgroundClick:(BOOL)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)deselectAllAssetsUserInitiated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)selectAllAssetsUserInitiated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)deselectAssets:(id)arg1 userInitiated:(BOOL)arg2 animated:(BOOL)arg3;
- (void)selectAssets:(id)arg1 byExtendingSelection:(BOOL)arg2 userInitiated:(BOOL)arg3 animated:(BOOL)arg4;
- (void)selectAssetsAtIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 userInitiated:(BOOL)arg3 animated:(BOOL)arg4;
- (BOOL)_performUserInitiated:(BOOL)arg1 selectionChangeWithBlock:(CDUnknownBlockType)arg2;
- (id)allIndexPaths;
- (id)allAssets;
- (id)selectedIndexPaths;
- (id)selectedAssets;
- (unsigned long long)numberOfSelectedAssets;
@property(readonly, nonatomic, getter=isLassoSelectionInProgress) BOOL lassoSelectionInProgress;
- (void)_selectedIndexPathsAssignPaths:(id)arg1;
- (void)_selectedIndexPathsAddPaths:(id)arg1;
- (id)_selectedIndexPaths;
@property(nonatomic) BOOL allowsExternalDrop;
@property(nonatomic) BOOL allowsRearranging;
@property(nonatomic) BOOL rightClickChangesSelection;
@property(nonatomic) BOOL allowsLassoSelection;
@property(nonatomic) BOOL allowsContinuousSelection;
@property(nonatomic) BOOL allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection;
@property(nonatomic) BOOL allowsSelection;
- (void)waitUntilVisibleContentIsPrepared:(CDUnknownBlockType)arg1;
- (double)_contentPreparationTimeout;
- (void)setAssetViewBackgroundColor:(id)arg1;
- (void)updateAssetsSectionCollection:(CDUnknownBlockType)arg1;
- (void)cancelAllAssetOperations:(CDUnknownBlockType)arg1;
- (void)setThumbnailLoadingConcurrencyEnabled:(BOOL)arg1;
- (void)cancelUpdates;
- (BOOL)updateInProgress;
- (void)setNeedsMetadataUpdateForSections:(id)arg1;
- (void)invalidateThumbnailAspectRatiosForAssetAddresses:(id)arg1;
- (void)invalidateThumbnailAspectRatiosForAssets:(id)arg1;
- (void)setNeedsThumbnailUpdateForAssetAddresses:(id)arg1;
- (void)setNeedsThumbnailUpdateForAssets:(id)arg1;
- (void)setNeedsMetadataUpdateForAssetAddresses:(id)arg1;
- (void)setNeedsMetadataUpdateForAssets:(id)arg1;
- (void)setAssetsNeedUpdateInResponseToUserAction;
- (void)setAssetsNeedUpdate;
- (void)_setAssetsNeedUpdateMainThreadOnly;
- (double)_liveUpdateDelayFactor;
- (void)reloadAssetsKeepingPosition:(BOOL)arg1 andSelection:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_forgetDirtyAssets;
- (int)_performSectionMetadataUpdateWithPermissionCheck:(CDUnknownBlockType)arg1;
- (int)_performReloadAssetsWithPermissionCheck:(CDUnknownBlockType)arg1;
- (int)_performAssetThumbnailUpdateWithPermissionCheck:(CDUnknownBlockType)arg1;
- (int)_performAssetMetadataUpdateWithPermissionCheck:(CDUnknownBlockType)arg1;
- (int)_performDataSourceUpdateWithPermissionCheck:(CDUnknownBlockType)arg1;
- (BOOL)shouldReplyToUserActionsForLiveUpdateController:(id)arg1;
- (double)liveUpdateController:(id)arg1 retryDelayAfterFailingAction:(SEL)arg2;
- (CDUnknownBlockType)permissionCheckForLiveUpdateController:(id)arg1;
- (SEL *)actionListForLiveUpdateController:(id)arg1;
- (void)_updateWithSectionsCollection:(id)arg1 modifiedItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_liveUpdate_updateAssetsViewWithChangeSet:(id)arg1 forLatestSectionsCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)animatesChange:(id)arg1;
- (BOOL)_assetsViewShouldAnimateLiveUpdateWithChangeSet:(id)arg1;
- (BOOL)_shouldPerformChanges;
- (void)_requestUpdatesWithDelay:(double)arg1;
@property(nonatomic) double thumbnailAspectRatioLiveUpdateDelay;
@property(nonatomic) double thumbnailImageLiveUpdateDelay;
@property(nonatomic) double metadataLiveUpdateDelay;
@property(nonatomic) double dataSourceLiveUpdateDelay;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)preferredFirstResponder;
- (void)_updateContentInsetFromLayoutGuides;
- (void)didUpdateLayoutGuides;
- (void)loadView;
- (id)indexPathOfAssetBelowIndexPath:(id)arg1;
- (id)indexPathOfAssetAboveIndexPath:(id)arg1;
- (id)indexPathOfAssetAfterIndexPath:(id)arg1;
- (id)indexPathOfAssetBeforeIndexPath:(id)arg1;
- (id)indexPathForAssetAtAssetViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)assetViewPointForLayoutPoint:(struct CGPoint)arg1;
- (struct CGPoint)layoutPointForAssetViewPoint:(struct CGPoint)arg1;
- (void)updateLayoutStyleAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attachDataSource;
- (id)sectionsCollection;
- (id)delegate;
@property(readonly, copy) NSString *description;
- (void)_handleDidUpdateSupplementaryView:(id)arg1 withMediaSection:(id)arg2 atIndexPath:(id)arg3;
- (void)_handleWillUpdateSupplementaryView:(id)arg1 withMediaSection:(id)arg2;
- (void)_handleDidUpdateCell:(id)arg1 withMediaItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_handleWillUpdateCell:(id)arg1 withMediaItem:(id)arg2;
- (void)_handleSelectionDidChangeInResponseToUserAction:(BOOL)arg1;
- (void)_handleSelectionWillChangeInResponseToUserAction:(BOOL)arg1;
- (void)_respondToDoubleClickEvent:(id)arg1 onAssetAtIndexPath:(id)arg2;
- (void)_respondToRightClickEvent:(id)arg1 onAssetAtIndexPath:(id)arg2;
- (void)_respondToViewBackgroundRightClickWithEvent:(id)arg1;
- (void)_respondToViewBackgroundClickWithEvent:(id)arg1;
- (void)_respondToMouseDownWithEvent:(id)arg1;
- (void)_cancelAllTextEditingOperations;
- (id)_indexPathsForAssets:(id)arg1;
@property(readonly, nonatomic) NSString *dragSourceIdentifier;
@property(readonly, nonatomic) IPXTransitoryVisibleContentSnapshot *transitoryVisibleContentSnapshot;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property(readonly, nonatomic) id <PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
- (id)_mediaView;
@property(readonly, nonatomic) MOMediaView *mediaView;
- (id)_assetsView;
- (void)_updateColumnCountOfAssetsView:(id)arg1;
- (void)_setSectionsCollection:(id)arg1 keepingViewPosition:(BOOL)arg2 andSelection:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reloadDataWithDataSourceUpdateBlock:(CDUnknownBlockType)arg1 invalidateMemoryCaches:(BOOL)arg2 restorePosition:(BOOL)arg3 keepSelection:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_reportUpdatedSectionsCollectionAndScrollToBottom:(BOOL)arg1;
- (id)_customLayoutDelegate;
- (id)_layoutStyleDelegate;
- (id)_dataSource;
- (id)_newDataSource;
- (void)dealloc;
- (id)_testElement_currentTopMostOneUpController;
- (id)_testElement_previousIndexPathToIndexPath:(id)arg1;
- (void)testElement_exitOneUp;
- (id)testElement_enterOneUpFromSelectedItemVersion;
- (void)testElement_prepareForOneUpTransitionWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UXNavigationController *testElement_navigationController;
- (BOOL)testElement_selectItemAtIndexPath:(id)arg1;
- (BOOL)testElement_selectItemVersion:(id)arg1;
- (BOOL)testElement_selectPreviousItem;
- (BOOL)testElement_selectLastItem;
- (BOOL)testElement_selectFirstItem;
- (BOOL)testElement_selectItemsAtIndexPaths:(id)arg1;
@property(readonly, nonatomic) RDVersion *testElement_selectedItemVersion;
@property(readonly, nonatomic) NSArray *testElement_indexPathsForSelectedItems;
- (long long)testElement_numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long testElement_numberOfSections;
- (void)testElement_invalidateSelection;
@property(readonly, nonatomic) RDVersion *testElement_firstItemVersion;
@property(readonly, nonatomic) NSScrollView *testElement_scrollView;
@property(readonly, nonatomic) BOOL testElement_isEmpty;
@property(readonly, nonatomic) BOOL testElement_isReady;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDictionary *testElement_scrollingExtraInformation;

@end

