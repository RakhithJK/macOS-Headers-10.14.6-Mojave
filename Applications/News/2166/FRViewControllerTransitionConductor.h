//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRViewControllerTransitionConducting-Protocol.h"

@class UIViewController;
@protocol FRViewControllerTransitionAnimationDataSource;

@interface FRViewControllerTransitionConductor : NSObject <FRViewControllerTransitionConducting>
{
    id <FRViewControllerTransitionAnimationDataSource> _animationDataSource;
    UIViewController *_containerViewController;
    UIViewController *_currentViewController;
}

@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <FRViewControllerTransitionAnimationDataSource> animationDataSource; // @synthesize animationDataSource=_animationDataSource;
- (void).cxx_destruct;
- (void)transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContainerViewController:(id)arg1 name:(id)arg2;

@end

