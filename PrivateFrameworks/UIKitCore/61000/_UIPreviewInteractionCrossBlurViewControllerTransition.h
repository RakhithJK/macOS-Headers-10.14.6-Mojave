//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    struct CGRect _initialPlatterRect;
    struct CGRect _finalPlatterRect;
    BOOL _dismissTransition;
}

@property(nonatomic, getter=isDismissTransition) BOOL dismissTransition; // @synthesize dismissTransition=_dismissTransition;
- (void)transitionDidEnd:(BOOL)arg1;
- (void)performDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

