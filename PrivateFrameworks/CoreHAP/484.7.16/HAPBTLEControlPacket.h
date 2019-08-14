//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : HMFObject
{
    unsigned char _type;
    BOOL _continuationPacket;
    HAPBTLETransactionIdentifier *_transactionIdentifier;
    NSData *_payload;
}

+ (id)shortDescription;
+ (id)packetWithSerializedData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isContinuationPacket) BOOL continuationPacket; // @synthesize continuationPacket=_continuationPacket;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)serialize;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(BOOL)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5;
- (id)init;

@end

