//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMediaFileType, NSArray, NSURL;
@protocol AVAssetWriterDataWritingDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterConfigurationState : NSObject
{
    NSURL *_URL;
    id <AVAssetWriterDataWritingDelegate> _dataWritingDelegate;
    AVMediaFileType *_mediaFileType;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    CDStruct_1b6d18a9 _overallDurationHint;
    BOOL _shouldOptimizeForNetworkUse;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    long long _singlePassFileSize;
    long long _singlePassMediaDataSize;
    NSArray *_inputs;
    NSArray *_inputGroups;
}

@property(copy, nonatomic) NSArray *inputGroups; // @synthesize inputGroups=_inputGroups;
@property(copy, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) long long singlePassMediaDataSize; // @synthesize singlePassMediaDataSize=_singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize; // @synthesize singlePassFileSize=_singlePassFileSize;
@property(nonatomic) float preferredRate; // @synthesize preferredRate=_preferredRate;
@property(nonatomic) float preferredVolume; // @synthesize preferredVolume=_preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) int movieTimeScale; // @synthesize movieTimeScale=_movieTimeScale;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint; // @synthesize overallDurationHint=_overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(copy, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property(nonatomic) __weak id <AVAssetWriterDataWritingDelegate> dataWritingDelegate; // @synthesize dataWritingDelegate=_dataWritingDelegate;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)dealloc;

@end

