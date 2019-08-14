//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayerViewController, UIView;
@protocol AVPlayerViewControllerAnimationCoordinator, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegatePrivate <AVPlayerViewControllerDelegate>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 contentViewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIView *)playerViewController:(AVPlayerViewController *)arg1 targetViewForDismissalAnimationWithProposedTargetView:(UIView *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
@end

