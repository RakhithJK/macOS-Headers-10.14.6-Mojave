//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXCanvasItemViewAXDelegate-Protocol.h"
#import "IPXEditorialBrowserControllerDelegate-Protocol.h"
#import "IPXEditorialModelViewerDelegate-Protocol.h"
#import "IPXElasticScrollAnimatorTarget-Protocol.h"
#import "IPXViewerItemControllerViewDelegate-Protocol.h"
#import "IPXViewerLayoutItem-Protocol.h"
#import "IPXViewerOverlayDataSource-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class CALayer, IPXCanvasItemView, IPXEditViewConfiguration, IPXEditorialBrowserController, IPXElasticScrollAnimator, IPXFilePromiseHelper, IPXReconnectManager, IPXViewerController, IPXViewerItemDragDropState, IPXViewerItemModel, NSArray, NSDate, NSEvent, NSMutableArray, NSObject, NSSet, NSString, NSView, PAItemController, PAItemViewController, PAPreviewRequest, PFCanceler, PXImageLayerModulator, RDFaceTile, RDVersion;
@protocol IPXViewerItemControllerAXDelegate, IPXViewerItemControllerDelegate;

@interface IPXViewerItemController : IPXViewController <IPXViewerOverlayDataSource, IPXCanvasItemViewAXDelegate, IPXViewerItemControllerViewDelegate, IPXElasticScrollAnimatorTarget, IPXEditorialModelViewerDelegate, IPXEditorialBrowserControllerDelegate, NSDraggingSource, IPXViewerLayoutItem>
{
    IPXViewerController *_owningViewerController;
    unsigned long long _currentReadyMask;
    NSMutableArray *_readyHandlers;
    NSObject *_readyHandlersSynchronizationObj;
    NSMutableArray *_activeOverlays;
    NSMutableArray *_inactiveOverlays;
    IPXCanvasItemView *_canvasView;
    IPXReconnectManager *_reconnectManager;
    IPXViewerItemDragDropState *_dragDropState;
    NSEvent *_mouseDownEvent;
    BOOL _didAllowDraggingOnMouseDown;
    BOOL _AXFacesOverlayIsInHierarchyAlready;
    BOOL _isPresentingInteractiveContent;
    double _scrubOffset;
    CALayer *_viewLayer;
    CALayer *_previewLayer;
    CALayer *_previewClipLayer;
    IPXEditViewConfiguration *_previewItemViewConfiguration;
    IPXElasticScrollAnimator *_verticalScrollAnimator;
    IPXEditorialBrowserController *_editorialBrowserController;
    CALayer *_editorialSnapshotLayer;
    BOOL _addingOrRemovingEditorialBrowser;
    CALayer *_contentLayerForSwipeAnimation;
    BOOL _animatingInScrollView;
    CDUnknownBlockType _needsUpdateBadgesBlock;
    BOOL _needsToHidePreviewLayer;
    BOOL _needsToHideCanvasView;
    unsigned long long _parallaxMethod;
    double _parallaxTravel;
    BOOL _parallaxAppliesToOverlays;
    PAPreviewRequest *_previewRequest;
    CDUnknownBlockType _lastSkippedPreviewUpdateBlock;
    PFCanceler *_imageRequestCanceler;
    unsigned long long _previewUpdatesCount;
    unsigned long long _previewUpdateCallsCount;
    NSDate *_previewUpdatesCountLastLogDate;
    unsigned long long _controllerSerialNr;
    BOOL _isObservingNotifications;
    BOOL _unconditionallyHighlightsAllFaces;
    BOOL _showsAdjustmentsLoadingSpinner;
    BOOL _showsFaces;
    BOOL _allowItemDrag;
    BOOL _isTransitioning;
    BOOL _editing;
    BOOL _extraLoadingEnabled;
    BOOL _inOptimizedScrubbingMode;
    BOOL _tryToDownloadAgainAfterError;
    IPXViewerItemModel *_viewerItemModel;
    id <IPXViewerItemControllerDelegate> _delegate;
    id <IPXViewerItemControllerAXDelegate> _axDelegate;
    long long _badgesMode;
    NSArray *_pipelineFilters;
    double _zoomValue;
    long long _renderMode;
    unsigned long long _optimizedState;
    CALayer *_parallaxClipLayer;
    unsigned long long _lastSetPreviewPresentationMode;
    NSSet *_facesMetadataEditorSelectedFaceTiles;
    RDFaceTile *_facesMetadataEditorFaceTileUnderMouseCursor;
    IPXFilePromiseHelper *_filePromiseHelper;
    PXImageLayerModulator *_imageLayerModulator;
    PAItemViewController *_itemViewController;
    unsigned long long _presentationMode;
    struct CGPoint _panOffset;
    struct NSEdgeInsets _edgeInsets;
}

