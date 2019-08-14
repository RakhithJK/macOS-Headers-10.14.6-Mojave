//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPViewController.h"

#import "NSTextViewDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"

@class BackgroundColourView, NSArray, NSImageView, NSLayoutConstraint, NSMatrix, NSString, NSTextField, NSTextFieldCell, NSTextView, NSURL, NSView, NSWindow, NVRAPCommentsView, RAPProblemNotListedQuestion, RAPQuestion;
@protocol RAPMenu, RAPMenuItem;

__attribute__((visibility("hidden")))
@interface NVRAPChoiceViewController : NVRAPViewController <NSTextViewDelegate, RAPInstrumentableTarget>
{
    BOOL _commentsOpened;
    NSURL *_businessPortalClaimURL;
    NSImageView *_iconImage;
    BOOL _hasBusinessClaim;
    double _currentIconScale;
    BOOL _shouldDisplaySnippet;
    RAPQuestion<RAPMenu> *_categoryQuestion;
    BOOL _showActionToolbar;
    RAPQuestion<RAPMenuItem> *_chosenCategory;
    NVRAPCommentsView *_commentsView;
    NSMatrix *_choicesMatrix;
    NSLayoutConstraint *_bottomVerticalHeightConstraint;
    NSLayoutConstraint *_businessClaimTextHeightConstraint;
    NSTextView *_businessClaimTextView;
    NSWindow *_businessClaimWindow;
    NSImageView *_businessClaimIconImage;
    NSTextField *_businessClaimTitleTextField;
    NSTextField *_businessClaimVerifyTextField;
    NSView *_snippetContainerView;
    BackgroundColourView *_separatorView;
    NSTextFieldCell *_placeTitleTextFieldCell;
    NSTextFieldCell *_addressTextFieldCell;
    NSLayoutConstraint *_iconTopConstraint;
    NSLayoutConstraint *_titleToSeparatorConstraint;
    NSLayoutConstraint *_titleToSuperviewConstraint;
    RAPProblemNotListedQuestion *_otherIssueQuestion;
}

@property BOOL showActionToolbar; // @synthesize showActionToolbar=_showActionToolbar;
@property(retain, nonatomic) RAPProblemNotListedQuestion *otherIssueQuestion; // @synthesize otherIssueQuestion=_otherIssueQuestion;
@property __weak NSLayoutConstraint *titleToSuperviewConstraint; // @synthesize titleToSuperviewConstraint=_titleToSuperviewConstraint;
@property __weak NSLayoutConstraint *titleToSeparatorConstraint; // @synthesize titleToSeparatorConstraint=_titleToSeparatorConstraint;
@property __weak NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
@property __weak NSTextFieldCell *addressTextFieldCell; // @synthesize addressTextFieldCell=_addressTextFieldCell;
@property __weak NSTextFieldCell *placeTitleTextFieldCell; // @synthesize placeTitleTextFieldCell=_placeTitleTextFieldCell;
@property __weak BackgroundColourView *separatorView; // @synthesize separatorView=_separatorView;
@property __weak NSView *snippetContainerView; // @synthesize snippetContainerView=_snippetContainerView;
@property __weak NSTextField *businessClaimVerifyTextField; // @synthesize businessClaimVerifyTextField=_businessClaimVerifyTextField;
@property __weak NSTextField *businessClaimTitleTextField; // @synthesize businessClaimTitleTextField=_businessClaimTitleTextField;
@property __weak NSImageView *businessClaimIconImage; // @synthesize businessClaimIconImage=_businessClaimIconImage;
@property(retain) NSWindow *businessClaimWindow; // @synthesize businessClaimWindow=_businessClaimWindow;
@property NSTextView *businessClaimTextView; // @synthesize businessClaimTextView=_businessClaimTextView;
@property __weak NSLayoutConstraint *businessClaimTextHeightConstraint; // @synthesize businessClaimTextHeightConstraint=_businessClaimTextHeightConstraint;
@property __weak NSLayoutConstraint *bottomVerticalHeightConstraint; // @synthesize bottomVerticalHeightConstraint=_bottomVerticalHeightConstraint;
@property __weak NSMatrix *choicesMatrix; // @synthesize choicesMatrix=_choicesMatrix;
@property __weak NVRAPCommentsView *commentsView; // @synthesize commentsView=_commentsView;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *chosenCategory; // @synthesize chosenCategory=_chosenCategory;
- (void).cxx_destruct;
- (void)openComments:(BOOL)arg1;
- (void)continueAction;
- (BOOL)canContinue;
- (void)selectTypeAction:(id)arg1;
@property(readonly, nonatomic) NSString *choiceTitle;
@property(readonly, nonatomic) NSArray *choiceArray;
- (void)reallyClaimBusiness:(id)arg1;
- (void)cancelBusinessClaim:(id)arg1;
- (void)claimBusiness:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)shouldLoadBusinessClaim;
- (void)showBusinessClaimText;
- (void)_updateSnippetTextWithMapItem:(id)arg1;
- (BOOL)showCurrentLocationIcon;
- (void)_setTransitImageForMapItem:(id)arg1;
- (void)_updateSnippetIconWithMapItem:(id)arg1;
- (void)_updateSnippetWithMapItem:(id)arg1;
- (void)_displaySnippet;
- (void)_updateSnippet;
- (void)_loadBusinessClaimSectionForMapItem:(id)arg1;
- (id)_businessPortalClaimURLForMapItem:(id)arg1;
- (unsigned long long)nextState;
- (void)setQuestion:(id)arg1;
- (unsigned long long)goBackAction;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (id)makeTouchBar;
- (void)awakeFromNib;
- (id)initWithReport:(id)arg1 categoryQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

