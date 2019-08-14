//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSArray, NSString, RAPTransitLineSelectionQuestion;

__attribute__((visibility("hidden")))
@interface NVRAPTransitLineTableViewController : NVRAPTableViewController <RAPInstrumentableTarget>
{
    NSArray *_selectableLines;
}

@property(retain, nonatomic) NSArray *selectableLines; // @synthesize selectableLines=_selectableLines;
- (void).cxx_destruct;
- (void)continueAction;
- (unsigned long long)nextState;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)detailsElements;
- (void)_downloadAndDisplayTransitLines;
- (void)_downloadLinesFromQuestion;
- (void)viewDidLoad;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RAPTransitLineSelectionQuestion *question; // @dynamic question;
@property(readonly) Class superclass;

@end
