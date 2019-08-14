//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemInternal, NSArray, NSDate, NSError, NSString;

@interface AVPlayerItem : NSObject <NSCopying>
{
    AVPlayerItemInternal *_playerItem;
}

+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfVariantIndex;
+ (BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer *)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned int)arg4 playbackItem:(struct OpaqueFigPlaybackItem **)arg5;
+ (BOOL)_hasOverrideForSelector:(SEL)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithURL:(id)arg1;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (long long)propertyStorageCachePolicy;
+ (void)initialize;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1;
- (id)videoApertureMode;
- (void)setVideoApertureMode:(id)arg1;
- (void)_updateVideoApertureModeOnFigPlaybackItem;
- (BOOL)suppressesAudioOnlyVariants;
- (void)setSuppressesAudioOnlyVariants:(BOOL)arg1;
- (void)setRequiresAccessLog:(BOOL)arg1;
- (BOOL)requiresAccessLog;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (void)setPreferredMaximumResolution:(struct CGSize)arg1;
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
- (struct CGSize)preferredMaximumResolution;
- (void)setPreferredPeakPresentationSize:(struct CGSize)arg1;
- (struct CGSize)preferredPeakPresentationSize;
- (void)setMaximumBitRate:(float)arg1;
- (float)maximumBitRate;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;
- (double)preferredPeakBitRate;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize)arg1;
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
- (struct CGSize)IFramePrefetchTargetDimensions;
- (void)setAllowProgressiveResume:(BOOL)arg1;
- (BOOL)allowProgressiveResume;
- (void)setAllowProgressiveStartup:(BOOL)arg1;
- (BOOL)allowProgressiveStartup;
- (void)setAllowProgressiveSwitchUp:(BOOL)arg1;
- (BOOL)allowProgressiveSwitchUp;
- (void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1;
- (BOOL)networkUsuallyExceedsMaxBitRate;
- (BOOL)_hasEnqueuedVideoFrame;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_setSuppressesVideoLayers:(BOOL)arg1;
- (BOOL)_suppressesVideoLayers;
- (BOOL)_suppressionForOutputs:(id)arg1;
- (BOOL)hasEnabledAudio;
- (BOOL)_hasEnabledAudio;
- (BOOL)hasVideo;
- (BOOL)hasEnabledVideo;
- (BOOL)_hasEnabledVideo;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (id)timedMetadata;
- (struct OpaqueFigCPEProtector *)_figCPEProtector;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (BOOL)_isNonForcedSubtitleDisplayEnabled;
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
- (id)currentMediaSelection;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_applyMediaSelectionOptions;
- (void)_markAsReadyForInspectionOfMediaSelectionOptions;
- (BOOL)_isReadyForInspectionOfMediaSelectionOptions;
- (void)_removeMediaOptionsSelectedByClient;
- (void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2;
- (id)_mediaOptionsSelectedByClientForKey:(id)arg1;
- (id)_mediaOptionsSelectedByClient;
- (void)setVariantIndex:(long long)arg1;
- (void)_quietlySetVariantIndex:(long long)arg1;
- (double)liveUpdateInterval;
- (long long)variantIndex;
- (void)setGaplessInfo:(id)arg1;
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;
- (id)_playbackProperties;
- (id)gaplessInfo;
- (id)loadedTimeRanges;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (double)seekableTimeRangesLastModifiedTime;
- (id)seekableTimeRanges;
- (id)_seekableTimeRanges;
- (void)setLoopTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)loopTimeRange;
- (void)_updateLoopTimeRangeOnFigPlaybackItem;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (id)playabilityMetrics;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1;
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
- (BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferEmpty;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackLikelyToKeepUp;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
- (id)audioTimePitchAlgorithm;
- (void)setTextStyleRules:(id)arg1;
- (void)_updateTextStyleRulesOnFigPlaybackItem;
- (id)textStyleRules;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)arg1;
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
- (BOOL)usesMinimalLatencyForVideoCompositionRendering;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1;
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (id)customVideoCompositor;
- (void)_setVideoCompositor:(void *)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionColorTransferFunction:(id)arg1;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)arg1;
- (void)_setVideoCompositionColorPrimaries:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize)arg1;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1;
- (void)_setVideoCompositionFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (void)setAudioMix:(id)arg1;
- (void)_applyCurrentAudioMix;
- (void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrackID:(int)arg2;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (id)audioMix;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
- (BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
- (float)speedThresholdForIFrameOnlyPlayback;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
- (BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
- (CDStruct_1b6d18a9)minimumIntervalForIFrameOnlyPlayback;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1;
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1;
- (BOOL)savesDownloadedDataToDiskWhenDone;
- (void)setWillNeverSeekBackwardsHint:(BOOL)arg1;
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
- (BOOL)willNeverSeekBackwardsHint;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
- (long long)playbackLikelyToKeepUpTrigger;
- (void)setAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
- (BOOL)alwaysMonitorsPlayability;
- (void)setShouldOptimizeForExclusivePlayback:(BOOL)arg1;
- (void)_updateShouldOptimizeForExclusivePlaybackOnFigPlaybackItem;
- (BOOL)shouldOptimizeForExclusivePlayback;
- (void)setMaximumForwardBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
- (CDStruct_1b6d18a9)maximumForwardBufferDuration;
- (void)setMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
- (CDStruct_1b6d18a9)maximumTrailingBufferDuration;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (double)preferredForwardBufferDuration;
- (void)setAllowsExtendedReadAhead:(BOOL)arg1;
- (BOOL)allowsExtendedReadAhead;
- (void)_updateLimitReadAheadOnFigPlaybackItem;
- (unsigned int)RTCReportingFlags;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;
- (void)_updateTimebase;
- (struct OpaqueCMTimebase *)timebase;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (struct OpaqueCMTimebase *)_copyProxyTimebase;
- (struct OpaqueCMTimebase *)_copyLoopingTimebase;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1;
- (void)_quietlySetDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1;
- (BOOL)decodesAllFramesDuringOrdinaryPlayback;
- (void)setAggressivelyCachesVideoFrames:(BOOL)arg1;
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
- (BOOL)aggressivelyCachesVideoFramesWasSet;
- (BOOL)aggressivelyCachesVideoFrames;
- (void)setReversesMoreVideoFramesInMemory:(BOOL)arg1;
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
- (BOOL)reversesMoreVideoFramesInMemoryWasSet;
- (BOOL)reversesMoreVideoFramesInMemory;
- (void)setBlendsVideoFrames:(BOOL)arg1;
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;
- (BOOL)blendsVideoFramesWasSet;
- (BOOL)blendsVideoFrames;
- (void)setImageQueueInterpolationCurve:(id)arg1;
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
- (BOOL)imageQueueInterpolationCurveWasSet;
- (id)imageQueueInterpolationCurve;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (void)stepByCount:(long long)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (id)initialEstimatedDate;
- (id)currentEstimatedDate;
- (void)setInitialDate:(id)arg1;
- (id)initialDate;
- (BOOL)seekToDate:(id)arg1;
- (BOOL)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentDate;
- (void)cancelPendingSeeks;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_CreateSeekID;
- (CDStruct_1b6d18a9)currentTime;
- (struct CGSize)presentationSize;
- (struct CGSize)_presentationSize;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (BOOL)_isReadyForInspectionOfPresentationSize;
- (BOOL)canStepBackward;
- (BOOL)_canStepBackward;
- (BOOL)canStepForward;
- (BOOL)_canStepForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlayReverse;
- (BOOL)_canPlayReverse;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (BOOL)canPlayFastReverse;
- (BOOL)_canPlayFastReverse;
- (BOOL)canPlayFastForward;
- (BOOL)_canPlayFastForward;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)_markAsReadyForBasicInspection;
- (BOOL)_isReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_removeLoopingTBListeners;
- (void)_addLoopingTBListeners;
- (void)_removeFAListeners;
- (void)_addFAListeners;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (id)_enabledTrackFormatDescriptions;
- (id)_trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)_tracks;
- (void)_markAsReadyForInspectionOfTracks;
- (BOOL)_isReadyForInspectionOfTracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_cachedTracks;
- (id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)_duration;
- (void)_markAsReadyForInspectionOfDuration;
- (BOOL)_isReadyForInspectionOfDuration;
- (id)automaticallyLoadedAssetKeys;
- (id)asset;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_informObserversAboutAvailabilityOfDuration:(CDStruct_1b6d18a9)arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setURL:(id)arg1;
- (id)_URL;
- (void)_removeFromItems;
- (void)_insertAfterItem:(id)arg1;
- (id)_previousItem;
- (id)_nextItem;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (id)_playerConnection;
- (id)_player;
- (void)_configurePlaybackItem;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)valueForKeyForKVO:(id)arg1;
- (void)_playerDidAccessCurrentItemKeypaths;
- (void)_playerWillAccessCurrentItemKeypaths;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (BOOL)_getCachedNonForcedSubtitleEnabled:(char *)arg1;
- (BOOL)_getCachedPresentationSize:(struct CGSize *)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;
- (id)_copyStateDispatchQueue;
- (id)_weakReference;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_nameForLogging;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
@property(readonly, nonatomic) long long contentAuthorizationRequestStatus;
- (void)cancelContentAuthorizationRequest;
- (void)requestContentAuthorizationAsynchronouslyWithTimeoutInterval:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic, getter=_isRental) BOOL _rental;
- (void)_setApplicationAuthorizationChallengeResponse:(id)arg1;
- (id)_applicationAuthorizationChallenge;
@property(readonly, nonatomic) NSString *_applicationAuthorizationChallengeProvider;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (id)errorLog;
- (id)accessLog;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (id)_preferredPixelBufferAttributes;
- (void)_configureVideoCompositionColorProperties;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateVideoOutputs;
- (id)_metadataOutputsForKeys;
- (id)_legibleOutputsForKeys;
- (id)_videoOutputs;
- (void)_updateTaggedMetadataArray:(id)arg1;
- (id)_metadataCollectors;
@property(readonly, nonatomic) NSArray *mediaDataCollectors;
- (void)removeMediaDataCollector:(id)arg1;
- (void)addMediaDataCollector:(id)arg1;
- (void)_removeMetadataCollector:(id)arg1;
- (void)_addMetadataCollector:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (id)_legibleOutputForKey:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (id)_metadataOutputForKey:(id)arg1;
- (void)setVideoEnhancementMode:(id)arg1;
- (void)_updateVideoEnhancementModeOnFigPlaybackItem;
- (id)videoEnhancementMode;

@end

