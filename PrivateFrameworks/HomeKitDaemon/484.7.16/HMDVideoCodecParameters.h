//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDVideoCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_h264Profiles;
    NSArray *_levels;
    NSArray *_packetizationModes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *packetizationModes; // @synthesize packetizationModes=_packetizationModes;
@property(readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, copy, nonatomic) NSArray *h264Profiles; // @synthesize h264Profiles=_h264Profiles;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3;

@end

