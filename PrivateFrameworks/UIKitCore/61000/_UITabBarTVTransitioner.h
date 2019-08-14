//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITabBarControllerInterruptibleTransitioning-Protocol.h>

@class NSString, UISpringTimingParameters, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning>
{
    BOOL _transitionFromRight;
    long long _transitionStyle;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UISpringTimingParameters *_slideTimingParameters;
    double _fromViewLayerOriginalRasterizationScale;
    double _toViewLayerOriginalRasterizationScale;
    UIView *_toViewXFlippedScreenShot;
}

@property(retain, nonatomic) UIView *toViewXFlippedScreenShot; // @synthesize toViewXFlippedScreenShot=_toViewXFlippedScreenShot;
@property(nonatomic) double toViewLayerOriginalRasterizationScale; // @synthesize toViewLayerOriginalRasterizationScale=_toViewLayerOriginalRasterizationScale;
@property(nonatomic) double fromViewLayerOriginalRasterizationScale; // @synthesize fromViewLayerOriginalRasterizationScale=_fromViewLayerOriginalRasterizationScale;
@property(retain, nonatomic) UISpringTimingParameters *slideTimingParameters; // @synthesize slideTimingParameters=_slideTimingParameters;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) BOOL transitionFromRight; // @synthesize transitionFromRight=_transitionFromRight;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)finishTransition;
- (void)interruptTabBarControllerTransition;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
