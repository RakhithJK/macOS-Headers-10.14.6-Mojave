//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary, NSMutableDictionary;

@interface VKShieldArtwork : NSObject
{
    double _scale;
    NSCache *_imageCache;
    struct mutex _imageCacheLock;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct CGSize _shadowOffset;
    double _shadowRadius;
    double _textCenterOffsetX;
    double _textBaseline;
    struct __CTFont *_nonDigitFont;
    struct CGColor *_nonDigitFontColor;
    struct CGPoint _center;
    NSMutableDictionary *_textSpecificArtworks;
    struct CGContext *_templateContext;
    CDUnknownBlockType _newContext;
    struct CGImage *_backgroundImage;
    CDStruct_65fe6994 _resizableInfo;
    BOOL _resizable;
    double _lineHeight;
    double _lineSpacing;
    struct CGColor *_overlayColor;
}

@property(readonly, nonatomic) struct CGColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)newImageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2 widthPaddingMultiple:(double)arg3 centerPoint:(struct CGPoint *)arg4;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2 widthPaddingMultiple:(double)arg3;
- (id)imageWithShieldText:(id)arg1 widthPaddingMultiple:(double)arg2;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2;
- (id)imageWithShieldText:(id)arg1;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;
- (void)dealloc;
- (id)_initWithBackgroundImage:(struct CGImage *)arg1 contentScale:(double)arg2 resizableInfo:(CDStruct_65fe6994 *)arg3 font:(struct __CTFont *)arg4 nonDigitFont:(struct __CTFont *)arg5 textColor:(struct CGColor *)arg6 nonDigitTextColor:(struct CGColor *)arg7 textCenterOffsetX:(double)arg8 textBaseline:(double)arg9 textStrokeWidth:(double)arg10 textStrokeColor:(struct CGColor *)arg11 textShadowOffset:(struct CGSize)arg12 textShadowRadius:(double)arg13 textShadowColor:(struct CGColor *)arg14 lineSpacing:(double)arg15 overlayColor:(struct CGColor *)arg16;
- (id)initWithResizableBackgroundImage:(struct CGImage *)arg1 resizableInfo:(CDStruct_65fe6994 *)arg2 contentScale:(double)arg3 font:(struct __CTFont *)arg4 nonDigitFont:(struct __CTFont *)arg5 textColor:(struct CGColor *)arg6 nonDigitTextColor:(struct CGColor *)arg7 textCenterOffsetX:(double)arg8 textBaseline:(double)arg9 textStrokeWidth:(double)arg10 textStrokeColor:(struct CGColor *)arg11 textShadowOffset:(struct CGSize)arg12 textShadowRadius:(double)arg13 textShadowColor:(struct CGColor *)arg14 lineSpacing:(double)arg15 overlayColor:(struct CGColor *)arg16;
- (id)initWithBackgroundImage:(struct CGImage *)arg1 contentScale:(double)arg2 font:(struct __CTFont *)arg3 nonDigitFont:(struct __CTFont *)arg4 textColor:(struct CGColor *)arg5 nonDigitTextColor:(struct CGColor *)arg6 textCenterOffsetX:(double)arg7 textBaseline:(double)arg8 textStrokeWidth:(double)arg9 textStrokeColor:(struct CGColor *)arg10 textShadowOffset:(struct CGSize)arg11 textShadowRadius:(double)arg12 textShadowColor:(struct CGColor *)arg13 overlayColor:(struct CGColor *)arg14;
- (id)initWithPackedVariant:(id)arg1 backgroundImage:(struct CGImage *)arg2 scale:(double)arg3 colors:(CDStruct_b3fd5d76 *)arg4 overlayColor:(CDStruct_83984b6f)arg5;
- (id)initWithScale:(double)arg1;

@end
