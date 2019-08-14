//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@class NSArray, NSMutableArray;

@interface GKObstacleGraph : GKGraph
{
    NSMutableArray *_sourceObstacles;
    struct GKCObstacleGraph *_cObstacleGraph;
    Class _nodeClass;
}

+ (BOOL)supportsSecureCoding;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (void).cxx_destruct;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)nodeClass;
- (BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (id)nodesForObstacle:(id)arg1;
- (void)removeObstacles:(id)arg1;
- (void)removeAllObstacles;
- (void)addObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
@property(readonly, nonatomic) float bufferRadius;
- (id)mutObstacles;
@property(readonly, nonatomic) NSArray *obstacles;
- (struct GKCObstacleGraph *)cObstacleGraph;
- (struct GKCGraph *)makeCGraph;

@end

