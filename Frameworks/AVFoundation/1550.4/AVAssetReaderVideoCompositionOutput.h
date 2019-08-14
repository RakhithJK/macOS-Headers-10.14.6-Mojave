//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;
@protocol AVVideoCompositing;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_videoCompositionProcessorColorProperties;
- (id)_formatDescriptions;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (id)_asset;
- (id)mediaType;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (void)_setVideoComposition:(id)arg1;
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSArray *videoTracks;
- (id)description;
- (BOOL)alwaysCopiesSampleData;
- (void)finalize;
- (void)dealloc;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)init;

@end

