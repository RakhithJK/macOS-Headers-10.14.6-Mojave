//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXScrubberViewController, IPXTilingControllerDataSource, NSEvent;

@protocol IPXScrubberViewControllerDelegate <NSObject>
- (id)selectedItem;
- (IPXTilingControllerDataSource *)dataSource;

@optional
- (void)scrubberViewControllerInitialSelectionDidComplete:(IPXScrubberViewController *)arg1;
- (void)scrubberViewControllerScrollStateDidChange:(IPXScrubberViewController *)arg1;
- (void)scrubberViewControllerDidEndScrolling:(IPXScrubberViewController *)arg1;
- (void)scrubberViewControllerWillEndScrolling:(IPXScrubberViewController *)arg1 withVelocity:(struct CGPoint)arg2 targetId:(id)arg3;
- (void)scrubberViewControllerDidScroll:(IPXScrubberViewController *)arg1 toItem:(id)arg2 withProgress:(double)arg3;
- (void)scrubberViewControllerWillBeginScrolling:(IPXScrubberViewController *)arg1;
- (void)scrubberViewControllerDidClick:(IPXScrubberViewController *)arg1 itemId:(id)arg2;
- (void)scrubberViewControllerDidSelect:(IPXScrubberViewController *)arg1 itemIdentifier:(id)arg2;
- (void)scrubberViewControllerTouchesEnded:(IPXScrubberViewController *)arg1 withEvent:(NSEvent *)arg2;
- (void)scrubberViewControllerTouchesBegan:(IPXScrubberViewController *)arg1 withEvent:(NSEvent *)arg2;
- (void)scrubberViewControllerWantsFocus:(IPXScrubberViewController *)arg1;
- (void)scrubberViewControllerWantsInvalidation:(IPXScrubberViewController *)arg1;
@end

