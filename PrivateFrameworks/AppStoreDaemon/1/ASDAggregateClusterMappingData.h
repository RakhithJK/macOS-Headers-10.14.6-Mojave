//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@interface ASDAggregateClusterMappingData : PBCodable <NSCopying>
{
    int _encodingVersion;
    unsigned long long _clusterIDsCount;
    int *_clusterIDs;
    unsigned long long _clusterVersionsCount;
    int *_clusterVersions;
    unsigned long long _clusterAppCountsCount;
    int *_clusterAppCounts;
    unsigned long long _weightedAppLaunchesCount;
    int *_weightedAppLaunches;
    unsigned long long _weightedAppForgroundUsagesCount;
    int *_weightedAppForgroundUsages;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int *weightedAppForgroundUsages; // @synthesize weightedAppForgroundUsages=_weightedAppForgroundUsages;
@property(readonly, nonatomic) unsigned long long weightedAppForgroundUsagesCount; // @synthesize weightedAppForgroundUsagesCount=_weightedAppForgroundUsagesCount;
@property(readonly, nonatomic) int *weightedAppLaunches; // @synthesize weightedAppLaunches=_weightedAppLaunches;
@property(readonly, nonatomic) unsigned long long weightedAppLaunchesCount; // @synthesize weightedAppLaunchesCount=_weightedAppLaunchesCount;
@property(readonly, nonatomic) int *clusterAppCounts; // @synthesize clusterAppCounts=_clusterAppCounts;
@property(readonly, nonatomic) unsigned long long clusterAppCountsCount; // @synthesize clusterAppCountsCount=_clusterAppCountsCount;
@property(readonly, nonatomic) int *clusterVersions; // @synthesize clusterVersions=_clusterVersions;
@property(readonly, nonatomic) unsigned long long clusterVersionsCount; // @synthesize clusterVersionsCount=_clusterVersionsCount;
@property(readonly, nonatomic) int *clusterIDs; // @synthesize clusterIDs=_clusterIDs;
@property(readonly, nonatomic) unsigned long long clusterIDsCount; // @synthesize clusterIDsCount=_clusterIDsCount;
@property(nonatomic) int encodingVersion; // @synthesize encodingVersion=_encodingVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setWeightedAppForgroundUsages:(int *)arg1 count:(unsigned long long)arg2;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppForgroundUsage:(int)arg1;
- (void)clearWeightedAppForgroundUsages;
- (void)setWeightedAppLaunches:(int *)arg1 count:(unsigned long long)arg2;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppLaunches:(int)arg1;
- (void)clearWeightedAppLaunches;
- (void)setClusterAppCounts:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterAppCountAtIndex:(unsigned long long)arg1;
- (void)addClusterAppCount:(int)arg1;
- (void)clearClusterAppCounts;
- (void)setClusterVersions:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterVersionAtIndex:(unsigned long long)arg1;
- (void)addClusterVersion:(int)arg1;
- (void)clearClusterVersions;
- (void)setClusterIDs:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterIDAtIndex:(unsigned long long)arg1;
- (void)addClusterID:(int)arg1;
- (void)clearClusterIDs;
- (id)init;

@end

