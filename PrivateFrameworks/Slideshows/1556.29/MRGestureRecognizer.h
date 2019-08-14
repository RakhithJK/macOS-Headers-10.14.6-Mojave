//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAction, MRAction, MRRenderer, MRTouchSet, NSArray, NSSet;

@interface MRGestureRecognizer : NSObject
{
    MRRenderer *_renderer;
    MRAction *_automaticStartAction;
    MRAction *_automaticUpdateAction;
    MRAction *_automaticEndAction;
    MRAction *_automaticCancelAction;
    MRAction *_startAction;
    MRAction *_updateAction;
    MRAction *_endAction;
    MRAction *_cancelAction;
    NSObject *_sender;
    NSArray *_matrixChain;
    int _state;
    struct CGSize _referenceSize;
    double _referenceScale;
    MRTouchSet *_touchSet;
    struct CGPoint _centroidStartLocation;
    struct CGPoint _centroidLocation;
    struct CGPoint _previousCentroidLocation;
    struct CGPoint _offsetFromCentroid;
    double _scale;
    double _previousScale;
    double _ratioFromScale;
    double _rotation;
    double _previousRotation;
    double _offsetFromRotation;
    double _startTime;
    double _hitTime;
    double _previousHitTime;
    double _score;
    unsigned char _requiredTouchCount;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned char requiredTouchCount; // @synthesize requiredTouchCount=_requiredTouchCount;
@property(nonatomic) double referenceScale; // @synthesize referenceScale=_referenceScale;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain) NSArray *matrixChain; // @synthesize matrixChain=_matrixChain;
@property(readonly) id sender; // @synthesize sender=_sender;
- (void)_addSpecificObjectToAction:(id)arg1;
- (struct CGPoint)_localPointFromTouchPoint:(struct CGPoint)arg1;
- (void)_sendAction:(id)arg1;
- (void)_sendCancelActions;
- (void)_sendEndActions;
- (void)_sendUpdateActions;
- (void)_sendStartActions;
- (id)description;
- (void)abort;
- (void)recognize;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (void)touchBegan:(id)arg1;
@property(readonly) NSSet *touches;
@property(retain) MCAction *cancelAction;
@property(retain) MCAction *endAction;
@property(retain) MCAction *updateAction;
@property(retain) MCAction *startAction;
- (void)cleanup;
- (id)initWithRenderer:(id)arg1 startAction:(id)arg2 andSender:(id)arg3;

@end
