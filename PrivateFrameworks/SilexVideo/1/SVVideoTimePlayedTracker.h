//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimePlayedTracking-Protocol.h>

@class NSString;
@protocol SVVideoPeriodicTimeObserving, SVVideoPlaybackStateObserving, SVVideoTimeJumpObserving, SVVideoTimeProviding;

@interface SVVideoTimePlayedTracker : NSObject <SVVideoTimePlayedTracking>
{
    CDUnknownBlockType changeBlock;
    id <SVVideoPeriodicTimeObserving> _timeObserver;
    id <SVVideoTimeProviding> _timeProvider;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVVideoTimeJumpObserving> _timeJumpObserver;
    double _timePlayed;
}

@property(nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(readonly, nonatomic) id <SVVideoTimeJumpObserving> timeJumpObserver; // @synthesize timeJumpObserver=_timeJumpObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(readonly, nonatomic) id <SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) id <SVVideoPeriodicTimeObserving> timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void).cxx_destruct;
- (id)initWithTimeObserver:(id)arg1 timeProvider:(id)arg2 playbackStateObserver:(id)arg3 timeJumpObserver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

