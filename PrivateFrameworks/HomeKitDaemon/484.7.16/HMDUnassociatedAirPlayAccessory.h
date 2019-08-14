//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>

#import <HomeKitDaemon/HMDAccessoryAssociation-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>
{
    HMFPairingIdentity *_pairingIdentity;
}

+ (id)logCategory;
+ (Class)modelClass;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)associateToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

