//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBridgedTextCorrectionController, NSBridgedTextSubstitutionController, NSBridgedTextTouchBarController, NSString, TITextInputTraits;
@protocol NSTextInputClient;

@interface NSTextInputContext : NSObject
{
    id _client;
    NSArray *_inputLocales;
    void *_documentID;
    id _keyBindings;
    id _keyBindingManager;
    NSString *_commandCharacters;
    long long _documentRefcon;
    id _reserved[2];
    id _auxiliary;
    struct {
        unsigned int _acceptsGlyphInfo:1;
        unsigned int _secureInput:1;
        unsigned int _attributedString:1;
        unsigned int _fractionOfDistance:1;
        unsigned int _baselineDelta:1;
        unsigned int _windowLevel:1;
        unsigned int _drawsVertically:1;
        unsigned int _compatibilityMode:1;
        unsigned int _hasTS:1;
        unsigned int _hasLM:1;
        unsigned int _inputLocaleGeneration:16;
        unsigned int _blockTSM:1;
        unsigned int _keyProcess:1;
        unsigned int _preflight:1;
        unsigned int _bindingFound:1;
        unsigned int _unmarkbeforeinsert:1;
        unsigned int _completionHandlingClient:1;
    } _ticFlags;
    TITextInputTraits *_tiTextInputTraits;
    NSBridgedTextTouchBarController *_bridgedTextTouchBarController;
    NSBridgedTextCorrectionController *_bridgedTextCorrectionController;
    NSBridgedTextSubstitutionController *_bridgedTextSubstitutionController;
    struct _NSRange tiSelectedTextRange;
}

