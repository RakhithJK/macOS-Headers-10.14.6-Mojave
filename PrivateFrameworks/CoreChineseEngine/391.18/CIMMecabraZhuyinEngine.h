//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChineseEngine/CIMHigherOrderIMInfoProviderProtocol-Protocol.h>
#import <CoreChineseEngine/CIMMecabraEngineSubstitution-Protocol.h>
#import <CoreChineseEngine/TIMecabraEnvironmentProvider-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableString, NSOperationQueue, NSString, TIMecabraEnvironment, _KSTextReplacementClientStore;
@protocol CIMMecabraZhuyinEngineDelegate;

@interface CIMMecabraZhuyinEngine : NSObject <CIMHigherOrderIMInfoProviderProtocol, TIMecabraEnvironmentProvider, CIMMecabraEngineSubstitution>
{
    id <CIMMecabraZhuyinEngineDelegate> _delegate;
    unsigned short _syllableConsonantBuffer;
    unsigned short _syllableMedialBuffer;
    unsigned short _syllableVowelBuffer;
    unsigned short _syllableToneBuffer;
    NSArray *_userWordKeyPairs;
    NSMutableString *_userWordReadingBuffer;
    unsigned long long _inputCursorLocation;
    NSMutableString *_inputBuffer;
    NSMutableArray *_inputBufferSplittingLengths;
    NSMutableArray *_composedBufferSplittingLengths;
    NSMutableArray *_confirmedCandidates;
    NSMutableString *_composedBuffer;
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    NSMutableArray *_candidateContext;
    NSString *_stringContext;
    _KSTextReplacementClientStore *_textReplacementController;
    NSArray *_addressBookEntries;
    NSOperationQueue *_operationQueue;
    TIMecabraEnvironment *_mecabraEnvironment;
}

@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSArray *addressBookEntries; // @synthesize addressBookEntries=_addressBookEntries;
@property(retain, nonatomic) NSString *stringContext; // @synthesize stringContext=_stringContext;
@property(retain, nonatomic) NSArray *candidateContext; // @synthesize candidateContext=_candidateContext;
@property BOOL leftDoubleQuotationMarkInserted; // @synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted;
@property BOOL leftSingleQuotationMarkInserted; // @synthesize leftSingleQuotationMarkInserted=_leftSingleQuotationMarkInserted;
@property(retain) NSMutableString *composedBuffer; // @synthesize composedBuffer=_composedBuffer;
@property(retain) NSMutableArray *confirmedCandidates; // @synthesize confirmedCandidates=_confirmedCandidates;
@property(retain) NSMutableArray *composedBufferSplittingLengths; // @synthesize composedBufferSplittingLengths=_composedBufferSplittingLengths;
@property(retain) NSMutableArray *inputBufferSplittingLengths; // @synthesize inputBufferSplittingLengths=_inputBufferSplittingLengths;
@property(retain) NSMutableString *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property unsigned long long inputCursorLocation; // @synthesize inputCursorLocation=_inputCursorLocation;
@property(retain) NSMutableString *userWordReadingBuffer; // @synthesize userWordReadingBuffer=_userWordReadingBuffer;
@property(retain, nonatomic) NSArray *userWordKeyPairs; // @synthesize userWordKeyPairs=_userWordKeyPairs;
@property unsigned short syllableToneBuffer; // @synthesize syllableToneBuffer=_syllableToneBuffer;
@property unsigned short syllableVowelBuffer; // @synthesize syllableVowelBuffer=_syllableVowelBuffer;
@property unsigned short syllableMedialBuffer; // @synthesize syllableMedialBuffer=_syllableMedialBuffer;
@property unsigned short syllableConsonantBuffer; // @synthesize syllableConsonantBuffer=_syllableConsonantBuffer;
@property __weak id <CIMMecabraZhuyinEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)candidatesForInputString:(id)arg1;
- (id)inputStringForCharacters:(id)arg1;
@property(readonly) NSString *syllableBuffersAggregateString;
@property(readonly) unsigned long long syllableBuffersAggregateLength;
@property(readonly) BOOL syllableBuffersOccupied;
@property(readonly) BOOL syllableBuffersValid;
@property(readonly) unsigned long long composedBufferCursorLocation;
@property(readonly) unsigned long long bufferSplittingLengthsIndex;
@property(readonly) NSAttributedString *composedText;
@property(readonly) unsigned long long currentAnalysisOptions;
@property(readonly) struct __Mecabra *zhuyinEngine;
@property(readonly) _KSTextReplacementClientStore *textReplacementController; // @synthesize textReplacementController=_textReplacementController;
@property(readonly, retain, nonatomic) NSArray *limitedTonelessCandidates;
@property(readonly, nonatomic) BOOL inlineHasZhuyinSyllables;
@property(readonly, nonatomic, getter=isInlineEmpty) BOOL inlineEmpty;
- (void)rebuildUserWordKeyPairs;
- (void)reset;
- (void)resetSyllableBuffers;
- (void)updateComposedTextToClient;
- (void)updateConfirmedCandidate:(id)arg1;
- (void)enumerateConfirmedCandidatesWithDeletionIndex:(unsigned long long)arg1 usingHandler:(CDUnknownBlockType)arg2;
- (void)enumerateConfirmedCandidatesAfterInsertedCandidate:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldDirectlyCommitInput:(id)arg1;
- (id)convertToFullWidth:(id)arg1;
- (id)readingsLengths:(id)arg1;
- (id)candidatesForReading:(id)arg1 readingRange:(struct _NSRange)arg2 currentReading:(id)arg3 shouldIncludeCompletionCandidates:(BOOL)arg4 withCandidatesCapacity:(unsigned long long)arg5;
- (id)aggregateCandidatesForReadingAtRange:(struct _NSRange)arg1 withCandidatesCapacity:(unsigned long long)arg2;
- (id)aggregateCandidatesForPunctuationAtRange:(struct _NSRange)arg1;
- (void)analyzeInputWithCandidatesCapacity:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExpertDictionary:(id)arg1;
- (void)updateTextReplacementEntries;
- (void)updateContacts:(id)arg1;
- (void)commitComposedTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)mecabraAnalyzeString:(id)arg1 analysisOptions:(unsigned long long)arg2 candidateContext:(id)arg3 stringContext:(id)arg4;
- (void)refreshComposedText;
- (void)unregisterCandidate:(id)arg1;
- (void)confirmCandidate:(id)arg1;
- (void)previewCandidate:(id)arg1;
- (BOOL)loadCandidatesWithCapacity:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadCompositionCandidatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)moveCursorToTail;
- (BOOL)moveCursorToHead;
- (BOOL)moveCursorRight;
- (BOOL)moveCursorLeft;
- (BOOL)revertCurrentCharacterToTonelessZhuyin;
- (BOOL)forwardDeleteFromInputWithUpdatingComposedTextToClient:(BOOL)arg1;
- (BOOL)forwardDeleteFromInput;
- (BOOL)deleteFromInputWithUpdatingComposedTextToClient:(BOOL)arg1;
- (BOOL)deleteFromInput;
- (BOOL)addNonZhuyinInput:(id)arg1;
- (BOOL)addZhuyinInput:(id)arg1 withUpdatingComposedTextToClient:(BOOL)arg2;
- (BOOL)addZhuyinInput:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

