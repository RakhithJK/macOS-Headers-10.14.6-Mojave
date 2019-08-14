//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <NeutrinoKit/NUAVPlayerControllerDelegate-Protocol.h>

@class NSArray, NSString, NUAVPlayerView, NUComposition, NUMediaViewRenderer, NURenderView, NUScrollView;
@protocol NUMediaViewDelegate;

@interface NUMediaView : NSView <NUAVPlayerControllerDelegate>
{
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUMediaViewRenderer *_renderer;
    NUAVPlayerView *_playerView;
    NSView *_livePhotoView;
    struct NSEdgeInsets _edgeInsets;
    struct {
        char hasDidFinishRendering;
        char hasDidUpdateLivePhoto;
        char hasDidFinishRenderingWithStatistics;
        char hasDidZoom;
        char hasWillBeginZooming;
        char hasDidEndZooming;
        char hasIsReadyForVideoPlayback;
        char hasDidStartPreparingVideo;
        char hasDidFinishPreparingVideo;
    } _delegateFlags;
    BOOL _loopsVideo;
    BOOL _centerContent;
    BOOL _muted;
    BOOL _videoPlayerVisible;
    BOOL _debugEnabled;
    BOOL _scrollUpdatesSuppressed;
    id <NUMediaViewDelegate> _delegate;
    double _angle;
    struct CGSize __masterSizeWithoutGeometry;
    struct CGRect _cropRect;
}

+ (struct NSEdgeInsets)_proposedInsetsForInsets:(struct NSEdgeInsets)arg1 contentSize:(struct CGSize)arg2 inFrame:(struct CGRect)arg3 centerContent:(BOOL)arg4;
@property(nonatomic) BOOL scrollUpdatesSuppressed; // @synthesize scrollUpdatesSuppressed=_scrollUpdatesSuppressed;
@property(nonatomic, getter=isDebugEnabled) BOOL debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(nonatomic, getter=isVideoPlayerVisible) BOOL videoPlayerVisible; // @synthesize videoPlayerVisible=_videoPlayerVisible;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize _masterSizeWithoutGeometry; // @synthesize _masterSizeWithoutGeometry=__masterSizeWithoutGeometry;
@property(nonatomic) __weak id <NUMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerControllerIsReadyForPlayback:(id)arg1;
- (void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2;
- (void)playerViewReadyForDisplayDidChange:(id)arg1;
- (id)_viewRecursiveDescription;
- (id)_layerRecursiveDescription;
- (void)_updateVideoPlayerAlpha;
- (void)_stopLoopPlayback;
- (void)_startLoopPlayback;
@property(nonatomic) BOOL loopsVideoPlayback;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;
- (void)_setLayerFilters:(id)arg1;
- (id)_geometry;
- (id)_renderView;
- (id)_scrollView;
- (void)_rendererDidFinishPreparingVideo;
- (void)_rendererDidStartPreparingVideo;
- (void)_rendererDidUpdateLivePhoto;
- (void)_rendererDidFinishWithStatistics:(id)arg1;
- (void)_rendererDidCreateAVPlayerController:(id)arg1;
- (id)_videoPlayerViewWithoutControls;
- (id)_videoPlayerView;
- (id)_livePhotoView;
- (id)_renderer;
- (id)_imageLayer;
- (void)_setupViews;
- (void)_transitionToInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (void)_endTransition;
- (void)_beginTransition;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
- (BOOL)isReady;
@property(nonatomic) double minimumZoomScale;
@property(nonatomic) double maximumZoomScale;
- (void)setZoomScaleToFit;
@property(nonatomic) double zoomScale;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)waitForRender;
- (void)_updateRenderContent;
- (void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(BOOL)arg2;
@property(nonatomic) NSArray *pipelineFilters;
@property(copy, nonatomic) NUComposition *composition;
- (void)didZoom:(id)arg1;
- (void)didEndScrolling:(id)arg1;
- (void)willStartScrolling:(id)arg1;
- (void)didEndZooming:(id)arg1;
- (void)willBeginZooming:(id)arg1;
@property(nonatomic) struct NSEdgeInsets edgeInsets;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

