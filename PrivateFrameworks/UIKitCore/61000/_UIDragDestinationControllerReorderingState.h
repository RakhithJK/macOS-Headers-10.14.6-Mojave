//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionView, _UIDragDestinationControllerSessionState, _UIDragMovementCadenceSettings, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerReorderingState : NSObject
{
    BOOL _supportsLocalSessionReordering;
    BOOL _hasStartedInteractiveReorder;
    _UIVelocityIntegrator *_velocityIntegrator;
    long long _reorderCount;
    _UIDragDestinationControllerSessionState *_sessionState;
    UICollectionView *_collectionView;
    double _reorderBecamePossibleTime;
    long long _dragMovementPhase;
    _UIDragMovementCadenceSettings *_reorderCadenceSettings;
}

@property(retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings; // @synthesize reorderCadenceSettings=_reorderCadenceSettings;
@property(nonatomic) long long dragMovementPhase; // @synthesize dragMovementPhase=_dragMovementPhase;
@property(nonatomic) double reorderBecamePossibleTime; // @synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) BOOL hasStartedInteractiveReorder; // @synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder;
@property(nonatomic) long long reorderCount; // @synthesize reorderCount=_reorderCount;
@property(nonatomic) BOOL supportsLocalSessionReordering; // @synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
- (void).cxx_destruct;
- (id)_reorderCadenceSettings;
- (void)velocityExceededThreshold;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;
- (void)reorderingDidBecomePossible;
@property(readonly, nonatomic) BOOL hasPerformedReordering;
- (void)reorderResetToStartingLocation;
- (void)didEndInteractiveReorder;
- (void)didBeginInteractiveReorder;
- (void)didReorder;
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;

@end

