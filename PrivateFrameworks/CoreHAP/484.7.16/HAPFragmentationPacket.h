//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPFragmentationPacket : HMFObject
{
    unsigned short _transactionIdentifier;
    unsigned int _length;
    unsigned int _offset;
    NSData *_data;
}

@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4;
- (id)initWithFragmentedPacketData:(id)arg1;
- (id)init;

@end

