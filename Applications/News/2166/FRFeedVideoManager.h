//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedVideoHeadlineTileInfoProviding-Protocol.h"
#import "SXVideoAdProviderDataSource-Protocol.h"
#import "SXVideoPlayerViewControllerDataSource-Protocol.h"
#import "SXVideoPlayerViewControllerDelegate-Protocol.h"

@class ADBannerView, NFLHeadlineTileInfo, NSString, SVVolumeProvider, SXVideoAnalyticsRouter, SXVideoPlayerViewController, SXVideoPlayerVisibilityMonitor;
@protocol FRFeedVideoAnalyticsReporterFactory, FRFeedVideoManagerDataSource, FRFeedVideoManagerDelegate, FRFeedVideoPlaybackStateReporting, FRFeedVideoVisibilityMonitoring;

@interface FRFeedVideoManager : NSObject <SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate, SXVideoAdProviderDataSource, FRFeedVideoHeadlineTileInfoProviding>
{
    SVVolumeProvider *_volumeProvider;
    SXVideoPlayerViewController *_videoPlayerViewController;
    SXVideoPlayerVisibilityMonitor *_videoPlayerVisibilityMonitor;
    SXVideoAnalyticsRouter *_analyticsRouter;
    NFLHeadlineTileInfo *_headlineTileInfo;
    id <FRFeedVideoManagerDelegate> _delegate;
    id <FRFeedVideoManagerDataSource> _dataSource;
    id <FRFeedVideoPlaybackStateReporting> _playbackStateReporter;
    id <FRFeedVideoVisibilityMonitoring> _visibilityMonitor;
    id <FRFeedVideoAnalyticsReporterFactory> _analyticsReporterFactory;
    NSString *_groupViewExposureID;
    ADBannerView *_bannerView;
}

@property(nonatomic) __weak ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *groupViewExposureID; // @synthesize groupViewExposureID=_groupViewExposureID;
@property(readonly, nonatomic) id <FRFeedVideoAnalyticsReporterFactory> analyticsReporterFactory; // @synthesize analyticsReporterFactory=_analyticsReporterFactory;
@property(readonly, nonatomic) id <FRFeedVideoVisibilityMonitoring> visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
@property(readonly, nonatomic) id <FRFeedVideoPlaybackStateReporting> playbackStateReporter; // @synthesize playbackStateReporter=_playbackStateReporter;
@property(nonatomic) __weak id <FRFeedVideoManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FRFeedVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NFLHeadlineTileInfo *headlineTileInfo; // @synthesize headlineTileInfo=_headlineTileInfo;
@property(retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // @synthesize analyticsRouter=_analyticsRouter;
@property(retain, nonatomic) SXVideoPlayerVisibilityMonitor *videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
- (void).cxx_destruct;
- (void)destroyVideoAnalyticsRouter;
- (void)setupAnalyticsRouter;
- (void)destroyVideoPlayerVisibilityMonitor;
- (void)setupVideoPlayerVisibilityMonitor;
- (BOOL)supportsAutomaticallyEnteringFullscreen;
- (void)feedLayoutFinished;
- (CDUnknownBlockType)videoAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)playbackAllowedForVideoPlayerViewController:(id)arg1;
- (BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 pausedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 initiatedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (void)destroyVideoPlayerViewController;
- (void)endDisplayOfVideoPlayerViewController;
- (void)startDisplayingVideoPlayerViewController;
- (void)setupVideoPlayerViewController;
@property(readonly, nonatomic) SVVolumeProvider *volumeProvider; // @synthesize volumeProvider=_volumeProvider;
- (void)openArticleForHeadlineTileInfo:(id)arg1;
- (BOOL)supportsInlinePlaybackForHeadlineTileInfo:(id)arg1;
- (void)setHeadlineTileInfo:(id)arg1 groupViewExposureID:(id)arg2;
- (void)stopIfShowingAd;
- (void)stop;
- (BOOL)isPresentingAdModalViewController;
- (void)pause;
- (void)playVideoForHeadlineTileInfo:(id)arg1 groupViewExposureID:(id)arg2;
- (id)initWithPlaybackStateReporter:(id)arg1 visibilityMonitor:(id)arg2 analyticsReporterFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

