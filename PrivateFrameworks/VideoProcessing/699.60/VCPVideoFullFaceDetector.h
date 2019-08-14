//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoFaceDetector.h>

@class NSArray, NSMutableArray, NSMutableDictionary, VCPCNNPoseEstimator, VCPCNNSmileDetector, VCPFrameAnalysisStats;

@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector
{
    int _latestTrackID;
    VCPCNNSmileDetector *_smileDetector;
    VCPCNNPoseEstimator *_poseEstimator;
    NSArray *_existingFaceprints;
    VCPFrameAnalysisStats *_frameStats;
    NSMutableDictionary *_faceTrackers;
    NSMutableDictionary *_keyFaces;
    NSMutableArray *_reservedIDs;
    NSMutableDictionary *_facePrints;
    NSMutableArray *_allFaces;
    NSMutableDictionary *_faceRanges;
    NSMutableArray *_frameFaceResults;
}

- (void).cxx_destruct;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)updateWithExistingFaces;
- (int)clusterFaces;
- (id)frameFaceResults;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)detectTrackFacesInFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 faces:(id)arg3;
- (BOOL)locationChange:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(BOOL)arg3;
- (BOOL)compareFace:(id)arg1 withFace:(id)arg2;
- (void)removeSmallestKeyFace;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;
- (void)dealloc;
- (id)initWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (id)faceRanges;

@end

