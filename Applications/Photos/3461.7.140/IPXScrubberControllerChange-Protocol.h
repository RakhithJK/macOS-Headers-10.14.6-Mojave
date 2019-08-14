//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IPXScrubberController, IPXScrubberViewController, IPXTilingControllerDataSource, NSEvent, NSSet;

@protocol IPXScrubberControllerChange

@optional
- (void)scrubberVideoScrubberControllerDidChange:(IPXScrubberController *)arg1;
- (void)scrubberDidEndScrolling:(IPXScrubberController *)arg1 withViewController:(IPXScrubberViewController *)arg2;
- (void)scrubberWillEndScrolling:(IPXScrubberController *)arg1 withViewController:(IPXScrubberViewController *)arg2 atItem:(id)arg3;
- (void)scrubberDidScroll:(IPXScrubberController *)arg1 withViewController:(IPXScrubberViewController *)arg2 toItem:(id)arg3;
- (void)scrubberWillBeginScrolling:(IPXScrubberController *)arg1 withViewController:(IPXScrubberViewController *)arg2;
- (void)scrubberTouchesEnded:(IPXScrubberController *)arg1 withEvent:(NSEvent *)arg2;
- (void)scrubberTouchesBegan:(IPXScrubberController *)arg1 withEvent:(NSEvent *)arg2;
- (void)scrubber:(IPXScrubberController *)arg1 selectedItem:(id)arg2 animate:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (void)scrubber:(IPXScrubberController *)arg1 didReplaceDataSource:(IPXTilingControllerDataSource *)arg2 withDataSource:(IPXTilingControllerDataSource *)arg3 selectedItem:(id)arg4;
- (void)scrubberResetTiles:(IPXScrubberController *)arg1 withObjects:(NSSet *)arg2;
- (void)scrubberResetTiles:(IPXScrubberController *)arg1;
- (void)scrubberLayoutInvalidation:(IPXScrubberController *)arg1;
- (void)scrubber:(IPXScrubberController *)arg1 didReplaceDataSource:(IPXTilingControllerDataSource *)arg2 withDataSource:(IPXTilingControllerDataSource *)arg3;
@end

