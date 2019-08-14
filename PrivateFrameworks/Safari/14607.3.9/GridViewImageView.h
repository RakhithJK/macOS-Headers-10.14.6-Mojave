//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSColor, NSImage, NSShadow;

__attribute__((visibility("hidden")))
@interface GridViewImageView : NSView
{
    CALayer *_shadowLayer;
    CALayer *_shadowMask;
    CALayer *_imageLayer;
    CALayer *_selectionOverlayLayer;
    NSShadow *_adjustedImageShadow;
    BOOL _usesCustomContentsRect;
    BOOL _roundsImage;
    NSShadow *_imageShadow;
    NSImage *_image;
    NSColor *_backgroundColor;
    long long _highlightState;
}

@property(nonatomic) BOOL roundsImage; // @synthesize roundsImage=_roundsImage;
@property(nonatomic) long long highlightState; // @synthesize highlightState=_highlightState;
@property(nonatomic) BOOL usesCustomContentsRect; // @synthesize usesCustomContentsRect=_usesCustomContentsRect;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSShadow *imageShadow; // @synthesize imageShadow=_imageShadow;
- (void).cxx_destruct;
- (void)_updateCustomContentsRectIfNeeded;
- (struct CGRect)_insetBounds;
- (void)applyIconTreatment;
- (void)layout;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)_updateShadow;
@property(nonatomic) double imageBorderWidth;
- (struct CGRect)_contentsRectForSnapshot:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_updateSelectionOverlayTint;
- (void)_setUpSelectionOverlayLayer;
- (void)_createShadowLayerIfNeededUsingDebugColors:(BOOL)arg1;
- (void)_createAdjustedImageShadowIfNeededUsingDebugColors:(BOOL)arg1;
- (void)_setUpImageLayer;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_applyImageToLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

