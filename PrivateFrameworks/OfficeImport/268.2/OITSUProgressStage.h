//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUProgressContext;

@interface OITSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage *m_parentStage;
    OITSUProgressContext *m_context;
}

- (id)description;
- (void)setNextSubStageParentSize:(double)arg1;
- (double)nextSubStageParentSize;
- (double)overallProgress;
- (double)currentPosition;
- (id)parentStage;
- (void)end;
- (void)setProgressPercentage:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)dealloc;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (id)initRootStageInContext:(id)arg1;

@end

