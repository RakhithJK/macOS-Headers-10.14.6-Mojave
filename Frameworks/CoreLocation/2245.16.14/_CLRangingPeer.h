//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (id)hexStringMacAddressFromUInt:(unsigned long long)arg1;
+ (unsigned long long)uintMacAddressFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPeer:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getMacAddressAsString;
@property(readonly, copy, nonatomic) NSData *secureRangingKeyID;
@property(readonly, nonatomic) unsigned long long macAddress;
- (void)dealloc;
- (id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2;
- (id)initWithMacAddressAsString:(id)arg1 secureRangingKeyID:(id)arg2;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;
- (id)init;

@end

