//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

@interface ScreenSaverViewController : NSServiceViewController
{
    BOOL _initialAnimationState;
    BOOL _didFirstResize;
}

+ (struct CGRect)expectedViewFrame;
@property BOOL didFirstResize; // @synthesize didFirstResize=_didFirstResize;
@property BOOL initialAnimationState; // @synthesize initialAnimationState=_initialAnimationState;
- (void)stopAnimation;
- (void)startAnimation;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (unsigned long long)awakeFromRemoteView;

@end
