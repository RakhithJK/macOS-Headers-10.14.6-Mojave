//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData
{
    int _pvrCompressedFormat;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    unsigned int _metaDataSize;
    NSData *_imageData;
}

+ (BOOL)isPVR3File:(id)arg1;
- (void)determineBlockSize:(unsigned long long *)arg1 blocksWide:(unsigned long long *)arg2 blocksHigh:(unsigned long long *)arg3 bytesPerBlock:(unsigned long long *)arg4 fromFormat:(unsigned int)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7;
- (unsigned long long)determineFormat:(unsigned long long)arg1 colorSpace:(unsigned int)arg2 channelType:(unsigned int)arg3 options:(id)arg4;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (BOOL)parseMetadataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

