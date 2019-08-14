//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/PHLivePhotoBadgeDelegate-Protocol.h>

@class ISLivePhotoNSView, ISLivePhotoPlayer, ISPlayerItem, NSLayoutConstraint, NSLayoutGuide, NSString, PHLivePhoto, PHLivePhotoBadge;
@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : NSView <ISChangeObserver, PHLivePhotoBadgeDelegate>
{
    struct {
        char willBeginPlaybackWithStyle;
        char didEndPlayback;
        char didChangeVideoPlayer;
    } _delegateRespondsTo;
    struct {
        char respondsToDidEndPlayingVitality;
    } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
    BOOL _muted;
    BOOL __playingVitality;
    BOOL __playbackRequested;
    BOOL _showsStatusBorder;
    float _audioVolume;
    id <PHLivePhotoViewDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    long long _contentMode;
    ISPlayerItem *__playerItem;
    NSLayoutGuide *__livePhotoContentFrameLayoutGuide;
    NSLayoutConstraint *__layoutGuideAspectRatioConstraint;
    long long _targetReadiness;
    PHLivePhotoBadge *_livePhotoBadge;
    ISLivePhotoNSView *_playerView;
    ISLivePhotoPlayer *_player;
    NSView *_photoView;
    struct CGPoint _scaleAnchorOffset;
}

@property(nonatomic) struct CGPoint scaleAnchorOffset; // @synthesize scaleAnchorOffset=_scaleAnchorOffset;
@property(retain, nonatomic) NSView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) BOOL showsStatusBorder; // @synthesize showsStatusBorder=_showsStatusBorder;
@property(readonly, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) ISLivePhotoNSView *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) PHLivePhotoBadge *livePhotoBadge; // @synthesize livePhotoBadge=_livePhotoBadge;
@property(nonatomic) long long targetReadiness; // @synthesize targetReadiness=_targetReadiness;
@property(nonatomic, setter=_setPlaybackRequested:) BOOL _playbackRequested; // @synthesize _playbackRequested=__playbackRequested;
@property(nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(retain, nonatomic) NSLayoutConstraint *_layoutGuideAspectRatioConstraint; // @synthesize _layoutGuideAspectRatioConstraint=__layoutGuideAspectRatioConstraint;
@property(retain, nonatomic) NSLayoutGuide *_livePhotoContentFrameLayoutGuide; // @synthesize _livePhotoContentFrameLayoutGuide=__livePhotoContentFrameLayoutGuide;
@property(nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) __weak id <PHLivePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1 onBadgeView:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleVideoPlayerChange;
- (void)_updatePlayerTargetReadiness;
- (void)_handlePlaybackStyleChange;
@property(readonly, nonatomic) long long currentPlaybackStyle;
- (void)_updateCurrentPlaybackStyle;
- (void)_updateStatusBorder;
- (void)_updatePlayerAudioVolume;
- (void)_updatePlayerAudioEnabled;
- (void)stopPlayback;
- (void)stopPlaybackAnimated:(BOOL)arg1;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)setPlayer:(id)arg1;
@property(readonly, nonatomic) NSView *livePhotoBadgeView;
- (void)_commonPHLivePhotoViewInitialization;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 videoAsset:(id)arg2;
- (id)initWithLivePhotoURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

