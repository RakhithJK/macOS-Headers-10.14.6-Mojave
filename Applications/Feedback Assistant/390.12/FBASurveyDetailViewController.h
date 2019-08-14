//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAContentItemDetailViewController.h"

@class FBABugForm, FBACorrespondenceViewController, FBAFeedbackSummaryViewController, FBAStackView, FBASurveyActionViewController, FBASurveyAnnouncementViewController, NSView;

@interface FBASurveyDetailViewController : FBAContentItemDetailViewController
{
    FBAStackView *_stackView;
    NSView *_documentView;
    FBASurveyAnnouncementViewController *_surveyAnnouncementVC;
    FBACorrespondenceViewController *_surveyCorrespondenceVC;
    FBASurveyActionViewController *_surveyActionVC;
    FBAFeedbackSummaryViewController *_responseSummaryVC;
    NSView *_responseSummaryContainer;
    NSView *_responseSummaryEmbed;
}

+ (id)keyPathsForValuesAffectingRepresentedSurvey;
+ (void)initialize;
@property(retain) NSView *responseSummaryEmbed; // @synthesize responseSummaryEmbed=_responseSummaryEmbed;
@property(retain) NSView *responseSummaryContainer; // @synthesize responseSummaryContainer=_responseSummaryContainer;
@property(retain) FBAFeedbackSummaryViewController *responseSummaryVC; // @synthesize responseSummaryVC=_responseSummaryVC;
@property(retain) FBASurveyActionViewController *surveyActionVC; // @synthesize surveyActionVC=_surveyActionVC;
@property(retain) FBACorrespondenceViewController *surveyCorrespondenceVC; // @synthesize surveyCorrespondenceVC=_surveyCorrespondenceVC;
@property(retain) FBASurveyAnnouncementViewController *surveyAnnouncementVC; // @synthesize surveyAnnouncementVC=_surveyAnnouncementVC;
@property __weak NSView *documentView; // @synthesize documentView=_documentView;
@property __weak FBAStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)updateViewConfiguration;
- (void)updateSummaryView;
@property(retain) FBABugForm *representedSurvey;
- (id)displayedItem;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

