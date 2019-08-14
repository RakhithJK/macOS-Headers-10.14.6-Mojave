//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NetTopoObjectLayer.h"

@class CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer
{
    CAShapeLayer *_connectionLineLayer;
    struct CGPath *_hitTestPath;
    struct CGColor *_lineColorActive;
    struct CGColor *_lineColorInactive;
    struct CGColor *_lineColorEthernet;
    struct CGColor *_lineColorWiFi;
    struct CGColor *_selectedLineColor;
    struct CGColor *_clearColor;
    struct CGColor *_whiteColor;
    unsigned long long _upstreamDeviceSpatialRelationship;
    unsigned long long _connectionStyle;
    struct CGPoint _upstreamConnectionPoint;
    struct CGPoint _downstreamConnectionPoint;
    unsigned long long _upstreamConnectionSide;
    struct CGPoint _siblingMergePoint;
    unsigned long long _connectionMediumFallback;
    struct CGPath *_arrowhead;
}

@property(readonly, nonatomic) struct CGPath *hitTestPath; // @synthesize hitTestPath=_hitTestPath;
@property(nonatomic) unsigned long long connectionMediumFallback; // @synthesize connectionMediumFallback=_connectionMediumFallback;
@property(nonatomic) unsigned long long upstreamConnectionSide; // @synthesize upstreamConnectionSide=_upstreamConnectionSide;
@property(nonatomic) unsigned long long connectionStyle; // @synthesize connectionStyle=_connectionStyle;
@property(nonatomic) unsigned long long upstreamDeviceSpatialRelationship; // @synthesize upstreamDeviceSpatialRelationship=_upstreamDeviceSpatialRelationship;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (void)contentsScaleHasBeenChangedFromOldScale:(double)arg1 toNewScale:(double)arg2;
- (void)setNeedsDisplay;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGPath *)newConnectionPathWithOffset:(double)arg1;
- (void)addCurvedArrowConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (void)addBottomWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (void)addSideWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(double)arg2;
- (void)layoutSublayers;
@property(readonly, nonatomic) unsigned long long connectionMedium;
- (void)setSelected:(BOOL)arg1;
@property(nonatomic) struct CGPoint siblingMergePoint;
@property(nonatomic) struct CGPoint upstreamConnectionPoint;
@property(nonatomic) struct CGPoint downstreamConnectionPoint;
- (struct CGRect)getUserInteractionBounds;
- (void)dealloc;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;

@end

