//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "HFHomeManagerObserver-Protocol.h"
#import "HOOnboardingChildViewControllerDelegate-Protocol.h"
#import "HOOnboardingIncomingInvitationViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol HOOnboardingRootNavigationControllerDelegate;

@interface HOOnboardingRootNavigationController : UINavigationController <HOOnboardingChildViewControllerDelegate, UINavigationControllerDelegate, HOOnboardingIncomingInvitationViewControllerDelegate, HFHomeManagerObserver>
{
    id <HOOnboardingRootNavigationControllerDelegate> _onboardingDelegate;
    NSArray *_onboardingStates;
    NSArray *_onboardingViewControllers;
}

+ (id)stringForOnboardingStates:(id)arg1;
+ (id)stringForOnboardingState:(unsigned long long)arg1;
+ (id)onboardingStatesForHome:(id)arg1;
@property(retain, nonatomic) NSArray *onboardingViewControllers; // @synthesize onboardingViewControllers=_onboardingViewControllers;
@property(readonly, nonatomic) NSArray *onboardingStates; // @synthesize onboardingStates=_onboardingStates;
@property(nonatomic) __weak id <HOOnboardingRootNavigationControllerDelegate> onboardingDelegate; // @synthesize onboardingDelegate=_onboardingDelegate;
- (void).cxx_destruct;
- (id)_viewControllerForState:(unsigned long long)arg1;
- (id)_onboardingViewControllersForStates:(id)arg1;
- (void)_presentNextViewControllerWithCurrentViewController:(id)arg1;
- (void)_finishedOnboarding;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)childViewControllerDidFinish:(id)arg1;
- (void)invitationViewControllerDidDecideLaterInvitation:(id)arg1;
- (void)invitationViewControllerDidAcceptInvitation:(id)arg1;
- (void)invitationViewControllerDidDeclineInvitation:(id)arg1;
@property(readonly, nonatomic) unsigned long long activeOnboardingState;
- (id)initWithOnboardingStates:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

