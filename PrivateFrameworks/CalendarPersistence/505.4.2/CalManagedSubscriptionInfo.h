//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import <CalendarPersistence/CalAccountLikeObject-Protocol.h>

@class CalManagedCalendar, CalManagedSubscriptionError, NSDate, NSString, NSURL;

@interface CalManagedSubscriptionInfo : CalManagedObject <CalAccountLikeObject>
{
}

+ (id)entityName;
+ (void)initialize;
- (id)enclosingSource;
- (id)properties;
- (id)cloneInManagedObjectContext:(id)arg1;
- (id)canonicalizedSubscriptionURL;
@property(retain) NSURL *subscriptionURL;
@property long long refreshIntervalIfAutoRefreshed;
@property(readonly) NSString *user;
@property(readonly) NSURL *browsableURL;
@property(readonly) NSURL *displayableURL;
- (void)willRefresh:(BOOL)arg1;
- (id)keysOnlyRelevantToNetworkDetails;
@property(readonly) BOOL isHolidayCalendar;
- (id)_session;
- (void)_refreshSession:(long long)arg1;
- (void)_refreshSession;
- (id)_makeSession;
- (void)_activateSession;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)changeAffectsAlarms:(id)arg1;
- (BOOL)changesAffectSession:(id)arg1;
- (BOOL)changesAffectRefresh:(id)arg1;
- (BOOL)changesAffectPush:(id)arg1;
- (BOOL)changesAffectDock:(id)arg1;
- (BOOL)deleteAffectsDock;
- (BOOL)deleteAffectsPush;
- (BOOL)deleteAffectsSession;
- (BOOL)insertAffectsDock;
- (BOOL)insertAffectsPush;
- (BOOL)insertAffectsSession;
- (id)objectIdentifier;

// Remaining properties
@property(retain) CalManagedCalendar *calendar; // @dynamic calendar;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property BOOL hasAlarmFilter; // @dynamic hasAlarmFilter;
@property BOOL hasAttachmentFilter; // @dynamic hasAttachmentFilter;
@property BOOL hasTaskFilter; // @dynamic hasTaskFilter;
@property(readonly) unsigned long long hash;
@property BOOL isAutoProvisioned; // @dynamic isAutoProvisioned;
@property BOOL isAutoRefreshed; // @dynamic isAutoRefreshed;
@property(retain) NSString *languageCode; // @dynamic languageCode;
@property(retain) CalManagedSubscriptionError *lastError; // @dynamic lastError;
@property(retain) NSString *locationCode; // @dynamic locationCode;
@property BOOL needsRefresh; // @dynamic needsRefresh;
@property(retain) NSDate *refreshDate; // @dynamic refreshDate;
@property int refreshInterval; // @dynamic refreshInterval;
@property(retain) NSString *subscriptionID; // @dynamic subscriptionID;
@property(retain) NSString *subscriptionNotes; // @dynamic subscriptionNotes;
@property(retain) NSString *subscriptionTitle; // @dynamic subscriptionTitle;
@property(retain) NSString *subscriptionURLString; // @dynamic subscriptionURLString;
@property(readonly) Class superclass;

@end

