//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (RCAdditions)
+ (void)rc_endTemporaryInteractionEventIgnoringForToken:(id)arg1;
+ (id)rc_beginTemporaryInteractionEventIgnoringWithTimeout:(double)arg1 sessionWillEndHandler:(CDUnknownBlockType)arg2;
+ (double)rc_animationDragCoefficient;
+ (BOOL)rc_isRunningInStoreDemoMode;
+ (BOOL)rc_shouldMakeUIForDefaultPNG;
- (void)rc_createDefaultPNG;
- (id)rc_rootViewController;
@end

