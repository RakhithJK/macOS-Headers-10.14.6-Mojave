//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKObjectCreation.h>

@class CalManagedObjectContext;

@interface EKObjectCreationCalendarStore : EKObjectCreation
{
    CalManagedObjectContext *_context;
}

@property(retain) CalManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_setOwnerAddresses:(id)arg1 forManagedPrincipal:(id)arg2;
- (void)_processManagedPrincipal:(id)arg1 inEventStore:(id)arg2;
- (void)_processManagedCalendar:(id)arg1 inEventStore:(id)arg2;
- (id)_createManagedSubscriptionInfoWithProperties:(id)arg1 managedObjectContext:(id)arg2;
- (void)_createManagedNotificationBoxMessagesWithProperties:(id)arg1 managedEvent:(id)arg2;
- (id)_createManagedExchangePrincipalWithProperties:(id)arg1 inEventStore:(id)arg2 managedObjectContext:(id)arg3;
- (id)_createManagedErrorWithEntityName:(id)arg1 properties:(id)arg2 managedObjectContext:(id)arg3;
- (id)_createManagedCalDAVPrincipalWithProperties:(id)arg1 inEventStore:(id)arg2 managedObjectContext:(id)arg3;
- (id)_createAccountWithProperties:(id)arg1 sourceType:(long long)arg2;
- (int)_calRemoteCalendarSharingFromEKSharingStatus:(unsigned long long)arg1;
- (int)_calMessageTypeFromEKNotificationMessageBoxType:(long long)arg1;
- (void)_setOwnerAddressesForLocalSource:(id)arg1;
- (id)_createBackingLocalSourceWithProperties:(id)arg1 inEventStore:(id)arg2;
- (id)_createBackingExchangeSourceWithProperties:(id)arg1 inEventStore:(id)arg2;
- (id)_createBackingCalDAVSourceWithProperties:(id)arg1 inEventStore:(id)arg2;
- (void)_setStatus:(long long)arg1 onEvent:(id)arg2;
- (void)_addNotificationBoxMessagesToEvent:(id)arg1 withProperties:(id)arg2;
- (void)_setItemID:(id)arg1 forCalendarItem:(id)arg2;
- (id)_createBackingSubscriptionCalendarWithProperties:(id)arg1 inEventStore:(id)arg2;
- (id)_createBackingExchangeCalendarWithProperties:(id)arg1 inEventStore:(id)arg2;
- (id)_createBackingCalDAVCalendarWithProperties:(id)arg1 inEventStore:(id)arg2;
- (id)_createBackingBirthdayCalendarWithProperties:(id)arg1 inEventStore:(id)arg2;
- (void)disableDefaultAlarms;
- (void)enableDefaultAlarms;
- (id)init;

@end

