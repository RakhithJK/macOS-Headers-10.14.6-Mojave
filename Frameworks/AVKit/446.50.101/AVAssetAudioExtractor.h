//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVAudioExtractor.h>

@class AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput;

@interface AVAssetAudioExtractor : AVAudioExtractor
{
    AVAssetReader *_assetReader;
    AVAssetReaderAudioMixOutput *_assetReaderOutput;
    CDStruct_e83c9415 _timeRange;
    AVAsset *_asset;
}

@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (CDStruct_1b6d18a9)duration;
- (void)dealloc;
- (id)initWithNumberOfChannels:(unsigned long long)arg1;
- (id)initWithAsset:(id)arg1 numberOfChannels:(unsigned long long)arg2;
- (id)initWithAsset:(id)arg1 numberOfChannels:(unsigned long long)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end

