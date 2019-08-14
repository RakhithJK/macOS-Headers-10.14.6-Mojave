//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer
{
    int _chunk;
    struct CGRect _region[5];
    float _score[5];
    int _maxNumRegions;
    BOOL _prune;
}

+ (id)analyzerWith:(int)arg1 prune:(BOOL)arg2;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)pruneRegions:(id)arg1;
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5;
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)saliencyDetection:(struct __CVBuffer *)arg1 salientRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)getSalientRegions:(CDUnknownBlockType)arg1;
- (int)generateSalientRegion:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3;
- (float)outputScaling;
- (float)computeScore:(float *)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5;
- (int)initializeInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)initWithImage:(float *)arg1 image:(struct __CVBuffer *)arg2 forChunk:(int)arg3;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)initializeModel:(int)arg1 srcWidth:(int)arg2;
- (id)initWithMaxNumRegions:(int)arg1 prune:(BOOL)arg2;

@end

