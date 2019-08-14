//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXGalleryComponentView.h>

#import <Silex/SXFullscreenCanvasShowable-Protocol.h>
#import <Silex/SXFullscreenCaptionDataSource-Protocol.h>
#import <Silex/SXImageViewDelegate-Protocol.h>
#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, SXFullscreenCanvasController, SXMediaViewEvent, SXMosaicGalleryLayouter, UIView;
@protocol SXGalleryItemImageViewFactory;

@interface SXMosaicGalleryComponentView : SXGalleryComponentView <SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXViewportChangeListener>
{
    BOOL _loadedAtleastOneImage;
    id <SXGalleryItemImageViewFactory> _imageViewFactory;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    UIView *_galleryView;
    NSMutableArray *_imageViews;
    NSMutableArray *_visibleImageViews;
    SXMediaViewEvent *_mediaViewEvent;
    SXMosaicGalleryLayouter *_galleryLayouter;
    NSMutableSet *_exposedGalleryItems;
}

@property(retain, nonatomic) NSMutableSet *exposedGalleryItems; // @synthesize exposedGalleryItems=_exposedGalleryItems;
@property(retain, nonatomic) SXMosaicGalleryLayouter *galleryLayouter; // @synthesize galleryLayouter=_galleryLayouter;
@property(nonatomic) BOOL loadedAtleastOneImage; // @synthesize loadedAtleastOneImage=_loadedAtleastOneImage;
@property(retain, nonatomic) SXMediaViewEvent *mediaViewEvent; // @synthesize mediaViewEvent=_mediaViewEvent;
@property(readonly, nonatomic) NSMutableArray *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIView *galleryView; // @synthesize galleryView=_galleryView;
@property(readonly, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // @synthesize fullScreenCanvasController=_fullScreenCanvasController;
@property(readonly, nonatomic) id <SXGalleryItemImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
- (void).cxx_destruct;
- (BOOL)allowHierarchyRemoval;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;
- (void)finishMediaViewEvent;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (void)submitEvents;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (id)textStyleForIdentifier:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)textResizerForCaption:(id)arg1;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)imageViewForLocation:(struct CGPoint)arg1;
- (BOOL)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (BOOL)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContentsInDrawableRect;
- (void)visibleBoundsChanged;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_74be42e1)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

