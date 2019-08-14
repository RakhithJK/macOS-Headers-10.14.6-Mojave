//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

#import <InputMethodKit/IMKCandidateMenuDelegate-Protocol.h>

@class IMKCandidateList, NSNumber, NSString;

@interface IMKCandidatePickerInputMethod : IMKAbstractInputMethod <IMKCandidateMenuDelegate>
{
    IMKCandidateList *_candidateList;
    NSNumber *_attachedTextDocumentWasShowingWithMarking;
}

+ (id)inputMethodWithAttachedKeyboard:(id)arg1 candidates:(id)arg2;
@property(retain, nonatomic) NSNumber *attachedTextDocumentWasShowingWithMarking; // @synthesize attachedTextDocumentWasShowingWithMarking=_attachedTextDocumentWasShowingWithMarking;
@property(readonly, nonatomic) IMKCandidateList *candidateList; // @synthesize candidateList=_candidateList;
- (void).cxx_destruct;
- (void)reflectCandidatesInTouchBar;
- (void)candidateMenu:(id)arg1 didSelectCandidate:(id)arg2;
- (void)candidateMenu:(id)arg1 didChangeFocusTo:(id)arg2;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
- (void)didAttachTextDocument:(id)arg1;
- (void)willAttachTextDocument:(id)arg1;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2 candidates:(id)arg3;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

