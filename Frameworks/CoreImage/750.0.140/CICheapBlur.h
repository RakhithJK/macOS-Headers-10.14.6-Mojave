//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheapBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CILerp;
- (id)_CICheapBlur;

@end

