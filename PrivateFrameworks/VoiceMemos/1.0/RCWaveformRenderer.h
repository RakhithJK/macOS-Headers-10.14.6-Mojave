//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/CAAnimationDelegate-Protocol.h>
#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, RCWaveformDataSource;
@protocol RCWaveformRendererDelegate;

__attribute__((visibility("hidden")))
@interface RCWaveformRenderer : UIViewController <RCWaveformDataSourceObserver, CAAnimationDelegate>
{
    BOOL displayLinkConnected;
    CDStruct_73a5d3ca _renderedTimeRange;
    BOOL _renderedTimeRangeIsApproximatedWaveform;
    double _cachedContentWidth;
    BOOL _contentWidthDirty;
    BOOL _needsVisibleRangeRendering;
    BOOL _isCompactView;
    NSMutableArray *_cachedSegmentArray;
    NSMutableDictionary *_waveformSlices;
    NSMutableIndexSet *_waveformSliceIndexes;
    BOOL _requiresFullRefresh;
    struct _RCWaveformRendererState _rendererState;
    BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
    BOOL _isRecordWaveform;
    BOOL _isEditMode;
    BOOL _isPlayback;
    BOOL _isOverview;
    BOOL _isPlayBarOnlyMode;
    BOOL _paused;
    BOOL _activeDisplayLinkRequired;
    RCWaveformDataSource *_dataSource;
    id <RCWaveformRendererDelegate> _rendererDelegate;
    double _spacingWidth;
    double _dataPointWidth;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property(nonatomic, getter=isActiveDisplayLinkRequired) BOOL activeDisplayLinkRequired; // @synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) BOOL isPlayBarOnlyMode; // @synthesize isPlayBarOnlyMode=_isPlayBarOnlyMode;
@property(nonatomic) BOOL isOverview; // @synthesize isOverview=_isOverview;
@property(nonatomic) BOOL isCompactView; // @synthesize isCompactView=_isCompactView;
@property(nonatomic) BOOL isPlayback; // @synthesize isPlayback=_isPlayback;
@property(nonatomic) BOOL isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) BOOL isRecordWaveform; // @synthesize isRecordWaveform=_isRecordWaveform;
@property(nonatomic) BOOL frequentUpdatesSegmentUpdatesExpectedHint; // @synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint;
@property(nonatomic) __weak id <RCWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(retain, nonatomic) RCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_performOrDispatchToMainThread:(CDUnknownBlockType)arg1;
- (double)_timeForPixelOffset:(double)arg1;
- (double)_timeForPixelOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)_pixelOffsetForTime:(double)arg1;
- (double)_pixelsPerSecond;
- (double)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (BOOL)_currentViewportRequiresRenderingNewSegments;
- (CDStruct_73a5d3ca)_timeRangeToRenderForVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_updateCachedSegmentArray:(id)arg1 withTimeRange:(CDStruct_73a5d3ca)arg2;
- (CDStruct_73a5d3ca)_updateRenderTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_renderVisibleTimeRangeWithDuration:(double)arg1;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(CDStruct_73a5d3ca)arg2 isApproximatedWaveform:(BOOL)arg3 withDuration:(double)arg4;
- (void)_clearRenderingState;
- (void)_draw:(double)arg1;
- (void)displayLinkDidUpdate:(id)arg1 withCurrentCaptureSession:(id)arg2;
- (void)_stopRendering;
- (void)_startRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setNeedsRendering;
- (void)_stopUpdating;
- (void)_startUpdating;
- (double)_nonCachedContentWidthWithDuration:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (id)rasterizeTimeRange:(CDStruct_73a5d3ca)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)horizontalOffsetAtTime:(double)arg1;
@property(readonly, nonatomic) double contentWidth;
- (void)waveformDataSourceRequiresUpdate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
