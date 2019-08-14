//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVVideoComposition, NSMutableArray;
@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject
{
    struct {
        char registeredPlayer;
    } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    BOOL _loopsVideo;
    BOOL _muted;
    AVPlayer *_player;
    double _updateInterval;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    id <NUAVPlayerControllerDelegate> _delegate;
}

@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL loopsVideo; // @synthesize loopsVideo=_loopsVideo;
@property(nonatomic) __weak id <NUAVPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_addPlayerItemKVO:(id)arg1;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_addPlayerKVO;
- (void)_removePlayerKVO;
- (void)_setRate:(float)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekBack;
- (void)seekForward;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAudioMix:(id)arg1;
- (void)updateVideoComposition:(id)arg1;
- (BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4;
- (void)dealloc;
- (id)init;

@end

