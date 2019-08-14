//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UXView, UXViewController;

@protocol UXViewControllerContextTransitioning <NSObject>
- (struct CGRect)finalFrameForViewController:(UXViewController *)arg1;
- (struct CGRect)initialFrameForViewController:(UXViewController *)arg1;
- (UXViewController *)viewControllerForKey:(NSString *)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (long long)presentationStyle;
- (BOOL)transitionWasCancelled;
- (BOOL)isInteractive;
- (BOOL)isAnimated;
- (UXView *)containerView;

@optional
@property(copy, nonatomic) CDUnknownBlockType arbitraryTransitionCompletionHandler;
@end

