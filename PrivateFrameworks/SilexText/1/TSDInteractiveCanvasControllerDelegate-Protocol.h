//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexText/TSKChangeSourceObserver-Protocol.h>
#import <SilexText/TSKDocumentRootProvider-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSString, Protocol, TSDAutoscroll, TSDCanvasView, TSDEditorController, TSDInteractiveCanvasController, TSDLayout, TSDRep, TSKDocumentRoot, TSKScrollView, TSKSelection, UIGestureRecognizer, UITouch, UIView;
@protocol TSCEResolverContainer, TSDEditor, TSDGesture, TSDGestureTarget, TSDImageReplacer, TSDInfo, TSDLayoutGeometryProvider, TSDPanGuide, TSDTextInput, TSKModel, TSKSearchReference;

@protocol TSDInteractiveCanvasControllerDelegate <TSKChangeSourceObserver, TSKDocumentRootProvider>
@property(readonly, retain, nonatomic) TSKDocumentRoot *documentRoot;

@optional
@property(readonly, nonatomic) BOOL allowTextEditingToBegin;
@property(readonly, nonatomic) BOOL allowEditMenuToAppear;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property(readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property(readonly, nonatomic) BOOL shouldShowInstructionalText;
@property(readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property(readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property(readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) BOOL spellCheckingSuppressed;
@property(readonly, nonatomic) BOOL spellCheckingSupported;
@property(readonly, nonatomic) BOOL isPrintingCanvas;
@property(readonly, nonatomic) BOOL isCanvasInteractive;
- (BOOL)interactiveCanvasControllerShouldDeferViewCreation:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 outsetSelectionRect:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewBoundsWithBounds:(struct CGRect)arg2;
- (BOOL)allowSelectionPopoverForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsSmartMagnifyForRep:(TSDRep *)arg2;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsHyperlinkWithGesture:(id <TSDGesture>)arg2 forRep:(TSDRep *)arg3;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 allowsEditMenuForRep:(TSDRep *)arg2;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 canvasViewShouldBecomeFirstResponder:(TSDCanvasView *)arg2;
- (void)interactiveCanvasControllerWillBecomeFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasControllerShouldEndEditingWhenLosingFirstResponder:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 shouldTakeFirstResponderForTextEditor:(id <TSDTextInput>)arg2;
- (BOOL)interactiveCanvasControllerShouldAnimateToSearchReferences:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 targetRectForInfo:(NSObject<TSDInfo> *)arg2 withSelection:(TSKSelection *)arg3;
- (NSObject<TSDInfo> *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 infoForModel:(NSObject<TSKModel> *)arg2 withSelection:(TSKSelection *)arg3;
- (BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasControllerShouldResampleImages:(TSDInteractiveCanvasController *)arg1;
- (NSArray *)additionalGestureTargetsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 gesture:(id <TSDGesture>)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 updateGestureTargetStack:(NSMutableArray *)arg2 gesture:(id <TSDGesture>)arg3;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutUnregistered:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutRegistered:(TSDLayout *)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willLayoutRep:(TSDRep *)arg2;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forLayout:(TSDLayout *)arg3;
- (id)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 delegateConformingToProtocol:(Protocol *)arg2 forRep:(TSDRep *)arg3;
- (id <TSDLayoutGeometryProvider>)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 layoutGeometryProviderForLayout:(TSDLayout *)arg2;
- (NSArray *)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 gestureTargetStackWhenScrollingWithGesture:(id <TSDGesture>)arg2;
- (id <TSDGestureTarget>)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 primaryTargetForGesture:(id <TSDGesture>)arg2;
- (id <TSDPanGuide>)panGuideForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint)arg2;
- (BOOL)interactiveCanvasControllerShouldUseGuidedPan:(TSDInteractiveCanvasController *)arg1 withMovementDirection:(struct CGPoint)arg2;
- (struct CGRect)scrollViewClippingBoundsForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForScrollViewHitTesting:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandBoundsForHitTesting:(struct CGRect)arg2;
- (double)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 adjustViewScale:(double)arg2;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 restrictedContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3 scrollViewBoundsSize:(struct CGSize)arg4;
- (struct CGPoint)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 clampContentOffset:(struct CGPoint)arg2 forViewScale:(double)arg3;
- (BOOL)isInteractiveCanvasControllerTextOnly:(TSDInteractiveCanvasController *)arg1;
- (BOOL)shouldSuppressCommentKnobsForRep:(TSDRep *)arg1;
- (id <TSCEResolverContainer>)activeResolverContainer;
- (void)canvasEditorDidChangeSelection:(id <TSDEditor>)arg1;
- (BOOL)isPopoverGestureInFlight;
- (Class)canvasViewClassOverride;
- (BOOL)shouldIgnoreTextGestures;
- (BOOL)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
- (BOOL)zoomOnSelectionChange:(TSDInteractiveCanvasController *)arg1;
- (BOOL)inPrintPreviewMode;
- (UIView *)visibleBoundsClipViewForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 visibleBoundsWithClippingLayerBounds:(struct CGRect)arg2 canvasBounds:(struct CGRect)arg3;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (double)autoZoomAnimationDurationForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasControllerSupportsAutozoom:(TSDInteractiveCanvasController *)arg1;
- (long long)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 imageReplaceBadgeBehaviorForRep:(TSDRep *)arg2;
- (id <TSDImageReplacer>)imageReplacerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 didScrollForAutoscroll:(TSDAutoscroll *)arg2;
- (BOOL)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (BOOL)tappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (Class)wpTrackerClassOverride;
- (Class)wpFloatingCommentEditorClassOverride;
- (Class)wpEditorClassOverride;
- (void)editorDidChangeSelection:(id <TSDEditor>)arg1;
- (void)editorDidChangeSelectionWithTextInputEditor:(id <TSDEditor>)arg1 changingEditor:(id <TSDEditor>)arg2;
- (void)selectionDidChange;
- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(unsigned long long)arg3;
- (void)willScrollSearchReferenceToVisible:(id <TSKSearchReference>)arg1;
- (void)dynamicOperationDidEnd;
- (void)dynamicOperationWillBegin;
- (NSArray *)rectanglesObscuringView:(UIView *)arg1;
- (NSString *)descriptionForCanvasViewScale:(double)arg1;
- (double)nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(BOOL)arg2;
- (double)canvasViewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (struct CGSize)canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)canvasWillEndEditingToBeginEditingRep:(TSDRep *)arg1;
- (TSDEditorController *)editorControllerForInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (struct CGRect)visibleUnscaledCanvasRectWithoutKeyboard;
- (void)interactiveCanvasControllerDidAnimateViewScale:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateToViewScale:(double)arg2 withDuration:(double)arg3 unscaledContentOffset:(struct CGPoint)arg4;
- (BOOL)interactiveCanvasControllerShouldMaintainPositionOnSetViewScale:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(TSDInteractiveCanvasController *)arg1;
- (BOOL)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 shouldDispatchBackgroundWork:(void (^)(void))arg2;
- (void)interactiveCanvasControllerDidZoomWithUserGesture:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidZoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerIsZooming:(TSDInteractiveCanvasController *)arg1 viewScale:(double)arg2;
- (void)interactiveCanvasControllerWillZoom:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 performLockedAction:(void (^)(void))arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillEndDragging:(TSKScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewWillBeginDragging:(TSKScrollView *)arg2;
- (void)interactiveCanvasControllerDidStopScrolling:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillScroll:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidEndScrollingAnimation:(TSDInteractiveCanvasController *)arg1 stillAnimating:(BOOL)arg2;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 willAnimateScrollToVisibleUnscaledRect:(struct CGRect)arg2;
- (void)interactiveCanvasControllerDidUpdateLayersFromReps:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidLayout:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerDidValidateLayouts:(TSDInteractiveCanvasController *)arg1;
- (void)interactiveCanvasControllerWillLayout:(TSDInteractiveCanvasController *)arg1;
@end

