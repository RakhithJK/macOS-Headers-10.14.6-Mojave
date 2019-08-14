//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GCurve.h"

@class NSBezierPath;

@interface GCurve2D : GCurve
{
    NSBezierPath *mPath;
    NSBezierPath *mIntegratedPath;
    NSBezierPath *mIntegratedCurve;
    NSBezierPath *mHandles;
}

+ (id)defaultAttributes;
- (void)addItemsToContextualMenu:(id)arg1;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (BOOL)magnetizePoint:(double *)arg1;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (void)updateIntegratedAreaFromPath;
- (id)needsUpdate;
- (id)path;
- (id)integratedPath;
- (double)ordinateAt:(double)arg1;
- (double)abscissaAt:(double)arg1;
- (struct CGPoint)pointAtX:(double)arg1 y:(double)arg2;
- (void)updateIntegratedArea;
- (void)removeIntegratedArea;
- (id)siblingWithIntegratedValue:(id)arg1 forKey:(id)arg2;
- (id)integratedArea;
- (id)bezierPathFromIntegrationOfPath:(id)arg1 fromElement:(long long)arg2 toElement:(long long)arg3 withInitialMove:(BOOL)arg4;
- (id)bezierPathFromIntegrationOfPath:(id)arg1 fromElement:(long long)arg2 toElement:(long long)arg3 withVerticalLineAt:(double)arg4;
- (id)bezierPathFromIntegrationOfPath:(id)arg1 fromElement:(long long)arg2 toElement:(long long)arg3 withHorizontalLineAt:(double)arg4;
- (id)bezierPathFromIntegrationOfPath:(id)arg1 fromElement:(long long)arg2 toElement:(long long)arg3 kind:(long long)arg4 x:(double)arg5 y:(double)arg6;
- (BOOL)touchedByRect:(struct CGRect)arg1;
- (void)updateSelf;
- (void)drawContent;
- (void)drawSelection;
- (void)drawUnselected;
- (void)updateContentFrame;
- (void)endCurve;
- (void)lineTo:(double *)arg1;
- (void)startCurve;
- (void)liftPen;
- (void)setPoint:(double *)arg1 to:(double *)arg2;
- (BOOL)undefinedPoint:(double *)arg1;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

