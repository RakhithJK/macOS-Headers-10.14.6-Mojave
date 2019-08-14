//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint _anchorSceneReferencePoint;
    id _transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

+ (BOOL)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)_postRecognitionWeight;
- (void)_setPostRecognitionWeight:(double)arg1;
- (double)_preRecognitionWeight;
- (void)_setPreRecognitionWeight:(double)arg1;
@property(readonly, nonatomic) double velocity;
@property(nonatomic) double rotation;
- (void)_updateTransformAnalyzerWeights;
- (struct CGPoint)anchorPoint;
- (void)_resetGestureRecognizer;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

