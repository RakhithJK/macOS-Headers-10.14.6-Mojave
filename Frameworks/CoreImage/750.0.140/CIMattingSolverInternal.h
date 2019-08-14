//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMattingSolverInternal : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputPredicateImage;
    NSNumber *inputRadius;
    NSNumber *inputSubsampling;
    NSNumber *inputEPS;
    NSNumber *inputNumIterations;
    NSNumber *inputErosionKernelSize;
    NSNumber *inputUseDepthFilter;
    NSNumber *inputFGThresholdValue;
    NSNumber *inputBGThresholdValue;
}

+ (id)customAttributes;
- (id)outputImage;

@end

