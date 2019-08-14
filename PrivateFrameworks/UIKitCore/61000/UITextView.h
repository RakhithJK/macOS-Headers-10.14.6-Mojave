//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

#import <UIKitCore/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKitCore/UIKeyboardInput-Protocol.h>
#import <UIKitCore/UIPreviewItemDelegate-Protocol.h>
#import <UIKitCore/UITextAutoscrolling-Protocol.h>
#import <UIKitCore/UITextDragSupporting-Protocol.h>
#import <UIKitCore/UITextDraggable-Protocol.h>
#import <UIKitCore/UITextDropSupporting-Protocol.h>
#import <UIKitCore/UITextDroppable-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputControllerDelegate-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/UITextLinkInteraction-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>
#import <UIKitCore/UIViewGhostedRangeSupporting-Protocol.h>
#import <UIKitCore/_UILayoutBaselineUpdating-Protocol.h>
#import <UIKitCore/_UIMultilineTextContentSizing-Protocol.h>
#import <UIKitCore/_UITextContainerViewDelegate-Protocol.h>
#import <UIKitCore/_UITextViewContentPaddingDelegate-Protocol.h>
#import <UIKitCore/_UIViewBaselineSpacing-Protocol.h>

@class CUICatalog, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIAutoscroll, UIColor, UIDragInteraction, UIDropInteraction, UIFont, UIImage, UIInputContextHistory, UILabel, UIPasteConfiguration, UITextInputController, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UICharacterStreamingManager, _UISiriStreamingManager, _UITextContainerView, _UITextSizeCache, _UITextViewContentPadding, _UITextViewRestorableScrollPosition, _UITextViewVisualStyle;
@protocol UITextDragDelegate, UITextDragDropSupport, UITextDropDelegate, UITextInputDelegate, UITextInputTokenizer, UITextPasteDelegate, UITextViewDelegate;

@interface UITextView : UIScrollView <UITextLinkInteraction, UIPreviewItemDelegate, _UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, UITextDragSupporting, UITextDropSupporting, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, UIContentSizeCategoryAdjusting>
{
    id _private;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UITextContainerView *_containerView;
    id _inputDelegate;
    id <UITextInputTokenizer> _tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    struct {
        unsigned int needsScrollToSelectionAfterLayout:1;
        unsigned int isInteractingWithLink:1;
        unsigned int linkInteractionIsLongPress:1;
        unsigned int linkInteractionIsPreview:1;
        unsigned int editable:1;
        unsigned int reentrancyGuard:1;
        unsigned int usesExplicitPreferredMaxLayoutWidth:1;
        unsigned int interactiveSelectionDisabled:1;
        unsigned int selectable:1;
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard:1;
        unsigned int shouldAutoscrollAboveBottom:1;
        unsigned int disableUpdateTextColorOnTraitCollectionChange:1;
        unsigned int containerViewSizeInvalid:1;
        unsigned int usesAttributedText:1;
        unsigned int textSizeCacheEnabled:1;
    } _tvFlags;
    long long _contentSizeUpdateSeqNo;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    unsigned long long _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition *_scrollPosition;
    double _offsetFromScrollPosition;
    id _linkInteractionItem;
    unsigned long long _dataDetectorTypes;
    double _preferredMaxLayoutWidth;
    UILabel *_placeholderLabel;
    UIView *_inputAccessoryView;
    NSDictionary *_linkTextAttributes;
    _UISiriStreamingManager *_streamingManager;
    _UICharacterStreamingManager *_characterStreamingManager;
    long long _siriAnimationStyle;
    long long _siriAlignment;
    NSDictionary *_siriParameters;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    _UITextSizeCache *_intrinsicSizeCache;
    CUICatalog *_cuiCatalog;
    struct UIEdgeInsets _beforeFreezingTextContainerInset;
    struct UIEdgeInsets _duringFreezingTextContainerInset;
    struct CGSize _beforeFreezingFrameSize;
    BOOL _unfreezingTextContainerSize;
    BOOL _animatingPaste;
    struct CGRect _frameOfTrailingWhitespace;
    id <UITextDragDropSupport> _textDragDropSupport;
    _UITextViewContentPadding *_topContentPadding;
    _UITextViewContentPadding *_bottomContentPadding;
    struct CGPoint _scrollEndDraggingVelocity;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _clearsOnInsertion;
    id <UITextPasteDelegate> _pasteDelegate;
    double _multilineContextWidth;
    long long _textDragOptions;
    id <UITextDragDelegate> _textDragDelegate;
    id <UITextDropDelegate> _textDropDelegate;
    UIView *_inputView;
    _UITextViewVisualStyle *_visualStyle;
}

