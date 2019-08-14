//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSImageRep : NSObject <NSSecureCoding, NSCopying, NSCoding>
{
    struct __repFlags {
        unsigned int hasAlpha:1;
        unsigned int isOpaque:1;
        unsigned int cacheParamsComputed:1;
        unsigned int cacheAlphaComputed:1;
        unsigned int loadState:2;
        unsigned int keepCacheWindow:1;
        unsigned int reserved:1;
        unsigned int bitsPerSample:8;
        unsigned int internalLayoutDirection:2;
        unsigned int gsaved:14;
    } _repFlags;
    int _pixelsWide;
    NSString *_colorSpaceName;
    struct CGSize _size;
    int _pixelsHigh;
}

+ (BOOL)_deprecated_hasReversedFlippednessInFlippedImages;
+ (BOOL)_preferFilter;
+ (Class)imageRepClassForData:(id)arg1;
+ (Class)imageRepClassForPasteboardType:(id)arg1;
+ (Class)imageRepClassForFileType:(id)arg1;
+ (Class)_imageRepClassForFileNameExtension:(id)arg1 andHFSFileType:(id)arg2;
+ (Class)imageRepClassForType:(id)arg1;
+ (id)registeredImageRepClasses;
+ (void)unregisterImageRepClass:(Class)arg1;
+ (void)registerImageRepClass:(Class)arg1;
+ (id)_imageRepsWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3 expandImageContentNow:(BOOL)arg4;
+ (id)imageRepWithContentsOfURL:(id)arg1;
+ (id)imageRepsWithContentsOfURL:(id)arg1;
+ (id)imageRepWithPasteboard:(id)arg1;
+ (id)imageRepsWithPasteboard:(id)arg1;
+ (id)imageRepWithContentsOfFile:(id)arg1;
+ (id)_imageRepsWithContentsOfFile:(id)arg1 expandImageContentNow:(BOOL)arg2;
+ (id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(BOOL)arg2 giveUpOnNetworkURLsWithoutGoodExtensions:(BOOL)arg3;
+ (id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(BOOL)arg2;
+ (id)imageRepsWithContentsOfFile:(id)arg1;
+ (BOOL)canInitWithPasteboard:(id)arg1;
+ (id)imageFileTypes;
+ (id)_imageFileTypesNoCaching;
+ (id)imagePasteboardTypes;
+ (id)_imagePasteboardTypesNoCaching;
+ (id)imageTypes;
+ (id)_imageTypesNoCaching;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredTypes;
+ (BOOL)canInitWithData:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
@property(copy, setter=_setAppearanceName:) NSString *_appearanceName;
- (id)_bitmapImageRepsForTIFFRepresentation;
- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (id)_bitmapImageReps;
- (void)_setCGImageRef:(struct CGImage *)arg1;
- (struct CGImage *)_CGImageRef;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage *)_newCGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
- (id)description;
- (BOOL)_loadDataIfNotYetLoaded;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_wantsToBeCachedForFlippedness:(BOOL)arg1;
@property long long pixelsHigh;
@property long long pixelsWide;
@property long long bitsPerSample;
@property(getter=isOpaque) BOOL opaque;
@property(getter=hasAlpha) BOOL alpha;
@property long long layoutDirection;
- (void)_setInternalLayoutDirectionFromCUILayoutDirection:(long long)arg1;
- (long long)_internalLayoutDirection;
- (long long)_pixelsHighOrResolutionIndependent;
- (long long)_pixelsWideOrResolutionIndependent;
- (long long)_numberOfColorComponentsNotIncludingAlpha;
@property(copy) NSString *colorSpaceName;
- (void)_imageRep_setColorSpaceName:(id)arg1;
- (id)_imageRep_colorSpaceName;
- (void)setColorSpace:(id)arg1;
- (id)colorSpace;
- (void *)_createPatternForRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)_isValid;
- (long long)_uncachedSize;
- (BOOL)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (BOOL)_drawFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 alpha:(double)arg4 compositing:(BOOL)arg5 flipped:(BOOL)arg6 ignoreContext:(BOOL)arg7;
- (id)_processedHintsForHints:(id)arg1 includeOnlyIfAvailable:(BOOL)arg2;
- (id)_defaultImageHintsIncludeOnlyIfAvailable:(BOOL)arg1;
- (BOOL)draw;
- (BOOL)drawInRect:(struct CGRect)arg1;
- (BOOL)drawAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
@property struct CGSize size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

