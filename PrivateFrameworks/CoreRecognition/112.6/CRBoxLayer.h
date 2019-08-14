//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAReplicatorLayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

@interface CRBoxLayer : CAReplicatorLayer
{
    BOOL _customInit;
    double _frameRatio;
    CAShapeLayer *_reticleLayer;
    CATextLayer *_codeLayer;
    NSMutableArray *_completionBlocks;
    double _demoSpeed;
}

+ (id)layer;
@property BOOL customInit; // @synthesize customInit=_customInit;
@property double demoSpeed; // @synthesize demoSpeed=_demoSpeed;
@property(retain) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain) CATextLayer *codeLayer; // @synthesize codeLayer=_codeLayer;
@property(retain) CAShapeLayer *reticleLayer; // @synthesize reticleLayer=_reticleLayer;
@property(nonatomic) double frameRatio; // @synthesize frameRatio=_frameRatio;
- (void).cxx_destruct;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animatePulseColor:(id)arg1;
- (void)setString:(id)arg1 mirrored:(BOOL)arg2 inverted:(BOOL)arg3;
- (void)animateToPosition:(struct CGPoint)arg1 transform:(struct CATransform3D)arg2 opacity:(double)arg3 type:(long long)arg4;
- (void)animateConceal;
- (void)animateReveal;
- (void)positionForCodeBoxPoints:(id)arg1;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCodeFrameRatio:(double)arg1;
- (id)init;

@end

