//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIPanelController, UISlidingBarState, UISlidingBarStateRequest, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol UIPanelControllerDelegate <NSObject>

@optional
- (void)panelController:(UIPanelController *)arg1 adjustLeadingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 didEndAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (void)panelController:(UIPanelController *)arg1 animateTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (void)panelController:(UIPanelController *)arg1 willBeginAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (BOOL)panelController:(UIPanelController *)arg1 collapseOntoPrimaryViewController:(UIViewController *)arg2;
- (UIViewController *)primaryViewControllerForExpandingPanelController:(UIPanelController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingPanelController:(UIPanelController *)arg1;
- (void)panelController:(UIPanelController *)arg1 didChangeToState:(UISlidingBarState *)arg2;
- (void)panelController:(UIPanelController *)arg1 willChangeToState:(UISlidingBarState *)arg2;
- (UISlidingBarStateRequest * (^)(NSArray *))panelControllerWillUpdate:(UIPanelController *)arg1;
@end
