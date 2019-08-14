//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, NSMutableDictionary, NSString, PVImageElement;

@interface PVSizeCalculatorImageRep : NSObject
{
    PVImageElement *_imageElement;
    unsigned long long _outputWidth;
    unsigned long long _outputHeight;
    NSString *_outputImageType;
    double _compressionQuality;
    long long _tiffCompressionType;
    long long _outputImageDepth;
    long long _hasAlpha;
    long long _inputImageFileSize;
    long long _lastOutputFileSize;
    NSMutableDictionary *_cachedOutputFileSizes;
    struct _CGLPixelFormatObject *_cglPixelFormat;
    struct _CGLContextObject *_cglContext;
    struct CGRect _lastCGLContextExtent;
    CIContext *_ciContext;
}

+ (id)defaultGLPixelFormat;
@property long long hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property long long outputImageDepth; // @synthesize outputImageDepth=_outputImageDepth;
@property long long tiffCompressionType; // @synthesize tiffCompressionType=_tiffCompressionType;
@property double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(retain) NSString *outputImageType; // @synthesize outputImageType=_outputImageType;
@property unsigned long long outputHeight; // @synthesize outputHeight=_outputHeight;
@property unsigned long long outputWidth; // @synthesize outputWidth=_outputWidth;
@property(readonly) long long inputImageFileSize; // @synthesize inputImageFileSize=_inputImageFileSize;
@property(readonly) long long lastOutputFileSize; // @synthesize lastOutputFileSize=_lastOutputFileSize;
@property(readonly) PVImageElement *imageElement; // @synthesize imageElement=_imageElement;
- (void).cxx_destruct;
- (void)destroyRenderingContext;
- (void)createRenderingContext;
- (void)updateCGLMatricesForExtent:(struct CGRect)arg1;
- (struct _CGLContextObject *)cglContext;
- (struct _CGLPixelFormatObject *)cglPixelFormat;
- (void)clearCachedOutputFileSizes;
- (void)clearLastOutputFileSize;
- (long long)computeOutputSize;
- (void)dealloc;
- (id)initWithImageAndOptions:(id)arg1;

@end

