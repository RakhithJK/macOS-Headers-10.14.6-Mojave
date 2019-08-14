//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ETModelDefMLP, ETTaskClassifier;

@interface _PFLModelTrainer : NSObject
{
    ETTaskClassifier *_task;
    ETModelDefMLP *_mlp;
    unsigned long long _imageCount;
}

+ (unsigned long long)countSubDirectoryInDirectory:(id)arg1;
+ (unsigned long long)countFilesInDirectory:(id)arg1;
@property unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(retain) ETModelDefMLP *mlp; // @synthesize mlp=_mlp;
@property(retain) ETTaskClassifier *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)updateLayerNamed:(id)arg1 withWeights:(float *)arg2 weightCount:(unsigned long long)arg3 andBiases:(float *)arg4 biasCount:(unsigned long long)arg5;
- (BOOL)copyWeightsAndBiasesForLayerNamed:(id)arg1 combinedWeightBiasesOut:(float **)arg2 weightCountOut:(unsigned int *)arg3 biasCountOut:(unsigned int *)arg4;
- (id)sdpWithInitVector:(id)arg1 currentVector:(id)arg2 gamma:(double)arg3 nu:(double)arg4;
- (id)sdpWithInitWeights:(id)arg1 currentWeights:(id)arg2 initBiases:(id)arg3 currentBiases:(id)arg4 diffOnly:(BOOL)arg5 gamma:(double)arg6 nu:(double)arg7;
- (void)trainNumberModel:(id)arg1 epoch:(unsigned long long)arg2 dataSource:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)trainImageModel:(id)arg1 epoch:(unsigned long long)arg2 imageDirectory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

