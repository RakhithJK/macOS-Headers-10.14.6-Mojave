//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, NSArray;

@protocol MTAlarmClient <NSObject>
- (void)nextAlarmChanged:(MTAlarm *)arg1;
- (void)alarmFired:(MTAlarm *)arg1;
- (void)alarmDismissed:(MTAlarm *)arg1;
- (void)alarmSnoozed:(MTAlarm *)arg1;
- (void)alarmsRemoved:(NSArray *)arg1;
- (void)alarmsUpdated:(NSArray *)arg1;
- (void)alarmsAdded:(NSArray *)arg1;
@end

