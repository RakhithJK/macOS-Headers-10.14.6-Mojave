//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString;

@interface CoreCalendarSource : NSObject
{
    NSManagedObjectID *_objectID;
    NSString *_key;
    NSString *_bundlePath;
}

- (void).cxx_destruct;
- (BOOL)allowsSchedulingByMe;
- (BOOL)isOwnerMe;
- (BOOL)isSourceInSameAccount:(id)arg1 ignoringOwner:(BOOL)arg2;
- (BOOL)isSourceInSameAccount:(id)arg1;
- (id)ownerForSource;
- (id)meForSource;
- (BOOL)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)markVersionForUID:(id)arg1 forDate:(id)arg2 withComment:(id)arg3 withTagID:(id)arg4;
- (id)allEventsInManagedObjectContext:(id)arg1;
- (id)allToDosInManagedObjectContext:(id)arg1;
- (id)allEntitiesInManagedObjectContext:(id)arg1;
- (id)entitiesMatchingSearchElement:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)isSubscription;
- (BOOL)isBirthday;
- (BOOL)hasCalendarItemForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entityForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entityForLocalUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)lastOperationError;
- (void)notifyStatusChange;
- (int)status;
- (id)key;
- (BOOL)isExchange;
- (BOOL)isCalDAV;
- (id)freeBusyCache;
- (id)type;
- (BOOL)hasCapability:(int)arg1;
- (id)bundlePath;
- (void)setBundlePath:(id)arg1;
- (void)setManagedObjectID:(id)arg1;
- (id)managedObjectID;
- (id)initWithKey:(id)arg1;
- (id)init;
- (id)description;
- (id)eventsWithFutureInvitationsInManagedObjectContext:(id)arg1;
- (void)removeEventOccurrencesEndingBefore:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entitiesEndingBefore:(id)arg1 withEntityType:(int)arg2 inManagedObjectContext:(id)arg3;
- (id)entitiesStartingBefore:(id)arg1 withEntityType:(int)arg2 includingRecurringEvents:(BOOL)arg3 inManagedObjectContext:(id)arg4;
- (void)fireRepositoryParametersChangeNotification;
- (void)notifyChanges;
- (void)notifyChangesWithChangeTracker:(id)arg1;

@end

