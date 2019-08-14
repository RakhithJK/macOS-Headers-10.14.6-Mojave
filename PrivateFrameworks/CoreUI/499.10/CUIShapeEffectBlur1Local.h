//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIShapeEffectBlur1Local : CIFilter
{
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

+ (id)filterWithName:(id)arg1;
- (id)outputImage;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)customAttributes;

@end

