//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCRedundancyControlAlgorithm <NSObject>
@property(readonly, nonatomic) double redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_48a7b5a5)arg1;
@end