+ (id)localeForInputSource:(id)arg1;
+ (id)localizedNameForInputSource:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentInputContext_withFirstResponderSync:(BOOL)arg1;
+ (id)currentInputContext;
+ (void)initialize;
+ (BOOL)isInputContextRefconValid:(const void *)arg1;
+ (id)inputSourcesFromInputSourceLocales:(id)arg1;
+ (BOOL)processInputKeyBindings:(id)arg1;
+ (void)updateInputContexts;
+ (id)inputContextWithClient:(id)arg1;
+ (void)_applicationDeactivated:(id)arg1;
+ (id)keyPathsForValuesAffectingKeyboardInputSourceOverlayVisible;
+ (BOOL)currentKeyboardInputSourceParticipatesInTouchBar;
+ (void)cycleToNextInputKeyboardLayout:(id)arg1;
+ (void)cycleToNextInputScript:(id)arg1;
@property(readonly) id <NSTextInputClient> client; // @synthesize client=_client;
@property(retain) NSBridgedTextSubstitutionController *bridgedTextSubstitutionController; // @synthesize bridgedTextSubstitutionController=_bridgedTextSubstitutionController;
@property(retain) NSBridgedTextCorrectionController *bridgedTextCorrectionController; // @synthesize bridgedTextCorrectionController=_bridgedTextCorrectionController;
@property(retain) NSBridgedTextTouchBarController *bridgedTextTouchBarController; // @synthesize bridgedTextTouchBarController=_bridgedTextTouchBarController;
@property struct _NSRange tiSelectedTextRange; // @synthesize tiSelectedTextRange;
@property(retain) TITextInputTraits *tiTextInputTraits; // @synthesize tiTextInputTraits=_tiTextInputTraits;
- (void)doCommandBySelector:(SEL)arg1 completionHandlerWithResult:(CDUnknownBlockType)arg2;
- (unsigned long long)incrementalSearchClientGeometry;
- (BOOL)drawsVerticallyForCharacterAtIndex:(unsigned long long)arg1;
- (long long)windowLevel;
- (double)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1;
- (id)attributedString;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
@property(copy) NSString *selectedKeyboardInputSource; // @dynamic selectedKeyboardInputSource;
@property(readonly) NSArray *keyboardInputSources; // @dynamic keyboardInputSources;
- (void)invalidateCharacterCoordinates;
- (void)discardMarkedText;
- (void)tryPeriodSubstitution_initialDispatchWork:(CDUnknownBlockType)arg1 dispatchSelRange:(CDUnknownBlockType)arg2 attrStringDispatchWork:(CDUnknownBlockType)arg3 validAttrString:(CDUnknownBlockType)arg4 attrSubstringProposedRange:(CDUnknownBlockType)arg5 attrSubstringDispatchWork:(CDUnknownBlockType)arg6 validProposedSubstring:(CDUnknownBlockType)arg7 stringFromNSSpellChecker:(CDUnknownBlockType)arg8 insertSubstitutionWork:(CDUnknownBlockType)arg9 continuation:(CDUnknownBlockType)arg10;
- (void)periodSubstitutionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_handleEvent:(id)arg1 options:(unsigned long long)arg2 allowingSyntheticEvent:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_handleEvent:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tryHandleEvent_HasMarkedText_withDispatchCondition:(CDUnknownBlockType)arg1 dispatchWork:(CDUnknownBlockType)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)tryDoubleSpaceSubstitution_WithDispatchCondition:(CDUnknownBlockType)arg1 dispatchSubstitutionWork:(CDUnknownBlockType)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)tryTSMProcessRawKeyEvent_orSubstitution:(struct OpaqueEventRef *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 setupForDispatch:(CDUnknownBlockType)arg3 furtherCondition:(CDUnknownBlockType)arg4 doubleSpaceSubstitutionCondition:(CDUnknownBlockType)arg5 doubleSpaceSubstitutionWork:(CDUnknownBlockType)arg6 dispatchTSMWork:(CDUnknownBlockType)arg7 continuation:(CDUnknownBlockType)arg8;
- (BOOL)_handleEvent:(id)arg1 allowingSyntheticEvent:(BOOL)arg2;
- (BOOL)handleEvent:(id)arg1;
- (void)deactivate;
- (void)activate;
- (id)candidateListTouchBarItem;
@property(copy) NSArray *allowedInputSourceLocales; // @dynamic allowedInputSourceLocales;
@property BOOL acceptsGlyphInfo; // @dynamic acceptsGlyphInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (BOOL)isCurrent;
- (void)handleTSMEvent:(void *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tryHandleTSMEvent_firstRectInRangeLoop_withContext:(struct HandleTSMEventCompletionContext *)arg1 setupForDispatch:(CDUnknownBlockType)arg2 loopCondition:(CDUnknownBlockType)arg3 dispatchWorkEach:(CDUnknownBlockType)arg4 eachLoopCompletion:(CDUnknownBlockType)arg5 continuation:(CDUnknownBlockType)arg6;
- (void)do_HandleTSMEvent_firstRectInRangeLoop:(struct HandleTSMEventCompletionContext *)arg1 whileCondition:(CDUnknownBlockType)arg2 dispatchWorkEach:(CDUnknownBlockType)arg3 eachLoopCompletion:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_baselineDeltaForCharacterAtIndex_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 furtherDispatchCondition:(CDUnknownBlockType)arg3 dispatchWork:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_attributedString_attributedSubstringForProposedRange_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 dispatchWork:(CDUnknownBlockType)arg3 dispatchFurtherCondition:(CDUnknownBlockType)arg4 dispatchFurtherWork:(CDUnknownBlockType)arg5 continuation:(CDUnknownBlockType)arg6;
- (void)tryHandleTSMEvent_attributedSubstringForProposedRange_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 dispatchWork:(CDUnknownBlockType)arg3 continuation:(CDUnknownBlockType)arg4;
- (void)tryHandleTSMEvent_drawsVerticallyForCharacterAtIndex_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 dispatchWork:(CDUnknownBlockType)arg3 continuation:(CDUnknownBlockType)arg4;
- (void)tryHandleTSMEvent_attributedString_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 dispatchWork:(CDUnknownBlockType)arg3 continuation:(CDUnknownBlockType)arg4;
- (void)tryHandleTSMEvent_offsetToPos_markedOrSelRange_withContext:(struct HandleTSMEventCompletionContext *)arg1 markedOrSelRangeDispatchCondition:(CDUnknownBlockType)arg2 markedRangeContinuation:(CDUnknownBlockType)arg3 selectedRangeContinuation:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_fractionOfDistanceThroughGlyphForPoint_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 furtherDispatchCondition:(CDUnknownBlockType)arg3 dispatchWork:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_markedRange_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 setupForDispatch:(CDUnknownBlockType)arg3 furtherDispatchCondition:(CDUnknownBlockType)arg4 dispatchWork:(CDUnknownBlockType)arg5 continuation:(CDUnknownBlockType)arg6;
- (void)tryHandleTSMEvent_setMarkedText_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 setupForDispatch:(CDUnknownBlockType)arg3 dispatchWork:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_insertFixLenText_withContext:(struct HandleTSMEventCompletionContext *)arg1 dispatchCondition:(CDUnknownBlockType)arg2 setupForDispatch:(CDUnknownBlockType)arg3 nestedWorkaroundCondition:(CDUnknownBlockType)arg4 nestedWorkaroundDispatchWork:(CDUnknownBlockType)arg5 loopCondition:(CDUnknownBlockType)arg6 dispatchWorkEach:(CDUnknownBlockType)arg7 afterEachInsertText:(CDUnknownBlockType)arg8 continuation:(CDUnknownBlockType)arg9;
- (void)do_HandleTSMEvent_insertFixLenTextLoop:(struct HandleTSMEventCompletionContext *)arg1 whileCondition:(CDUnknownBlockType)arg2 dispatchWorkEach:(CDUnknownBlockType)arg3 afterEachInsertText:(CDUnknownBlockType)arg4 continuation:(CDUnknownBlockType)arg5;
- (void)tryHandleTSMEvent_clearMarkedTextForAlternatives_withTest:(CDUnknownBlockType)arg1 dispatchWork:(CDUnknownBlockType)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)tryHandleTSMEvent_HasMarkedText_withDispatchCondition:(CDUnknownBlockType)arg1 dispatchWork:(CDUnknownBlockType)arg2 continuation:(CDUnknownBlockType)arg3;
- (int)handleTSMEvent:(void *)arg1;
- (id)auxiliary;
- (void)setSecureInputMode:(BOOL)arg1;
- (BOOL)isSecureInputMode;
- (void)setKeyBindingManager:(id)arg1;
- (id)keyBindingManager;
- (BOOL)_isIOSMacClientNonTextEditing;
- (BOOL)_isIOSMacClientTextEditing;
- (BOOL)_isIOSMacClient;
- (BOOL)_isAsyncTextInputClient;
- (void)_handleCommand:(SEL)arg1;
- (void)_handleText:(id)arg1;
- (BOOL)remapsArrowKeysForVerticalOrientation;
- (id)keyBindingState;
- (void)_updateAllowedInputSources;
- (BOOL)_forceAttributedString;
- (void)_invalidate;
- (void)wouldHandleEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)drawsVerticallyForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)attributedStringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)characterIndexForPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstRectForCharacterRange:(struct _NSRange)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)attributedSubstringForProposedRange:(struct _NSRange)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hasMarkedTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markedRangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectedRangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unmarkTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)doCommandBySelector:(SEL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic, setter=setRTISelectedTextRange:) struct _NSRange rtiSelectedTextRange; // @dynamic rtiSelectedTextRange;
- (BOOL)doCommandBySelectorWithResult:(SEL)arg1;
- (void)convertToHalfWidth:(id)arg1;
- (void)convertToFullWidth:(id)arg1;
- (void)convertToTraditionalChinese:(id)arg1;
- (void)convertToSimplifiedChinese:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)replaceTextInSelection:(id)arg1;
- (void)addLinksInSelection:(id)arg1;
- (void)replaceDashesInSelection:(id)arg1;
- (void)replaceQuotesInSelection:(id)arg1;
- (void)toggleAutomaticTextReplacement:(id)arg1;
- (void)toggleAutomaticDashSubstitution:(id)arg1;
- (void)toggleAutomaticLinkDetection:(id)arg1;
- (void)toggleAutomaticQuoteSubstitution:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)toggleAutomaticSpellingCorrection:(id)arg1;
- (void)toggleGrammarChecking:(id)arg1;
- (void)toggleContinuousSpellChecking:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)prepareContextMenu:(id)arg1;
- (BOOL)drawsVerticallyForCharacterAtIndex_RTI:(unsigned long long)arg1;
- (double)baselineDeltaForCharacterAtIndex_RTI:(unsigned long long)arg1;
- (double)fractionOfDistanceThroughGlyphForPoint_RTI:(struct CGPoint)arg1;
- (id)attributedString_RTI;
- (unsigned long long)characterIndexForPoint_RTI:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange_RTI:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText_RTI;
- (id)attributedSubstringForProposedRange_RTI:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText_RTI;
- (struct _NSRange)markedRange_RTI;
- (struct _NSRange)selectedRange_RTI;
- (void)unmarkText_RTI;
- (void)setMarkedText_RTI:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector_RTI:(SEL)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)doCommandBySelector_RTI:(SEL)arg1;
- (void)insertText_RTI:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)updateFunctionRowItemState;
- (id)generateFunctionRowItemIdentifiers;
- (void)setFunctionRowItemIdentifiers:(id)arg1;
- (void)dismissTrackpadHandwritingTouchBarItemViewController;
- (void)presentTrackpadHandwritingTouchBarItemViewController:(id)arg1;
- (void)dismissPressAndHoldTouchBarItemViewController;
- (void)presentPressAndHoldTouchBarItemViewController:(id)arg1;
- (void)dismissKeyboardIMTouchBarItemViewController;
- (void)dismissKeyboardIMTouchBarItemViewController:(id)arg1;
- (void)presentKeyboardIMTouchBarItemViewController:(id)arg1;
- (BOOL)isKeyboardInputSourceOverlayVisible;
- (void)setKeyboardInputSourcePopoverTouchBar:(id)arg1;
- (id)keyboardInputSourcePopoverTouchBar;
- (id)keyboardInputSourcePopoverTouchBarItem;
- (void)dismissCharacterPickerTouchBarItemViewController;
- (void)presentCharacterPickerTouchBarItemViewController:(id)arg1;
- (void)setCharacterPickerTouchBarItem:(id)arg1;
- (id)characterPickerTouchBarItem;
- (id)characterPickerViewController;
- (void)dismissTrackpadHandwritingFunctionRowItemViewController;
- (void)presentTrackpadHandwritingFunctionRowItemViewController:(id)arg1;
- (void)dismissCharacterPickerFunctionRowItemViewController;
- (void)presentCharacterPickerFunctionRowItemViewController:(id)arg1;
- (void)dismissPressAndHoldFunctionRowItemViewController;
- (void)presentPressAndHoldFunctionRowItemViewController:(id)arg1;
- (void)dismissKeyboardIMFunctionRowItemViewController;
- (void)presentKeyboardIMFunctionRowItemViewController:(id)arg1;
@property(readonly) BOOL hasActiveTextInputFunctionRowItem;
- (BOOL)handleEventByKeyboardLayout:(id)arg1;
- (void)handleEventByInputMethod:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)handleMouseEvent:(id)arg1;
- (BOOL)wantsToHandleMouseEvents;
- (id)server;
- (id)image;
- (id)language;
- (BOOL)wantsToInterpretAllKeystrokes;
- (void)markedTextSelectionChanged:(struct _NSRange)arg1 client:(id)arg2;
- (void)markedTextAbandoned:(id)arg1;
- (id)localizedInputManagerName;
- (void)cycleToNextInputKeyboardLayout:(id)arg1;
- (void)cycleToNextInputScript:(id)arg1;

@end

