//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RCMPDetailScrubController;

@protocol RCMPDetailScrubControllerDelegate <NSObject>

@optional
- (void)detailScrubController:(RCMPDetailScrubController *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(RCMPDetailScrubController *)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidEndScrubbing:(RCMPDetailScrubController *)arg1;
- (void)detailScrubControllerDidBeginScrubbing:(RCMPDetailScrubController *)arg1;
@end
