//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSCopying-Protocol.h>

@class HMFActivity, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessageInternal : HMFObject <NSCopying>
{
    NSUUID *_identifier;
    NSString *_name;
    long long _qualityOfService;
    HMFMessageDestination *_destination;
    HMFMessageTransport *_transport;
    HMFActivity *_activity;
    NSDictionary *_userInfo;
    NSDictionary *_headers;
    NSDictionary *_messagePayload;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak HMFMessageTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

