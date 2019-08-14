//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class AVAssetImageGenerator, AVPlayerItem, AVVideoComposition, ISAsset, ISPlayerContent, NSError, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable
{
    void *_ivarQueueIdentifier;
    void *_workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    long long _ivarQueue_videoPlayerItemRequestID;
    BOOL _ivarQueue_aggressivelyCacheVideoFrames;
    BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
    BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    CDStruct_1b6d18a9 _ivarQueue_prePhotoTime;
    CDStruct_1b6d18a9 _ivarQueue_postPhotoTime;
    CDStruct_1b6d18a9 _ivarQueue_playerItemPhotoTime;
    CDStruct_1b6d18a9 _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct {
        char videoPlayerItem;
        char status;
        char content;
        char minimumClientVersion;
        char playbackStyleIdentifier;
    } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    BOOL _workQueue_isGeneratingOffsetImage;
    BOOL __loadingCancelled;
    ISAsset *_asset;
    struct CGSize _targetSize;
}

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
+ (long long)currentClientVersion;
@property(nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) ISAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (void)_assertOnWorkQueue;
- (BOOL)_isOnWorkQueue;
- (BOOL)_isOnIvarQueue;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performWork:(CDUnknownBlockType)arg1;
- (void)_performWork:(CDUnknownBlockType)arg1 sync:(BOOL)arg2;
- (void)_updateStatusIfNeeded;
- (BOOL)_isStatusVaild;
- (void)_invalidateStatus;
- (void)_updatePlayerContentIfNeeded;
- (BOOL)_isPlayerContentValid;
- (void)_invalidatePlayerContent;
- (id)_videoPlayerItem;
- (void)_setVideoPlayerItem:(id)arg1 prePhotoTime:(CDStruct_1b6d18a9)arg2 postPhotoTime:(CDStruct_1b6d18a9)arg3 videoDuration:(CDStruct_1b6d18a9)arg4;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 prePhotoTime:(CDStruct_1b6d18a9)arg3 postPhotoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 error:(id)arg6;
- (void)_updateVideoPlayerItemIfNeeded;
- (BOOL)_isVideoPlayerItemValid;
- (void)_invalidateVideoPlayerItem;
@property(retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (BOOL)_isPlaybackStyleIdentifierValid;
- (void)_invalidatePlaybackStyleIdentifier;
@property(retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
- (void)_updateMinimumClientVersionIfNeeded;
- (BOOL)_isMinimumClientVersionValid;
- (void)_invalidateMinimumClientVersion;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
@property(nonatomic, setter=_setStatus:) long long status;
@property(retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property(retain, nonatomic, setter=_setError:) NSError *error;
- (BOOL)decodesAllFramesDuringOrdinaryPlayback;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1;
@property(nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property(nonatomic) BOOL aggressivelyCacheVideoFrames;
- (void)_reloadAllContent;
- (void)resetAVObjects;
- (void)cancelLoading;
- (void)discardContentBelowLoadingTarget;
@property(nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
- (void)_cancelLoading;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(nonatomic) long long loadingTarget;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)dealloc;
- (id)init;

@end

