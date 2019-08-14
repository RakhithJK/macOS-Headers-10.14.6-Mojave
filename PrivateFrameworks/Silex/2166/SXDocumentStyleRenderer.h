//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXFillView, SXGradientFillView, SXImageFillView, SXVideoFillView, SXViewport, UIView;
@protocol SXGradientFactory, SXImageFillViewFactory, SXVideoFillViewFactory;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>
{
    id <SXImageFillViewFactory> _imageFillViewFactory;
    id <SXVideoFillViewFactory> _videoFillViewFactory;
    SXViewport *_viewport;
    id <SXGradientFactory> _gradientFactory;
    UIView *_topBackgroundView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
    SXFillView *_fillView;
}

@property(retain, nonatomic) SXFillView *fillView; // @synthesize fillView=_fillView;
@property(retain, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property(retain, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property(retain, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXVideoFillViewFactory> videoFillViewFactory; // @synthesize videoFillViewFactory=_videoFillViewFactory;
@property(readonly, nonatomic) id <SXImageFillViewFactory> imageFillViewFactory; // @synthesize imageFillViewFactory=_imageFillViewFactory;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)layoutFillView;
- (void)layoutTopBackgroundView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (id)initWithViewport:(id)arg1 imageFillViewFactory:(id)arg2 videoFillViewFactory:(id)arg3 gradientFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

