//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RCMPDetailSlider;

@protocol RCMPDetailSliderDelegate <NSObject>

@optional
- (void)detailSlider:(RCMPDetailSlider *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(RCMPDetailSlider *)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(RCMPDetailSlider *)arg1;
- (void)detailSliderTrackingDidEnd:(RCMPDetailSlider *)arg1;
- (void)detailSliderTrackingDidBegin:(RCMPDetailSlider *)arg1;
@end

