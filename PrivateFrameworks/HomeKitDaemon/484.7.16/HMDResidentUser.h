//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUser.h>

@class HMDDevice;

@interface HMDResidentUser : HMDUser
{
    HMDDevice *_device;
    unsigned long long _configurationState;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)legacyUser;
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
- (BOOL)updateWithDevice:(id)arg1;
- (void)setDevice:(id)arg1;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;
- (BOOL)requiresMakoSupport;
- (id)displayName;
- (BOOL)refreshDisplayName;
- (id)deviceIdentifier;
- (id)userID;
- (void)configureWithHome:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;

@end

