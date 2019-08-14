//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSMutableAttributedString, NSString, NSTextInputContext;

__attribute__((visibility("hidden")))
@interface NSBridgedTextCorrectionController : NSResponder
{
    BOOL _secureTextEntry;
    int _grammarCheckingEnabledUserSetting;
    int _autocorrectionEnabledUserSetting;
    NSTextInputContext *_textInputContext;
    long long _spellCheckerDocumentTag;
    unsigned long long _previousCheckingSequenceNumber;
    unsigned long long _prechangeCheckingSequenceNumber;
    NSString *_previousString;
    unsigned long long _spellCheckingType;
    unsigned long long _autocorrectionType;
    struct __CFRunLoopTimer *_bubbleTimer;
    NSMutableAttributedString *_alternativesString;
    struct _NSRange _bubbleRange;
    struct _NSRange _previousInsertionRange;
}

@property(retain) NSMutableAttributedString *alternativesString; // @synthesize alternativesString=_alternativesString;
@property struct __CFRunLoopTimer *bubbleTimer; // @synthesize bubbleTimer=_bubbleTimer;
@property struct _NSRange previousInsertionRange; // @synthesize previousInsertionRange=_previousInsertionRange;
@property struct _NSRange bubbleRange; // @synthesize bubbleRange=_bubbleRange;
@property unsigned long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property unsigned long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property int autocorrectionEnabledUserSetting; // @synthesize autocorrectionEnabledUserSetting=_autocorrectionEnabledUserSetting;
@property int grammarCheckingEnabledUserSetting; // @synthesize grammarCheckingEnabledUserSetting=_grammarCheckingEnabledUserSetting;
@property BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(copy) NSString *previousString; // @synthesize previousString=_previousString;
@property unsigned long long prechangeCheckingSequenceNumber; // @synthesize prechangeCheckingSequenceNumber=_prechangeCheckingSequenceNumber;
@property unsigned long long previousCheckingSequenceNumber; // @synthesize previousCheckingSequenceNumber=_previousCheckingSequenceNumber;
@property long long spellCheckerDocumentTag; // @synthesize spellCheckerDocumentTag=_spellCheckerDocumentTag;
@property __weak NSTextInputContext *textInputContext; // @synthesize textInputContext=_textInputContext;
- (void).cxx_destruct;
- (void)_alternativesTimer;
@property(readonly) unsigned long long enabledTextCheckingTypes;
- (void)toggleAutomaticSpellingCorrection:(id)arg1;
- (BOOL)isAutomaticSpellingCorrectionEnabled;
- (void)setAutomaticSpellingCorrectionEnabled:(BOOL)arg1;
- (void)toggleGrammarChecking:(id)arg1;
@property(getter=isGrammarCheckingEnabled) BOOL grammarCheckingEnabled;
- (BOOL)isContinuousSpellCheckingEnabled;
- (void)ignoreSpelling:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)_changeSpellingToWord:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)_checkSpelling:(BOOL)arg1;
- (struct _NSRange)_modifiedGrammarRangeForRange:(struct _NSRange)arg1 details:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitsChangedFrom:(id)arg1 to:(id)arg2;
- (void)selectedRangeChangedFrom:(struct _NSRange)arg1 to:(struct _NSRange)arg2;
- (void)performActionsForSelectedRange:(struct _NSRange)arg1;
- (void)checkTextWithSelectedRange:(struct _NSRange)arg1;
- (void)checkTextInRange:(struct _NSRange)arg1 types:(unsigned long long)arg2;
- (void)handleTextCheckingResults:(id)arg1 forRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 orthography:(id)arg5 wordCount:(long long)arg6;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)handlesMenuItem:(id)arg1;
- (BOOL)hasMarkedText;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (id)string;
- (void)contextDidInsertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (id)attributedString;
- (void)dealloc;
- (id)initWithTextInputContext:(id)arg1;

@end

