//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

@interface EKSerializableParticipant : EKSerializableObject
{
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_url;
    long long _participantRole;
    long long _participantStatus;
    long long _participantType;
}

+ (id)classesForKey;
@property(nonatomic) long long participantType; // @synthesize participantType=_participantType;
@property(nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)createAttendee:(id *)arg1;
- (id)initWithParticipant:(id)arg1;

@end

