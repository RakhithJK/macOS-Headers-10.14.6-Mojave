//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTTimer, NSArray;

@protocol MTTimerClient <NSObject>
- (void)nextTimerChanged:(MTTimer *)arg1;
- (void)timerDismissed:(MTTimer *)arg1;
- (void)timerFired:(MTTimer *)arg1;
- (void)timersRemoved:(NSArray *)arg1;
- (void)timersUpdated:(NSArray *)arg1;
- (void)timersAdded:(NSArray *)arg1;
@end

