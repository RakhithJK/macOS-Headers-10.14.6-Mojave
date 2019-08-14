//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGeneratorInternal, AVVideoComposition, NSString;
@protocol AVVideoCompositing;

@interface AVAssetImageGenerator : NSObject
{
    AVAssetImageGeneratorInternal *_priv;
}

+ (id)assetImageGeneratorWithAsset:(id)arg1;
- (id)_NSErrorForError:(int)arg1;
- (struct CGImage *)_copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 usingAssetReader:(id)arg2 error:(id *)arg3;
- (struct CGSize)_scaledSizeForRenderSize:(struct CGSize)arg1;
- (id)_requestWithRequestID:(id)arg1;
- (void)_serverDied;
- (void)_failedToGenerateCGImage:(id)arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (id)_optionsDictionary;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceAfter;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceBefore;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(copy, nonatomic) NSString *apertureMode;
@property(nonatomic) struct CGSize maximumSize;
@property(nonatomic) BOOL appliesPreferredTrackTransform;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGImage *)copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 actualTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (id)_makeAutoreleasedAssetReader;
- (id)_videoSettingWithSize:(struct CGSize)arg1;
- (BOOL)_ensureFigAssetImageGeneratorReturningError:(id *)arg1;
@property(readonly, nonatomic) AVAsset *asset;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

