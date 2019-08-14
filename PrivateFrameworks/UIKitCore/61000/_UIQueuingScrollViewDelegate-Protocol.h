//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIQueuingScrollView;

@protocol _UIQueuingScrollViewDelegate <NSObject>
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 attemptToPageInDirection:(long long)arg2;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(_UIQueuingScrollView *)arg1;
- (void)queuingScrollViewDidFinishScrolling:(_UIQueuingScrollView *)arg1;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didBailoutOfScrollAndRevealedView:(UIView *)arg2;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(UIView *)arg3 direction:(long long)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 direction:(long long)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 animated:(BOOL)arg5;
@end

