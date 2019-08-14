//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBACorrespondingViewController-Protocol.h"

@class FBAContentItem, FBAFeedbackStatus, FBAFormResponseStub, FBAQuestionGroupStubViewController, FBAStackView, NSArray, NSAttributedString, NSDate, NSString;

@interface FBAFormResponseStubViewController : NSViewController <FBACorrespondingViewController>
{
    FBAFormResponseStub *_formResponseStub;
    FBAFeedbackStatus *_feedbackStatus;
    FBAStackView *_groupStackView;
    NSArray *_questionGroupStubControllers;
    FBAQuestionGroupStubViewController *_statusController;
}

+ (id)keyPathsForValuesAffectingCorrespondenceSubtitle;
+ (id)keyPathsForValuesAffectingCorrespondenceTime;
+ (id)keyPathsForValuesAffectingCorrespondenceTitle;
@property(retain, nonatomic) FBAQuestionGroupStubViewController *statusController; // @synthesize statusController=_statusController;
@property(retain, nonatomic) NSArray *questionGroupStubControllers; // @synthesize questionGroupStubControllers=_questionGroupStubControllers;
@property __weak FBAStackView *groupStackView; // @synthesize groupStackView=_groupStackView;
@property(retain, nonatomic) FBAFeedbackStatus *feedbackStatus; // @synthesize feedbackStatus=_feedbackStatus;
@property(retain, nonatomic) FBAFormResponseStub *formResponseStub; // @synthesize formResponseStub=_formResponseStub;
- (void).cxx_destruct;
- (id)controllerForFilePromises:(id)arg1;
- (id)controllerForFeedbackStatus:(id)arg1;
- (id)controllerForQuestionGroupStub:(id)arg1;
- (id)divider;
- (id)bugFormID;
- (void)addFeedbackStatusToView;
@property(readonly) NSAttributedString *correspondenceStatus;
@property(readonly) NSString *correspondenceSubtitle;
@property(readonly) BOOL correspondenceUnread;
@property(readonly) NSDate *correspondenceTime;
@property(readonly) NSString *correspondenceTitle;
@property(readonly, nonatomic) FBAContentItem *contentItem;
- (id)keyPathsForValuesAffectingCorrespondenceStatus;
- (void)viewDidLoad;
- (void)loadView;
- (void)gotoQuestion:(id)arg1;
- (id)initWithFormResponseStub:(id)arg1;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

