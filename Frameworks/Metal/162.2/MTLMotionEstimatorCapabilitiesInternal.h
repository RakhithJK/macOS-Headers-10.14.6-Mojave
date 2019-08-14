//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLMotionEstimatorCapabilities.h>

__attribute__((visibility("hidden")))
@interface MTLMotionEstimatorCapabilitiesInternal : MTLMotionEstimatorCapabilities
{
    struct MTLMotionEstimatorCapabilitiesPrivate _private;
}

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct MTLMotionEstimatorCapabilitiesPrivate *)descriptorPrivate;
- (unsigned long long)precisionDenominator;
- (unsigned long long)precisionNumerator;
- (unsigned long long)regionHeight;
- (unsigned long long)regionWidth;
- (unsigned long long)macroBlockHeight;
- (unsigned long long)macroBlockWidth;
- (unsigned long long)maxTextureHeight;
- (unsigned long long)minTextureHeight;
- (unsigned long long)maxTextureWidth;
- (unsigned long long)minTextureWidth;
- (id)init;

@end

