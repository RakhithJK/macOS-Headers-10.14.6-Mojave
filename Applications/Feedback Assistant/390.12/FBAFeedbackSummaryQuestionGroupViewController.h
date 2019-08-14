//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FBAFormResponse, FBAQuestionGroup, FBAStackView, NSArray, NSDictionary, NSTextField;
@protocol FBAFeedbackSummaryQuestionGroupViewControllerDelegate;

@interface FBAFeedbackSummaryQuestionGroupViewController : NSViewController
{
    BOOL _observingAfterLoad;
    BOOL _shouldShowQuestionLinks;
    BOOL _filesQuestionGroup;
    FBAQuestionGroup *_questionGroup;
    FBAFormResponse *_formResponse;
    id <FBAFeedbackSummaryQuestionGroupViewControllerDelegate> _delegate;
    FBAStackView *_stackView;
    NSTextField *_headerLabel;
    NSArray *_viewControllersInOrder;
    NSDictionary *_viewControllersByQuestionID;
}

@property(retain) NSDictionary *viewControllersByQuestionID; // @synthesize viewControllersByQuestionID=_viewControllersByQuestionID;
@property(retain) NSArray *viewControllersInOrder; // @synthesize viewControllersInOrder=_viewControllersInOrder;
@property __weak NSTextField *headerLabel; // @synthesize headerLabel=_headerLabel;
@property __weak FBAStackView *stackView; // @synthesize stackView=_stackView;
@property BOOL filesQuestionGroup; // @synthesize filesQuestionGroup=_filesQuestionGroup;
@property BOOL shouldShowQuestionLinks; // @synthesize shouldShowQuestionLinks=_shouldShowQuestionLinks;
@property __weak id <FBAFeedbackSummaryQuestionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) FBAFormResponse *formResponse; // @synthesize formResponse=_formResponse;
@property(readonly) FBAQuestionGroup *questionGroup; // @synthesize questionGroup=_questionGroup;
- (void).cxx_destruct;
- (void)setErrorString:(id)arg1 forQuestionID:(id)arg2;
- (void)removeErrorStringForQuestionID:(id)arg1;
- (id)errorStringForQuestionID:(id)arg1;
- (id)questionViewControllerForQuestionID:(id)arg1;
- (void)showQuestionID:(id)arg1;
- (void)hideQuestionID:(id)arg1;
- (void)updateViewValueForAnswer:(id)arg1;
- (void)updateViewValueForQuestionID:(id)arg1;
- (id)requirementForID:(long long)arg1;
- (void)loadFilesQuestionView;
- (void)loadNormalQuestionView;
@property(readonly) BOOL shouldShowGroupHeader;
- (void)answerDidChange:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithQuestionGroup:(id)arg1 formResponse:(id)arg2;

@end

