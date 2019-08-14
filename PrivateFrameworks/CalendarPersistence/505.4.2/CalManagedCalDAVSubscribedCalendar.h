//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalDAVCalendar.h>

@class NSString;

@interface CalManagedCalDAVSubscribedCalendar : CalManagedCalDAVCalendar
{
}

+ (id)entityName;
- (BOOL)allowsScheduling;
- (BOOL)isMigrateable;
- (BOOL)isSubscribedHolidayCalendar;
- (BOOL)isSubscribed;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1;
- (id)lastOperationError;
- (id)session;
- (void)refreshSession:(long long)arg1;
- (void)refreshSession;
- (id)_makeSession;
- (void)activateSession;
- (BOOL)wantsSession;

// Remaining properties
@property(retain) NSString *eTag; // @dynamic eTag;

@end

