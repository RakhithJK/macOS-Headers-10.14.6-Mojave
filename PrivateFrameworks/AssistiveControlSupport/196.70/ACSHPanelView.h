//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElementView.h>

@class ACSHMouseSelectionView, ACSHPanel, ACSHPanelElementHighlightView, ACSHResizeHandlesView, NSArray, NSMutableArray;
@protocol ACSHPanelViewDelegate;

@interface ACSHPanelView : ACSHPanelElementView
{
    struct {
        char didResize;
        char didMove;
        char didChangeSelection;
        char shiftKeyDownAtStart;
        char commandKeyDownAtStart;
    } _mouseEventState;
    BOOL _showGroupingPreview;
    BOOL _zoomNonProportionalScaleFactorIsHorizontal;
    BOOL _processingDidUndo;
    BOOL __tooManyElementForTrackingRects;
    BOOL __trackingSuspended;
    BOOL __allowHitTestThrough;
    unsigned int __zoomLevel;
    ACSHPanelElementView *_editorFocusedView;
    id <ACSHPanelViewDelegate> _delegate;
    double _zoomScaleFactor;
    double _zoomNonProportionalScaleFactor;
    unsigned long long _suppressFrameKVOCounter;
    ACSHPanelElementView *_mouseDragView;
    ACSHPanelElementView *__mouseDownView;
    ACSHPanelElementView *__resizingView;
    ACSHPanelElementHighlightView *__panelElementHighlightView;
    NSMutableArray *__viewsMutatedDuringUndo;
    NSArray *__movedViews;
    NSArray *__editorSelectedPanelElementViewsAtDragStart;
    ACSHResizeHandlesView *__resizeView;
    ACSHMouseSelectionView *__mouseSelectionView;
    long long __resizeType;
    NSArray *__elementsForPreviewingScanOrder;
    unsigned long long __previewScanOrderIndex;
    unsigned long long __localUndoGroupingLevel;
    struct CGPoint __dragRemainder;
    struct CGPoint __lastMouseDownScreenPoint;
    struct CGPoint __lastMouseDragScreenPoint;
    struct CGRect __selfOriginalFrame;
    struct CGRect __mouseDownViewOriginalFrame;
}

