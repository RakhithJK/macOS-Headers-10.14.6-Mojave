//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputBlurImage;
    NSNumber *_inputIntensity;
}

+ (id)definitionKernel;
@property(retain) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
@property(retain) CIImage *inputBlurImage; // @synthesize inputBlurImage=_inputBlurImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end

