//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IPXEditModeContextTransitionTesting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType testing_editModeTransitionAnimationPreparationHandler;
@property(copy, nonatomic) CDUnknownBlockType testing_editModeTransitionAnimationCompletionHandler;
- (void)testing_notifyEditModeTransitionAnimationDidPrepare;
- (void)testing_notifyEditModeTransitionAnimationDidComplete;
@end
