//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementAntialiasV3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputPreprocImage;
    CIImage *inputDisparityWeightImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
}

@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputDisparityWeightImage; // @synthesize inputDisparityWeightImage;
@property(retain) CIImage *inputPreprocImage; // @synthesize inputPreprocImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)antialiasKernel;

@end

