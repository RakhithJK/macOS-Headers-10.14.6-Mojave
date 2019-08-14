//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface TSDSwatchCache : NSObject
{
    NSOperationQueue *mOperationQueue;
}

+ (id)swatchCache;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 shouldClipVertically:(BOOL)arg6 documentRoot:(id)arg7;
- (id)p_thumbnailImageDataForImageData:(id)arg1;
- (id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2;
- (struct CGSize)imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize)arg2;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 shouldClipVertically:(BOOL)arg6 documentRoot:(id)arg7;
- (struct CGImage *)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(struct CGSize)arg3 overImage:(struct CGImage *)arg4;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 shapeType:(int)arg4 angle:(double)arg5 documentRoot:(id)arg6;
- (void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg1 documentRoot:(id)arg2;
- (struct CGSize)shapeSwatchInset;
- (void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3;
- (void)dealloc;
- (id)init;

@end

