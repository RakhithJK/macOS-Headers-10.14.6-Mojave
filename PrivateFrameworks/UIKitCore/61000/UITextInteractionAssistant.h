//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIResponderStandardEditActions-Protocol.h>
#import <UIKitCore/UITextInteraction_AssistantDelegate-Protocol.h>

@class NSString, UIFieldEditor, UIGestureRecognizer, UILongPressGestureRecognizer, UIResponder, UIScrollView, UITapGestureRecognizer, UITextChecker, UITextInteraction, UITextRange, UITextSelectionView;
@protocol UITextInput;

@interface UITextInteractionAssistant : NSObject <UITextInteraction_AssistantDelegate, UIResponderStandardEditActions>
{
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    int _autoscrollRamp;
    double _autoscrollFactor;
    struct CGPoint _autoscrollBasePoint;
    struct CGPoint _autoscrollUntransformedExtentPoint;
    struct CGPoint _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _willHandoffLoupeMagnifier;
    BOOL _needsGestureUpdate;
    long long _previousRepeatedGranularity;
    UITextRange *_stashedTextRange;
    BOOL _didUseStashedRange;
    BOOL _externalTextInput;
    BOOL _suppressSystemUI;
    UITextInteraction *_interactions;
    long long _textInteractionSet;
    UITextInteraction *_externalInteractions;
}

+ (long long)_nextGranularityInCycle:(long long)arg1;
- (void).cxx_destruct;
- (id)textSelectionView;
- (void)clearGestureRecognizers;
- (id)initWithResponder:(id)arg1;
- (BOOL)shouldEnqueueObserverUpdates;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (BOOL)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)hasReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (id)rangeForTextReplacement:(id)arg1;
- (void)scheduleChineseTransliteration;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scheduleReplacements;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (void)updateAutoscroll:(id)arg1;
- (void)autoscrollWillNotStart;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)didEndSelectionInteraction;
- (void)willBeginSelectionInteraction;
- (BOOL)didUseStashedSelection;
- (void)clearStashedSelection;
- (void)stashCurrentSelection;
- (void)resignedFirstResponder;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)clearSelection;
- (void)selectAll:(id)arg1;
- (BOOL)shouldSuppressSelectionCommands;
- (void)selectWordWithoutShowingCommands;
- (void)selectWord;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint)arg1;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)loupeMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(char *)arg3;
@property(readonly, nonatomic) BOOL willHandoffLoupeMagnifier;
- (void)resetWillHandoffLoupeMagnifier;
- (void)setWillHandoffLoupeMagnifier;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollSelectionToVisible;
- (void)setFirstResponderIfNecessary;
- (void)addGestureRecognizersToView:(id)arg1;
- (Class)loupeInteractionClass;
- (Class)selectionInteractionClass;
- (id)linkInteractionView;
- (void)setGestureRecognizers;
- (void)canBeginDragCursor:(id)arg1;
- (BOOL)useGesturesForEditableContent;
- (void)resetGestureRecognizersForLinkInteraction;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (BOOL)containerIsBrowserView;
- (BOOL)containerAllowsSelectionTintOnly;
- (BOOL)containerAllowsSelection;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsAtom;
- (BOOL)containerIsTextField;
@property(readonly, nonatomic) UIFieldEditor *fieldEditor; // @dynamic fieldEditor;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)attach;
- (void)detach;
- (void)detach:(BOOL)arg1;
- (BOOL)isValid;
- (void)activate;
- (void)invalidate;
@property(readonly, nonatomic) BOOL externalTextInput;
@property(nonatomic) struct CGPoint autoscrollUntransformedExtentPoint;
@property(nonatomic) BOOL autoscrolled;
@property(nonatomic) BOOL inGesture;
@property(nonatomic) struct CGPoint loupeGestureEndPoint;
@property(readonly, retain, nonatomic) UIGestureRecognizer *forcePressGesture;
@property(readonly, retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property(readonly, retain, nonatomic) UIGestureRecognizer *doubleTapGesture;
@property(readonly, retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property(retain, nonatomic) UITextInteraction *externalInteractions;
@property(readonly, retain, nonatomic) UITextInteraction *interactions;
@property(readonly, nonatomic) UIResponder<UITextInput> *textDocument;
- (id)_selectionView;
- (BOOL)requiresImmediateUpdate;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
- (void)deactivateSelection;
- (void)activateSelection;
- (void)selectionChanged;
- (void)setSuppressSystemUI:(BOOL)arg1;
@property(readonly, nonatomic) UIResponder<UITextInput> *view;
- (id)_scrollable;
- (id)_asText;
@property(nonatomic) BOOL needsGestureUpdate;
- (void)dealloc;
- (id)initWithView:(id)arg1 textInteractionSet:(long long)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

