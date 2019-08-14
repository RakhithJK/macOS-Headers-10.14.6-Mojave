//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKSignatureDetectorProtocol-Protocol.h>

@class NSImage;

@interface AKSignatureDetector : NSObject <AKSignatureDetectorProtocol>
{
    double _baselinePosition;
    double _borderWidth;
    struct vImage_Buffer _fullARGB;
    struct vImage_Buffer _smallARGB;
    struct vImage_Buffer _smallPlanar;
    struct vImage_Buffer _tmpSmallPlanar1;
    struct vImage_Buffer _tmpSmallPlanar2;
    struct vImage_Buffer _tmpSmallPlanar3;
    struct vImage_Buffer _tmpSmallPlanar4;
    int *_blackLengths;
    int *_blackLengthsScaled;
    int *_blackOrigins;
    int _prevTop;
    int _prevBottom;
    int _prevLeft;
    int _prevRight;
    int _stableFrames;
    int _lastFrameWidth;
    int _lastFrameHeight;
}

+ (void)initialize;
@property double borderWidth; // @synthesize borderWidth=_borderWidth;
@property double baselinePosition; // @synthesize baselinePosition=_baselinePosition;
@property(readonly) NSImage *testImage;
- (id)detectSignatureInImage:(id)arg1;
- (id)detectSignatureInPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_detectWithStabilization:(BOOL)arg1;
- (id)_signatureForRect:(CDStruct_a734b2e2)arg1 baselineHeight:(double)arg2;
- (void)_generateImagesForFrameWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)init;

@end