+ (BOOL)_isCompatibilityTextView;
+ (void)_removeHighlight;
+ (id)_sharedHighlightView;
@property(retain, nonatomic) _UITextViewVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak id <UITextDropDelegate> textDropDelegate; // @synthesize textDropDelegate=_textDropDelegate;
@property(nonatomic) __weak id <UITextDragDelegate> textDragDelegate; // @synthesize textDragDelegate=_textDragDelegate;
@property(nonatomic) long long textDragOptions; // @synthesize textDragOptions=_textDragOptions;
- (void)_setMultilineContextWidth:(double)arg1;
- (double)_multilineContextWidth;
@property(nonatomic) __weak id <UITextPasteDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)droppingFinished;
- (void)droppingStarted;
@property(nonatomic) struct CGPoint contentOffsetForSameViewDrops;
- (BOOL)allowsDraggingAttachments;
- (void)resignDropResponderWithDropPerformed:(BOOL)arg1;
- (void)becomeDropResponder;
- (BOOL)canBecomeDropResponder;
- (void)draggingFinished:(id)arg1;
- (void)draggingStarted;
@property(readonly, nonatomic, getter=isTextDropActive) _Bool textDropActive;
@property(readonly, nonatomic, getter=isTextDragActive) BOOL textDragActive;
@property(readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
- (void)_updateSelectionGestures;
- (void)_resetDataDetectorsResults;
- (void)_startDataDetectors;
- (void)_startDataDetectorsIfNeeded;
- (void)_cancelDataDetectors;
- (BOOL)_shouldStartDataDetectors;
- (unsigned long long)_effectiveDataDetectorTypes;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)_textInputTraits;
@property(nonatomic) BOOL forceDisableDictation;
@property(nonatomic) BOOL forceEnableDictation;
- (BOOL)_shouldObscureInput;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)automaticallySelectedOverlay;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)toggleSmartInsertDelete:(id)arg1;
- (void)toggleContinuousSpellChecking:(id)arg1;
- (BOOL)_validateUserInterfaceItem:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (id)_implicitPasteConfigurationClasses;
- (id)_effectivePasteConfiguration;
- (void)pasteItemProviders:(id)arg1;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 animator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(BOOL)arg2;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)_isDisplayingShortcutViewController;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_selectionMayChange:(id)arg1;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingShareViewController;
- (void)_share:(id)arg1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (void)_define:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2;
- (void)updateSelectionForTextContainerView:(id)arg1;
- (struct _NSRange)selectedRangeForTextContainerView:(id)arg1;
- (BOOL)isEditableForTextContainerView:(id)arg1;
- (id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id)linkTextAttributesForTextContainerView:(id)arg1;
- (BOOL)_allowAnimatedUpdateSelectionRectViews;
- (void)_unconstrainTiledRendering;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (void)_setFreezeTextContainerSize:(BOOL)arg1;
- (BOOL)_freezeTextContainerSize;
- (id)_cuiStyleEffectConfiguration;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (id)_cuiCatalog;
- (void)_setCuiCatalog:(id)arg1;
- (id)_whitelistedTypingAttributes;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
@property(copy, nonatomic) NSDictionary *linkTextAttributes;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (struct CGRect)visibleTextRect;
- (struct CGRect)visibleRect;
- (struct CGRect)visibleRectIgnoringKeyboard;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
- (void)setMarginTop:(unsigned long long)arg1;
- (unsigned long long)marginTop;
- (void)updateAutoscrollAboveBottom;
- (void)setShouldAutoscrollAboveBottom:(BOOL)arg1;
- (BOOL)shouldAutoscrollAboveBottom;
- (void)setContentToHTMLString:(id)arg1;
- (id)webView;
@property(nonatomic) unsigned long long dataDetectorTypes;
- (void)disableClearsOnInsertion;
@property(nonatomic) BOOL clearsOnInsertion; // @synthesize clearsOnInsertion=_clearsOnInsertion;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
- (void)_setTextColor:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (BOOL)allowsAttachments;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (void)_syncTypingAttributesToTextContainerAttributesForExtraLineFragment;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (BOOL)_shouldSuppressSelectionCommands;
- (void)_updateSelectableInteractions;
@property(nonatomic, getter=isSelectable) BOOL selectable;
@property(nonatomic, getter=isEditable) BOOL editable;
- (BOOL)_mightHaveSelection;
- (BOOL)isEditing;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)undoManager;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)selectionContainerView;
@property(readonly, nonatomic) UIView *textInputView;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)attributedTextInRange:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)selectedText;
- (struct CGPoint)_contentOffsetForScrollingToRect:(struct CGRect)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(BOOL)arg2;
- (id)_restorableScrollPositionForStateRestoration;
- (id)_restorableScrollPosition;
- (void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_getCloseQuoteAnchor:(struct CGPoint *)arg1;
- (BOOL)_getOpenQuoteAnchor:(struct CGPoint *)arg1;
- (struct CGPoint)_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (struct CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (void)_streamingManagerDidCommitFinalResults;
- (void)_ensureCleanedUp;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (long long)_siriAlignment;
- (void)_setSiriAlignment:(long long)arg1;
- (long long)_siriAnimationStyle;
- (void)_setSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_setSiriAnimationStyle:(long long)arg1;
- (void)_enableSiriAnimationDictationStyle;
- (struct _NSRange)_visibleRangeWithLayout:(BOOL)arg1;
- (struct CGPoint)_contentOffsetForScrollToVisible:(struct _NSRange)arg1;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (BOOL)_restoreFirstResponder;
- (id)interactionAssistant;
- (id)selectionView;
- (void)updateSelectionImmediately;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) BOOL hasText;
- (void)_updatePlaceholderVisibility;
- (void)_layoutPlaceholder;
- (BOOL)_isTextSizeCacheEnabled;
- (void)_setTextSizeCacheEnabled:(BOOL)arg1;
- (id)attributedPlaceholder;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg1;
- (BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (BOOL)_isInteractiveTextSelectionDisabled;
- (void)_setInteractiveTextSelectionDisabled:(BOOL)arg1;
- (void)_updateContainerTileAndSizingFlags;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)didMoveToSuperview;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(id)arg1;
- (BOOL)_isContentFormatEvaluationEnabled;
- (void)_setContentFormatEvaluationEnabled:(BOOL)arg1;
- (void)setTiledViewsDrawAsynchronously:(BOOL)arg1;
- (BOOL)tiledViewsDrawAsynchronously;
- (void)setMaxTileHeight:(double)arg1;
- (double)maxTileHeight;
- (void)setUsesTiledViews:(BOOL)arg1;
- (BOOL)usesTiledViews;
@property(nonatomic) BOOL allowsEditingTextAttributes;
- (void)_notifyDidEndEditing;
- (void)_notifyDidBeginEditing;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)tintColorDidChange;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_shouldScrollEnclosingScrollView;
- (void)_keyboardDidShow:(id)arg1;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg1;
- (void)_scrollRect:(struct CGRect)arg1 toVisibleInContainingScrollView:(BOOL)arg2;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)invalidateIntrinsicContentSize;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (double)_currentPreferredMaxLayoutWidth;
- (id)_layoutDebuggingTitle;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct CGSize)_containerSizeForBoundsSize:(struct CGSize)arg1 allowingOverflow:(BOOL)arg2;
- (void)_performLayoutCalculation:(CDUnknownBlockType)arg1 inSize:(struct CGSize)arg2;
- (void)_baselineOffsetDidChange;
- (double)_baselineOffsetFromBottom;
- (double)_firstBaselineOffsetFromTop;
- (double)_preferredMaxLayoutWidth;
- (void)_setPreferredMaxLayoutWidth:(double)arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (struct CGRect)_frameOfTrailingWhitespace;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setFrameOrBounds:(struct CGRect)arg1 fromOldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_updateContentSize;
- (void)_textContainerSizeDidChange:(id)arg1;
- (void)_scrollToSelectionIfNeeded;
- (void)_scrollToCaretIfNeeded;
- (void)_invalidateContainerViewSize;
- (void)layoutSubviews;
- (void)adjustedContentInsetDidChange;
- (void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg1;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_updateTextContainerSizeAndSizeToFit;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_textViewContentPaddingDidChange:(id)arg1;
- (id)bottomContentPadding;
- (id)topContentPadding;
- (void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint)arg1;
- (void)_observedTextViewDidChange:(id)arg1;
- (unsigned long long)_totalNumberOfTextViewsInLayoutManager;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (id)_containerView;
@property(copy) NSAttributedString *attributedText;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;
- (BOOL)_ownsInputAccessoryView;
@property(retain) UIView *inputAccessoryView;
- (id)_inputController;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4 isDraggable:(BOOL)arg5;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (void)endSnapshotSeparation;
- (void)addSnapshotSeparation:(double)arg1 withAffinity:(long long)arg2;
- (double)beginSnapshotSeparationOfHeight:(double)arg1 atYOffset:(double)arg2;
- (struct CGRect)rectInTextContainerForRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *uiss_snapshotView;
@property(nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_finishHandlingInteraction:(id)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)_resetLinkInteraction;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)_highlightLinkAtPoint:(struct CGPoint)arg1;
- (id)_presentationRectsForLinkAtRange:(struct _NSRange)arg1 withMargin:(double)arg2;
- (struct CGRect)_presentationRectForLinkAtRange:(struct _NSRange)arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)mightHaveLinks;
- (id)_interactableItemAtPoint:(struct CGPoint)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint)arg2;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint)arg2 type:(long long *)arg3;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;
- (id)_fontInfoForBaselineSpacing;
- (BOOL)_hasFontInfoForVerticalBaselineSpacing;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) BOOL acceptsDictationSearchResults;
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsPayloads;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL deferBecomingResponder;
@property(nonatomic) __weak id <UITextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property(nonatomic) BOOL disableInputBars;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) BOOL displaySecureEditsUsingPlainText;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) BOOL hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) BOOL isCarPlayIdiom;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) UIPasteConfiguration *pasteConfiguration; // @dynamic pasteConfiguration;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end
