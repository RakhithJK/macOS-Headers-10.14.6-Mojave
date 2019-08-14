//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSView;

@interface SOProgressBarViewController : NSObject
{
    BOOL _iMessageable;
    BOOL _isBusinessConversation;
    NSView *_sendingView;
    NSView *_progressBarView;
    NSLayoutConstraint *_progressBarViewWidthConstraint;
}

@property(retain) NSLayoutConstraint *progressBarViewWidthConstraint; // @synthesize progressBarViewWidthConstraint=_progressBarViewWidthConstraint;
@property(retain) NSView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain) NSView *sendingView; // @synthesize sendingView=_sendingView;
@property(nonatomic) BOOL isBusinessConversation; // @synthesize isBusinessConversation=_isBusinessConversation;
@property(nonatomic, setter=setiMessageable:) BOOL iMessageable; // @synthesize iMessageable=_iMessageable;
- (void).cxx_destruct;
- (void)setProgressValue:(double)arg1 oldProgress:(double)arg2 sending:(unsigned long long)arg3 total:(unsigned long long)arg4 animate:(BOOL)arg5;
- (void)finish;
- (void)setup;
- (double)_sendingViewWidth;
- (void)_finishSendingView;
- (void)_fadeOutSendingView;
- (void)_setupSendingView;
- (void)_updateProgressBarConstraintWithMultiplier:(double)arg1;
- (void)_setProgressValue:(double)arg1 oldProgress:(double)arg2 animate:(BOOL)arg3;
- (void)_resetProgressBarColor;
- (void)_finishProgressBar;
- (void)_resetProgressBar;
- (void)_setupProgressBar;
- (void)awakeFromNib;

@end

