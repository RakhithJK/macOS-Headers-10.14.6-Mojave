//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSString;

@interface AVAsset (MGAdditions)
- (BOOL)mg_hasVideoWithPQTransferFunction;
- (BOOL)mg_isProResRAW;
- (BOOL)mg_isDecodable;
- (BOOL)valuesForKeysAreFinishedLoading:(id)arg1;
@property(readonly) struct CGSize scaleFactors;
@property(readonly) float mainVideoTrackNominalFrameRate;
@property(readonly) struct CGAffineTransform mainVideoTrackPreferredTransform;
@property(readonly) struct CGSize mainVideoTrackPreferredSize;
@property(readonly) struct CGSize mainVideoTrackNaturalSize;
@property(readonly) AVAssetTrack *mainAudioTrack;
@property(readonly) AVAssetTrack *mainVideoTrack;
@property(readonly) NSString *localizedDisplayName;
- (BOOL)canPassthroughExport;
@end

