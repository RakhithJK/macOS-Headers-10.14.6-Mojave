//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, NSTextField, NVRAPCommentsView, RAPQuestion;
@protocol RAPCorrectableNameProtocol><RAPInstrumentableTarget;

__attribute__((visibility("hidden")))
@interface NVRAPLabelCorrectionViewController : NVRAPViewController <RAPInstrumentableTarget>
{
    NSTextField *_nameLabel;
    NSTextField *_nameTextField;
    NVRAPCommentsView *_commentsTextView;
    NSString *_originalLabelText;
}

@property(copy, nonatomic) NSString *originalLabelText; // @synthesize originalLabelText=_originalLabelText;
@property(retain) NVRAPCommentsView *commentsTextView; // @synthesize commentsTextView=_commentsTextView;
@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property __weak NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (unsigned long long)nextState;
- (void)updateFields;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) RAPQuestion<RAPCorrectableNameProtocol><RAPInstrumentableTarget> *question; // @dynamic question;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewDidLoad;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

