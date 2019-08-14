//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, DOMHTMLElement, JSContext, NSArray, NSString, WebDataSource, WebFramePrivate, WebFrameView, WebScriptObject, WebView;

@interface WebFrame : NSObject
{
    WebFramePrivate *_private;
}

+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(struct Page *)arg1 frameView:(id)arg2 style:(id)arg3;
+ (Ref_840bf4f8)_createSubframeWithOwnerElement:(struct HTMLFrameOwnerElement *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (void)_createMainFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (Ref_840bf4f8)_createFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3 ownerElement:(struct HTMLFrameOwnerElement *)arg4;
+ (id)stringWithData:(id)arg1 textEncodingName:(id)arg2;
@property(readonly, nonatomic) JSContext *javaScriptContext;
@property(readonly, nonatomic) struct OpaqueJSContext *globalContext;
@property(readonly, nonatomic) WebScriptObject *windowObject;
@property(readonly, copy, nonatomic) NSArray *childFrames;
@property(readonly, nonatomic) WebFrame *parentFrame;
- (id)findFrameNamed:(id)arg1;
- (void)reloadFromOrigin;
- (void)reload;
- (void)stopLoading;
- (void)loadArchive:(id)arg1;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;
- (void)loadRequest:(id)arg1;
@property(readonly, nonatomic) WebDataSource *dataSource;
@property(readonly, nonatomic) WebDataSource *provisionalDataSource;
@property(readonly, nonatomic) DOMHTMLElement *frameElement;
@property(readonly, nonatomic) DOMDocument *DOMDocument;
@property(readonly, nonatomic) WebView *webView;
@property(readonly, nonatomic) WebFrameView *frameView;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;
- (id)init;
- (void)printToCGContext:(struct CGContext *)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3;
- (int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2;
- (id)renderTreeAsExternalRepresentationForPrinting:(BOOL)arg1;
- (void)_commitData:(id)arg1;
- (BOOL)_canSaveAsWebArchive;
- (BOOL)_canProvideDocumentSource;
- (void)_setTypingStyle:(id)arg1 withUndoAction:(unsigned char)arg2;
- (id)_typingStyle;
- (id)_characterRangeAtPoint:(struct CGPoint)arg1;
- (struct VisiblePosition)_visiblePositionForPoint:(struct CGPoint)arg1;
- (void)_insertParagraphSeparatorInQuotedContent;
- (void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (id)_documentFragmentWithNodesAsParagraphs:(id)arg1;
- (id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_markDOMRange;
- (struct _NSRange)_convertDOMRangeToNSRange:(id)arg1;
- (id)_convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (RefPtr_033e7b31)_convertToDOMRange:(struct _NSRange)arg1 rangeIsRelativeTo:(unsigned char)arg2;
- (RefPtr_033e7b31)_convertToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (int)_selectionGranularity;
- (BOOL)_needsLayout;
- (void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)_scrollDOMRangeToVisible:(id)arg1;
- (struct CGRect)_firstRectForDOMRange:(id)arg1;
- (struct CGRect)_caretRectAtPosition:(const struct Position *)arg1 affinity:(int)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1;
- (BOOL)_getVisibleRect:(struct CGRect *)arg1;
- (void)_drawRect:(struct CGRect)arg1 contentsOnly:(BOOL)arg2;
- (OptionSet_8e32cbf3)_paintBehaviorForDestinationContext:(struct CGContext *)arg1;
- (id)_stringForRange:(id)arg1;
- (id)_selectedString;
- (id)_nodesFromList:(Vector_1d266cd7 *)arg1;
- (void)_setIsCommitting:(BOOL)arg1;
- (BOOL)_isCommitting;
- (id)_dataSource;
- (void)_clearSelectionInOtherFrames;
- (id)_findFrameWithSelection;
- (void)_clearSelection;
- (BOOL)_hasSelection;
- (void)_unmarkAllMisspellings;
- (void)_unmarkAllBadGrammar;
- (id)_internalLoadDelegate;
- (void)_setInternalLoadDelegate:(id)arg1;
- (void)_updateBackgroundAndUpdatesWhileOffscreen;
- (id)_webHTMLDocumentView;
- (void)_clearCoreFrame;
- (id)_initWithWebFrameView:(id)arg1 webView:(id)arg2;
- (void)_detachScriptDebugger;
- (void)_attachScriptDebugger;
- (BOOL)_isIncludedInWebKitStatistics;
- (id)_unreachableURL;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (struct OpaqueJSValue *)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2;
- (void)_dispatchDidReceiveTitle:(id)arg1;
- (BOOL)focusedNodeHasContent;
- (id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3;
- (id)_documentFragmentForWebArchive:(id)arg1;
- (id)_documentFragmentForText:(id)arg1;
- (id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) BOOL hasRichlyEditableDragCaret;
- (void)_clearOpener;
- (id)accessibilityRoot;
- (id)_layerTreeAsText;
- (void)setEnhancedAccessibility:(BOOL)arg1;
- (BOOL)enhancedAccessibilityEnabled;
- (void)setAccessibleName:(id)arg1;
- (id)_javaScriptContextForScriptWorld:(id)arg1;
- (struct OpaqueJSContext *)_globalContextForScriptWorld:(id)arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(struct OpaqueJSValue *)arg2 inScriptWorld:(id)arg3;
- (BOOL)_allowsFollowingLink:(id)arg1;
- (id)_cacheabilityDictionary;
- (void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(BOOL)arg3 smartReplace:(BOOL)arg4;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (BOOL)hasRichlyEditableSelection;
- (void)removeUnchangeableStyles;
- (void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (void)_setTextAutosizingWidth:(double)arg1;
- (void)_setVisibleSize:(struct CGSize)arg1;
- (void)resetTextAutosizingBeforeLayout;
- (void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (id)stringForRange:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (void)_userScrolled;
- (void)sendScrollEvent;
- (struct __CTFont *)fontForSelection:(char *)arg1;
- (struct CGRect)firstRectForDOMRange:(id)arg1;
- (id)convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)convertDOMRangeToNSRange:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3;
- (void)recursiveSetUpdateAppearanceEnabled:(BOOL)arg1;
- (id)dictationResultMetadataForRange:(id)arg1;
- (void)getDictationResultRanges:(id *)arg1 andMetadatas:(id *)arg2;
- (id)interpretationsForCurrentRoot;
- (void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3;
- (void)setText:(id)arg1 asChildOfElement:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 forCandidates:(BOOL)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)markedTextDOMRange;
- (void)selectNSRange:(struct _NSRange)arg1 onElement:(id)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtDocumentStart;
- (id)wordsInCurrentParagraph;
- (BOOL)spaceFollowsWordInRange:(id)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)expandSelectionToWordContainingCaretSelection;
- (id)elementRangeContainingCaretSelection;
- (void)expandSelectionToElementContainingCaretSelection;
- (int)selectionAffinity;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(BOOL)arg3;
- (id)selectedDOMRange;
- (BOOL)isTelephoneNumberParsingEnabled;
- (BOOL)isTelephoneNumberParsingAllowed;
- (int)layoutCount;
- (id)documentView;
- (void)setCaretColor:(struct CGColor *)arg1;
- (struct CGRect)rectForScrollToVisible;
- (struct CGRect)caretRect;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)updateLayout;
- (int)innerLineHeight:(id)arg1;
- (int)preferredHeight;
- (BOOL)hasEditableSelection;
- (void)resetSelection;
- (void)revealSelectionAtExtent:(BOOL)arg1;
- (void)_setProhibitsScrolling:(BOOL)arg1;
- (struct CGRect)renderRectForPoint:(struct CGPoint)arg1 isReplaced:(char *)arg2 fontSize:(float *)arg3;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (id)scrollableNodeAtViewportLocation:(struct CGPoint)arg1;
- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;
- (struct CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2;
- (void)setNeedsLayout;
- (void)deviceOrientationChanged;
- (void)_saveViewState;
- (void)_restoreViewState;
- (void)_setSelectionFromNone;
- (void)_selectAll;
- (void)_handleKeyEvent:(id)arg1;
- (void)forceLayoutAdjustingViewSize:(BOOL)arg1;
- (struct _NSRange)selectedNSRange;
- (void)selectWithoutClosingTypingNSRange:(struct _NSRange)arg1;
- (void)selectNSRange:(struct _NSRange)arg1;
- (void)resumeFromPause;
- (void)prepareForPause;
- (void)setPluginsPaused:(BOOL)arg1;
- (void)setTimeoutsPaused:(BOOL)arg1;
- (unsigned int)formElementsCharacterCount;
- (unsigned int)_pendingFrameUnloadEventCount;
- (BOOL)_isDisplayingStandaloneImage;
- (void)_selectNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_selectedNSRange;
- (id)_selectionRangeForPoint:(struct CGPoint)arg1;
- (id)_selectionRangeForFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (id)_rectsForRange:(id)arg1;
- (BOOL)_loadsSynchronously;
- (void)_setLoadsSynchronously:(BOOL)arg1;
- (BOOL)needsLayout;
- (int)_loadType;
- (BOOL)_isVisuallyNonEmpty;
- (BOOL)_firstLayoutDone;
- (BOOL)_isFrameSet;
- (struct CGColor *)_bodyBackgroundColor;
- (void)_setShouldCreateRenderers:(BOOL)arg1;
- (BOOL)_isDescendantOfFrame:(id)arg1;
- (struct CGRect)elementRectAtPoint:(struct CGPoint)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (BOOL)renderedCharactersExceed:(unsigned long long)arg1;
- (id)endPosition;
- (id)startPosition;
- (void)smartExtendRangedSelection:(int)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)moveSelectionToPoint:(struct CGPoint)arg1;
- (void)moveSelectionToEnd;
- (void)moveSelectionToStart;
- (void)setBaseWritingDirection:(int)arg1;
- (void)toggleBaseWritingDirection;
- (int)selectionBaseWritingDirection;
- (void)expandSelectionToSentence;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint)arg1 initialEndPoint:(struct CGPoint)arg2;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3 allowFlipping:(BOOL)arg4;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelection;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (id)wordAtPoint:(struct CGPoint)arg1;
- (id)selectionRects;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionRectsForCoreRange:(struct Range *)arg1;
- (void)extendSelection:(BOOL)arg1;
- (void)collapseSelection;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (BOOL)hasSelection;
- (int)selectionState;
- (void)clearSelection;
- (struct VisiblePosition)closestWordBoundary:(struct VisiblePosition)arg1;
- (struct VisiblePosition)visiblePositionForPoint:(struct CGPoint)arg1;
-     // Error parsing type: ^{Frame=^^?{atomic<unsigned int>=AI}{Ref<WebCore::WindowProxy, WTF::DumbPtrTraits<WebCore::WindowProxy> >=^{WindowProxy}}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{Frame}^{Page}{RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> >=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}IQ}{UniqueRef<WebCore::FrameLoader>={unique_ptr<WebCore::FrameLoader, std::__1::default_delete<WebCore::FrameLoader> >={__compressed_pair<WebCore::FrameLoader *, std::__1::default_delete<WebCore::FrameLoader> >=^{FrameLoader}}}}{UniqueRef<WebCore::NavigationScheduler>={unique_ptr<WebCore::NavigationScheduler, std::__1::default_delete<WebCore::NavigationScheduler> >={__compressed_pair<WebCore::NavigationScheduler *, std::__1::default_delete<WebCore::NavigationScheduler> >=^{NavigationScheduler}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView, WTF::DumbPtrTraits<WebCore::FrameView> >=^{FrameView}}{RefPtr<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> >=^{Document}}{UniqueRef<WebCore::ScriptController>={unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}}{UniqueRef<WebCore::Editor>={unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}}{UniqueRef<WebCore::FrameSelection>={unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}}{UniqueRef<WebCore::CSSAnimationController>={unique_ptr<WebCore::CSSAnimationController, std::__1::default_delete<WebCore::CSSAnimationController> >={__compressed_pair<WebCore::CSSAnimationController *, std::__1::default_delete<WebCore::CSSAnimationController> >=^{CSSAnimationController}}}}{Timer=^^?{MonotonicTime=d}{Seconds=d}B{RefPtr<WebCore::ThreadTimerHeapItem, WTF::DumbPtrTraits<WebCore::ThreadTimerHeapItem> >=^{ThreadTimerHeapItem}}{Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> >=^{Thread}}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}f{IntPoint=ii}{ViewportArguments=iffffffffffffiB}B{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}ffiBIIB{UniqueRef<WebCore::EventHandler>={unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}}}16@0:8, name: coreFrame

@end

