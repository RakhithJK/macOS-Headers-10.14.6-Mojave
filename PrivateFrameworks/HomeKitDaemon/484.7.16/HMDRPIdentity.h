//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>
{
    HMFKey *_deviceIRK;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)arg1;
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)logIdentifier;
- (BOOL)isEqualToRPIndentity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)initWithDeviceIRK:(id)arg1;
- (id)init;

@end

