//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/EKProtocolObject-Protocol.h>

@class NSCalendar, NSData, NSDate, NSNumber, NSSet, NSString, NSTimeZone, NSURL;
@protocol CalendarModelProtocol, EKProtocolParticipant, EKProtocolStructuredLocation;

@protocol OccurrenceModelProtocol <EKProtocolObject>
@property(readonly, copy, nonatomic) NSData *localStructuredData;
@property(readonly, copy, nonatomic) NSData *structuredData;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, nonatomic) BOOL organizedByMe;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
@property(readonly, copy, nonatomic) NSString *organizerPhoneNumber;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, retain, nonatomic) id <EKProtocolParticipant> organizer;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
- (NSCalendar *)_nsCalendar;
- (BOOL)isEvent;
- (BOOL)isReminder;
- (NSDate *)lastModifiedDate;
- (NSDate *)creationDate;
- (BOOL)allDay;
- (NSSet *)attachmentSet;
- (NSSet *)attendeeSet;
- (NSSet *)alarmSet;
- (NSNumber *)priorityNumber;
- (NSURL *)URL;
- (NSString *)notes;
- (NSString *)title;
- (NSString *)itemID;
- (NSString *)sharedUID;
- (NSString *)localUID;
@end

