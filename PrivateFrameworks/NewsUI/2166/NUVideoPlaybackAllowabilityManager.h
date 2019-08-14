//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackController, SVVideoPlaybackPolicy, SVVisibilityMonitoring;

@interface NUVideoPlaybackAllowabilityManager : NSObject <NUVideoPlayerEventTracker>
{
    id <SVVisibilityMonitoring> _visibilityMonitor;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoPlaybackPolicy> _playbackPolicy;
}

@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> playbackPolicy; // @synthesize playbackPolicy=_playbackPolicy;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVisibilityMonitoring> visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
- (void).cxx_destruct;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithPlayerVisibilityMonitor:(id)arg1 playbackController:(id)arg2 playbackPolicy:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

