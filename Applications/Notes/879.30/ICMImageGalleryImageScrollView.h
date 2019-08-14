//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, ICAttachment, ICAttachmentSharingServicePickerController, ICMImageGalleryImageClipView, ICMImageGalleryImageViewContainer, NSImage, NSString;

@interface ICMImageGalleryImageScrollView : NSScrollView <CAAnimationDelegate>
{
    BOOL _isAnimating;
    BOOL _updateImageAfterAnimationCompletes;
    BOOL _isAdjustingContentFrame;
    BOOL _isAdjustingMagnification;
    BOOL _isMousedDown;
    BOOL _stickyZoomToFit;
    ICAttachment *_attachment;
    NSImage *_image;
    ICMImageGalleryImageViewContainer *_imageViewContainer;
    ICAttachmentSharingServicePickerController *_sharingServicePickerController;
    CALayer *_imageLayer;
    ICMImageGalleryImageClipView *_clipView;
    struct CGPoint _mouseDragLocation;
}

+ (id)keyPathsForValuesAffectingCanScaleToActualSize;
+ (id)keyPathsForValuesAffectingCanScaleDown;
+ (id)keyPathsForValuesAffectingCanScaleUp;
@property(nonatomic) __weak ICMImageGalleryImageClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) ICAttachmentSharingServicePickerController *sharingServicePickerController; // @synthesize sharingServicePickerController=_sharingServicePickerController;
@property(retain, nonatomic) ICMImageGalleryImageViewContainer *imageViewContainer; // @synthesize imageViewContainer=_imageViewContainer;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGPoint mouseDragLocation; // @synthesize mouseDragLocation=_mouseDragLocation;
@property(nonatomic) BOOL stickyZoomToFit; // @synthesize stickyZoomToFit=_stickyZoomToFit;
@property(nonatomic) BOOL isMousedDown; // @synthesize isMousedDown=_isMousedDown;
@property(nonatomic) BOOL isAdjustingMagnification; // @synthesize isAdjustingMagnification=_isAdjustingMagnification;
@property(nonatomic) BOOL isAdjustingContentFrame; // @synthesize isAdjustingContentFrame=_isAdjustingContentFrame;
@property(nonatomic) BOOL updateImageAfterAnimationCompletes; // @synthesize updateImageAfterAnimationCompletes=_updateImageAfterAnimationCompletes;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)scaleToActualSize:(id)arg1;
- (void)scaleDown:(id)arg1;
- (void)scaleUp:(id)arg1;
@property(readonly, nonatomic) BOOL canScaleToActualSize;
@property(readonly, nonatomic) BOOL canScaleDown;
@property(readonly, nonatomic) BOOL canScaleUp;
- (void)performStickyRotationWithDirection:(unsigned long long)arg1;
- (void)performRotationWithDirection:(unsigned long long)arg1;
- (void)rotateLeft:(id)arg1;
- (void)rotateRight:(id)arg1;
- (void)updateImageToImage:(id)arg1;
- (void)manuallySetImage:(id)arg1;
- (void)updateImage;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)performSmartZoom;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setAttachmentImageNeedsUpdate;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)updateImageAfterAnimationIfNecessary;
@property(readonly, nonatomic) double scaleValueForAspectFit;
- (void)resizeToAspectFitIfNecessaryAnimated:(BOOL)arg1;
- (void)setStickyZoomToFit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)adjustMaxMinMagnificationIfNecessaryForMagnification:(double)arg1;
- (void)setMagnification:(double)arg1;
- (void)boundsDidChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetCursorRects;
- (void)updateLayer;
- (void)awakeFromNib;
- (BOOL)isOpaque;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

