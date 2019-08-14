//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImage, NSImageView;

@interface MKImageView : NSView
{
    NSImage *_currentImage;
    BOOL _shouldHighlight;
    NSImage *_highlightImage;
    NSImage *_image;
    NSColor *_highlightColor;
    long long _imageContentMode;
    NSImageView *_imageView;
    NSColor *_templateTintColor;
}

@property(retain, nonatomic) NSColor *templateTintColor; // @synthesize templateTintColor=_templateTintColor;
@property(readonly, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property BOOL shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(retain, nonatomic) NSImage *highlightImage; // @synthesize highlightImage=_highlightImage;
- (void).cxx_destruct;
@property long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
- (void)setBackgroundStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (id)_currentImage;
- (void)_setCurrentImage:(id)arg1;
- (void)invalidateHighlightImage;
@property(retain, nonatomic) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)_maps_common_init;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

