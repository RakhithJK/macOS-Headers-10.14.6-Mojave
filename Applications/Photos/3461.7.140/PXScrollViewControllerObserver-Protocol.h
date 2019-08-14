//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PXScrollViewController;

@protocol PXScrollViewControllerObserver <NSObject>

@optional
- (void)scrollViewControllerContentBoundsDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillEndScrolling:(PXScrollViewController *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewControllerDidScroll:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(PXScrollViewController *)arg1;
@end

