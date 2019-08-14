//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSDBezierNode, TSDBezierPath;

@interface TSDBezierSubpath : NSObject
{
    NSMutableArray *mNodes;
    BOOL mClosed;
}

@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=mClosed;
@property(retain, nonatomic) NSMutableArray *nodes; // @synthesize nodes=mNodes;
- (void)convertToHobby;
- (id)splitEdgeAtIndex:(unsigned long long)arg1;
- (void)addNodesToArray:(id)arg1;
@property(readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (id)insertNodeAtPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
@property(readonly, nonatomic) BOOL canDeleteSelectedNodes;
- (void)removeNode:(id)arg1;
@property(readonly, nonatomic) BOOL hasSelectedNode;
@property(readonly, nonatomic) BOOL allNodesSelected;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)addNode:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)reverseDirection;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)arg1;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) TSDBezierPath *bezierPath;
- (BOOL)isCircular;
@property(readonly, nonatomic) BOOL isRectangular;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

