//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMRoom.h>

@class HMHome, NSArray, NSSet;

@interface HMRoom (HFAdditions)
@property(readonly, nonatomic) NSSet *hf_allVisibleServices;
@property(readonly, nonatomic) NSArray *hf_unpairedHomePods;
@property(readonly, nonatomic) NSArray *hf_allZones;
@property(readonly, nonatomic) NSArray *hf_allServices;
@property(readonly, nonatomic) NSArray *hf_allCameraProfiles;

// Remaining properties
@property(readonly, nonatomic) __weak HMHome *home; // @dynamic home;
@end

