//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/TIKeyboardInputManager-Protocol.h>

@class NSString;

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>
{
}

+ (id)serverInterface;
+ (void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg1;
- (void)writeTypologyLogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 requestToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)keyboardConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

