//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXPrologueTransitioning-Protocol.h"

@class NSButton, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface IPXLibraryUpgradeConfirmViewController : IPXViewController <IPXPrologueTransitioning>
{
    NSTextField *_titleText;
    NSTextField *_detailText;
    NSButton *_confirmButton;
    NSButton *_alternateButton;
    NSLayoutConstraint *_centerXConstraint;
    NSView *_messageViewContainer;
    NSString *_messageTitle;
    NSString *_messageDetail;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    CDUnknownBlockType _replyBlock;
    CDUnknownBlockType _confirmBlock;
}

+ (void)animateSlidingCenterX:(long long)arg1 forOperation:(long long)arg2 withDuration:(double)arg3 viewToAnimate:(id)arg4 constraintToAnimate:(id)arg5 superView:(id)arg6;
@property(copy) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy) CDUnknownBlockType replyBlock; // @synthesize replyBlock=_replyBlock;
@property(copy) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy) NSString *messageDetail; // @synthesize messageDetail=_messageDetail;
@property(copy) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain) NSView *messageViewContainer; // @synthesize messageViewContainer=_messageViewContainer;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property __weak NSTextField *detailText; // @synthesize detailText=_detailText;
@property __weak NSTextField *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)animateDirection:(long long)arg1 forOperation:(long long)arg2 withDuration:(double)arg3;
- (void)alternateAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)viewDidAppear;
- (void)setTitle:(id)arg1 detail:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 confirm:(CDUnknownBlockType)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

