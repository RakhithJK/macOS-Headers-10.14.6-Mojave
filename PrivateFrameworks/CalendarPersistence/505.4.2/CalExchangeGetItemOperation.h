//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

@class EWSFolderIdType, NSArray, NSString;

@interface CalExchangeGetItemOperation : CalExchangeOperation
{
    NSArray *_itemIds;
    EWSFolderIdType *_folderId;
    NSString *_messageTracerUID;
}

+ (id)iCalendarDateTimeFormatter;
+ (id)iCalendarDateFormatter;
- (void)dealloc;
- (id)itemIds;
- (id)folderId;
- (id)initWithSession:(id)arg1 itemIds:(id)arg2 inFolder:(id)arg3;
- (id)initWithSession:(id)arg1 itemIds:(id)arg2 inFolder:(id)arg3 messageTracerUID:(id)arg4;
- (void)updateRecurrenceForManagedCalendarItem:(id)arg1 withCalendarItem:(id)arg2;
- (id)_dayFromEWSDayOfWeekType:(long long)arg1;
- (void)updateAlarmsForCalendarItem:(id)arg1 inCalendar:(id)arg2 withItem:(id)arg3;

@end

