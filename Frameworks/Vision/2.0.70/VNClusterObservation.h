//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSSet;

@interface VNClusterObservation : VNObservation
{
    NSArray *_clusters;
    NSArray *_suggestionsForCluster;
    NSData *_clusterState;
    NSSet *_clusteredFaceIds;
    NSArray *_groupedClusteredFaceIdsForCluster;
    NSNumber *_distance;
    NSDictionary *_distancesById;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *distancesById; // @synthesize distancesById=_distancesById;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *groupedClusteredFaceIdsForCluster; // @synthesize groupedClusteredFaceIdsForCluster=_groupedClusteredFaceIdsForCluster;
@property(retain, nonatomic) NSSet *clusteredFaceIds; // @synthesize clusteredFaceIds=_clusteredFaceIds;
@property(retain, nonatomic) NSData *clusterState; // @synthesize clusterState=_clusterState;
@property(retain, nonatomic) NSArray *suggestionsForCluster; // @synthesize suggestionsForCluster=_suggestionsForCluster;
@property(retain, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

