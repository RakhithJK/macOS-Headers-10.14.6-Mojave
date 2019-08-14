//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class UIBarButtonItem, UIPopoverController, UISplitViewController, UIViewController;

@protocol UISplitViewControllerDelegate

@optional
- (BOOL)splitViewController:(UISplitViewController *)arg1 shouldHideViewController:(UIViewController *)arg2 inOrientation:(long long)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 popoverController:(UIPopoverController *)arg2 willPresentViewController:(UIViewController *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willShowViewController:(UIViewController *)arg2 invalidatingBarButtonItem:(UIBarButtonItem *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willHideViewController:(UIViewController *)arg2 withBarButtonItem:(UIBarButtonItem *)arg3 forPopoverController:(UIPopoverController *)arg4;
- (long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(UISplitViewController *)arg1;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(UISplitViewController *)arg1;
- (UIViewController *)splitViewController:(UISplitViewController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (BOOL)splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3;
- (UIViewController *)primaryViewControllerForExpandingSplitViewController:(UISplitViewController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingSplitViewController:(UISplitViewController *)arg1;
- (BOOL)splitViewController:(UISplitViewController *)arg1 showDetailViewController:(UIViewController *)arg2 sender:(id)arg3;
- (BOOL)splitViewController:(UISplitViewController *)arg1 showViewController:(UIViewController *)arg2 sender:(id)arg3;
- (long long)targetDisplayModeForActionInSplitViewController:(UISplitViewController *)arg1;
- (void)splitViewController:(UISplitViewController *)arg1 willChangeToDisplayMode:(long long)arg2;
@end

