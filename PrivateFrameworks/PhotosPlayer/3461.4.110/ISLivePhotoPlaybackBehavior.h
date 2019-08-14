//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoPlaybackBehaviorDelegate;

@interface ISLivePhotoPlaybackBehavior : ISBehavior
{
    struct {
        char respondsToDidFinish;
        char respondsToDidBeginPlaying;
    } _delegateFlags;
    BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
    BOOL __videoReadyToPlay;
    BOOL __preparing;
    double _photoTransitionDuration;
    long long __currentPlaybackID;
    long long __readyToPlayPlaybackID;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL _preparing; // @synthesize _preparing=__preparing;
@property(nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) BOOL _videoReadyToPlay; // @synthesize _videoReadyToPlay=__videoReadyToPlay;
@property(nonatomic, setter=_setReadyToPlayPlaybackID:) long long _readyToPlayPlaybackID; // @synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID;
@property(nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID; // @synthesize _currentPlaybackID=__currentPlaybackID;
@property(readonly, nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds; // @synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackTimeRange; // @synthesize playbackTimeRange=_playbackTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
- (void)_showVideoWithPlaybackID:(long long)arg1;
- (void)_transitionToVideoWithPlaybackID:(long long)arg1;
- (void)_startPlaybackWithPlaybackID:(long long)arg1;
- (void)_didFinishPreparing;
- (void)_handleDidFinishPreroll;
- (void)_prerollWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleDidSeekToBeginning;
- (void)_prepareVideoForPlaybackIfNeeded;
- (void)startPlayback;
- (void)activeDidChange;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToEnd;
- (long long)behaviorType;
@property(nonatomic) __weak id <ISLivePhotoPlaybackBehaviorDelegate> delegate; // @dynamic delegate;
- (id)initWithInitialLayoutInfo:(id)arg1 keyTime:(CDStruct_1b6d18a9)arg2 playbackTimeRange:(CDStruct_e83c9415)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg5;

@end

