//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import "NSAccessibilityImage-Protocol.h"

@class IPXPrintContactSheetCaptions, IPXPrintPageView, NSArray, NSString;

@interface IPXPrintCellView : NSAccessibilityElement <NSAccessibilityImage>
{
    struct CGImage *_renderedPhoto;
    BOOL _isPrintingCell;
    IPXPrintContactSheetCaptions *_captionGenerator;
    struct IPXPrintCaptionSelection _captionSelection;
    NSArray *_captionStrings;
    struct CGLayer *_cellLayer;
    struct CGSize _cellSize;
    struct CGPoint _position;
    double _captionHeight;
    double _resolution;
    NSArray *_scaledStrings;
    NSArray *_stringBounds;
    BOOL _rotated;
    BOOL _fillFrame;
    BOOL _canRotatePhotosForBestFit;
    BOOL _ignoreCaptions;
    IPXPrintPageView *_pageView;
    long long _cellIndex;
    NSString *_lastRenderedVersionUUID;
}

@property BOOL ignoreCaptions; // @synthesize ignoreCaptions=_ignoreCaptions;
@property(retain) NSString *lastRenderedVersionUUID; // @synthesize lastRenderedVersionUUID=_lastRenderedVersionUUID;
@property BOOL canRotatePhotosForBestFit; // @synthesize canRotatePhotosForBestFit=_canRotatePhotosForBestFit;
@property long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain) IPXPrintPageView *pageView; // @synthesize pageView=_pageView;
@property BOOL fillFrame; // @synthesize fillFrame=_fillFrame;
@property BOOL rotated; // @synthesize rotated=_rotated;
@property struct CGPoint position; // @synthesize position=_position;
@property BOOL isPrintingCell; // @synthesize isPrintingCell=_isPrintingCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameInParentSpace;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;
- (void)drawIntoContext:(id)arg1;
- (struct CGRect)photoSubrectForCellBounds:(struct CGRect)arg1 photoSize:(struct CGSize)arg2 rotated:(BOOL)arg3 renderSettings:(CDStruct_e8f17287)arg4;
- (struct CGImage *)synchronousRenderVersion:(id)arg1 forSize:(struct CGSize)arg2 renderSettings:(CDStruct_e8f17287)arg3 fastRenderForPrint:(BOOL)arg4;
- (BOOL)renderVersion:(id)arg1 forSize:(struct CGSize)arg2 renderSettings:(CDStruct_e8f17287)arg3 fastRenderForPrint:(BOOL)arg4 completion:(CDUnknownBlockType)arg5 synchronous:(BOOL)arg6;
- (struct CGSize)renderSizeForCellSize:(struct CGSize)arg1 photoSize:(struct CGSize)arg2 rotated:(char *)arg3 renderSettings:(CDStruct_e8f17287)arg4;
- (void)drawIntoContext:(struct CGContext *)arg1 origin:(struct CGPoint)arg2 redrawCallback:(CDUnknownBlockType)arg3 fastRenderForPrint:(BOOL)arg4 synchronous:(BOOL)arg5;
- (void)updateLayerForContext:(struct CGContext *)arg1 redrawCallback:(CDUnknownBlockType)arg2 synchronous:(BOOL)arg3;
- (void)updateLayerForContext:(struct CGContext *)arg1 redrawCallback:(CDUnknownBlockType)arg2;
- (void)positionChildViews;
- (void)invalidateCaptionStrings;
- (struct CGLayer *)cellLayer;
@property double resolution;
@property struct CGSize size;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

