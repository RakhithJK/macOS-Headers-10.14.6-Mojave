//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject
{
    BOOL _stripImageMetadata;
    double _targetJPEGCompressionValue;
}

@property(nonatomic) BOOL stripImageMetadata; // @synthesize stripImageMetadata=_stripImageMetadata;
@property(nonatomic) double targetJPEGCompressionValue; // @synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue;
- (BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id *)arg2;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
