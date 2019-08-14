//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class NSArray, OADRelativeRect, OADShade;

@interface OADGradientFill : OADFill
{
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)stringForTileFlipMode:(int)arg1;
+ (id)defaultProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)usesPlaceholderColor;
- (void)setStyleColor:(id)arg1;
- (id)lastStop;
- (id)firstStop;
- (BOOL)isShadeOverridden;
- (void)setShade:(id)arg1;
- (id)shade;
- (BOOL)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (BOOL)isFlipModeOverridden;
- (void)setFlipMode:(int)arg1;
- (int)flipMode;
- (BOOL)isTileRectOverridden;
- (void)setTileRect:(id)arg1;
- (id)tileRect;
- (void)sortStops;
- (BOOL)areStopsOverridden;
- (void)setStops:(id)arg1;
- (id)stops;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

