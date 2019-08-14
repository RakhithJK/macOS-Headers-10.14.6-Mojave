//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSEncryptedMessageSizeMetric : NSObject <CUTRTCMetric>
{
    long long _unencryptedPayloadMessageSize;
    long long _encryptedPayloadMessageSize;
    long long _maxMessageSize;
    NSString *_serviceName;
}

@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) long long maxMessageSize; // @synthesize maxMessageSize=_maxMessageSize;
@property(readonly, nonatomic) long long encryptedPayloadMessageSize; // @synthesize encryptedPayloadMessageSize=_encryptedPayloadMessageSize;
@property(readonly, nonatomic) long long unencryptedPayloadMessageSize; // @synthesize unencryptedPayloadMessageSize=_unencryptedPayloadMessageSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithUnencryptedPayloadMessageSize:(long long)arg1 encryptedPayloadMessageSize:(long long)arg2 maxMessageSize:(long long)arg3 serviceName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

