//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSArray, NSString;

@interface AVMutableCompositionTrack : AVCompositionTrack
{
    AVMutableCompositionTrackInternal *_mutablePriv;
}

+ (BOOL)expectsPropertyRevisedNotifications;
- (void)setMetadata:(id)arg1;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3;
- (void)setAlternateGroupID:(long long)arg1;
- (long long)alternateGroupID;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode;
@property(nonatomic) int naturalTimeScale;
- (void)_setTrackReaderPropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)validateTrackSegments:(id)arg1 error:(id *)arg2;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)insertTimeRange:(CDStruct_e83c9415)arg1 ofTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
@property(copy, nonatomic) NSArray *segments;
- (void)_notifySelfThatSegmentsDidChangeWithSuccess:(BOOL)arg1;
- (void)_notifySelfThatSegmentsWillChange;
- (void)_notifyAssetThatDurationDidChangeWithSuccess:(BOOL)arg1;
- (void)_notifyAssetThatDurationWillChange;

@end

