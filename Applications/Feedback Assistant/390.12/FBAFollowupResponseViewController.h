//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBACorrespondingViewController-Protocol.h"

@class FBAFeedbackFollowup, NSAttributedString, NSButton, NSDate, NSProgressIndicator, NSString;
@protocol FBAFollowupDelegate;

@interface FBAFollowupResponseViewController : NSViewController <FBACorrespondingViewController>
{
    FBAFeedbackFollowup *_followup;
    id <FBAFollowupDelegate> _delegate;
    NSButton *_submitButton;
    NSProgressIndicator *_spinner;
}

+ (id)responseViewControllerWithFeedbackFollowup:(id)arg1;
@property __weak NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property __weak NSButton *submitButton; // @synthesize submitButton=_submitButton;
@property __weak id <FBAFollowupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) FBAFeedbackFollowup *followup; // @synthesize followup=_followup;
- (void).cxx_destruct;
@property(readonly) BOOL correspondenceUnread;
@property(readonly) NSDate *correspondenceTime;
@property(readonly) NSString *correspondenceTitle;
- (BOOL)hasPendingContent;
- (void)clearPendingContent;
- (void)configureForUse;
- (void)configureForSubmission;
- (void)submitFollowupResponse:(id)arg1 attachments:(id)arg2 optedOut:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)submit:(id)arg1;
- (void)loadView;
- (id)submissionJSON;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 feedbackFollowup:(id)arg3;

// Remaining properties
@property(readonly) NSAttributedString *correspondenceStatus;
@property(readonly) NSString *correspondenceSubtitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

