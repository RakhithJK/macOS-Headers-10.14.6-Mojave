//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarStore/CalendarAgentClient-Protocol.h>

@interface CalCalendarStore : NSObject <CalendarAgentClient>
{
    void *_reserved;
}

+ (id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)arg1;
+ (id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)arg1;
+ (id)_calendarNotEditableErrorWithCalendarName:(id)arg1 isEvent:(BOOL)arg2;
+ (id)_calendarNotFoundWithCalendarName:(id)arg1 isEvent:(BOOL)arg2;
+ (id)taskPredicateWithUncompletedTasksDueBefore:(id)arg1 calendars:(id)arg2;
+ (id)taskPredicateWithUncompletedTasks:(id)arg1;
+ (id)taskPredicateWithTasksCompletedSince:(id)arg1 calendars:(id)arg2;
+ (id)taskPredicateWithCalendars:(id)arg1;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 UID:(id)arg3 calendars:(id)arg4;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
+ (id)_dateFromPotentialNSCalendarDate:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultCalendarStore;
+ (BOOL)requestAccessForServiceName:(struct __CFString *)arg1;
+ (BOOL)authorizationStatusForServiceName:(struct __CFString *)arg1;
- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (id)notificationForDistributedNotification:(id)arg1 userInfo:(id)arg2;
- (void)agentUpdatedCache:(id)arg1;
- (void)calMeCardChanged;
- (void)calDavSharedUIDChanged:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)saveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)removeTask:(id)arg1 error:(id *)arg2;
- (BOOL)saveTask:(id)arg1 error:(id *)arg2;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id *)arg3;
- (id)taskWithUID:(id)arg1;
- (id)tasksWithPredicate:(id)arg1;
- (id)eventWithUID:(id)arg1 occurrence:(id)arg2;
- (id)eventsWithPredicate:(id)arg1;
- (id)calendarWithUID:(id)arg1;
- (id)calendars;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

