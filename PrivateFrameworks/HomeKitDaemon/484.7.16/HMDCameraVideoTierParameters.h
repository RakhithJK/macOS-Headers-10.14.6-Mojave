//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCameraSessionID, HMDCameraVideoTier, NSArray, NSDictionary, NSString;

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging>
{
    NSDictionary *_videoTierCombinations;
    NSArray *_tierOrder;
    HMDCameraSessionID *_sessionID;
    HMDCameraVideoTier *_firstPickedTier;
    HMDCameraVideoTier *_currentPickedTier;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) HMDCameraVideoTier *currentPickedTier; // @synthesize currentPickedTier=_currentPickedTier;
@property(retain, nonatomic) HMDCameraVideoTier *firstPickedTier; // @synthesize firstPickedTier=_firstPickedTier;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *tierOrder; // @synthesize tierOrder=_tierOrder;
@property(readonly, nonatomic) NSDictionary *videoTierCombinations; // @synthesize videoTierCombinations=_videoTierCombinations;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)pickHigherTier;
- (BOOL)pickLowerTier;
- (void)updateFirstPickedTier:(id)arg1;
- (void)updateTierParameters:(id)arg1 firstPickedParameter:(id)arg2;
- (void)updateTierOrder:(id)arg1;
- (void)_generateAllVideoTiers:(id)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 streamingCapabilities:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

