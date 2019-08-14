//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;
- (id)convertClusterNodesListToDescriptorsList:(vector_e14a6833)arg1;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(BOOL)arg2 error:(id *)arg3;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;
- (id)processImagesFromDataProvider:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

