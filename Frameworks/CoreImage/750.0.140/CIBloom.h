//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBloom : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel;

@end