+ (BOOL)waitForItemControllersToBeReady:(id)arg1 timeout:(double)arg2;
+ (BOOL)ensureItemControllersAreReady:(id)arg1 timeout:(double)arg2;
+ (Class)viewClass;
+ (BOOL)isInitiallySetUpZoomedToFit;
+ (void)initialize;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property BOOL tryToDownloadAgainAfterError; // @synthesize tryToDownloadAgainAfterError=_tryToDownloadAgainAfterError;
@property(readonly) PAItemViewController *itemViewController; // @synthesize itemViewController=_itemViewController;
@property(retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property(retain, nonatomic) IPXFilePromiseHelper *filePromiseHelper; // @synthesize filePromiseHelper=_filePromiseHelper;
@property(retain, nonatomic) RDFaceTile *facesMetadataEditorFaceTileUnderMouseCursor; // @synthesize facesMetadataEditorFaceTileUnderMouseCursor=_facesMetadataEditorFaceTileUnderMouseCursor;
@property(retain, nonatomic) NSSet *facesMetadataEditorSelectedFaceTiles; // @synthesize facesMetadataEditorSelectedFaceTiles=_facesMetadataEditorSelectedFaceTiles;
@property unsigned long long lastSetPreviewPresentationMode; // @synthesize lastSetPreviewPresentationMode=_lastSetPreviewPresentationMode;
@property(retain) CALayer *parallaxClipLayer; // @synthesize parallaxClipLayer=_parallaxClipLayer;
@property(nonatomic) unsigned long long optimizedState; // @synthesize optimizedState=_optimizedState;
@property(nonatomic, getter=isInOptimizedScrubbingMode) BOOL inOptimizedScrubbingMode; // @synthesize inOptimizedScrubbingMode=_inOptimizedScrubbingMode;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) struct CGPoint panOffset; // @synthesize panOffset=_panOffset;
@property(nonatomic) BOOL extraLoadingEnabled; // @synthesize extraLoadingEnabled=_extraLoadingEnabled;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) long long badgesMode; // @synthesize badgesMode=_badgesMode;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) BOOL allowItemDrag; // @synthesize allowItemDrag=_allowItemDrag;
@property(nonatomic) BOOL showsFaces; // @synthesize showsFaces=_showsFaces;
@property(nonatomic) BOOL showsAdjustmentsLoadingSpinner; // @synthesize showsAdjustmentsLoadingSpinner=_showsAdjustmentsLoadingSpinner;
@property(nonatomic) BOOL unconditionallyHighlightsAllFaces; // @synthesize unconditionallyHighlightsAllFaces=_unconditionallyHighlightsAllFaces;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic, setter=setAXDelegate:) __weak id <IPXViewerItemControllerAXDelegate> axDelegate; // @synthesize axDelegate=_axDelegate;
@property(nonatomic) __weak id <IPXViewerItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IPXViewerItemModel *viewerItemModel; // @synthesize viewerItemModel=_viewerItemModel;
@property(readonly, nonatomic) __weak IPXViewerController *owningViewerController; // @synthesize owningViewerController=_owningViewerController;
- (void).cxx_destruct;
- (id)canvasItemViewAXVersion:(id)arg1;
- (void)_AXDeactivateFacesUI;
- (void)_AXActivateFacesUI;
- (BOOL)_AXFacesUIIsInHierarchy;
- (id)_axOverlaysWithTransientUI;
- (BOOL)canvasItemViewAXPerformShowDefaultUI:(id)arg1;
- (BOOL)canvasItemViewAXPerformShowAlternateUI:(id)arg1;
- (BOOL)canvasItemViewAXSupportsTransientUI:(id)arg1;
- (BOOL)canvasItemViewAXPerformPress:(id)arg1;
- (void)smallPAPreviewImagesUpdatedForVersionAddress:(id)arg1;
- (void)prepareForEditingWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadWithVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flipVertical;
- (void)flipHorizontal;
- (void)rotateLeft;
- (void)rotateRight;
- (void)_didExitCrop;
- (void)_willExitCrop;
- (void)_didEnterCrop;
- (void)_willEnterCrop;
- (id)workQueueForOverlay:(id)arg1;
- (id)selectedVersionsForOverlay:(id)arg1;
- (id)primarySelectionForOverlay:(id)arg1;
- (BOOL)shouldImmediatelyRecycle;
- (BOOL)allowsAnimatedWidthChange;
- (BOOL)allowsZooming;
- (BOOL)allowsEditing;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)shouldAllowDraggingForEvent:(id)arg1;
- (void)_didEndDragging;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (double)verticalScrollOffsetThresholdForEditorialBrowserController:(id)arg1;
- (void)editorialBrowserControllerDidFinishScrolling:(id)arg1;
- (struct CGRect)snapshotFrameForEditorialModel:(id)arg1;
- (id)newSnapshotLayerForEditorialModel:(id)arg1;
- (void)elasticScrollAnimator:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)scrollOffsetForElasticScrollAnimator:(id)arg1;
- (struct CGSize)scrollSizeForElasticScrollAnimator:(id)arg1;
- (void)viewerItemViewDidChangeBackingProperties;
- (id)_previewImageForDragDrop;
- (id)_previewImageForDragDropSizePolicy;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_beginDraggingSession;
- (id)loadingIndicator;
- (id)downloadProgressBadge;
- (id)badgesOverlayController;
- (void)updateBadgesAnimated:(BOOL)arg1 optionalBadgeUpdateDelgate:(id)arg2;
- (void)updateBadgesAnimated:(BOOL)arg1;
- (void)setBadgesModeWithoutUpdating:(long long)arg1;
- (void)updateFacesOverlayVisibility;
@property(nonatomic) BOOL showsCloudPhotosErrorGlyph;
@property(nonatomic) BOOL showsCloudPhotosDownloadProgress;
- (void)_updateFacesOverlay;
- (void)_infoPopoverDidBecomeHidden:(id)arg1;
- (void)_infoPopoverDidBecomeVisible:(id)arg1;
- (void)_facesMetadataEditorFaceTileUnderMouseCursorDidChange:(id)arg1;
- (void)_facesMetadataEditorFaceTileSelectionDidChange:(id)arg1;
- (void)_userDidAddFaceNotification:(id)arg1;
- (BOOL)_shouldShowFacesOverlay;
- (BOOL)_shouldShowFacesMetadataEditorHighlightedFaces;
- (BOOL)_shouldShowFacesLabels;
- (BOOL)disallowPanningWhileZoomed;
- (BOOL)isPresentingInteractiveContent;
- (void)didPresentInteractiveContent;
- (void)willPresentInteractiveContent;
- (void)flagsChanged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)didEnsureItemControllerIsReady;
- (BOOL)waitForItemControllerToBeReadyWithTimeout:(double)arg1;
- (BOOL)ensureItemControllerIsReadyWithTimeout:(double)arg1;
- (void)_dispatchReadyHandlerOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchReadyHandlersWaitingForEvents:(unsigned long long)arg1;
- (void)addReadyHandlerForAnyEventsInMask:(unsigned long long)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_setReady:(BOOL)arg1 forEventsMask:(unsigned long long)arg2;
- (BOOL)_currentReadyMaskContainsAnyEventsInMask:(unsigned long long)arg1;
- (void)_setPreviewReady:(BOOL)arg1;
- (void)_setCanvasReady:(BOOL)arg1;
@property(readonly, getter=isPreviewReady) BOOL previewReady;
@property(readonly, getter=isCanvasReady) BOOL canvasReady;
@property(readonly, getter=isReady) BOOL ready;
- (double)zoomValueForZoomingBy:(double)arg1;
- (struct CGPoint)panOffsetForShowingContentPoint:(struct CGPoint)arg1 atViewPoint:(struct CGPoint)arg2;
- (struct CGPoint)contentPointAtViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)panOffsetForViewPoint:(struct CGPoint)arg1;
- (void)updateOverlay:(Class)arg1 activate:(BOOL)arg2;
- (BOOL)hasInstalledOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)installOverlay:(id)arg1;
- (void)_removeAllOverlays;
- (void)_removeOverlay:(id)arg1;
- (void)_deactivateAllOverlays;
- (void)_deactivateOverlay:(id)arg1;
- (void)_activateAllOverlays;
- (void)_activateOverlay:(id)arg1;
- (void)_installOverlay:(id)arg1 installOntoCanvas:(BOOL)arg2;
- (void)_installOverlay:(id)arg1;
- (id)preferredFirstResponder;
- (void)_updatePreviewLayerPositionForCurrentScrubOffset;
- (void)didRemoveEditorialBrowser;
- (void)willRemoveEditorialBrowser;
- (void)didAddEditorialBrowser;
- (void)willAddEditorialBrowser;
- (void)_removeEditorialBrowserIfNecessary;
- (void)_addEditorialBrowserIfNecessaryWithAlphaValue:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_editorialBrowserController;
@property double scrubOffset;
- (void)hasSettledAsPrimaryViewerItemController;
- (void)didScrollOutOfVisibleRect;
- (void)didScrollIntoVisibleRect;
- (void)didEndAnimationInScrollView:(id)arg1;
- (void)willSettleAnimationInScrollView:(id)arg1 atOffset:(double)arg2 onAxis:(long long)arg3 fromInitialOffset:(double)arg4 withVelocity:(double)arg5;
- (void)didAnimateInScrollView:(id)arg1;
- (void)beginAnimationInScrollView:(id)arg1;
- (id)existingOverlays;
- (id)existingOverlayForClass:(Class)arg1;
- (void)toggleMediaPlayback;
- (void)stopMediaPlayback;
- (void)startMediaPlayback;
@property(readonly, nonatomic) BOOL mediaPlaybackStarted;
@property(readonly, nonatomic) BOOL supportsMediaPlayback;
@property(readonly, nonatomic) struct CGPoint editorialBrowserScrollOffset;
@property(readonly, nonatomic, getter=isEditorialBrowserHidden) BOOL editorialBrowserHidden;
- (void)toggleEditorialBrowser;
- (void)prepareEditorialBrowser;
- (void)updateAnnotationsUIOffsetIfNecessary;
- (void)updateAnnotationsUIIfNecessary;
- (void)didDownloadVersionInResponseToRequest:(id)arg1;
- (void)didEndLiveResize;
- (void)willStartLiveResize;
- (void)setOverallResourceProgress:(double)arg1;
- (void)setFocusType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setViewFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)_updateEditorialBrowserFrame;
- (void)_updateCanvasImageLayerFrame;
- (void)_updateLayersLayoutWithoutResizingPreviewLayer;
- (void)_updatePreviewLayerBoundsSize;
- (void)_updatePreviewLayerTransform;
- (void)_updatePreviewClipLayerFrameFromPreviewItemViewConfiguration;
- (void)_updatePreviewItemViewConfigurationContentProperties;
@property(readonly, nonatomic) BOOL isVersionInSharedAlbum;
@property(readonly, nonatomic) IPXElasticScrollAnimator *verticalScrollAnimator;
@property(readonly, nonatomic) IPXEditViewConfiguration *previewItemViewConfiguration;
@property(readonly) IPXCanvasItemView *canvasView;
- (void)preloadItem;
- (void)loadItem;
@property(readonly) struct CGSize itemSize;
- (void)_setVersion:(id)arg1;
@property(readonly) RDVersion *version;
- (id)_newPAImageItemViewController;
- (void)scrollWheel:(id)arg1;
- (void)removeFromParentViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear;
- (void)_updatePreviewLayersBorders;
- (BOOL)_shouldShowPreviewLayersBorders;
- (void)viewDidLoad;
- (void)didUpdateLayoutGuides;
- (void)willBecomeInactive;
@property(readonly) NSView *itemView;
- (void)_setupItemViewController;
- (void)_removeItemViewController;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)_setUpModulatorWithCanvasLayer:(id)arg1;
- (void)removeViewerItemModel;
- (void)setupViewerItemModel;
@property(readonly) PAItemController *renderItemController;
- (void)viewerItemModelDidChange;
@property(readonly) IPXEditViewConfiguration *configuration;
- (void)_updatePreviewLayerWithVersion:(id)arg1 usingImageSizePolicy:(id)arg2;
- (BOOL)wantsPreviewLayerForPresentationMode:(unsigned long long)arg1;
- (BOOL)_prepareLayerForAnimationContainingCurrentCanvasViewContentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGImage *)_currentPreviewLayerContents;
- (struct CGImage *)_currentCanvasViewContents;
- (id)canvasContentLayer;
- (id)_layerForOneUpTransitionContainingCurrentCanvasViewContents;
- (id)_layerForAnimationContainingCurrentCanvasViewContents;
- (void)_incrementAndLogPreviewUpdatesCount;
- (void)_resetPreviewLayerContentsAndConfiguration;
- (void)_updatePreviewLayerUsingCurrentImageSizePolicyWithVersion:(id)arg1;
- (void)_updatePreviewLayerUsingCurrentImageSizePolicy;
- (void)_hideCanvasViewIfNeeded;
- (void)_hidePreviewLayerIfNeeded;
- (void)setRenderMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isPrimaryItemController;
@property(readonly, copy) NSString *description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithOwningViewerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

