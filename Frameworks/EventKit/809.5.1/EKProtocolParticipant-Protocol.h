//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol EKProtocolParticipant <EKProtocolObject>
@property(readonly, nonatomic) NSString *encodedLikenessData;
@property(readonly, nonatomic) NSString *scheduleStatusString;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *comment;
- (BOOL)isCurrentUser;
- (NSDate *)proposedEndDateUnadjustedFromUTC;
- (NSDate *)proposedStartDateUnadjustedFromUTC;
- (NSString *)proposalStatusString;
- (NSString *)inviterNameString;
- (int)type;
- (BOOL)scheduleForceSend;
- (NSString *)phoneNumber;
- (NSString *)emailAddress;
- (NSString *)role;
- (NSDate *)statusModifiedDate;
- (NSString *)status;
- (BOOL)replyRequested;
@end

