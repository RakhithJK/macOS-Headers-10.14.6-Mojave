//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CVMLMPImageGrouping : NSObject
{
}

+ (float)computeTotalDistanceForDescriptorDistance:(float)arg1 timestampDiff:(long long)arg2 useTimestampAdjustment:(_Bool)arg3;
+ (float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg1 andTimestampDiff:(long long)arg2;
+ (vector_e14a6833)computeNaturalClusteringForHierarchicalTree:(struct MPClusteringTreeNode *)arg1 context:(id)arg2;
+ (vector_e14a6833)computeClusteringUsingDistanceThreshold:(float)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 orUsingDistanceThreshold:(float)arg2 forHierarchicalTree:(struct MPClusteringTreeNode *)arg3 context:(id)arg4;
+ (float)getDistanceForClusterNode:(struct MPClusteringTreeNode *)arg1 splitDistanceType:(int)arg2;
+ (long long)computeHierarchicalClusteringOfImageDescriptors:(id)arg1 results:(struct MPClusteringTreeNode **)arg2 context:(id)arg3;

@end

