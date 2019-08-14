//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSArray, NSMatrix, NSString, NSTextField, RAPPlaceClosureQuestion;

__attribute__((visibility("hidden")))
@interface NVRAPPlaceClosureViewController : NVRAPViewController <RAPInstrumentableTarget>
{
    NSTextField *_titleHeaderLabel;
    NSMatrix *_choicesMatrix;
}

+ (id)keyPathsForValuesAffectingChoiceTitle;
+ (id)keyPathsForValuesAffectingChoiceArray;
@property __weak NSMatrix *choicesMatrix; // @synthesize choicesMatrix=_choicesMatrix;
@property __weak NSTextField *titleHeaderLabel; // @synthesize titleHeaderLabel=_titleHeaderLabel;
- (void).cxx_destruct;
- (void)selectTypeAction:(id)arg1;
@property(readonly, nonatomic) NSString *choiceTitle;
@property(readonly, nonatomic) NSArray *choiceArray;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewDidLoad;
- (id)nibName;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RAPPlaceClosureQuestion *question; // @dynamic question;
@property(readonly) Class superclass;

@end
