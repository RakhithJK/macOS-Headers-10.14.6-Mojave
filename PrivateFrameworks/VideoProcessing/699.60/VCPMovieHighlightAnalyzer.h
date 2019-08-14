//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface VCPMovieHighlightAnalyzer : NSObject
{
    NSArray *_junkResults;
    NSArray *_qualityResults;
    NSArray *_faceResults;
    NSArray *_actionResults;
    NSArray *_voiceResults;
    NSArray *_featureResults;
    NSArray *_keyFrameResults;
    NSMutableArray *_internalResults;
    NSMutableArray *_internalConstraintResults;
    BOOL _isLivePhoto;
    BOOL _verbose;
}

- (void).cxx_destruct;
- (void)mergeSimilarSegments;
- (void)mergeShortSegments;
- (float)computeVoiceScoreInTimeRange:(CDStruct_e83c9415)arg1;
- (float)computeActionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeExpressionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (void)computeHighlightScoreOfSegment:(id)arg1;
- (BOOL)addSegment:(id)arg1;
- (int)evaluateSegment:(id)arg1;
- (void)searchFeatureVectorOfSegment:(id)arg1;
- (int)pickHighlightsFrom:(id)arg1;
- (int)computeHighlightScoreWithConstraint;
- (id)pickKeyFramesInRange:(CDStruct_e83c9415)arg1;
- (void)SetKeyFramesForSegments:(id)arg1;
- (int)generateInitialSegments;
- (id)results;
- (id)movieSummary;
- (int)generateHighlights;
- (int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 actionResult:(id)arg5 voiceResult:(id)arg6 keyFrameResult:(id)arg7;
- (id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(BOOL)arg2;

@end

