//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDMutableContainerRep-Protocol.h>

@class NSMutableArray, NSObject, NSString;
@protocol TSDContainerInfo, TSDMutableContainerInfo;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>
{
    NSMutableArray *mChildReps;
}

- (void)replaceContentsFromRep:(id)arg1;
- (void)willReplaceContentsFromRep:(id)arg1;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(CDUnknownBlockType)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)visibleChildLayouts;
- (void)updateChildrenFromLayout;
- (BOOL)canDrawInParallel;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (void)replaceChildRep:(id)arg1 with:(id)arg2;
- (void)removeChildRep:(id)arg1;
- (void)insertChildRep:(id)arg1 above:(id)arg2;
- (void)insertChildRep:(id)arg1 below:(id)arg2;
- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildRep:(id)arg1;
- (void)setChildReps:(id)arg1;
@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
- (void)selectChildRep:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childRepsForHitTesting;
- (id)childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

