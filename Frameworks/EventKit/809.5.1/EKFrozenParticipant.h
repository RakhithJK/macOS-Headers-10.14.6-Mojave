//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import <EventKit/EKProtocolParticipant-Protocol.h>

@class NSDate, NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface EKFrozenParticipant : EKFrozenObject <EKProtocolParticipant>
{
    BOOL _isCurrentUser;
    BOOL _replyRequested;
    BOOL _scheduleForceSend;
    int _type;
    NSString *_comment;
    NSString *_encodedLikenessData;
    NSString *_name;
    NSString *_scheduleStatusString;
    NSURL *_url;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSString *_role;
    NSString *_status;
    NSDate *_statusModifiedDate;
    NSString *_inviterNameString;
    NSDate *_proposedStartDateUnadjustedFromUTC;
    NSDate *_proposedEndDateUnadjustedFromUTC;
    NSString *_proposalStatusString;
}

@property(readonly, nonatomic) NSString *proposalStatusString; // @synthesize proposalStatusString=_proposalStatusString;
@property(readonly, nonatomic) NSDate *proposedEndDateUnadjustedFromUTC; // @synthesize proposedEndDateUnadjustedFromUTC=_proposedEndDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSDate *proposedStartDateUnadjustedFromUTC; // @synthesize proposedStartDateUnadjustedFromUTC=_proposedStartDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSString *inviterNameString; // @synthesize inviterNameString=_inviterNameString;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *statusModifiedDate; // @synthesize statusModifiedDate=_statusModifiedDate;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) BOOL scheduleForceSend; // @synthesize scheduleForceSend=_scheduleForceSend;
@property(readonly, nonatomic) BOOL replyRequested; // @synthesize replyRequested=_replyRequested;
@property(readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *scheduleStatusString; // @synthesize scheduleStatusString=_scheduleStatusString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *encodedLikenessData; // @synthesize encodedLikenessData=_encodedLikenessData;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;
- (id)initWithName:(id)arg1 url:(id)arg2 emailAddress:(id)arg3 phoneNumber:(id)arg4 role:(id)arg5 status:(id)arg6 type:(int)arg7 encodedLikenessData:(id)arg8 isCurrentUser:(BOOL)arg9;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

