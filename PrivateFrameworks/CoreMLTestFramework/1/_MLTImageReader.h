//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface _MLTImageReader : NSObject
{
    NSString *_imagePath;
    NSImage *_image;
}

@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithImageAtPath:(id)arg1;
- (struct __CVBuffer *)createGrayscalePixelBuffer;
- (struct __CVBuffer *)createImagePixelBuffer;
- (void)resizeImageToWidth:(long long)arg1 andHeight:(long long)arg2;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
- (BOOL)isImageGrayScale:(struct CGImage *)arg1;

@end

