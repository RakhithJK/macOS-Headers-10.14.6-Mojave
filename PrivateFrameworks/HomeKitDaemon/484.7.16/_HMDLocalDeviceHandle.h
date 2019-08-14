//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle
{
    NSUUID *_deviceIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)arg1;
@property(readonly, copy) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (BOOL)isLocal;
- (id)privateDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;

@end