@property unsigned long long _localUndoGroupingLevel; // @synthesize _localUndoGroupingLevel=__localUndoGroupingLevel;
@property unsigned long long _previewScanOrderIndex; // @synthesize _previewScanOrderIndex=__previewScanOrderIndex;
@property(retain) NSArray *_elementsForPreviewingScanOrder; // @synthesize _elementsForPreviewingScanOrder=__elementsForPreviewingScanOrder;
@property(nonatomic, getter=_zoomLevel, setter=_setZoomLevel:) unsigned int _zoomLevel; // @synthesize _zoomLevel=__zoomLevel;
@property BOOL _allowHitTestThrough; // @synthesize _allowHitTestThrough=__allowHitTestThrough;
@property BOOL _trackingSuspended; // @synthesize _trackingSuspended=__trackingSuspended;
@property BOOL _tooManyElementForTrackingRects; // @synthesize _tooManyElementForTrackingRects=__tooManyElementForTrackingRects;
@property long long _resizeType; // @synthesize _resizeType=__resizeType;
@property(retain) ACSHMouseSelectionView *_mouseSelectionView; // @synthesize _mouseSelectionView=__mouseSelectionView;
@property(retain) ACSHResizeHandlesView *_resizeView; // @synthesize _resizeView=__resizeView;
@property(retain) NSArray *_editorSelectedPanelElementViewsAtDragStart; // @synthesize _editorSelectedPanelElementViewsAtDragStart=__editorSelectedPanelElementViewsAtDragStart;
@property struct CGPoint _lastMouseDragScreenPoint; // @synthesize _lastMouseDragScreenPoint=__lastMouseDragScreenPoint;
@property struct CGPoint _lastMouseDownScreenPoint; // @synthesize _lastMouseDownScreenPoint=__lastMouseDownScreenPoint;
@property struct CGPoint _dragRemainder; // @synthesize _dragRemainder=__dragRemainder;
@property struct CGRect _mouseDownViewOriginalFrame; // @synthesize _mouseDownViewOriginalFrame=__mouseDownViewOriginalFrame;
@property struct CGRect _selfOriginalFrame; // @synthesize _selfOriginalFrame=__selfOriginalFrame;
@property(retain) NSArray *_movedViews; // @synthesize _movedViews=__movedViews;
@property(retain) NSMutableArray *_viewsMutatedDuringUndo; // @synthesize _viewsMutatedDuringUndo=__viewsMutatedDuringUndo;
@property(retain, nonatomic) ACSHPanelElementHighlightView *_panelElementHighlightView; // @synthesize _panelElementHighlightView=__panelElementHighlightView;
@property(retain) ACSHPanelElementView *_resizingView; // @synthesize _resizingView=__resizingView;
@property __weak ACSHPanelElementView *_mouseDownView; // @synthesize _mouseDownView=__mouseDownView;
@property(nonatomic) __weak ACSHPanelElementView *mouseDragView; // @synthesize mouseDragView=_mouseDragView;
@property(nonatomic) unsigned long long suppressFrameKVOCounter; // @synthesize suppressFrameKVOCounter=_suppressFrameKVOCounter;
@property(nonatomic) BOOL processingDidUndo; // @synthesize processingDidUndo=_processingDidUndo;
@property(nonatomic) BOOL zoomNonProportionalScaleFactorIsHorizontal; // @synthesize zoomNonProportionalScaleFactorIsHorizontal=_zoomNonProportionalScaleFactorIsHorizontal;
@property(nonatomic) double zoomNonProportionalScaleFactor; // @synthesize zoomNonProportionalScaleFactor=_zoomNonProportionalScaleFactor;
@property(nonatomic) double zoomScaleFactor; // @synthesize zoomScaleFactor=_zoomScaleFactor;
@property(nonatomic) BOOL showGroupingPreview; // @synthesize showGroupingPreview=_showGroupingPreview;
@property(nonatomic) __weak id <ACSHPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ACSHPanelElementView *editorFocusedView; // @synthesize editorFocusedView=_editorFocusedView;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)panelViewHighlightItemAtIndexPath:(id)arg1 isTrailingExtra:(BOOL)arg2 highlightCount:(unsigned long long)arg3;
- (void)setFrameNoNotify:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateSizeAndPositionOfPanelElementViews;
- (BOOL)wantsUpdateLayer;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)initView;
- (id)_focusChain;
- (void)stopPreviewingScanOfFocusedView;
- (double)previewScanInterval;
- (void)previewScanOrderTick;
- (void)previewScanOfFocusedView;
@property(readonly, nonatomic) BOOL canPreviewScanOfFocusedView;
- (void)updateSizeAndPositionOfDescendents;
@property(retain, nonatomic) ACSHPanel *panel;
- (void)willRemovePanelElementView:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)_deleteSelection;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)keyDown:(id)arg1;
- (struct CGRect)_mouseSelectionRect;
- (id)_panelElementsInMouseSelectionRect;
- (void)_makePanelElementViewFrontmost:(id)arg1;
- (id)_buttonViewForPoint:(struct CGPoint)arg1;
- (void)leaveSelectedGroup:(id)arg1;
- (void)enterSelectedGroup:(id)arg1;
@property(readonly, nonatomic) BOOL canLeaveSelectedGroup;
@property(readonly, nonatomic) BOOL canEnterSelectedGroup;
- (void)ungroupSelection:(id)arg1;
- (void)groupSelection:(id)arg1;
@property(readonly, nonatomic) BOOL canUngroupSelection;
@property(readonly, nonatomic) BOOL canGroupSelection;
- (void)alignMiddle:(id)arg1;
- (void)alignBottom:(id)arg1;
- (void)alignTop:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (struct CGRect)boundingBoxForPanelElements:(id)arg1;
@property(readonly, nonatomic) BOOL canAlignSelection;
- (void)distributeSpaceVertically:(id)arg1;
- (void)distributeSpaceHorizontally:(id)arg1;
@property(readonly, nonatomic) BOOL canDistributeSpaceForSelection;
- (void)equalizeRect:(id)arg1;
- (void)equalizeHeight:(id)arg1;
- (void)equalizeWidth:(id)arg1;
- (void)_equalizeWidth:(BOOL)arg1 height:(BOOL)arg2;
@property(readonly, nonatomic) BOOL canEqualizeSelection;
- (void)_didUndo:(id)arg1;
- (void)_willUndo:(id)arg1;
- (void)_updateTrackingAreas;
- (void)addMutatedViewDuringUndo:(id)arg1;
- (void)_setRectsForPanelElementViews:(id)arg1 offsetFromRectsAtStartOfCurrentManipulationByDelta:(struct CGSize)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseUpNonEditor:(id)arg1;
- (void)mouseUpEditor:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedNonEditor:(id)arg1;
- (void)mouseDraggedEditor:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownNonEditor:(id)arg1;
- (void)mouseDownEditor:(id)arg1;
- (void)editorSetSelectedView:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedViews;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_updateStateOfMouseTrackingRectsBasedOnSelectionCount;
- (void)resumeTracking;
- (void)suspendTracking;
@property(readonly, nonatomic) BOOL isTrackingSuspended;
- (void)setCanShowResizeHandles:(BOOL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)_pasteImage;
- (void)_pastePanelElementsAndResources;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)_plistForCopyOrCut;
- (id)_arrayForCopyOrCutForResourceIDs:(id)arg1;
- (void)selectAll:(id)arg1;
- (double)scaleFactorToDrawAt;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomActual:(id)arg1;
@property(readonly, nonatomic) BOOL canZoomActual;
@property(readonly, nonatomic) BOOL canZoomOut;
@property(readonly, nonatomic) BOOL canZoomIn;
@property(readonly, nonatomic) BOOL canAddPanelButton;
- (void)editorUpdateUIForSelection;
- (BOOL)isFlipped;

@end

