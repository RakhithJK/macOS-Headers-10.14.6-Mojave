//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/NSObject-Protocol.h>

@class AXETrackingTapGestureRecognizer, NSArray;

@protocol AXETrackingTapGestureRecognizerDelegate <NSObject>

@optional
- (void)tapGestureRecognizer:(AXETrackingTapGestureRecognizer *)arg1 tapAborted:(NSArray *)arg2;
- (void)tapGestureRecognizer:(AXETrackingTapGestureRecognizer *)arg1 tapped:(NSArray *)arg2;
@end
