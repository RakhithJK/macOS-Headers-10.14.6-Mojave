//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDAccount, HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation
{
    HMDAccount *_inviterAccount;
    HMFPairingIdentity *_inviterIdentity;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) HMFPairingIdentity *inviterIdentity; // @synthesize inviterIdentity=_inviterIdentity;
@property(readonly) HMDAccount *inviterAccount; // @synthesize inviterAccount=_inviterAccount;
- (void).cxx_destruct;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)refreshDisplayName;
@property(readonly, copy, nonatomic) NSString *inviterUserID;
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *homeName;
- (id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7;
@property(readonly, nonatomic) NSDictionary *bulletinContext;

@end

