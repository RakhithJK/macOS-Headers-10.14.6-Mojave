//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDContainerRep.h>

#import <TSReading/CAAnimationDelegate-Protocol.h>
#import <TSReading/TSDDecorator-Protocol.h>
#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/TSKHighlightArrayControllerProtocol-Protocol.h>
#import <TSReading/TSKPulseAnimationControllerProtocol-Protocol.h>
#import <TSReading/TSWPHyperlinkHostRepProtocol-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, NSString, TSDTilingLayer, TSKHighlightArrayController, TSKPulseAnimationController, TSWPEditingController, TSWPLayout, TSWPSearchReference, TSWPSelection, TSWPStorage, TSWPStorageSpellChecker;

@interface TSWPRep : TSDContainerRep <TSDTilingLayerDelegate, CAAnimationDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, TSDDecorator>
{
    TSDTilingLayer *_textLayers[2];
    CALayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    struct _NSRange _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    TSKPulseAnimationController *_caretPulseController;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    TSWPStorageSpellChecker *_spellChecker;
    struct _NSRange _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    BOOL _suppressSelectionHighlight;
    struct _NSRange _dragRange;
    TSWPSelection *_lastSelection;
    BOOL _selectionChanged;
    BOOL _markChanged;
    unsigned long long _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _secondaryHighlightChanged;
    BOOL _indentAnimationRunning;
    CALayer *_indentAnimationLayer;
    long long _indentDelta;
    SEL _indentSelector;
    id _indentTarget;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    BOOL _useKeyboardWhenEditing;
    CALayer *_dragAndDropCaretLayer;
    TSWPSelection *_dropSelection;
    BOOL _findIsShowing;
    BOOL _shouldHideSelectionControls;
    TSWPSearchReference *_activeSearchReference;
    NSArray *_searchReferences;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(nonatomic) BOOL shouldHideSelectionControls; // @synthesize shouldHideSelectionControls=_shouldHideSelectionControls;
@property(nonatomic) BOOL findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) TSWPSearchReference *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
@property(nonatomic) TSWPSelection *dropSelection; // @synthesize dropSelection=_dropSelection;
@property(nonatomic) struct _NSRange dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) BOOL useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(BOOL)arg3;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)p_updateHighlights;
- (void)p_didDismissPopover:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)processFindUIStateChangedNotificationUserInfo:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (BOOL)shouldAlwaysAutoHide;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (id)selectionForDragAndDropNaturalPoint:(struct CGPoint)arg1 dragIsTopicSelection:(BOOL)arg2;
@property(readonly, nonatomic) struct CGAffineTransform transformToConvertNaturalToScaledRoot;
- (struct CGColor *)p_caretLayerColor;
- (BOOL)p_hasEmptyList;
- (BOOL)p_hasVisibleContents;
- (void)p_editingDidEndNotification:(id)arg1;
- (void)p_markChangedNotification:(id)arg1;
- (void)p_selectionContentsChangedNotification:(id)arg1;
- (void)p_selectionChangedNotification:(id)arg1;
- (void)p_invalidateCommentKnobs;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)p_updateSmartFieldHighlightLayer;
- (void)p_hideSmartFieldHighlightLayer;
- (void)p_createSmartFieldHighlightLayer;
- (void)p_destroySpellChecker;
- (BOOL)p_needsSpellChecker;
- (BOOL)p_spellCheckingEnabled;
- (void)p_updateMarkHighlightLayer;
- (void)p_hideMarkHighlightLayer;
- (void)p_createMarkHighlightLayer;
- (void)p_showSelectionParagraphBorderLayerWithPath:(struct CGPath *)arg1;
- (void)p_hideSelectionParagraphBorderLayer;
- (void)p_hideSelectionHighlightLayer;
- (void)p_createSelectionParagraphBorderLayer;
- (void)p_createSelectionHighlightLayer;
- (void)p_setSelectionHighlightColor;
- (void)p_stopCaretLayerAnimation;
- (void)p_startCaretLayerAnimation;
- (void)p_hideCaretLayer;
- (void)p_showCaretLayer;
- (BOOL)p_positionCaretLayer:(id)arg1 forSelection:(id)arg2 layerRelative:(BOOL)arg3;
- (id)p_newCaretLayerWithZPosition:(double)arg1;
- (void)p_destroyLayer:(int)arg1;
- (void)p_createLayer:(int)arg1;
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext *)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4 renderMode:(int)arg5 suppressInvisibles:(BOOL)arg6;
- (BOOL)preventClipToColumn;
- (void)p_teardown;
@property(readonly, nonatomic) BOOL textIsVertical;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg1;
- (void)tilingLayerWillSetNeedsLayout:(id)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawTextBackgroundLayerInContext:(struct CGContext *)arg1;
- (void)p_drawTextLayerInContext:(struct CGContext *)arg1;
- (void)i_setNeedsDisplayForSelectionChange;
- (void)p_updateForCurrentSelectionWithFlags:(unsigned long long)arg1;
- (void)p_updateSuppressedSpellingRange;
- (void)p_setSuppressedMisspellingRange:(struct _NSRange)arg1;
- (void)p_invalidateSuppressedMisspellingRange;
- (void)p_renderingOptionsDidChangeNotification:(id)arg1;
- (void)p_spellCheckerLanguageDidChangeNotification:(id)arg1;
- (void)i_setNeedsErasableDisplayInRange:(struct _NSRange)arg1;
- (void)p_hideSelectionLayers;
- (BOOL)p_isSelectionSingleAnchoredDrawableAttachment;
- (BOOL)p_canShowSelectionAndCaretLayers;
- (void)p_updateLayersForRangeSelection:(id)arg1 selectionFlags:(unsigned long long)arg2;
- (struct CGPoint)p_pinPoint:(struct CGPoint)arg1 toRect:(struct CGRect)arg2;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (id)lineSelectionsForSelection:(id)arg1;
- (id)p_lineSelectionsForSelection:(id)arg1;
- (struct CGPath *)p_newSelectionPathForRange:(struct _NSRange)arg1 headKnobRect:(struct CGRect *)arg2 tailKnobRect:(struct CGRect *)arg3 selectionType:(int)arg4 selection:(id)arg5;
- (struct CGPath *)p_createPathForParagraphSelection:(id)arg1 needsParagraphBorder:(BOOL)arg2;
- (BOOL)p_paragraphModeBorderNeededForColumn:(id)arg1 dragCharIndex:(unsigned long long)arg2 knobTag:(unsigned long long)arg3;
- (struct CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (void)p_updateAnimationWithAnimatingPulse:(BOOL)arg1;
- (void)editingDidEnd;
- (BOOL)doesNeedDisplayOnEditingDidEnd;
- (BOOL)isOverflowing;
- (id)textImageForRect:(struct CGRect)arg1;
- (id)textImageForSelection:(id)arg1 frame:(struct CGRect *)arg2 usingGlyphRect:(BOOL)arg3 drawBackground:(BOOL)arg4 shouldPulsate:(BOOL)arg5 suppressInvisibles:(BOOL)arg6;
- (id)textImageForSelection:(id)arg1 frame:(struct CGRect *)arg2 usingGlyphRect:(BOOL)arg3 shouldPulsate:(BOOL)arg4 suppressInvisibles:(BOOL)arg5;
- (id)textImageForSelection:(id)arg1;
- (id)p_imageForRect:(struct CGRect)arg1 usingGlyphRect:(BOOL)arg2 drawBackground:(BOOL)arg3 shouldPulsate:(BOOL)arg4 forCaret:(BOOL)arg5 drawSelection:(id)arg6 suppressInvisibles:(BOOL)arg7;
- (void)p_addRoundedRectToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 forCaret:(BOOL)arg3;
- (void)p_addRectToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)p_addRoundedRectToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (struct CGRect)p_convertNaturalRectToRotated:(struct CGRect)arg1 repAngle:(double)arg2;
- (struct _NSRange)rangeOfMisspelledWordAtCharIndex:(unsigned long long)arg1;
- (struct CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange)arg2;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)arg1;
- (struct CGRect)glyphRectForRange:(struct _NSRange)arg1 includingLabel:(BOOL)arg2;
- (struct CGRect)columnRectForRange:(struct _NSRange)arg1;
- (struct CGRect)labelRectForCharIndex:(unsigned long long)arg1;
- (id)decoratorOverlayLayers;
- (void)animateIndent:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)p_indentAfterAnimationWithOptions:(id)arg1;
- (BOOL)shouldCreateTextKnobs;
- (BOOL)shouldCreateLockedKnobs;
- (BOOL)shouldCreateSelectionKnobs;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (void)invalidateKnobs;
@property(readonly, nonatomic) TSWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) TSWPStorage *storage;
- (BOOL)wantsToHandleTapsWhenLocked;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (id)hyperlinkRegions;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(BOOL)arg2;
- (id)hyperlinkContainerRep;
- (id)repForDragging;
- (id)siblings;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(BOOL)arg2;
- (void)pulseCaret;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)enableCaretAnimation;
- (void)canvasDidBeginFreeTransform;
- (void)viewScrollingEnded;
- (void)viewScaleDidChange;
- (void)disableCaretAnimation;
- (void)viewDidAppear;
- (void)gesturesDidEnd;
- (void)didEndZooming;
- (void)willBeginZooming;
@property(readonly, nonatomic) TSWPEditingController *textEditor;
- (BOOL)isEditing;
- (id)p_hyperlinkWithTouch:(id)arg1;
- (id)p_smartFieldWithTouch:(id)arg1;
- (id)columnForCharIndex:(unsigned long long)arg1;
- (id)closestColumnForPoint:(struct CGPoint)arg1;
- (BOOL)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (void)setHighlightedHyperlinkField:(id)arg1;
- (void)clearSecondaryHighlight;
- (void)setSecondaryHighlightRange:(struct _NSRange)arg1 color:(struct CGColor *)arg2 pathStyle:(int)arg3;
- (void)p_updateSecondaryHighlightLayer;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint)arg1;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint)arg1;
- (id)rubyFieldAtPoint:(struct CGPoint)arg1;
- (id)smartFieldAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldBeginEditingWithGesture:(id)arg1;
- (BOOL)p_canRepBeginEditingOnDoubleTap;
- (BOOL)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (Class)wpEditorClass;
- (BOOL)handlesEditMenu;
- (struct CGRect)newTextLayerUnscaledBounds:(struct CGRect)arg1 forNewTextBounds:(struct CGRect)arg2;
- (void)screenScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (struct CGRect)clipRect;
- (struct CGRect)p_clipRect:(struct CGRect)arg1;
- (void)updateFromLayout;
- (void)invalidateHUDState;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)overlayLayers;
- (void)drawRubyInContext:(struct CGContext *)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(struct _NSRange)arg3;
- (void)drawInContext:(struct CGContext *)arg1 limitSelection:(id)arg2 suppressInvisibles:(BOOL)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRange:(struct _NSRange)arg1;
- (void)setNeedsDisplay;
- (id)textBackgroundLayer;
- (id)textLayer;
- (void)performBlockOnTextLayers:(CDUnknownBlockType)arg1;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (id)p_hyperlinkAtPoint:(struct CGPoint)arg1;
- (void)spellCheckingStateChanged;
- (void)verticalTextPropertyChanged;
- (int)tilingMode;
- (BOOL)useDynamicTiling;
- (BOOL)forceTiling;
- (BOOL)directlyManagesLayerContent;
- (Class)layerClass;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(char *)arg5 leadingEdge:(char *)arg6;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(char *)arg4 leadingEdge:(char *)arg5;
- (unsigned long long)charIndexFromPoint:(struct CGPoint)arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(char *)arg3;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1;
- (double)knobOffsetForKnob:(id)arg1 paragraphMode:(BOOL)arg2;
- (struct CGPoint)knobCenterForSelection:(id)arg1 knob:(id)arg2;
- (id)p_annotationAtPoint:(struct CGPoint)arg1 outRange:(struct _NSRange *)arg2;
- (id)newTrackerForKnob:(id)arg1;
- (BOOL)shouldCreateCommentKnobs;
- (void)invalidateAnnotationColor;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(BOOL)arg2;
- (struct CGRect)p_topicDragRectForSelection:(id)arg1;
- (struct CGRect)p_caretRectForSelection:(id)arg1;
- (struct CGRect)caretRectForSelection:(id)arg1;
- (CDStruct_78ea5dae)wordMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_50f584da)lineMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_50f584da)lineMetricsAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(BOOL)arg2 caretAffinity:(int)arg3;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1 includeRuby:(BOOL)arg2;
- (struct CGRect)rectForSelection:(id)arg1;
- (BOOL)isPointInSelectedArea:(struct CGPoint)arg1;
- (id)selectionRects;
- (struct CGRect)selectionRect;
- (struct CGRect)caretRect;
- (struct CGPoint)pinToClosestColumn:(struct CGPoint)arg1;
- (struct CGPoint)pinToNaturalBounds:(struct CGPoint)arg1 andLastLineFragment:(BOOL)arg2;
- (struct _NSRange)range;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)shouldShowKnobs;
- (BOOL)p_shouldDisplaySelectionControls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TSWPLayout *layout; // @dynamic layout;
@property(readonly) Class superclass;

@end

