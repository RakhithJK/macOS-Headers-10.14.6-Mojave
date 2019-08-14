//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVAssetReaderOutputAdaptor-Protocol.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor>
{
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;
- (id)nextTimedMetadataGroup;
@property(readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;
- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader *)arg2 options:(id)arg3 withOutputExtactionID:(int *)arg4;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)init;

@end

